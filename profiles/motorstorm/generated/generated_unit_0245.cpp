#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0245[1022] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0,
    0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33,
    0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 65, 0,
    66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0,
    0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0,
    101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0,
    0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 143, 0, 0, 144, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    150, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174,
};
void recomp_unit_0245_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088F9000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0245[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F9000;
    case 2u: goto L_088F900C;
    case 3u: goto L_088F9028;
    case 4u: goto L_088F9038;
    case 5u: goto L_088F9070;
    case 6u: goto L_088F908C;
    case 7u: goto L_088F90B8;
    case 8u: goto L_088F90CC;
    case 9u: goto L_088F90D4;
    case 10u: goto L_088F90E4;
    case 11u: goto L_088F90F4;
    case 12u: goto L_088F9110;
    case 13u: goto L_088F912C;
    case 14u: goto L_088F9144;
    case 15u: goto L_088F9154;
    case 16u: goto L_088F916C;
    case 17u: goto L_088F917C;
    case 18u: goto L_088F9198;
    case 19u: goto L_088F91A0;
    case 20u: goto L_088F91B8;
    case 21u: goto L_088F91C0;
    case 22u: goto L_088F91E8;
    case 23u: goto L_088F91F4;
    case 24u: goto L_088F9204;
    case 25u: goto L_088F9214;
    case 26u: goto L_088F9220;
    case 27u: goto L_088F9230;
    case 28u: goto L_088F923C;
    case 29u: goto L_088F924C;
    case 30u: goto L_088F925C;
    case 31u: goto L_088F926C;
    case 32u: goto L_088F9274;
    case 33u: goto L_088F927C;
    case 34u: goto L_088F928C;
    case 35u: goto L_088F92A0;
    case 36u: goto L_088F92A8;
    case 37u: goto L_088F92BC;
    case 38u: goto L_088F92D4;
    case 39u: goto L_088F92E0;
    case 40u: goto L_088F92F0;
    case 41u: goto L_088F92F8;
    case 42u: goto L_088F9310;
    case 43u: goto L_088F9328;
    case 44u: goto L_088F9338;
    case 45u: goto L_088F9340;
    case 46u: goto L_088F937C;
    case 47u: goto L_088F93C0;
    case 48u: goto L_088F93D0;
    case 49u: goto L_088F93EC;
    case 50u: goto L_088F93F8;
    case 51u: goto L_088F9404;
    case 52u: goto L_088F941C;
    case 53u: goto L_088F9424;
    case 54u: goto L_088F942C;
    case 55u: goto L_088F9434;
    case 56u: goto L_088F943C;
    case 57u: goto L_088F9440;
    case 58u: goto L_088F9458;
    case 59u: goto L_088F9460;
    case 60u: goto L_088F948C;
    case 61u: goto L_088F94D0;
    case 62u: goto L_088F94D8;
    case 63u: goto L_088F94E8;
    case 64u: goto L_088F94F0;
    case 65u: goto L_088F94F8;
    case 66u: goto L_088F9500;
    case 67u: goto L_088F950C;
    case 68u: goto L_088F9534;
    case 69u: goto L_088F9540;
    case 70u: goto L_088F9560;
    case 71u: goto L_088F9574;
    case 72u: goto L_088F957C;
    case 73u: goto L_088F9584;
    case 74u: goto L_088F95A8;
    case 75u: goto L_088F9614;
    case 76u: goto L_088F9628;
    case 77u: goto L_088F9644;
    case 78u: goto L_088F9654;
    case 79u: goto L_088F965C;
    case 80u: goto L_088F966C;
    case 81u: goto L_088F9690;
    case 82u: goto L_088F969C;
    case 83u: goto L_088F96B8;
    case 84u: goto L_088F96BC;
    case 85u: goto L_088F96CC;
    case 86u: goto L_088F96DC;
    case 87u: goto L_088F96E4;
    case 88u: goto L_088F96F4;
    case 89u: goto L_088F96FC;
    case 90u: goto L_088F9710;
    case 91u: goto L_088F9728;
    case 92u: goto L_088F9730;
    case 93u: goto L_088F973C;
    case 94u: goto L_088F9754;
    case 95u: goto L_088F976C;
    case 96u: goto L_088F9774;
    case 97u: goto L_088F9790;
    case 98u: goto L_088F97A8;
    case 99u: goto L_088F97E4;
    case 100u: goto L_088F97F4;
    case 101u: goto L_088F9800;
    case 102u: goto L_088F9808;
    case 103u: goto L_088F9820;
    case 104u: goto L_088F9838;
    case 105u: goto L_088F9858;
    case 106u: goto L_088F9864;
    case 107u: goto L_088F986C;
    case 108u: goto L_088F9878;
    case 109u: goto L_088F9888;
    case 110u: goto L_088F9898;
    case 111u: goto L_088F98AC;
    case 112u: goto L_088F98BC;
    case 113u: goto L_088F98C8;
    case 114u: goto L_088F98FC;
    case 115u: goto L_088F994C;
    case 116u: goto L_088F997C;
    case 117u: goto L_088F99B8;
    case 118u: goto L_088F99E8;
    case 119u: goto L_088F9A1C;
    case 120u: goto L_088F9A44;
    case 121u: goto L_088F9A54;
    case 122u: goto L_088F9A60;
    case 123u: goto L_088F9A90;
    case 124u: goto L_088F9ADC;
    case 125u: goto L_088F9AF4;
    case 126u: goto L_088F9B14;
    case 127u: goto L_088F9B24;
    case 128u: goto L_088F9B30;
    case 129u: goto L_088F9B50;
    case 130u: goto L_088F9B6C;
    case 131u: goto L_088F9B84;
    case 132u: goto L_088F9B8C;
    case 133u: goto L_088F9B9C;
    case 134u: goto L_088F9BA4;
    case 135u: goto L_088F9BC4;
    case 136u: goto L_088F9BD8;
    case 137u: goto L_088F9C38;
    case 138u: goto L_088F9C48;
    case 139u: goto L_088F9C88;
    case 140u: goto L_088F9CB0;
    case 141u: goto L_088F9CC4;
    case 142u: goto L_088F9D08;
    case 143u: goto L_088F9D14;
    case 144u: goto L_088F9D20;
    case 145u: goto L_088F9D24;
    case 146u: goto L_088F9D30;
    case 147u: goto L_088F9D4C;
    case 148u: goto L_088F9D50;
    case 149u: goto L_088F9D70;
    case 150u: goto L_088F9D80;
    case 151u: goto L_088F9D84;
    case 152u: goto L_088F9D9C;
    case 153u: goto L_088F9DA8;
    case 154u: goto L_088F9DC8;
    case 155u: goto L_088F9DEC;
    case 156u: goto L_088F9E00;
    case 157u: goto L_088F9E0C;
    case 158u: goto L_088F9E28;
    case 159u: goto L_088F9E4C;
    case 160u: goto L_088F9E90;
    case 161u: goto L_088F9F08;
    case 162u: goto L_088F9F0C;
    case 163u: goto L_088F9F1C;
    case 164u: goto L_088F9F3C;
    case 165u: goto L_088F9F54;
    case 166u: goto L_088F9F5C;
    case 167u: goto L_088F9F68;
    case 168u: goto L_088F9F78;
    case 169u: goto L_088F9F80;
    case 170u: goto L_088F9FA4;
    case 171u: goto L_088F9FB4;
    case 172u: goto L_088F9FD0;
    case 173u: goto L_088F9FD8;
    case 174u: goto L_088F9FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F9000:
    aot_gpr[18] = (aot_gpr[18] & 255u);
    aot_gpr[31] = (0x088F900Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 89u, 0x088CF6B8u>(ctx, &aot_mem) && ctx.pc == 0x088F900Cu) goto L_088F900C;
    return;
L_088F900C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F9028u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0244_entry, 244u, 59u, 0x088F875Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9028u) goto L_088F9028;
    return;
