#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0055[1019] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0,
    0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0,
    0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0,
    0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 48, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68,
    0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 78, 0, 0, 79, 0, 0, 80, 81, 0, 0,
    82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0,
    0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118,
    0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0,
    0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175,
};
void recomp_unit_0055_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0883B000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0055[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0883B000;
    case 2u: goto L_0883B02C;
    case 3u: goto L_0883B034;
    case 4u: goto L_0883B044;
    case 5u: goto L_0883B05C;
    case 6u: goto L_0883B068;
    case 7u: goto L_0883B078;
    case 8u: goto L_0883B090;
    case 9u: goto L_0883B09C;
    case 10u: goto L_0883B0B4;
    case 11u: goto L_0883B0E8;
    case 12u: goto L_0883B0F0;
    case 13u: goto L_0883B104;
    case 14u: goto L_0883B10C;
    case 15u: goto L_0883B12C;
    case 16u: goto L_0883B134;
    case 17u: goto L_0883B13C;
    case 18u: goto L_0883B16C;
    case 19u: goto L_0883B174;
    case 20u: goto L_0883B190;
    case 21u: goto L_0883B1A4;
    case 22u: goto L_0883B1B8;
    case 23u: goto L_0883B1C0;
    case 24u: goto L_0883B1DC;
    case 25u: goto L_0883B1E8;
    case 26u: goto L_0883B1F8;
    case 27u: goto L_0883B200;
    case 28u: goto L_0883B220;
    case 29u: goto L_0883B228;
    case 30u: goto L_0883B234;
    case 31u: goto L_0883B250;
    case 32u: goto L_0883B260;
    case 33u: goto L_0883B280;
    case 34u: goto L_0883B2A0;
    case 35u: goto L_0883B2B0;
    case 36u: goto L_0883B2BC;
    case 37u: goto L_0883B2E0;
    case 38u: goto L_0883B2F8;
    case 39u: goto L_0883B304;
    case 40u: goto L_0883B30C;
    case 41u: goto L_0883B384;
    case 42u: goto L_0883B3FC;
    case 43u: goto L_0883B480;
    case 44u: goto L_0883B494;
    case 45u: goto L_0883B4C0;
    case 46u: goto L_0883B4D8;
    case 47u: goto L_0883B4E8;
    case 48u: goto L_0883B4EC;
    case 49u: goto L_0883B508;
    case 50u: goto L_0883B528;
    case 51u: goto L_0883B548;
    case 52u: goto L_0883B568;
    case 53u: goto L_0883B588;
    case 54u: goto L_0883B5A8;
    case 55u: goto L_0883B5C8;
    case 56u: goto L_0883B5F8;
    case 57u: goto L_0883B604;
    case 58u: goto L_0883B63C;
    case 59u: goto L_0883B64C;
    case 60u: goto L_0883B680;
    case 61u: goto L_0883B690;
    case 62u: goto L_0883B69C;
    case 63u: goto L_0883B6BC;
    case 64u: goto L_0883B6C4;
    case 65u: goto L_0883B6CC;
    case 66u: goto L_0883B6D0;
    case 67u: goto L_0883B6E4;
    case 68u: goto L_0883B6FC;
    case 69u: goto L_0883B704;
    case 70u: goto L_0883B70C;
    case 71u: goto L_0883B714;
    case 72u: goto L_0883B728;
    case 73u: goto L_0883B730;
    case 74u: goto L_0883B77C;
    case 75u: goto L_0883B7B0;
    case 76u: goto L_0883B7C8;
    case 77u: goto L_0883B7D4;
    case 78u: goto L_0883B7D8;
    case 79u: goto L_0883B7E4;
    case 80u: goto L_0883B7F0;
    case 81u: goto L_0883B7F4;
    case 82u: goto L_0883B800;
    case 83u: goto L_0883B808;
    case 84u: goto L_0883B810;
    case 85u: goto L_0883B818;
    case 86u: goto L_0883B820;
    case 87u: goto L_0883B82C;
    case 88u: goto L_0883B850;
    case 89u: goto L_0883B858;
    case 90u: goto L_0883B878;
    case 91u: goto L_0883B880;
    case 92u: goto L_0883B898;
    case 93u: goto L_0883B8A0;
    case 94u: goto L_0883B8A8;
    case 95u: goto L_0883B8BC;
    case 96u: goto L_0883B8C4;
    case 97u: goto L_0883B8D0;
    case 98u: goto L_0883B8F0;
    case 99u: goto L_0883B8FC;
    case 100u: goto L_0883B908;
    case 101u: goto L_0883B920;
    case 102u: goto L_0883B92C;
    case 103u: goto L_0883B940;
    case 104u: goto L_0883B950;
    case 105u: goto L_0883B958;
    case 106u: goto L_0883B960;
    case 107u: goto L_0883B968;
    case 108u: goto L_0883B970;
    case 109u: goto L_0883B978;
    case 110u: goto L_0883B984;
    case 111u: goto L_0883B990;
    case 112u: goto L_0883B9A4;
    case 113u: goto L_0883B9B0;
    case 114u: goto L_0883B9BC;
    case 115u: goto L_0883B9D0;
    case 116u: goto L_0883B9DC;
    case 117u: goto L_0883B9E8;
    case 118u: goto L_0883B9FC;
    case 119u: goto L_0883BA08;
    case 120u: goto L_0883BA14;
    case 121u: goto L_0883BA24;
    case 122u: goto L_0883BA30;
    case 123u: goto L_0883BA3C;
    case 124u: goto L_0883BA4C;
    case 125u: goto L_0883BA54;
    case 126u: goto L_0883BA60;
    case 127u: goto L_0883BAE8;
    case 128u: goto L_0883BAF8;
    case 129u: goto L_0883BB0C;
    case 130u: goto L_0883BB14;
    case 131u: goto L_0883BB30;
    case 132u: goto L_0883BB3C;
    case 133u: goto L_0883BB54;
    case 134u: goto L_0883BB60;
    case 135u: goto L_0883BB80;
    case 136u: goto L_0883BB94;
    case 137u: goto L_0883BBB4;
    case 138u: goto L_0883BBE4;
    case 139u: goto L_0883BC24;
    case 140u: goto L_0883BC30;
    case 141u: goto L_0883BC48;
    case 142u: goto L_0883BC54;
    case 143u: goto L_0883BC5C;
    case 144u: goto L_0883BCDC;
    case 145u: goto L_0883BCEC;
    case 146u: goto L_0883BD08;
    case 147u: goto L_0883BD38;
    case 148u: goto L_0883BD78;
    case 149u: goto L_0883BD88;
    case 150u: goto L_0883BD90;
    case 151u: goto L_0883BD9C;
    case 152u: goto L_0883BDB4;
    case 153u: goto L_0883BDCC;
    case 154u: goto L_0883BDDC;
    case 155u: goto L_0883BDE4;
    case 156u: goto L_0883BDEC;
    case 157u: goto L_0883BDF8;
    case 158u: goto L_0883BE10;
    case 159u: goto L_0883BE28;
    case 160u: goto L_0883BE40;
    case 161u: goto L_0883BE4C;
    case 162u: goto L_0883BE6C;
    case 163u: goto L_0883BE84;
    case 164u: goto L_0883BE94;
    case 165u: goto L_0883BEA0;
    case 166u: goto L_0883BEB8;
    case 167u: goto L_0883BED8;
    case 168u: goto L_0883BEE8;
    case 169u: goto L_0883BEF4;
    case 170u: goto L_0883BF0C;
    case 171u: goto L_0883BF24;
    case 172u: goto L_0883BF30;
    case 173u: goto L_0883BF4C;
    case 174u: goto L_0883BFD8;
    case 175u: goto L_0883BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0883B000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8072));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0883B02Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B02Cu) goto L_0883B02C;
    return;
