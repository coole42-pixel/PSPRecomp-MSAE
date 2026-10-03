#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0182[1023] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17,
    0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0,
    33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40,
    41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 69, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0,
    0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0,
    0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94,
    0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101,
    0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 140, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0,
    144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0,
    148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 157,
    158, 0, 159, 0, 0, 0, 0, 0, 0, 160, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 169, 0,
    0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175,
    0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183,
};
void recomp_unit_0182_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088BA000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0182[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BA000;
    case 2u: goto L_088BA008;
    case 3u: goto L_088BA01C;
    case 4u: goto L_088BA024;
    case 5u: goto L_088BA034;
    case 6u: goto L_088BA044;
    case 7u: goto L_088BA098;
    case 8u: goto L_088BA0B0;
    case 9u: goto L_088BA0B8;
    case 10u: goto L_088BA0C4;
    case 11u: goto L_088BA0E0;
    case 12u: goto L_088BA104;
    case 13u: goto L_088BA110;
    case 14u: goto L_088BA124;
    case 15u: goto L_088BA154;
    case 16u: goto L_088BA16C;
    case 17u: goto L_088BA17C;
    case 18u: goto L_088BA188;
    case 19u: goto L_088BA1A4;
    case 20u: goto L_088BA1B8;
    case 21u: goto L_088BA1C0;
    case 22u: goto L_088BA1D4;
    case 23u: goto L_088BA1D8;
    case 24u: goto L_088BA1E4;
    case 25u: goto L_088BA1F8;
    case 26u: goto L_088BA20C;
    case 27u: goto L_088BA218;
    case 28u: goto L_088BA228;
    case 29u: goto L_088BA22C;
    case 30u: goto L_088BA244;
    case 31u: goto L_088BA25C;
    case 32u: goto L_088BA274;
    case 33u: goto L_088BA280;
    case 34u: goto L_088BA290;
    case 35u: goto L_088BA298;
    case 36u: goto L_088BA2BC;
    case 37u: goto L_088BA31C;
    case 38u: goto L_088BA324;
    case 39u: goto L_088BA344;
    case 40u: goto L_088BA3FC;
    case 41u: goto L_088BA400;
    case 42u: goto L_088BA408;
    case 43u: goto L_088BA410;
    case 44u: goto L_088BA420;
    case 45u: goto L_088BA428;
    case 46u: goto L_088BA47C;
    case 47u: goto L_088BA48C;
    case 48u: goto L_088BA4C0;
    case 49u: goto L_088BA4C8;
    case 50u: goto L_088BA4DC;
    case 51u: goto L_088BA4E8;
    case 52u: goto L_088BA500;
    case 53u: goto L_088BA514;
    case 54u: goto L_088BA520;
    case 55u: goto L_088BA538;
    case 56u: goto L_088BA55C;
    case 57u: goto L_088BA588;
    case 58u: goto L_088BA598;
    case 59u: goto L_088BA5B0;
    case 60u: goto L_088BA5B8;
    case 61u: goto L_088BA5C0;
    case 62u: goto L_088BA5F0;
    case 63u: goto L_088BA624;
    case 64u: goto L_088BA634;
    case 65u: goto L_088BA640;
    case 66u: goto L_088BA648;
    case 67u: goto L_088BA668;
    case 68u: goto L_088BA670;
    case 69u: goto L_088BA674;
    case 70u: goto L_088BA680;
    case 71u: goto L_088BA6A4;
    case 72u: goto L_088BA6C0;
    case 73u: goto L_088BA6C8;
    case 74u: goto L_088BA6D8;
    case 75u: goto L_088BA6E4;
    case 76u: goto L_088BA6F8;
    case 77u: goto L_088BA708;
    case 78u: goto L_088BA720;
    case 79u: goto L_088BA770;
    case 80u: goto L_088BA778;
    case 81u: goto L_088BA788;
    case 82u: goto L_088BA794;
    case 83u: goto L_088BA7A8;
    case 84u: goto L_088BA7B4;
    case 85u: goto L_088BA7CC;
    case 86u: goto L_088BA7E0;
    case 87u: goto L_088BA7EC;
    case 88u: goto L_088BA7F8;
    case 89u: goto L_088BA804;
    case 90u: goto L_088BA828;
    case 91u: goto L_088BA844;
    case 92u: goto L_088BA85C;
    case 93u: goto L_088BA86C;
    case 94u: goto L_088BA87C;
    case 95u: goto L_088BA888;
    case 96u: goto L_088BA89C;
    case 97u: goto L_088BA8C4;
    case 98u: goto L_088BA8D4;
    case 99u: goto L_088BA8EC;
    case 100u: goto L_088BA8F4;
    case 101u: goto L_088BA8FC;
    case 102u: goto L_088BA904;
    case 103u: goto L_088BA90C;
    case 104u: goto L_088BA914;
    case 105u: goto L_088BA91C;
    case 106u: goto L_088BA924;
    case 107u: goto L_088BA92C;
    case 108u: goto L_088BA934;
    case 109u: goto L_088BA938;
    case 110u: goto L_088BA940;
    case 111u: goto L_088BA988;
    case 112u: goto L_088BA99C;
    case 113u: goto L_088BA9BC;
    case 114u: goto L_088BA9C8;
    case 115u: goto L_088BA9CC;
    case 116u: goto L_088BA9E0;
    case 117u: goto L_088BA9E8;
    case 118u: goto L_088BA9F4;
    case 119u: goto L_088BAA14;
    case 120u: goto L_088BAA1C;
    case 121u: goto L_088BAA24;
    case 122u: goto L_088BAA38;
    case 123u: goto L_088BAA50;
    case 124u: goto L_088BAA88;
    case 125u: goto L_088BAB4C;
    case 126u: goto L_088BAB50;
    case 127u: goto L_088BAB84;
    case 128u: goto L_088BAB8C;
    case 129u: goto L_088BABE4;
    case 130u: goto L_088BABE8;
    case 131u: goto L_088BAC20;
    case 132u: goto L_088BAC2C;
    case 133u: goto L_088BAC30;
    case 134u: goto L_088BAC54;
    case 135u: goto L_088BAC58;
    case 136u: goto L_088BAC74;
    case 137u: goto L_088BAC84;
    case 138u: goto L_088BAC98;
    case 139u: goto L_088BACA8;
    case 140u: goto L_088BACAC;
    case 141u: goto L_088BACB0;
    case 142u: goto L_088BACD4;
    case 143u: goto L_088BACF8;
    case 144u: goto L_088BAD00;
    case 145u: goto L_088BAD50;
    case 146u: goto L_088BAD60;
    case 147u: goto L_088BAD74;
    case 148u: goto L_088BAD80;
    case 149u: goto L_088BAD88;
    case 150u: goto L_088BADA0;
    case 151u: goto L_088BADB8;
    case 152u: goto L_088BADC8;
    case 153u: goto L_088BADD0;
    case 154u: goto L_088BADE0;
    case 155u: goto L_088BADE8;
    case 156u: goto L_088BADF4;
    case 157u: goto L_088BADFC;
    case 158u: goto L_088BAE00;
    case 159u: goto L_088BAE08;
    case 160u: goto L_088BAE24;
    case 161u: goto L_088BAE28;
    case 162u: goto L_088BAE54;
    case 163u: goto L_088BAE84;
    case 164u: goto L_088BAE88;
    case 165u: goto L_088BAEC0;
    case 166u: goto L_088BAECC;
    case 167u: goto L_088BAED0;
    case 168u: goto L_088BAEF4;
    case 169u: goto L_088BAEF8;
    case 170u: goto L_088BAF14;
    case 171u: goto L_088BAF30;
    case 172u: goto L_088BAF44;
    case 173u: goto L_088BAF60;
    case 174u: goto L_088BAF6C;
    case 175u: goto L_088BAF7C;
    case 176u: goto L_088BAF8C;
    case 177u: goto L_088BAF9C;
    case 178u: goto L_088BAFAC;
    case 179u: goto L_088BAFB8;
    case 180u: goto L_088BAFC8;
    case 181u: goto L_088BAFD8;
    case 182u: goto L_088BAFE8;
    case 183u: goto L_088BAFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088BA000:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(32500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088BA01C;
      }
      goto L_088BA008;
    }