L_088F9028:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088F9038u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 30u, 0x088EC298u>(ctx, &aot_mem) && ctx.pc == 0x088F9038u) goto L_088F9038;
    return;
L_088F9038:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(224);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[4]);
    aot_gpr[31] = (0x088F9070u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 27u, 0x088EC22Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9070u) goto L_088F9070;
    return;
L_088F9070:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088F908Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0236_entry, 236u, 163u, 0x088F0FF8u>(ctx, &aot_mem) && ctx.pc == 0x088F908Cu) goto L_088F908C;
    return;
L_088F908C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1256)));
    aot_gpr[4] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1824), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1828), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1960)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1964)));
    aot_gpr[31] = (0x088F90B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 44u, 0x088EE474u>(ctx, &aot_mem) && ctx.pc == 0x088F90B8u) goto L_088F90B8;
    return;
L_088F90B8:
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[28] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F90D4;
      }
      goto L_088F90CC;
    }
L_088F90CC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088F90E4;
      }
      goto L_088F90D4;
    }
L_088F90D4:
    ctx.set_fpu_condition((aot_fpr[28] < aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[28] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088F90E4;
    }
    goto L_088F90E4;
L_088F90E4:
    ctx.set_fpu_condition((aot_fpr[28] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16248u << 16u);
      if (branch_taken) {
          goto L_088F9110;
      }
      goto L_088F90F4;
    }
L_088F90F4:
    aot_gpr[4] = (aot_gpr[4] | 20972u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[28]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088F9144;
      }
      goto L_088F9110;
    }