L_0883B02C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B09C;
      }
      goto L_0883B034;
    }
L_0883B034:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2248)));
    aot_gpr[31] = (0x0883B044u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 174u, 0x08872D04u>(ctx, &aot_mem) && ctx.pc == 0x0883B044u) goto L_0883B044;
    return;
L_0883B044:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883B05Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8060));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B05Cu) goto L_0883B05C;
    return;
L_0883B05C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883B068u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B068u) goto L_0883B068;
    return;
L_0883B068:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0883B078u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x0881C17Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B078u) goto L_0883B078;
    return;
L_0883B078:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883B090u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8048));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B090u) goto L_0883B090;
    return;
L_0883B090:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883B09Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883B09Cu) goto L_0883B09C;
    return;
L_0883B09C:
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
L_0883B0B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-8072));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0883B0E8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B0E8u) goto L_0883B0E8;
    return;
L_0883B0E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B260;
      }
      goto L_0883B0F0;
    }
L_0883B0F0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883B104u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8036));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B104u) goto L_0883B104;
    return;
L_0883B104:
    aot_gpr[31] = (0x0883B10Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B10Cu) goto L_0883B10C;
    return;
L_0883B10C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-7488), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883B12Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8024));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B12Cu) goto L_0883B12C;
    return;
L_0883B12C:
    aot_gpr[31] = (0x0883B134u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B134u) goto L_0883B134;
    return;