L_088BA008:
    aot_gpr[6] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(32500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(32504), static_cast<std::uint8_t>(0u));
    goto L_088BA01C;
L_088BA01C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] ^ 7u);
      if (branch_taken) {
          goto L_088BA034;
      }
      goto L_088BA024;
    }
L_088BA024:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA044;
      }
      goto L_088BA034;
    }
L_088BA034:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27472)));
    aot_gpr[31] = (0x088BA044u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 71u, 0x088B2654u>(ctx, &aot_mem) && ctx.pc == 0x088BA044u) goto L_088BA044;
    return;
L_088BA044:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(28084), static_cast<std::uint8_t>(0u));
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[1] = (aot_gpr[4] + static_cast<std::uint32_t>(-23680));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28100), aot_gpr[4]);
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
L_088BA098:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA0B8;
      }
      goto L_088BA0B0;
    }
L_088BA0B0:
    aot_gpr[31] = (0x088BA0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 178u, 0x088BCC04u>(ctx, &aot_mem) && ctx.pc == 0x088BA0B8u) goto L_088BA0B8;
    return;
L_088BA0B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA0C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088BA0E0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_088BA098;
L_088BA0E0:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (2215u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA110;
      }
      goto L_088BA104;
    }
L_088BA104:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BA110u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 182u, 0x088BCC24u>(ctx, &aot_mem) && ctx.pc == 0x088BA110u) goto L_088BA110;
    return;