L_088F9110:
    aot_gpr[4] = (48163u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[28] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16168u << 16u);
      if (branch_taken) {
          goto L_088F9144;
      }
      goto L_088F912C;
    }
L_088F912C:
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[28]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[26];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[22] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[22] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    goto L_088F9144;
L_088F9144:
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x088F9154u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 24u, 0x088842F0u>(ctx, &aot_mem) && ctx.pc == 0x088F9154u) goto L_088F9154;
    return;
L_088F9154:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F927C;
      }
      goto L_088F916C;
    }
L_088F916C:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[28]) || std::isnan(aot_fpr[20])) && aot_fpr[28] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F927C;
      }
      goto L_088F917C;
    }
L_088F917C:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088F91A0;
      }
      goto L_088F9198;
    }
L_088F9198:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088F91B8;
      }
      goto L_088F91A0;
    }
L_088F91A0:
    aot_gpr[4] = (49024u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
        goto L_088F91B8;
    }
    goto L_088F91B8;
L_088F91B8:
    aot_gpr[31] = (0x088F91C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 105u, 0x08A2F768u>(ctx, &aot_mem) && ctx.pc == 0x088F91C0u) goto L_088F91C0;
    return;
L_088F91C0:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6932)));
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F91F4;
      }
      goto L_088F91E8;
    }
L_088F91E8:
    aot_fpr[12] = aot_fpr[26] - aot_fpr[26];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088F927C;
      }
      goto L_088F91F4;
    }
L_088F91F4:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F9220;
      }
      goto L_088F9204;
    }
L_088F9204:
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F9220;
      }
      goto L_088F9214;
    }
L_088F9214:
    aot_fpr[12] = aot_fpr[26] - aot_fpr[20];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088F927C;
      }
      goto L_088F9220;
    }
L_088F9220:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F923C;
      }
      goto L_088F9230;
    }
L_088F9230:
    aot_fpr[12] = aot_fpr[26] - aot_fpr[20];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088F927C;
      }
      goto L_088F923C;
    }
L_088F923C:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[20])) && aot_fpr[13] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F925C;
      }
      goto L_088F924C;
    }
