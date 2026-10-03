#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0174[1015] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 6, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0,
    0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 34, 0, 0,
    35, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 45, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74,
    0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92,
    93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117,
    118, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0,
    0, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0,
    0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0,
    153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177,
};
void recomp_unit_0174_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088B2004u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0174[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B2004;
    case 2u: goto L_088B2030;
    case 3u: goto L_088B2044;
    case 4u: goto L_088B2064;
    case 5u: goto L_088B206C;
    case 6u: goto L_088B2070;
    case 7u: goto L_088B2090;
    case 8u: goto L_088B2098;
    case 9u: goto L_088B20BC;
    case 10u: goto L_088B20E4;
    case 11u: goto L_088B20FC;
    case 12u: goto L_088B210C;
    case 13u: goto L_088B2118;
    case 14u: goto L_088B212C;
    case 15u: goto L_088B214C;
    case 16u: goto L_088B2158;
    case 17u: goto L_088B2164;
    case 18u: goto L_088B2170;
    case 19u: goto L_088B2190;
    case 20u: goto L_088B21B4;
    case 21u: goto L_088B21E0;
    case 22u: goto L_088B2200;
    case 23u: goto L_088B2214;
    case 24u: goto L_088B2230;
    case 25u: goto L_088B2248;
    case 26u: goto L_088B2254;
    case 27u: goto L_088B2274;
    case 28u: goto L_088B2288;
    case 29u: goto L_088B229C;
    case 30u: goto L_088B22B4;
    case 31u: goto L_088B22C4;
    case 32u: goto L_088B22D4;
    case 33u: goto L_088B22F4;
    case 34u: goto L_088B22F8;
    case 35u: goto L_088B2304;
    case 36u: goto L_088B2310;
    case 37u: goto L_088B2320;
    case 38u: goto L_088B2330;
    case 39u: goto L_088B2338;
    case 40u: goto L_088B233C;
    case 41u: goto L_088B234C;
    case 42u: goto L_088B235C;
    case 43u: goto L_088B23AC;
    case 44u: goto L_088B23B8;
    case 45u: goto L_088B23BC;
    case 46u: goto L_088B23C0;
    case 47u: goto L_088B23C8;
    case 48u: goto L_088B23D4;
    case 49u: goto L_088B23FC;
    case 50u: goto L_088B2408;
    case 51u: goto L_088B2444;
    case 52u: goto L_088B2458;
    case 53u: goto L_088B2484;
    case 54u: goto L_088B2494;
    case 55u: goto L_088B24A0;
    case 56u: goto L_088B24AC;
    case 57u: goto L_088B24BC;
    case 58u: goto L_088B24D0;
    case 59u: goto L_088B24E0;
    case 60u: goto L_088B2520;
    case 61u: goto L_088B252C;
    case 62u: goto L_088B2544;
    case 63u: goto L_088B2550;
    case 64u: goto L_088B2560;
    case 65u: goto L_088B259C;
    case 66u: goto L_088B25B0;
    case 67u: goto L_088B25F4;
    case 68u: goto L_088B260C;
    case 69u: goto L_088B2628;
    case 70u: goto L_088B2644;
    case 71u: goto L_088B2654;
    case 72u: goto L_088B265C;
    case 73u: goto L_088B2670;
    case 74u: goto L_088B2680;
    case 75u: goto L_088B2694;
    case 76u: goto L_088B269C;
    case 77u: goto L_088B26B0;
    case 78u: goto L_088B26C8;
    case 79u: goto L_088B26D0;
    case 80u: goto L_088B26E4;
    case 81u: goto L_088B26FC;
    case 82u: goto L_088B2714;
    case 83u: goto L_088B2724;
    case 84u: goto L_088B2794;
    case 85u: goto L_088B27A4;
    case 86u: goto L_088B27AC;
    case 87u: goto L_088B27CC;
    case 88u: goto L_088B2834;
    case 89u: goto L_088B2848;
    case 90u: goto L_088B2854;
    case 91u: goto L_088B2868;
    case 92u: goto L_088B2880;
    case 93u: goto L_088B2884;
    case 94u: goto L_088B2894;
    case 95u: goto L_088B28A4;
    case 96u: goto L_088B28B8;
    case 97u: goto L_088B28DC;
    case 98u: goto L_088B28F4;
    case 99u: goto L_088B290C;
    case 100u: goto L_088B2920;
    case 101u: goto L_088B293C;
    case 102u: goto L_088B2954;
    case 103u: goto L_088B2960;
    case 104u: goto L_088B2980;
    case 105u: goto L_088B2994;
    case 106u: goto L_088B29A4;
    case 107u: goto L_088B29B0;
    case 108u: goto L_088B29C4;
    case 109u: goto L_088B29DC;
    case 110u: goto L_088B29EC;
    case 111u: goto L_088B2A68;
    case 112u: goto L_088B2A80;
    case 113u: goto L_088B2AA0;
    case 114u: goto L_088B2AA8;
    case 115u: goto L_088B2AB4;
    case 116u: goto L_088B2AF4;
    case 117u: goto L_088B2B00;
    case 118u: goto L_088B2B04;
    case 119u: goto L_088B2B08;
    case 120u: goto L_088B2B10;
    case 121u: goto L_088B2B64;
    case 122u: goto L_088B2B7C;
    case 123u: goto L_088B2B88;
    case 124u: goto L_088B2BA0;
    case 125u: goto L_088B2BA8;
    case 126u: goto L_088B2BB4;
    case 127u: goto L_088B2BC0;
    case 128u: goto L_088B2BCC;
    case 129u: goto L_088B2BD8;
    case 130u: goto L_088B2BE4;
    case 131u: goto L_088B2C00;
    case 132u: goto L_088B2C30;
    case 133u: goto L_088B2C48;
    case 134u: goto L_088B2C6C;
    case 135u: goto L_088B2C94;
    case 136u: goto L_088B2CAC;
    case 137u: goto L_088B2CB8;
    case 138u: goto L_088B2CD0;
    case 139u: goto L_088B2CD8;
    case 140u: goto L_088B2CE4;
    case 141u: goto L_088B2CF0;
    case 142u: goto L_088B2CFC;
    case 143u: goto L_088B2D08;
    case 144u: goto L_088B2D14;
    case 145u: goto L_088B2D30;
    case 146u: goto L_088B2D60;
    case 147u: goto L_088B2D78;
    case 148u: goto L_088B2D9C;
    case 149u: goto L_088B2DB8;
    case 150u: goto L_088B2DC8;
    case 151u: goto L_088B2DE0;
    case 152u: goto L_088B2DEC;
    case 153u: goto L_088B2E04;
    case 154u: goto L_088B2E0C;
    case 155u: goto L_088B2E18;
    case 156u: goto L_088B2E24;
    case 157u: goto L_088B2E30;
    case 158u: goto L_088B2E3C;
    case 159u: goto L_088B2E48;
    case 160u: goto L_088B2E64;
    case 161u: goto L_088B2E94;
    case 162u: goto L_088B2EAC;
    case 163u: goto L_088B2ED0;
    case 164u: goto L_088B2EE4;
    case 165u: goto L_088B2EF8;
    case 166u: goto L_088B2F10;
    case 167u: goto L_088B2F1C;
    case 168u: goto L_088B2F34;
    case 169u: goto L_088B2F3C;
    case 170u: goto L_088B2F48;
    case 171u: goto L_088B2F54;
    case 172u: goto L_088B2F60;
    case 173u: goto L_088B2F6C;
    case 174u: goto L_088B2F78;
    case 175u: goto L_088B2F94;
    case 176u: goto L_088B2FC4;
    case 177u: goto L_088B2FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B2004:
    aot_gpr[10] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088B2030u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B2030u) goto L_088B2030;
    return;