L_088BA110:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA124:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(28037)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BA298;
      }
      goto L_088BA154;
    }
L_088BA154:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28040)));
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    goto L_088BA16C;
L_088BA16C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_088BA17C;
    }
    goto L_088BA17C;
L_088BA17C:
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA1E4;
      }
      goto L_088BA188;
    }
L_088BA188:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA1C0;
      }
      goto L_088BA1A4;
    }
L_088BA1A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x088BA1B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 75u, 0x088B979Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA1B8u) goto L_088BA1B8;
    return;
L_088BA1B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28040)));
      if (branch_taken) {
          goto L_088BA1D8;
      }
      goto L_088BA1C0;
    }
L_088BA1C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[31] = (0x088BA1D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 6u, 0x088B9084u>(ctx, &aot_mem) && ctx.pc == 0x088BA1D4u) goto L_088BA1D4;
    return;
L_088BA1D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28040)));
    goto L_088BA1D8;
L_088BA1D8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BA16C;
      }
      goto L_088BA1E4;
    }
L_088BA1E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28096)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BA25C;
      }
      goto L_088BA1F8;
    }
L_088BA1F8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
        goto L_088BA20C;
    }
    goto L_088BA20C;
L_088BA20C:
    aot_gpr[6] = (aot_gpr[19] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA22C;
      }
      goto L_088BA218;
    }
L_088BA218:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_088BA228;
    }
    goto L_088BA228;
L_088BA228:
    aot_gpr[5] = (aot_gpr[19] - aot_gpr[5]);
    goto L_088BA22C;
L_088BA22C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088BA244u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 74u, 0x088B9784u>(ctx, &aot_mem) && ctx.pc == 0x088BA244u) goto L_088BA244;
    return;
L_088BA244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28096)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28040)));
      if (branch_taken) {
          goto L_088BA1F8;
      }
      goto L_088BA25C;
    }
L_088BA25C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28048), aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
        goto L_088BA274;
    }
    goto L_088BA274;
L_088BA274:
    aot_gpr[5] = (aot_gpr[16] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA298;
      }
      goto L_088BA280;
    }
L_088BA280:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_088BA290;
    }
    goto L_088BA290;
L_088BA290:
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28048), aot_gpr[4]);
    goto L_088BA298;
L_088BA298:
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
L_088BA2BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[22]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-2072)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[23]);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[21]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BA400;
      }
      goto L_088BA31C;
    }
L_088BA31C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA400;
      }
      goto L_088BA324;
    }
L_088BA324:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(28038), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28100)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088BA400;
      }
      goto L_088BA344;
    }
L_088BA344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
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
      ctx.write_vfpu_vector_with_destination_prefix_ct<22u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<16u, 22u, 22u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<22u, 22u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(224);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(24u, 22u, 23u, 3u);
    ctx.execute_vfpu_vdot_ct<16u, 24u, 24u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<24u, 24u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<24u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[6] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    ctx.execute_vfpu_vscl_ct<21u, 23u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<22u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(224);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<24u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088BA3FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28100)));
    goto L_088BA124;
L_088BA3FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28040)));
    goto L_088BA400;
L_088BA400:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA5C0;
      }
      goto L_088BA408;
    }