L_088F924C:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = aot_fpr[26] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088F927C;
      }
      goto L_088F925C;
    }
L_088F925C:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F926C;
    }
L_088F926C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
      if (branch_taken) {
          goto L_088F9274;
      }
      goto L_088F9274;
    }
L_088F9274:
    aot_fpr[12] = aot_fpr[26] - aot_fpr[20];
    { const float fs = aot_fpr[24]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    goto L_088F927C;
L_088F927C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[31] = (0x088F928Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 24u, 0x088842F0u>(ctx, &aot_mem) && ctx.pc == 0x088F928Cu) goto L_088F928C;
    return;
L_088F928C:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(256);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { const bool branch_taken = aot_gpr[17] == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088F92D4;
      }
      goto L_088F92A0;
    }
L_088F92A0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F92D4;
      }
      goto L_088F92A8;
    }
L_088F92A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088F92BCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0244_entry, 244u, 65u, 0x088F88D4u>(ctx, &aot_mem) && ctx.pc == 0x088F92BCu) goto L_088F92BC;
    return;
L_088F92BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088F92D4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0244_entry, 244u, 106u, 0x088F8CACu>(ctx, &aot_mem) && ctx.pc == 0x088F92D4u) goto L_088F92D4;
    return;
L_088F92D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2060)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F92F0;
      }
      goto L_088F92E0;
    }
L_088F92E0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F92F0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 60u, 0x088EC56Cu>(ctx, &aot_mem) && ctx.pc == 0x088F92F0u) goto L_088F92F0;
    return;
L_088F92F0:
    aot_gpr[31] = (0x088F92F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 141u, 0x088E9D94u>(ctx, &aot_mem) && ctx.pc == 0x088F92F8u) goto L_088F92F8;
    return;
L_088F92F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3020)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088F9310u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9310u) goto L_088F9310;
    return;
L_088F9310:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088F9328u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 167u, 0x0894BC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9328u) goto L_088F9328;
    return;
L_088F9328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088F9338u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 169u, 0x0894BC58u>(ctx, &aot_mem) && ctx.pc == 0x088F9338u) goto L_088F9338;
    return;
L_088F9338:
    aot_gpr[31] = (0x088F9340u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0236_entry, 236u, 75u, 0x088F06DCu>(ctx, &aot_mem) && ctx.pc == 0x088F9340u) goto L_088F9340;
    return;
L_088F9340:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F937C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2996)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(452)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    if (!ctx.fpu_condition()) {
    aot_gpr[18] = (0u | 1u);
        goto L_088F93C0;
    }
    goto L_088F93C0;
L_088F93C0:
    aot_gpr[18] = (aot_gpr[18] & 255u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x088F93D0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 18u, 0x088FC160u>(ctx, &aot_mem) && ctx.pc == 0x088F93D0u) goto L_088F93D0;
    return;
L_088F93D0:
    aot_gpr[4] = (16040u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 62915u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[17] = (0u | 1u);
        goto L_088F93EC;
    }
    goto L_088F93EC;
L_088F93EC:
    aot_gpr[20] = (aot_gpr[17] & 255u);
    aot_gpr[31] = (0x088F93F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 16u, 0x088EB220u>(ctx, &aot_mem) && ctx.pc == 0x088F93F8u) goto L_088F93F8;
    return;
L_088F93F8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088F9404u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0231_entry, 231u, 44u, 0x088EB4A4u>(ctx, &aot_mem) && ctx.pc == 0x088F9404u) goto L_088F9404;
    return;
L_088F9404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 4u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F9440;
      }
      goto L_088F941C;
    }
L_088F941C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F9440;
      }
      goto L_088F9424;
    }
L_088F9424:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F9440;
      }
      goto L_088F942C;
    }
L_088F942C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F9440;
      }
      goto L_088F9434;
    }