L_088B2030:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088B2044u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x088B2044u) goto L_088B2044;
    return;
L_088B2044:
    aot_gpr[4] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[0] + aot_fpr[12];
    aot_gpr[17] = (0u | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[31] = (0x088B2064u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 128u, 0x089438FCu>(ctx, &aot_mem) && ctx.pc == 0x088B2064u) goto L_088B2064;
    return;
L_088B2064:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2070;
      }
      goto L_088B206C;
    }
L_088B206C:
    aot_gpr[17] = (0u | 1u);
    goto L_088B2070;
L_088B2070:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (16784u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B2090u);
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 57u, 0x088287E4u>(ctx, &aot_mem) && ctx.pc == 0x088B2090u) goto L_088B2090;
    return;
L_088B2090:
    aot_gpr[31] = (0x088B2098u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 65u, 0x088289B4u>(ctx, &aot_mem) && ctx.pc == 0x088B2098u) goto L_088B2098;
    return;
L_088B2098:
    aot_gpr[4] = (16512u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[0] + aot_fpr[12];
    aot_gpr[4] = (0u | 31u);
    aot_gpr[5] = (0u | 4u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[31] = (0x088B20BCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B20BCu) goto L_088B20BC;
    return;
L_088B20BC:
    aot_gpr[8] = (65409u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[10] = (0u | 1u);
    aot_gpr[31] = (0x088B20E4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-32640));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B20E4u) goto L_088B20E4;
    return;
L_088B20E4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B20FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B210Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B210Cu) goto L_088B210C;
    return;