L_088BA408:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA5C0;
      }
      goto L_088BA410;
    }
L_088BA410:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_088BA598;
      }
      goto L_088BA420;
    }
L_088BA420:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA4C0;
      }
      goto L_088BA428;
    }
L_088BA428:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(200)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(352)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(356)));
    aot_gpr[9] = (17008u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088BA47Cu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 94u, 0x0880C72Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA47Cu) goto L_088BA47C;
    return;
L_088BA47C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088BA48Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 186u, 0x088BCC80u>(ctx, &aot_mem) && ctx.pc == 0x088BA48Cu) goto L_088BA48C;
    return;
L_088BA48C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA588;
      }
      goto L_088BA4C0;
    }
L_088BA4C0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA500;
      }
      goto L_088BA4C8;
    }
L_088BA4C8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(244)));
    aot_gpr[8] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA500;
      }
      goto L_088BA4DC;
    }
L_088BA4DC:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088BA4E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 209u, 0x088BEB14u>(ctx, &aot_mem) && ctx.pc == 0x088BA4E8u) goto L_088BA4E8;
    return;
L_088BA4E8:
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA588;
      }
      goto L_088BA500;
    }
L_088BA500:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(244)));
    aot_gpr[6] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BA538;
      }
      goto L_088BA514;
    }
L_088BA514:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x088BA520u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 209u, 0x088BEB14u>(ctx, &aot_mem) && ctx.pc == 0x088BA520u) goto L_088BA520;
    return;
L_088BA520:
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA588;
      }
      goto L_088BA538;
    }
L_088BA538:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088BA55Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 186u, 0x088BCC80u>(ctx, &aot_mem) && ctx.pc == 0x088BA55Cu) goto L_088BA55C;
    return;
L_088BA55C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(28040)));
    aot_gpr[16] = (aot_gpr[20] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
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
    goto L_088BA588;
L_088BA588:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088BA598;
L_088BA598:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA5C0;
      }
      goto L_088BA5B0;
    }
L_088BA5B0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA5C0;
      }
      goto L_088BA5B8;
    }
L_088BA5B8:
    aot_gpr[31] = (0x088BA5C0u);
    aot_gpr[4] = (0u | 0u);
    goto L_088BA124;
L_088BA5C0:
    aot_gpr[2] = (aot_gpr[20] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA5F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[8] | 0u);
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[9] = (aot_gpr[7] & 255u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_088BA640;
      }
      goto L_088BA624;
    }
L_088BA624:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (0u | 0u);
    if (aot_gpr[11] != 0u) {
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
        goto L_088BA634;
    }
    goto L_088BA634;
L_088BA634:
    aot_gpr[10] = (0u < aot_gpr[10] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (0u < aot_gpr[10] ? 1u : 0u);
    goto L_088BA640;
L_088BA640:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA670;
      }
      goto L_088BA648;
    }
L_088BA648:
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[7] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x088BA668u);
    aot_gpr[9] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 205u, 0x088BCDF0u>(ctx, &aot_mem) && ctx.pc == 0x088BA668u) goto L_088BA668;
    return;
L_088BA668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA674;
      }
      goto L_088BA670;
    }
L_088BA670:
    aot_gpr[2] = (0u | 0u);
    goto L_088BA674;
L_088BA674:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA680:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA708;
      }
      goto L_088BA6A4;
    }
L_088BA6A4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA708;
      }
      goto L_088BA6C0;
    }
L_088BA6C0:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    goto L_088BA6C8;
L_088BA6C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088BA6D8;
    }
    goto L_088BA6D8;
L_088BA6D8:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA708;
      }
      goto L_088BA6E4;
    }
L_088BA6E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[31] = (0x088BA6F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 177u, 0x088B8E6Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA6F8u) goto L_088BA6F8;
    return;
L_088BA6F8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28040)));
      if (branch_taken) {
          goto L_088BA6C8;
      }
      goto L_088BA708;
    }
L_088BA708:
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
L_088BA720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7520)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28044)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BA778;
      }
      goto L_088BA770;
    }
L_088BA770:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088BA778;
L_088BA778:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088BA794;
      }
      goto L_088BA788;
    }
L_088BA788:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_088BA794;
L_088BA794:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(544), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7512)));
    aot_gpr[31] = (0x088BA7A8u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28044)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 253u, 0x088BEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA7A8u) goto L_088BA7A8;
    return;