L_088F9434:
    aot_gpr[31] = (0x088F943Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 121u, 0x088ECBA4u>(ctx, &aot_mem) && ctx.pc == 0x088F943Cu) goto L_088F943C;
    return;
L_088F943C:
    aot_gpr[17] = (0u | 1u);
    goto L_088F9440;
L_088F9440:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F94D0;
      }
      goto L_088F9458;
    }
L_088F9458:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F94D0;
      }
      goto L_088F9460;
    }
L_088F9460:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (15395u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55051u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088F94D0;
      }
      goto L_088F948C;
    }
L_088F948C:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[17] = (0u | 1u);
    goto L_088F94D0;
L_088F94D0:
    aot_gpr[31] = (0x088F94D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 139u, 0x088ECDECu>(ctx, &aot_mem) && ctx.pc == 0x088F94D8u) goto L_088F94D8;
    return;
L_088F94D8:
    ctx.set_fpu_condition((aot_fpr[0] <= aot_fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088F950C;
    }
    goto L_088F94E8;
L_088F94E8:
    if (aot_gpr[18] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088F950C;
    }
    goto L_088F94F0;
L_088F94F0:
    if (aot_gpr[20] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
        goto L_088F950C;
    }
    goto L_088F94F8;
L_088F94F8:
    aot_gpr[31] = (0x088F9500u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 144u, 0x088ECE3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9500u) goto L_088F9500;
    return;
L_088F9500:
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[2]);
    aot_gpr[17] = (0u < aot_gpr[17] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_088F950C;
L_088F950C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(489)));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(489), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = aot_gpr[4] == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088F9540;
      }
      goto L_088F9534;
    }
L_088F9534:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[17] = (0u | 1u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088F9540;
L_088F9540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(490)));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(490), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[19] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_088F9574;
      }
      goto L_088F9560;
    }
L_088F9560:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F9574u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0230_entry, 230u, 70u, 0x088EA9FCu>(ctx, &aot_mem) && ctx.pc == 0x088F9574u) goto L_088F9574;
    return;
L_088F9574:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F9584;
      }
      goto L_088F957C;
    }
L_088F957C:
    aot_gpr[31] = (0x088F9584u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 66u, 0x088EE610u>(ctx, &aot_mem) && ctx.pc == 0x088F9584u) goto L_088F9584;
    return;
L_088F9584:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F95A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (16448u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (16128u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    aot_fpr[26] = __builtin_bit_cast(float, 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (2215u << 16u);
      if (branch_taken) {
          goto L_088F9654;
      }
      goto L_088F9614;
    }
L_088F9614:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[28] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[28] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x088F9628u);
    aot_fpr[12] = aot_fpr[28] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088F9628u) goto L_088F9628;
    return;
L_088F9628:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1932)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1912), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x088F9644u);
    aot_fpr[12] = aot_fpr[28] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088F9644u) goto L_088F9644;
    return;
L_088F9644:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1932)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1916), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088F965C;
      }
      goto L_088F9654;
    }
L_088F9654:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1912), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1916), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_088F965C;
L_088F965C:
    aot_gpr[4] = (16544u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[16] | 0u);
    goto L_088F966C;
L_088F966C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[21]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x088F9690u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088F9690u) goto L_088F9690;
    return;
L_088F9690:
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(712)));
      if (branch_taken) {
          goto L_088F96B8;
      }
      goto L_088F969C;
    }
L_088F969C:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(716)));
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(704), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(704), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_088F96BC;
      }
      goto L_088F96B8;
    }
L_088F96B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(704), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_088F96BC;
L_088F96BC:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088F966C;
      }
      goto L_088F96CC;
    }
L_088F96CC:
    aot_gpr[4] = (17008u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[16] | 0u);
    goto L_088F96DC;
L_088F96DC:
    if (aot_gpr[19] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
        goto L_088F96FC;
    }
    goto L_088F96E4;
L_088F96E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-25184)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x088F96F4u);
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088F96F4u) goto L_088F96F4;
    return;