L_088B210C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2118:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B212Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B212Cu) goto L_088B212C;
    return;
L_088B212C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B214C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2158:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2164:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2170:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27520), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2190:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B21B4u);
    aot_gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B21B4u) goto L_088B21B4;
    return;
L_088B21B4:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4048));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (65344u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16448));
    goto L_088B21E0;
L_088B21E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(196), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(160), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(172), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(184), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B21E0;
      }
      goto L_088B2200;
    }
L_088B2200:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2214:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B2274;
      }
      goto L_088B2230;
    }
L_088B2230:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4048));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B2248u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2248u) goto L_088B2248;
    return;
L_088B2248:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B2274;
      }
      goto L_088B2254;
    }
L_088B2254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B2274u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B2274u) goto L_088B2274;
    return;
L_088B2274:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2288:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B229Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B229Cu) goto L_088B229C;
    return;
L_088B229C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B22C4;
      }
      goto L_088B22B4;
    }
L_088B22B4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B234C;
      }
      goto L_088B22C4;
    }
L_088B22C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_088B22F4;
      }
      goto L_088B22D4;
    }
L_088B22D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4444)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(160)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(140)));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(172), aot_gpr[6]);
    goto L_088B22F4;
L_088B22F4:
    aot_gpr[5] = (0u | 0u);
    goto L_088B22F8;
L_088B22F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B233C;
      }
      goto L_088B2304;
    }
L_088B2304:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B233C;
      }
      goto L_088B2310;
    }
L_088B2310:
    aot_gpr[6] = (65328u << 16u);
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12415));
      if (branch_taken) {
          goto L_088B2338;
      }
      goto L_088B2320;
    }
L_088B2320:
    aot_gpr[6] = (65344u << 16u);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16448));
      if (branch_taken) {
          goto L_088B2338;
      }
      goto L_088B2330;
    }
L_088B2330:
    aot_gpr[6] = (65333u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32560));
    goto L_088B2338;
L_088B2338:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[6]);
    goto L_088B233C;
L_088B233C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B22F8;
      }
      goto L_088B234C;
    }
L_088B234C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B235C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B23BC;
      }
      goto L_088B23AC;
    }
L_088B23AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B23C0;
      }
      goto L_088B23B8;
    }
L_088B23B8:
    aot_gpr[4] = (0u | 1u);
    goto L_088B23BC;
L_088B23BC:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B23C0;
L_088B23C0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B25B0;
      }
      goto L_088B23C8;
    }
L_088B23C8:
    aot_gpr[4] = (0u | 38u);
    aot_gpr[31] = (0x088B23D4u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B23D4u) goto L_088B23D4;
    return;
L_088B23D4:
    aot_gpr[4] = (17384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (17036u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x088B23FCu);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B23FCu) goto L_088B23FC;
    return;
L_088B23FC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B2408u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B2408u) goto L_088B2408;
    return;
L_088B2408:
    aot_gpr[11] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[23] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[11]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (0u | 4u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088B2444u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-25408)));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088B2444u) goto L_088B2444;
    return;