L_088BA7A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BA828;
      }
      goto L_088BA7B4;
    }
L_088BA7B4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7512)));
    aot_gpr[31] = (0x088BA7CCu);
    aot_fpr[20] = aot_fpr[20] - aot_fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 253u, 0x088BEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA7CCu) goto L_088BA7CC;
    return;
L_088BA7CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28044)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_088BA7EC;
      }
      goto L_088BA7E0;
    }
L_088BA7E0:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[12];
    goto L_088BA7EC;
L_088BA7EC:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088BA804;
      }
      goto L_088BA7F8;
    }
L_088BA7F8:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_088BA804;
L_088BA804:
    aot_fpr[13] = aot_fpr[20] / aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(528)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(524)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[15];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] + aot_fpr[22];
    aot_fpr[14] = aot_fpr[12] + aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(524), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_088BA828;
L_088BA828:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (aot_gpr[4] ^ 1u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088BA87C;
      }
      goto L_088BA844;
    }
L_088BA844:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[5] = (aot_gpr[5] ^ 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] ^ 2u);
      if (branch_taken) {
          goto L_088BA87C;
      }
      goto L_088BA85C;
    }
L_088BA85C:
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] ^ 7u);
      if (branch_taken) {
          goto L_088BA87C;
      }
      goto L_088BA86C;
    }
L_088BA86C:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA888;
      }
      goto L_088BA87C;
    }
L_088BA87C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088BA89C;
      }
      goto L_088BA888;
    }
L_088BA888:
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(32504), static_cast<std::uint8_t>(0u));
    goto L_088BA89C;
L_088BA89C:
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
L_088BA8C4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA934;
      }
      goto L_088BA8D4;
    }
L_088BA8D4:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(30016)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA8EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA8F4;
    }
L_088BA8F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA8FC;
    }
L_088BA8FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA904;
    }
L_088BA904:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA90C;
    }
L_088BA90C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA914;
    }
L_088BA914:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA91C;
    }
L_088BA91C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA924;
    }
L_088BA924:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA92C;
    }
L_088BA92C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088BA938;
      }
      goto L_088BA934;
    }
L_088BA934:
    aot_gpr[2] = (0u | 0u);
    goto L_088BA938;
L_088BA938:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA940:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(28037)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAA24;
      }
      goto L_088BA988;
    }
L_088BA988:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088BAA1C;
      }
      goto L_088BA99C;
    }
L_088BA99C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x088BA9BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 65u, 0x0894B49Cu>(ctx, &aot_mem) && ctx.pc == 0x088BA9BCu) goto L_088BA9BC;
    return;
L_088BA9BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAA1C;
      }
      goto L_088BA9C8;
    }
L_088BA9C8:
    aot_gpr[16] = (0u | 0u);
    goto L_088BA9CC;
L_088BA9CC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA9E8;
      }
      goto L_088BA9E0;
    }
L_088BA9E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BA9E8;
L_088BA9E8:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BAA1C;
      }
      goto L_088BA9F4;
    }
L_088BA9F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[31] = (0x088BAA14u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 7u, 0x088B9090u>(ctx, &aot_mem) && ctx.pc == 0x088BAA14u) goto L_088BAA14;
    return;
L_088BAA14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BA9CC;
      }
      goto L_088BAA1C;
    }
L_088BAA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 192u, 0x088BBDA4u>(ctx, &aot_mem); return;
      }
      goto L_088BAA24;
    }
L_088BAA24:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088BAA50;
      }
      goto L_088BAA38;
    }
L_088BAA38:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28060)));
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[4]);
    goto L_088BAA50;
L_088BAA50:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28060), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2208)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088BAB50;
      }
      goto L_088BAA88;
    }
L_088BAA88:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-23680));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_fpr[13] = std::sqrt(aot_fpr[13]);
    aot_gpr[31] = (0x088BAB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 125u, 0x08A2F89Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAB4Cu) goto L_088BAB4C;
    return;
L_088BAB4C:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_088BAB50;
L_088BAB50:
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[1] = (aot_gpr[4] + static_cast<std::uint32_t>(-23680));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[1] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088BAB84u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 65u, 0x0894B49Cu>(ctx, &aot_mem) && ctx.pc == 0x088BAB84u) goto L_088BAB84;
    return;