L_0883B134:
    aot_gpr[31] = (0x0883B13Cu);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x0881CA68u>(ctx, &aot_mem) && ctx.pc == 0x0883B13Cu) goto L_0883B13C;
    return;
L_0883B13C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25328), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2176), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25320), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883B16Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8012));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B16Cu) goto L_0883B16C;
    return;
L_0883B16C:
    aot_gpr[31] = (0x0883B174u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B174u) goto L_0883B174;
    return;
L_0883B174:
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[6] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[8];
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_0883B1A4;
      }
      goto L_0883B190;
    }
L_0883B190:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(25344), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25345), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0883B1B8;
      }
      goto L_0883B1A4;
    }
L_0883B1A4:
    aot_gpr[8] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(25344), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25345), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_0883B1B8;
L_0883B1B8:
    aot_gpr[31] = (0x0883B1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x0881C17Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B1C0u) goto L_0883B1C0;
    return;
L_0883B1C0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-8048));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883B1DCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B1DCu) goto L_0883B1DC;
    return;
L_0883B1DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883B1E8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x0883B1E8u) goto L_0883B1E8;
    return;
L_0883B1E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883B1F8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B1F8u) goto L_0883B1F8;
    return;
L_0883B1F8:
    aot_gpr[31] = (0x0883B200u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B200u) goto L_0883B200;
    return;
L_0883B200:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8436), aot_gpr[5]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0883B220u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-8060));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B220u) goto L_0883B220;
    return;
L_0883B220:
    aot_gpr[31] = (0x0883B228u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883B228u) goto L_0883B228;
    return;
L_0883B228:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0883B234u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x0883B234u) goto L_0883B234;
    return;
L_0883B234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2248), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0883B250u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0883B250u) goto L_0883B250;
    return;
L_0883B250:
    aot_gpr[4] = (aot_gpr[2] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25237), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0883B260;
L_0883B260:
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
L_0883B280:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23744), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B2A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0883B2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 65u, 0x08827960u>(ctx, &aot_mem) && ctx.pc == 0x0883B2B0u) goto L_0883B2B0;
    return;
L_0883B2B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B2BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0883B2E0u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883B2E0u) goto L_0883B2E0;
    return;
L_0883B2E0:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 7u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0883B384;
      }
      goto L_0883B2F8;
    }
L_0883B2F8:
    aot_gpr[8] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    aot_gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_0883B30C;
      }
      goto L_0883B304;
    }
L_0883B304:
    if (aot_gpr[5] != aot_gpr[7]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_0883B3FC;
    }
    goto L_0883B30C;