L_088B2444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(152)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_088B25B0;
      }
      goto L_088B2458;
    }
L_088B2458:
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    aot_fpr[28] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[30] = (0u | 60u);
    aot_gpr[4] = (16800u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (17076u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088B2484;
L_088B2484:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(172)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    aot_gpr[4] = (0u | 60000u);
      if (branch_taken) {
          goto L_088B24BC;
      }
      goto L_088B2494;
    }
L_088B2494:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x088B24A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B24A0u) goto L_088B24A0;
    return;
L_088B24A0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088B24ACu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088B24ACu) goto L_088B24AC;
    return;
L_088B24AC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-25408)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_088B2550;
      }
      goto L_088B24BC;
    }
L_088B24BC:
    { const std::uint32_t dividend = aot_gpr[17]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_088B24E0;
      }
      goto L_088B24D0;
    }
L_088B24D0:
    aot_gpr[18] = (0u | 99u);
    aot_gpr[17] = (0u | 59u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088B2520;
      }
      goto L_088B24E0;
    }
L_088B24E0:
    { const std::uint32_t dividend = aot_gpr[17]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 1000u);
    aot_gpr[5] = (0u | 100u);
    aot_gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[17]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[30]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[17] = (ctx.hi);
    goto L_088B2520;
L_088B2520:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088B252Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B252Cu) goto L_088B252C;
    return;
L_088B252C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B2544u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B2544u) goto L_088B2544;
    return;
L_088B2544:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-25408)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(196)));
    goto L_088B2550;
L_088B2550:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[20]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    if (static_cast<std::int32_t>(aot_gpr[20]) < 0) {
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
        goto L_088B2560;
    }
    goto L_088B2560;
L_088B2560:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[16] = aot_fpr[15] + aot_fpr[26];
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[28]));
    aot_gpr[9] = (0u | 4u);
    aot_gpr[10] = (aot_gpr[21] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x088B259Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088B259Cu) goto L_088B259C;
    return;
L_088B259C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(152)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B2484;
      }
      goto L_088B25B0;
    }
L_088B25B0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[28] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B25F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B260Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B260Cu) goto L_088B260C;
    return;
L_088B260C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (65344u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), aot_gpr[6]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16448));
    goto L_088B2628;
L_088B2628:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B2628;
      }
      goto L_088B2644;
    }
L_088B2644:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2654:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B265C:
    aot_gpr[7] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(160), aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2670:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B2694;
      }
      goto L_088B2680;
    }
L_088B2680:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(172), aot_gpr[5]);
    goto L_088B2694;
L_088B2694:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B269C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B26C8;
      }
      goto L_088B26B0;
    }
L_088B26B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(172)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(184), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B26B0;
      }
      goto L_088B26C8;
    }
L_088B26C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B26D0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[11] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B27A4;
      }
      goto L_088B26E4;
    }
L_088B26E4:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 60000u);
    aot_gpr[7] = (0u | 10u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[5] = (0u | 1000u);
    aot_gpr[4] = (0u | 60u);
    goto L_088B26FC;
L_088B26FC:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(172)));
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[3] = (ctx.lo);
    aot_gpr[13] = (aot_gpr[3] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2724;
      }
      goto L_088B2714;
    }
L_088B2714:
    aot_gpr[3] = (92u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-29322));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
      if (branch_taken) {
          goto L_088B2794;
      }
      goto L_088B2724;
    }
L_088B2724:
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[13] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[12] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[13]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[13] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[12]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[12] = (aot_gpr[13] << 3u);
    aot_gpr[12] = (aot_gpr[13] + aot_gpr[12]);
    aot_gpr[12] = (aot_gpr[13] + aot_gpr[12]);
    aot_gpr[13] = (ctx.hi);
    aot_gpr[13] = (aot_gpr[13] << 3u);
    aot_gpr[14] = (0u + aot_gpr[13]);
    aot_gpr[13] = (aot_gpr[13] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[3] = (aot_gpr[14] - aot_gpr[13]);
    aot_gpr[13] = (aot_gpr[13] << 5u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[13]);
    aot_gpr[3] = (aot_gpr[12] + aot_gpr[3]);
    aot_gpr[12] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[12]);
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    goto L_088B2794;
L_088B2794:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[11] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B26FC;
      }
      goto L_088B27A4;
    }