L_088BAB84:
    aot_gpr[31] = (0x088BAB8Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 63u, 0x0894B488u>(ctx, &aot_mem) && ctx.pc == 0x088BAB8Cu) goto L_088BAB8C;
    return;
L_088BAB8C:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(56)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
      if (branch_taken) {
          goto L_088BAC74;
      }
      goto L_088BABE4;
    }
L_088BABE4:
    aot_gpr[7] = (aot_gpr[6] << 5u);
    goto L_088BABE8;
L_088BABE8:
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] << 3u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (aot_gpr[8] & 16u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    if (aot_gpr[8] == 0u) {
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
        goto L_088BAC30;
    }
    goto L_088BAC20;
L_088BAC20:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC58;
      }
      goto L_088BAC2C;
    }
L_088BAC2C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
    goto L_088BAC30;
L_088BAC30:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BAC58;
      }
      goto L_088BAC54;
    }
L_088BAC54:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088BAC58;
L_088BAC58:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (aot_gpr[6] << 5u);
      if (branch_taken) {
          goto L_088BABE8;
      }
      goto L_088BAC74;
    }
L_088BAC74:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(26496)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BACAC;
      }
      goto L_088BAC84;
    }
L_088BAC84:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[7] = (0u | 5u);
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    aot_gpr[8] = (2218u << 16u);
      if (branch_taken) {
          goto L_088BACA8;
      }
      goto L_088BAC98;
    }
L_088BAC98:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[7] = (0u | 6u);
    if (aot_gpr[8] != aot_gpr[7]) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2996)));
        goto L_088BACB0;
    }
    goto L_088BACA8;
L_088BACA8:
    aot_gpr[6] = (0u | 1u);
    goto L_088BACAC;
L_088BACAC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2996)));
    goto L_088BACB0;
L_088BACB0:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(704)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(-7456));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088BACF8;
      }
      goto L_088BACD4;
    }
L_088BACD4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2996)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(704)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-6880));
    aot_gpr[8] = (aot_gpr[8] ^ aot_gpr[9]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[11] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088BAD00;
      }
      goto L_088BACF8;
    }
L_088BACF8:
    aot_gpr[7] = (0u | 1u);
    aot_gpr[11] = (aot_gpr[4] | 0u);
    goto L_088BAD00;
L_088BAD00:
    aot_gpr[10] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(416)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 16u);
    aot_gpr[9] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2136)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[2] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[31] = (0x088BAD50u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-7652)));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 47u, 0x0882C424u>(ctx, &aot_mem) && ctx.pc == 0x088BAD50u) goto L_088BAD50;
    return;
L_088BAD50:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 191u, 0x088BBD9Cu>(ctx, &aot_mem); return;
      }
      goto L_088BAD60;
    }
L_088BAD60:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BAD80;
      }
      goto L_088BAD74;
    }
L_088BAD74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088BAD80;
L_088BAD80:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 191u, 0x088BBD9Cu>(ctx, &aot_mem); return;
      }
      goto L_088BAD88;
    }
L_088BAD88:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(180)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 191u, 0x088BBD9Cu>(ctx, &aot_mem); return;
      }
      goto L_088BADA0;
    }
L_088BADA0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 191u, 0x088BBD9Cu>(ctx, &aot_mem); return;
      }
      goto L_088BADB8;
    }
L_088BADB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 150u, 0x088BBABCu>(ctx, &aot_mem); return;
      }
      goto L_088BADC8;
    }
L_088BADC8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 150u, 0x088BBABCu>(ctx, &aot_mem); return;
      }
      goto L_088BADD0;
    }
L_088BADD0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 149u, 0x088BBAB4u>(ctx, &aot_mem); return;
      }
      goto L_088BADE0;
    }
L_088BADE0:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
        goto L_088BAE00;
    }
    goto L_088BADE8;
L_088BADE8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BAE08;
      }
      goto L_088BADF4;
    }
L_088BADF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 71u, 0x088BB50Cu>(ctx, &aot_mem); return;
      }
      goto L_088BADFC;
    }
L_088BADFC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    goto L_088BAE00;
L_088BAE00:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 149u, 0x088BBAB4u>(ctx, &aot_mem); return;
      }
      goto L_088BAE08;
    }
L_088BAE08:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 65u, 0x088BB4B0u>(ctx, &aot_mem); return;
      }
      goto L_088BAE24;
    }