L_088F96F4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088F96FC;
      }
      goto L_088F96FC;
    }
L_088F96FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(580), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088F96DC;
      }
      goto L_088F9710;
    }
L_088F9710:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3020)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088F9728u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9728u) goto L_088F9728;
    return;
L_088F9728:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
      if (branch_taken) {
          goto L_088F973C;
      }
      goto L_088F9730;
    }
L_088F9730:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F9774;
      }
      goto L_088F973C;
    }
L_088F973C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[17]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    goto L_088F9754;
L_088F9754:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(644), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(648), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088F9754;
      }
      goto L_088F976C;
    }
L_088F976C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F97A8;
      }
      goto L_088F9774;
    }
L_088F9774:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[5] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    goto L_088F9790;
L_088F9790:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(644), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(648), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088F9790;
      }
      goto L_088F97A8;
    }
L_088F97A8:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F97E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088F97F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 147u, 0x088E9E0Cu>(ctx, &aot_mem) && ctx.pc == 0x088F97F4u) goto L_088F97F4;
    return;
L_088F97F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9800:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9808:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088F9820u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0235_entry, 235u, 67u, 0x088EF854u>(ctx, &aot_mem) && ctx.pc == 0x088F9820u) goto L_088F9820;
    return;
L_088F9820:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(3068), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088F986C;
      }
      goto L_088F9858;
    }
L_088F9858:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088F9864u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 77u, 0x088EE70Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9864u) goto L_088F9864;
    return;
L_088F9864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F9898;
      }
      goto L_088F986C;
    }
L_088F986C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F9878u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 77u, 0x088EE70Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9878u) goto L_088F9878;
    return;
L_088F9878:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F9888u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0234_entry, 234u, 77u, 0x088EE70Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9888u) goto L_088F9888;
    return;
L_088F9888:
    aot_fpr[0] = aot_fpr[20] + aot_fpr[0];
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    goto L_088F9898;
L_088F9898:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F98AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088F98BCu);
    aot_gpr[5] = (0u | 3072u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088F98BCu) goto L_088F98BC;
    return;
L_088F98BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F98C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x088F98FCu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0238_entry, 238u, 115u, 0x088F2F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088F98FCu) goto L_088F98FC;
    return;
L_088F98FC:
    aot_gpr[6] = (15820u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 52429u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-29072));
    aot_gpr[9] = (16840u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(3044));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F994Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29056));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F994Cu) goto L_088F994C;
    return;
L_088F994C:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(3040));
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-6832)));
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F997Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29044));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F997Cu) goto L_088F997C;
    return;
L_088F997C:
    aot_gpr[6] = (15395u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 55050u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-6832)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-29028));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(3056));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F99B8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-29004));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F99B8u) goto L_088F99B8;
    return;
L_088F99B8:
    aot_gpr[9] = (16752u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(3060));
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F99E8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28988));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F99E8u) goto L_088F99E8;
    return;
L_088F99E8:
    aot_gpr[6] = (14979u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 4719u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(3064));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088F9A1Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28972));
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 51u, 0x088E9560u>(ctx, &aot_mem) && ctx.pc == 0x088F9A1Cu) goto L_088F9A1C;
    return;
L_088F9A1C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9A44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088F9A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0240_entry, 240u, 67u, 0x088F4CECu>(ctx, &aot_mem) && ctx.pc == 0x088F9A54u) goto L_088F9A54;
    return;
L_088F9A54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9A60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(672));
    aot_gpr[20] = (0u | 2u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(528));
    aot_gpr[17] = (aot_gpr[19] + static_cast<std::uint32_t>(544));
    goto L_088F9A90;
L_088F9A90:
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(22u, 21u, 20u, 3u);
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { const std::uint32_t vfpu_address = aot_gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(624)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(580), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088F9ADCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(584), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 10u, 0x088ED1B4u>(ctx, &aot_mem) && ctx.pc == 0x088F9ADCu) goto L_088F9ADC;
    return;