L_088B27A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B27AC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B27CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 33u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (0u | 85u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (0u | 34u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[7] = (0u | 35u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[8] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[29] | 0u);
    goto L_088B2834;
L_088B2834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088B2848u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2848u) goto L_088B2848;
    return;
L_088B2848:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B2854u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2854u) goto L_088B2854;
    return;
L_088B2854:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088B2868u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x088B2868u) goto L_088B2868;
    return;
L_088B2868:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088B2884;
      }
      goto L_088B2880;
    }
L_088B2880:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088B2884;
L_088B2884:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B2834;
      }
      goto L_088B2894;
    }
L_088B2894:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088B28A4u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(29376));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B28A4u) goto L_088B28A4;
    return;
L_088B28A4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088B28B8u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 83u, 0x08919650u>(ctx, &aot_mem) && ctx.pc == 0x088B28B8u) goto L_088B28B8;
    return;
L_088B28B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B28DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B28F4u);
    aot_gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 78u, 0x088AACD0u>(ctx, &aot_mem) && ctx.pc == 0x088B28F4u) goto L_088B28F4;
    return;
L_088B28F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4000));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088B290Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B27CC;
L_088B290C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B2980;
      }
      goto L_088B293C;
    }
L_088B293C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4000));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088B2954u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 164u, 0x088A9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2954u) goto L_088B2954;
    return;
L_088B2954:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088B2980;
      }
      goto L_088B2960;
    }
L_088B2960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088B2980u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B2980u) goto L_088B2980;
    return;
L_088B2980:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2994:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088B29A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 26u, 0x088AB300u>(ctx, &aot_mem) && ctx.pc == 0x088B29A4u) goto L_088B29A4;
    return;
L_088B29A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B29B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088B29C4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 189u, 0x088A9E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088B29C4u) goto L_088B29C4;
    return;
L_088B29C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(148), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(152), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(156), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), 0u);
    aot_gpr[31] = (0x088B29DCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B27CC;
L_088B29DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B29EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[9] = (0u | 1000u);
    aot_gpr[10] = (0u | 100u);
    aot_gpr[11] = (0u | 60u);
    aot_gpr[2] = (0u | 60000u);
    aot_gpr[4] = (0u | 99u);
    aot_gpr[3] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[10] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[11]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[9] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_088B2A68;
    }
    goto L_088B2A68;
L_088B2A68:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 59u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_088B2A80;
    }
    goto L_088B2A80;
L_088B2A80:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 99u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 99u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_088B2AA8;
    }
    goto L_088B2AA0;
L_088B2AA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B2AA8;
      }
      goto L_088B2AA8;
    }
L_088B2AA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2AB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B2B04;
      }
      goto L_088B2AF4;
    }
L_088B2AF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088B2B08;
      }
      goto L_088B2B00;
    }
L_088B2B00:
    aot_gpr[4] = (0u | 1u);
    goto L_088B2B04;
L_088B2B04:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088B2B08;
L_088B2B08:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 1u, 0x088B3000u>(ctx, &aot_mem); return;
      }
      goto L_088B2B10;
    }
L_088B2B10:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(106))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (16800u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_fpr[26] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (16204u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(148)));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    aot_gpr[17] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[26] = aot_fpr[26] + aot_fpr[24];
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B2BA8;
      }
      goto L_088B2B64;
    }
L_088B2B64:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088B2B7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B29EC;
L_088B2B7C:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088B2B88u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2B88u) goto L_088B2B88;
    return;
L_088B2B88:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B2BA0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B2BA0u) goto L_088B2BA0;
    return;
L_088B2BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2BC0;
      }
      goto L_088B2BA8;
    }
L_088B2BA8:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x088B2BB4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2BB4u) goto L_088B2BB4;
    return;
L_088B2BB4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B2BC0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088B2BC0u) goto L_088B2BC0;
    return;