L_0883B30C:
    aot_gpr[5] = (16768u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (16960u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (49216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (16784u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16872u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (16968u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16864u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[7]);
      if (branch_taken) {
          goto L_0883B480;
      }
      goto L_0883B384;
    }
L_0883B384:
    aot_gpr[5] = (16824u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (16936u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (49216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (16840u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16872u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (16944u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16864u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[17]);
      if (branch_taken) {
          goto L_0883B480;
      }
      goto L_0883B3FC;
    }
L_0883B3FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (17023u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] | 23593u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (49294u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 47186u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16398u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] | 47186u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (16895u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 23593u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (17028u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] | 10486u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (16859u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 44564u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    goto L_0883B480;
L_0883B480:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0883B4C0u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883B4C0u) goto L_0883B4C0;
    return;
L_0883B4C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0883B4D8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 40u, 0x088D9238u>(ctx, &aot_mem) && ctx.pc == 0x0883B4D8u) goto L_0883B4D8;
    return;
L_0883B4D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0883B4EC;
      }
      goto L_0883B4E8;
    }
L_0883B4E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0883B4EC;
L_0883B4EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[2] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B508:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23752), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B528:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23760), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B548:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23776), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B568:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23784), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B588:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23792), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B5A8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23800), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B5C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0883B5F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7828));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B5F8u) goto L_0883B5F8;
    return;
L_0883B5F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883B604u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883B604u) goto L_0883B604;
    return;
L_0883B604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[17] = (2216u << 16u);
    if (aot_gpr[8] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_0883B63C;
    }
    goto L_0883B63C;
L_0883B63C:
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (0u | 0u);
    if (aot_gpr[9] != 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(44)));
        goto L_0883B64C;
    }
    goto L_0883B64C;
L_0883B64C:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2272), aot_gpr[6]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2276), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[8] & 255u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2280), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[31] = (0x0883B680u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883B680u) goto L_0883B680;
    return;
L_0883B680:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883B690u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0883B690u) goto L_0883B690;
    return;
L_0883B690:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1620)));
      if (branch_taken) {
          goto L_0883B6C4;
      }
      goto L_0883B69C;
    }
L_0883B69C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0883B6BCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883B6BCu) goto L_0883B6BC;
    return;
L_0883B6BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1616)));
      if (branch_taken) {
          goto L_0883B6D0;
      }
      goto L_0883B6C4;
    }
L_0883B6C4:
    aot_gpr[31] = (0x0883B6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0883B6CCu) goto L_0883B6CC;
    return;
L_0883B6CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1616)));
    goto L_0883B6D0;
L_0883B6D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1620), 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B704;
      }
      goto L_0883B6E4;
    }
L_0883B6E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0883B6FCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0883B6FCu) goto L_0883B6FC;
    return;
L_0883B6FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B70C;
      }
      goto L_0883B704;
    }
L_0883B704:
    aot_gpr[31] = (0x0883B70Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0883B70Cu) goto L_0883B70C;
    return;
L_0883B70C:
    aot_gpr[31] = (0x0883B714u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1616), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 122u, 0x08931B30u>(ctx, &aot_mem) && ctx.pc == 0x0883B714u) goto L_0883B714;
    return;
L_0883B714:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B728:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883B730:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[23]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    aot_gpr[23] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[31]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[9]);
      if (branch_taken) {
          goto L_0883BBB4;
      }
      goto L_0883B77C;
    }
L_0883B77C:
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
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(-4));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[18] = (aot_gpr[5] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[30] = (2218u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0883B7B0;
L_0883B7B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0883B7D8;
      }
      goto L_0883B7C8;
    }
L_0883B7C8:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B7D8;
      }
      goto L_0883B7D4;
    }
L_0883B7D4:
    aot_gpr[20] = (aot_gpr[5] | 0u);
    goto L_0883B7D8;
L_0883B7D8:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B7F4;
      }
      goto L_0883B7E4;
    }
L_0883B7E4:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0883B7F4;
      }
      goto L_0883B7F0;
    }
L_0883B7F0:
    aot_gpr[19] = (0u | 0u);
    goto L_0883B7F4;
L_0883B7F4:
    aot_gpr[19] = (aot_gpr[22] + aot_gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) < 0;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0883B808;
      }
      goto L_0883B800;
    }