L_088F9ADC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(336));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(336));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088F9A90;
      }
      goto L_088F9AF4;
    }
L_088F9AF4:
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
L_088F9B14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088F9B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0232_entry, 232u, 72u, 0x088EC698u>(ctx, &aot_mem) && ctx.pc == 0x088F9B24u) goto L_088F9B24;
    return;
L_088F9B24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9B30:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32576), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088F9BC4;
      }
      goto L_088F9B6C;
    }
L_088F9B6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x088F9B84u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x088F9B84u) goto L_088F9B84;
    return;
L_088F9B84:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_088F9B9C;
      }
      goto L_088F9B8C;
    }
L_088F9B8C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088F9B9C;
L_088F9B9C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088F9BC4;
      }
      goto L_088F9BA4;
    }
L_088F9BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088F9BC4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9BC4u) goto L_088F9BC4;
    return;
L_088F9BC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9BD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088F9C38u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9C38u) goto L_088F9C38;
    return;
L_088F9C38:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2216u << 16u);
      if (branch_taken) {
          goto L_088F9C88;
      }
      goto L_088F9C48;
    }
L_088F9C48:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_088F9C88;
L_088F9C88:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[21] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088F9CB0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 98u, 0x088CB5F8u>(ctx, &aot_mem) && ctx.pc == 0x088F9CB0u) goto L_088F9CB0;
    return;
L_088F9CB0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x088F9CC4u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x088F9CC4u) goto L_088F9CC4;
    return;
L_088F9CC4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (0u | 16u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088F9D08u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9D08u) goto L_088F9D08;
    return;
L_088F9D08:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F9D24;
      }
      goto L_088F9D14;
    }
L_088F9D14:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088F9D20u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 53u, 0x08927540u>(ctx, &aot_mem) && ctx.pc == 0x088F9D20u) goto L_088F9D20;
    return;
L_088F9D20:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088F9D24;
L_088F9D24:
    aot_gpr[6] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9D50;
      }
      goto L_088F9D30;
    }
L_088F9D30:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-32564)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088F9D4Cu);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 24u, 0x088CB0D8u>(ctx, &aot_mem) && ctx.pc == 0x088F9D4Cu) goto L_088F9D4C;
    return;
L_088F9D4C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088F9D50;
L_088F9D50:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
    aot_gpr[30] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(424)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[23] = (0u | 0u);
    goto L_088F9D70;
L_088F9D70:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088F9DEC;
      }
      goto L_088F9D80;
    }
L_088F9D80:
    aot_gpr[16] = (0u | 0u);
    goto L_088F9D84;
L_088F9D84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(744)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1064)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_088F9DC8;
    }
    goto L_088F9D9C;
L_088F9D9C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088F9DA8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5272)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 10u, 0x088B60ECu>(ctx, &aot_mem) && ctx.pc == 0x088F9DA8u) goto L_088F9DA8;
    return;
L_088F9DA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_088F9DC8;
L_088F9DC8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(744)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1064), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088F9D84;
      }
      goto L_088F9DEC;
    }
L_088F9DEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(744)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1048)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F9E28;
      }
      goto L_088F9E00;
    }
L_088F9E00:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088F9E0Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5272)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 10u, 0x088B60ECu>(ctx, &aot_mem) && ctx.pc == 0x088F9E0Cu) goto L_088F9E0C;
    return;
L_088F9E0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088F9E28;
L_088F9E28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(744)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1048), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F9D70;
      }
      goto L_088F9E4C;
    }
L_088F9E4C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32564)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32564), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F9E90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(132)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[8]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[9] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[23] = (2216u << 16u);
      if (branch_taken) {
          goto L_088F9F0C;
      }
      goto L_088F9F08;
    }
L_088F9F08:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-32564), 0u);
    goto L_088F9F0C;