L_088B2BC0:
    aot_gpr[4] = (0u | 33u);
    aot_gpr[31] = (0x088B2BCCu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2BCCu) goto L_088B2BCC;
    return;
L_088B2BCC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B2BD8u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B2BD8u) goto L_088B2BD8;
    return;
L_088B2BD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[31] = (0x088B2BE4u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2BE4u) goto L_088B2BE4;
    return;
L_088B2BE4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088B2C00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2C00u) goto L_088B2C00;
    return;
L_088B2C00:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (0u | 4u);
    aot_gpr[31] = (0x088B2C30u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088B2C30u) goto L_088B2C30;
    return;
L_088B2C30:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[31] = (0x088B2C48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2C48u) goto L_088B2C48;
    return;
L_088B2C48:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B2C6Cu);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B2C6Cu) goto L_088B2C6C;
    return;
L_088B2C6C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(152)));
    aot_fpr[26] = aot_fpr[26] + aot_fpr[24];
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088B2CD8;
      }
      goto L_088B2C94;
    }
L_088B2C94:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088B2CACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B29EC;
L_088B2CAC:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088B2CB8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2CB8u) goto L_088B2CB8;
    return;
L_088B2CB8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B2CD0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B2CD0u) goto L_088B2CD0;
    return;
L_088B2CD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2CF0;
      }
      goto L_088B2CD8;
    }
L_088B2CD8:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x088B2CE4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2CE4u) goto L_088B2CE4;
    return;
L_088B2CE4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B2CF0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088B2CF0u) goto L_088B2CF0;
    return;
L_088B2CF0:
    aot_gpr[4] = (0u | 85u);
    aot_gpr[31] = (0x088B2CFCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2CFCu) goto L_088B2CFC;
    return;
L_088B2CFC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B2D08u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B2D08u) goto L_088B2D08;
    return;
L_088B2D08:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[31] = (0x088B2D14u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2D14u) goto L_088B2D14;
    return;
L_088B2D14:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088B2D30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2D30u) goto L_088B2D30;
    return;
L_088B2D30:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (0u | 4u);
    aot_gpr[31] = (0x088B2D60u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088B2D60u) goto L_088B2D60;
    return;
L_088B2D60:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[31] = (0x088B2D78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2D78u) goto L_088B2D78;
    return;
L_088B2D78:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B2D9Cu);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B2D9Cu) goto L_088B2D9C;
    return;
L_088B2D9C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_088B2EE4;
      }
      goto L_088B2DB8;
    }
L_088B2DB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[26] = aot_fpr[26] + aot_fpr[24];
      if (branch_taken) {
          goto L_088B2E0C;
      }
      goto L_088B2DC8;
    }
L_088B2DC8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088B2DE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B29EC;
L_088B2DE0:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088B2DECu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2DECu) goto L_088B2DEC;
    return;
L_088B2DEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B2E04u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B2E04u) goto L_088B2E04;
    return;
L_088B2E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2E24;
      }
      goto L_088B2E0C;
    }
L_088B2E0C:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x088B2E18u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2E18u) goto L_088B2E18;
    return;
L_088B2E18:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B2E24u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088B2E24u) goto L_088B2E24;
    return;
L_088B2E24:
    aot_gpr[4] = (0u | 34u);
    aot_gpr[31] = (0x088B2E30u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2E30u) goto L_088B2E30;
    return;
L_088B2E30:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B2E3Cu);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B2E3Cu) goto L_088B2E3C;
    return;
L_088B2E3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[31] = (0x088B2E48u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2E48u) goto L_088B2E48;
    return;
L_088B2E48:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088B2E64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2E64u) goto L_088B2E64;
    return;
L_088B2E64:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (0u | 4u);
    aot_gpr[31] = (0x088B2E94u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088B2E94u) goto L_088B2E94;
    return;
L_088B2E94:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[31] = (0x088B2EACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2EACu) goto L_088B2EAC;
    return;
L_088B2EAC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B2ED0u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem) && ctx.pc == 0x088B2ED0u) goto L_088B2ED0;
    return;
L_088B2ED0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(104))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
    goto L_088B2EE4;