L_088BAE24:
    aot_gpr[4] = (aot_gpr[19] << 5u);
    goto L_088BAE28;
L_088BAE28:
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (aot_gpr[20] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 64u, 0x088BB4A0u>(ctx, &aot_mem); return;
      }
      goto L_088BAE54;
    }
L_088BAE54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(52)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_088BAF14;
      }
      goto L_088BAE84;
    }
L_088BAE84:
    aot_gpr[5] = (aot_gpr[4] << 5u);
    goto L_088BAE88;
L_088BAE88:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[6] & 16u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
        goto L_088BAED0;
    }
    goto L_088BAEC0;
L_088BAEC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAEF8;
      }
      goto L_088BAECC;
    }
L_088BAECC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    goto L_088BAED0;
L_088BAED0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BAEF8;
      }
      goto L_088BAEF4;
    }
L_088BAEF4:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088BAEF8;
L_088BAEF8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] << 5u);
      if (branch_taken) {
          goto L_088BAE88;
      }
      goto L_088BAF14;
    }
L_088BAF14:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 3u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 17u, 0x088BB13Cu>(ctx, &aot_mem); return;
      }
      goto L_088BAF30;
    }
L_088BAF30:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAF44;
    }
L_088BAF44:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(30056)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAF60:
    aot_gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAF6C;
    }
L_088BAF6C:
    aot_gpr[4] = (16243u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAF7C;
    }
L_088BAF7C:
    aot_gpr[4] = (16230u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAF8C;
    }
L_088BAF8C:
    aot_gpr[4] = (16217u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAF9C;
    }
L_088BAF9C:
    aot_gpr[4] = (16204u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAFAC;
    }
L_088BAFAC:
    aot_gpr[4] = (16192u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAFB8;
    }
L_088BAFB8:
    aot_gpr[4] = (16179u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAFC8;
    }
L_088BAFC8:
    aot_gpr[4] = (16166u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAFD8;
    }
L_088BAFD8:
    aot_gpr[4] = (16153u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAFE8;
    }
L_088BAFE8:
    aot_gpr[4] = (16140u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      goto L_088BAFF8;
    }
L_088BAFF8:
    aot_gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 5u, 0x088BB044u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 1u, 0x088BB004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0182(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0182_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_182(Runtime &runtime) {
    runtime.register_generated_unit(182u, 0x088BA000u, 4096u, &recomp_unit_0182, &recomp_unit_0182_entry);
    runtime.register_function(0x088BA000u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA008u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA01Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA024u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA034u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA044u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA098u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA0B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA0B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA0C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA0E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA104u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA110u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA124u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA154u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA16Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA17Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA188u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA1A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA1B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA1C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA1D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA1D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA1E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA1F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA20Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA218u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA228u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA22Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA244u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA25Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA274u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA280u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA290u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA298u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA2BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA324u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA344u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA3FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA400u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA408u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA410u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA420u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA428u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA47Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA48Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA4C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA4C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA4DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA4E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA514u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA538u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA55Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA588u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA598u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA5B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA5B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA5C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA5F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA624u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA634u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA640u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA648u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA668u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA670u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA674u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA680u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA6A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA6C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA6C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA6D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA6E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA6F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA708u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA720u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA770u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA778u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA788u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA794u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA7A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA7B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA7CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA7E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA7ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA7F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA804u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA828u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA844u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA85Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA86Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA87Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA888u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA89Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA8C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA8ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA8F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA8FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA904u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA90Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA914u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA924u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA92Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA934u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA938u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA940u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA988u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA99Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA9BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA9C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA9CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA9E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA9E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BA9F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAA14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAA1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAA24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAA38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAA50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAA88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAB4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAB50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAB84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAB8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BABE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BABE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAC20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAC2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAC30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAC54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAC58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAC74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAC84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAC98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BACA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BACACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BACB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BACD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BACF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAD00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAD50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAD60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAD74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAD80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAD88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BADA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BADB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BADC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BADD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BADE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BADE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BADF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BADFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAE00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAE08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAE28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAE54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAE84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAE88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAEC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAECCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAED0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAEF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAEF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAF14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAF30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAF44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAF60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAF6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAF7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAF8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAF9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAFACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAFB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAFC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAFD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAFE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x088BAFF8u, &recomp_unit_0182, "recomp_unit_0182");
}
} // namespace psprecomp