L_0883B800:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B82C;
      }
      goto L_0883B808;
    }
L_0883B808:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) < 0;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0883B818;
      }
      goto L_0883B810;
    }
L_0883B810:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B82C;
      }
      goto L_0883B818;
    }
L_0883B818:
    if (static_cast<std::int32_t>(aot_gpr[22]) < 0) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
        goto L_0883BB14;
    }
    goto L_0883B820;
L_0883B820:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-7028)));
        goto L_0883BB14;
    }
    goto L_0883B82C;
L_0883B82C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1616)));
    aot_gpr[16] = (aot_gpr[19] << 5u);
    aot_gpr[6] = (aot_gpr[19] << 2u);
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883B898;
      }
      goto L_0883B850;
    }
L_0883B850:
    aot_gpr[31] = (0x0883B858u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x0883B858u) goto L_0883B858;
    return;
L_0883B858:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(45)));
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (0u | 5u);
        goto L_0883B878;
    }
    goto L_0883B878;
L_0883B878:
    aot_gpr[31] = (0x0883B880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B880u) goto L_0883B880;
    return;
L_0883B880:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1340)));
      if (branch_taken) {
          goto L_0883B8BC;
      }
      goto L_0883B898;
    }
L_0883B898:
    aot_gpr[31] = (0x0883B8A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 155u, 0x0881BD88u>(ctx, &aot_mem) && ctx.pc == 0x0883B8A0u) goto L_0883B8A0;
    return;
L_0883B8A0:
    aot_gpr[31] = (0x0883B8A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 16u, 0x0881C13Cu>(ctx, &aot_mem) && ctx.pc == 0x0883B8A8u) goto L_0883B8A8;
    return;
L_0883B8A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1340)));
    goto L_0883B8BC;
L_0883B8BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883B8D0;
      }
      goto L_0883B8C4;
    }
L_0883B8C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_0883B8D0;
L_0883B8D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1616)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_0883B940;
      }
      goto L_0883B8F0;
    }
L_0883B8F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1512)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_0883B908;
      }
      goto L_0883B8FC;
    }
L_0883B8FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_0883B908;
L_0883B908:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x0883B920u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1300)));
    if (rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 204u, 0x08921F00u>(ctx, &aot_mem) && ctx.pc == 0x0883B920u) goto L_0883B920;
    return;
L_0883B920:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883B92Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0883B92Cu) goto L_0883B92C;
    return;
L_0883B92C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1300)));
      if (branch_taken) {
          goto L_0883BA4C;
      }
      goto L_0883B940;
    }
L_0883B940:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883B960;
      }
      goto L_0883B950;
    }
L_0883B950:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0883B9FC;
      }
      goto L_0883B958;
    }
L_0883B958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B978;
      }
      goto L_0883B960;
    }
L_0883B960:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883B9A4;
      }
      goto L_0883B968;
    }
L_0883B968:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883B9D0;
      }
      goto L_0883B970;
    }
L_0883B970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883B9FC;
      }
      goto L_0883B978;
    }
L_0883B978:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1524)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_0883B990;
      }
      goto L_0883B984;
    }
L_0883B984:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_0883B990;
L_0883B990:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1300)));
      if (branch_taken) {
          goto L_0883BA24;
      }
      goto L_0883B9A4;
    }
L_0883B9A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1520)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_0883B9BC;
      }
      goto L_0883B9B0;
    }
L_0883B9B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_0883B9BC;
L_0883B9BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1300)));
      if (branch_taken) {
          goto L_0883BA24;
      }
      goto L_0883B9D0;
    }
L_0883B9D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1516)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_0883B9E8;
      }
      goto L_0883B9DC;
    }
L_0883B9DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_0883B9E8;
L_0883B9E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1300)));
      if (branch_taken) {
          goto L_0883BA24;
      }
      goto L_0883B9FC;
    }
L_0883B9FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1528)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_0883BA14;
      }
      goto L_0883BA08;
    }