L_088F9F0C:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    aot_gpr[31] = (0x088F9F1Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-32564)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 160u, 0x08877B40u>(ctx, &aot_mem) && ctx.pc == 0x088F9F1Cu) goto L_088F9F1C;
    return;
L_088F9F1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & 64u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088F9FD8;
      }
      goto L_088F9F3C;
    }
L_088F9F3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_088F9FD0;
      }
      goto L_088F9F54;
    }
L_088F9F54:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[20] = (2218u << 16u);
    goto L_088F9F5C;
L_088F9F5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x088F9F68u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 24u, 0x088C01E4u>(ctx, &aot_mem) && ctx.pc == 0x088F9F68u) goto L_088F9F68;
    return;
L_088F9F68:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088F9FB4;
      }
      goto L_088F9F78;
    }
L_088F9F78:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F9FB4;
      }
      goto L_088F9F80;
    }
L_088F9F80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088F9FA4u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F9FA4u) goto L_088F9FA4;
    return;
L_088F9FA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(894), static_cast<std::uint16_t>(aot_gpr[19]));
    goto L_088F9FB4;
L_088F9FB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F9F5C;
      }
      goto L_088F9FD0;
    }
L_088F9FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 43u, 0x088FA320u>(ctx, &aot_mem); return;
      }
      goto L_088F9FD8;
    }
L_088F9FD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] & 2u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 2u, 0x088FA00Cu>(ctx, &aot_mem); return;
      }
      goto L_088F9FF4;
    }
L_088F9FF4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[6] & 32u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    ctx.pc = 0x088FA000u; return;
}

void recomp_unit_0245(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0245_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_245(Runtime &runtime) {
    runtime.register_generated_unit(245u, 0x088F9000u, 4096u, &recomp_unit_0245, &recomp_unit_0245_entry);
    runtime.register_function(0x088F9000u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F900Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9028u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9038u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9070u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F908Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F90B8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F90CCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F90D4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F90E4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F90F4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9110u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F912Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9144u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9154u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F916Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F917Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9198u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F91A0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F91B8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F91C0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F91E8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F91F4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9204u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9214u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9220u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9230u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F923Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F924Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F925Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F926Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9274u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F927Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F928Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F92A0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F92A8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F92BCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F92D4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F92E0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F92F0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F92F8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9310u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9328u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9338u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9340u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F937Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F93C0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F93D0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F93ECu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F93F8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9404u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F941Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9424u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F942Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9434u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F943Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9440u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9458u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9460u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F948Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F94D0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F94D8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F94E8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F94F0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F94F8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9500u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F950Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9534u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9540u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9560u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9574u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F957Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9584u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F95A8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9614u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9628u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9644u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9654u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F965Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F966Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9690u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F969Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F96B8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F96BCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F96CCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F96DCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F96E4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F96F4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F96FCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9710u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9728u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9730u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F973Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9754u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F976Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9774u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9790u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F97A8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F97E4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F97F4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9800u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9808u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9820u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9838u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9858u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9864u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F986Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9878u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9888u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9898u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F98ACu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F98BCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F98C8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F98FCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F994Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F997Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F99B8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F99E8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9A1Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9A44u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9A54u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9A60u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9A90u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9ADCu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9AF4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9B14u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9B24u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9B30u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9B50u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9B6Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9B84u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9B8Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9B9Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9BA4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9BC4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9BD8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9C38u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9C48u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9C88u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9CB0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9CC4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D08u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D14u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D20u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D24u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D30u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D4Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D50u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D70u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D80u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D84u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9D9Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9DA8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9DC8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9DECu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9E00u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9E0Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9E28u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9E4Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9E90u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F08u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F0Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F1Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F3Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F54u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F5Cu, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F68u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F78u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9F80u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9FA4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9FB4u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9FD0u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9FD8u, &recomp_unit_0245, "recomp_unit_0245");
    runtime.register_function(0x088F9FF4u, &recomp_unit_0245, "recomp_unit_0245");
}
} // namespace psprecomp