L_088B2EE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2F3C;
      }
      goto L_088B2EF8;
    }
L_088B2EF8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x088B2F10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088B29EC;
L_088B2F10:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088B2F1Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2F1Cu) goto L_088B2F1C;
    return;
L_088B2F1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B2F34u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088B2F34u) goto L_088B2F34;
    return;
L_088B2F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2F54;
      }
      goto L_088B2F3C;
    }
L_088B2F3C:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x088B2F48u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2F48u) goto L_088B2F48;
    return;
L_088B2F48:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088B2F54u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088B2F54u) goto L_088B2F54;
    return;
L_088B2F54:
    aot_gpr[4] = (0u | 35u);
    aot_gpr[31] = (0x088B2F60u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088B2F60u) goto L_088B2F60;
    return;
L_088B2F60:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088B2F6Cu);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 34u, 0x088B0270u>(ctx, &aot_mem) && ctx.pc == 0x088B2F6Cu) goto L_088B2F6C;
    return;
L_088B2F6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[31] = (0x088B2F78u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 18u, 0x0883010Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2F78u) goto L_088B2F78;
    return;
L_088B2F78:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088B2F94u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2F94u) goto L_088B2F94;
    return;
L_088B2F94:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[5] = (0u | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (0u | 4u);
    aot_gpr[31] = (0x088B2FC4u);
    aot_gpr[10] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 129u, 0x08919A94u>(ctx, &aot_mem) && ctx.pc == 0x088B2FC4u) goto L_088B2FC4;
    return;
L_088B2FC4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[31] = (0x088B2FDCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 17u, 0x088300F0u>(ctx, &aot_mem) && ctx.pc == 0x088B2FDCu) goto L_088B2FDC;
    return;
L_088B2FDC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088B3000u);
    aot_gpr[10] = (0u | 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 50u, 0x088AA9F8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0174(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0174_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_174(Runtime &runtime) {
    runtime.register_generated_unit(174u, 0x088B2000u, 4096u, &recomp_unit_0174, &recomp_unit_0174_entry);
    runtime.register_function(0x088B2004u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2030u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2044u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2064u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B206Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2070u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2090u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2098u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B20BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B20E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B20FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B210Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2118u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B212Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B214Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2158u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2164u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2170u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2190u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B21B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B21E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2200u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2214u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2230u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2248u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2254u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2274u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2288u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B229Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B22B4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B22C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B22D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B22F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B22F8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2304u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2310u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2320u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2330u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2338u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B233Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B234Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B235Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B23ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B23B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B23BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B23C0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B23C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B23D4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B23FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2408u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2444u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2458u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2484u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2494u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B24A0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B24ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B24BCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B24D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B24E0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2520u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B252Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2544u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2550u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2560u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B259Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B25B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B25F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B260Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2628u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2644u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2654u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B265Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2670u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2680u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2694u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B269Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B26B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B26C8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B26D0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B26E4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B26FCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2714u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2724u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2794u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B27A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B27ACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B27CCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2834u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2848u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2854u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2868u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2880u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2884u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2894u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B28A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B28B8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B28DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B28F4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B290Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2920u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B293Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2954u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2960u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2980u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2994u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B29A4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B29B0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B29C4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B29DCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B29ECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2A68u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2A80u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2AA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2AA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2AB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2AF4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2B00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2B04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2B08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2B10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2B64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2B7Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2B88u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2BA0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2BA8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2BB4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2BC0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2BCCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2BD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2BE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2C00u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2C30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2C48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2C6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2C94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2CACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2CB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2CD0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2CD8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2CE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2CF0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2CFCu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2D08u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2D14u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2D30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2D60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2D78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2D9Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2DB8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2DC8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2DE0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2DECu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E04u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E0Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E18u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E24u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E30u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E64u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2E94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2EACu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2ED0u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2EE4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2EF8u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F10u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F1Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F34u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F3Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F48u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F54u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F60u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F6Cu, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F78u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2F94u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2FC4u, &recomp_unit_0174, "recomp_unit_0174");
    runtime.register_function(0x088B2FDCu, &recomp_unit_0174, "recomp_unit_0174");
}
} // namespace psprecomp