L_0883BA08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_0883BA14;
L_0883BA14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1300)));
    goto L_0883BA24;
L_0883BA24:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0883BA30u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 204u, 0x08921F00u>(ctx, &aot_mem) && ctx.pc == 0x0883BA30u) goto L_0883BA30;
    return;
L_0883BA30:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883BA3Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0883BA3Cu) goto L_0883BA3C;
    return;
L_0883BA3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1300)));
    goto L_0883BA4C;
L_0883BA4C:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883BAF8;
      }
      goto L_0883BA54;
    }
L_0883BA54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1596)));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0883BAF8;
      }
      goto L_0883BA60;
    }
L_0883BA60:
    aot_gpr[6] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(23816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<33u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<84u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 1u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x0883BAE8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1300)));
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 155u, 0x08922B84u>(ctx, &aot_mem) && ctx.pc == 0x0883BAE8u) goto L_0883BAE8;
    return;
L_0883BAE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1300)));
    goto L_0883BAF8;
L_0883BAF8:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0883BB0Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 117u, 0x089228D4u>(ctx, &aot_mem) && ctx.pc == 0x0883BB0Cu) goto L_0883BB0C;
    return;
L_0883BB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BB80;
      }
      goto L_0883BB14;
    }
L_0883BB14:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_0883BB3C;
      }
      goto L_0883BB30;
    }
L_0883BB30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_0883BB3C;
L_0883BB3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[31] = (0x0883BB54u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1300)));
    if (rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 204u, 0x08921F00u>(ctx, &aot_mem) && ctx.pc == 0x0883BB54u) goto L_0883BB54;
    return;
L_0883BB54:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883BB60u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0883BB60u) goto L_0883BB60;
    return;
L_0883BB60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1300)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0883BB80u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 117u, 0x089228D4u>(ctx, &aot_mem) && ctx.pc == 0x0883BB80u) goto L_0883BB80;
    return;
L_0883BB80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0883B7B0;
      }
      goto L_0883BB94;
    }
L_0883BB94:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0883BBB4;
L_0883BBB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BBE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x0883BC24u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7816));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883BC24u) goto L_0883BC24;
    return;
L_0883BC24:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883BC30u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883BC30u) goto L_0883BC30;
    return;
L_0883BC30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883BC48u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7800));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883BC48u) goto L_0883BC48;
    return;
L_0883BC48:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0883BC54u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0883BC54u) goto L_0883BC54;
    return;
L_0883BC54:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0883BCDC;
      }
      goto L_0883BC5C;
    }
L_0883BC5C:
    aot_gpr[5] = (57629u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21350));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (57692u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12590));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (57623u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24642));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (57698u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(13909));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (57686u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(25146));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (57611u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(15211));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (57705u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(19992));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (57616u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4198));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (65288u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(2164));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_0883BCEC;
      }
      goto L_0883BCDC;
    }
L_0883BCDC:
    aot_gpr[5] = (57664u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16448));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_0883BCEC;
L_0883BCEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883BD08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0883BD38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7848));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0883BD38u) goto L_0883BD38;
    return;
L_0883BD38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1596)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7776));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-7756));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-7736));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (8192u << 16u);
      if (branch_taken) {
          goto L_0883BEE8;
      }
      goto L_0883BD78;
    }
L_0883BD78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883BDDC;
      }
      goto L_0883BD88;
    }
L_0883BD88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0883BE40;
      }
      goto L_0883BD90;
    }
L_0883BD90:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0883BD9Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BD9Cu) goto L_0883BD9C;
    return;
L_0883BD9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0883BDB4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BDB4u) goto L_0883BDB4;
    return;
L_0883BDB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0883BDCCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BDCCu) goto L_0883BDCC;
    return;
L_0883BDCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883BF30;
      }
      goto L_0883BDDC;
    }
L_0883BDDC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883BE94;
      }
      goto L_0883BDE4;
    }
L_0883BDE4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883BD90;
      }
      goto L_0883BDEC;
    }
L_0883BDEC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0883BDF8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BDF8u) goto L_0883BDF8;
    return;
L_0883BDF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0883BE10u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BE10u) goto L_0883BE10;
    return;
L_0883BE10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0883BE28u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BE28u) goto L_0883BE28;
    return;
L_0883BE28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883BF30;
      }
      goto L_0883BE40;
    }
L_0883BE40:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0883BE4Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BE4Cu) goto L_0883BE4C;
    return;
L_0883BE4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883BE6Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BE6Cu) goto L_0883BE6C;
    return;
L_0883BE6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0883BE84u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BE84u) goto L_0883BE84;
    return;
L_0883BE84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883BF30;
      }
      goto L_0883BE94;
    }
L_0883BE94:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0883BEA0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BEA0u) goto L_0883BEA0;
    return;
L_0883BEA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0883BEB8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BEB8u) goto L_0883BEB8;
    return;
L_0883BEB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883BED8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BED8u) goto L_0883BED8;
    return;
L_0883BED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0883BF30;
      }
      goto L_0883BEE8;
    }
L_0883BEE8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0883BEF4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BEF4u) goto L_0883BEF4;
    return;
L_0883BEF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0883BF0Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BF0Cu) goto L_0883BF0C;
    return;
L_0883BF0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[31] = (0x0883BF24u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883BF24u) goto L_0883BF24;
    return;
L_0883BF24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0883BF30;
L_0883BF30:
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
L_0883BF4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1596)));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(1616)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[30]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-7800));
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[30] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[20]);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[6]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-7848));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-7716));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-7688));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-7656));
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[22] = (8192u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 11u, 0x0883C0DCu>(ctx, &aot_mem); return;
      }
      goto L_0883BFD8;
    }
L_0883BFD8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 31u, 0x0883C220u>(ctx, &aot_mem); return;
      }
      goto L_0883BFE8;
    }
L_0883BFE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u | 60000u);
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (0u | 60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[17]);
    aot_gpr[6] = (ctx.lo);
    ctx.pc = 0x0883C000u; return;
}

void recomp_unit_0055(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0055_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_55(Runtime &runtime) {
    runtime.register_generated_unit(55u, 0x0883B000u, 4096u, &recomp_unit_0055, &recomp_unit_0055_entry);
    runtime.register_function(0x0883B000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B02Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B034u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B044u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B05Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B068u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B078u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B090u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B09Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B0B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B0E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B0F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B104u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B10Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B12Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B134u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B13Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B16Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B174u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B190u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B1A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B1B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B1C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B1DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B1E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B1F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B200u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B220u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B228u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B234u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B250u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B260u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B280u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B2A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B2B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B2BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B2E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B2F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B304u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B30Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B384u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B3FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B480u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B494u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B4C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B4D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B4E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B4ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B508u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B528u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B548u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B568u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B588u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B5A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B5C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B5F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B604u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B63Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B64Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B680u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B690u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B69Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B6BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B6C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B6CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B6D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B6E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B6FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B704u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B70Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B714u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B728u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B730u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B77Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B7B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B7C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B7D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B7D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B7E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B7F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B7F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B800u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B808u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B810u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B818u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B820u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B82Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B850u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B858u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B878u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B880u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B898u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B8A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B8A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B8BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B8C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B8D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B8F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B8FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B908u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B920u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B92Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B940u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B950u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B958u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B960u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B968u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B970u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B978u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B984u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B990u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B9A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B9B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B9BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B9D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B9DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B9E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883B9FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BA08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BA14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BA24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BA30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BA3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BA4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BA54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BA60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BAE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BAF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BB0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BB14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BB30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BB3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BB54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BB60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BB80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BB94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BBB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BBE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BC24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BC30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BC48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BC54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BC5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BCDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BCECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BD08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BD38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BD78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BD88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BD90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BD9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BDB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BDCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BDDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BDE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BDECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BDF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BE10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BE28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BE40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BE4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BE6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BE84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BE94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BEA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BEB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BED8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BEE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BEF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BF0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BF24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BF30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BF4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BFD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x0883BFE8u, &recomp_unit_0055, "recomp_unit_0055");
}
} // namespace psprecomp
