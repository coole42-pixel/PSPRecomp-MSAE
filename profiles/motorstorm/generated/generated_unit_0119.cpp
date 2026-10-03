#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0119[1024] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67,
    0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0,
    0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0,
    132, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0,
    144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 151, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159,
    0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0,
    0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 187, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193,
};
void recomp_unit_0119_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0887B000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0119[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887B000;
    case 2u: goto L_0887B00C;
    case 3u: goto L_0887B014;
    case 4u: goto L_0887B02C;
    case 5u: goto L_0887B060;
    case 6u: goto L_0887B084;
    case 7u: goto L_0887B0A4;
    case 8u: goto L_0887B0C4;
    case 9u: goto L_0887B0E4;
    case 10u: goto L_0887B104;
    case 11u: goto L_0887B124;
    case 12u: goto L_0887B144;
    case 13u: goto L_0887B164;
    case 14u: goto L_0887B184;
    case 15u: goto L_0887B1A4;
    case 16u: goto L_0887B1C4;
    case 17u: goto L_0887B1E4;
    case 18u: goto L_0887B204;
    case 19u: goto L_0887B224;
    case 20u: goto L_0887B244;
    case 21u: goto L_0887B264;
    case 22u: goto L_0887B284;
    case 23u: goto L_0887B2A4;
    case 24u: goto L_0887B2C4;
    case 25u: goto L_0887B2E4;
    case 26u: goto L_0887B304;
    case 27u: goto L_0887B324;
    case 28u: goto L_0887B344;
    case 29u: goto L_0887B368;
    case 30u: goto L_0887B39C;
    case 31u: goto L_0887B3C4;
    case 32u: goto L_0887B3E4;
    case 33u: goto L_0887B404;
    case 34u: goto L_0887B424;
    case 35u: goto L_0887B444;
    case 36u: goto L_0887B464;
    case 37u: goto L_0887B484;
    case 38u: goto L_0887B4A4;
    case 39u: goto L_0887B4C4;
    case 40u: goto L_0887B4E4;
    case 41u: goto L_0887B504;
    case 42u: goto L_0887B524;
    case 43u: goto L_0887B544;
    case 44u: goto L_0887B564;
    case 45u: goto L_0887B584;
    case 46u: goto L_0887B5A4;
    case 47u: goto L_0887B5C4;
    case 48u: goto L_0887B5E4;
    case 49u: goto L_0887B604;
    case 50u: goto L_0887B624;
    case 51u: goto L_0887B644;
    case 52u: goto L_0887B664;
    case 53u: goto L_0887B684;
    case 54u: goto L_0887B6A8;
    case 55u: goto L_0887B6DC;
    case 56u: goto L_0887B700;
    case 57u: goto L_0887B724;
    case 58u: goto L_0887B758;
    case 59u: goto L_0887B780;
    case 60u: goto L_0887B7A4;
    case 61u: goto L_0887B7C8;
    case 62u: goto L_0887B7E4;
    case 63u: goto L_0887B808;
    case 64u: goto L_0887B828;
    case 65u: goto L_0887B838;
    case 66u: goto L_0887B86C;
    case 67u: goto L_0887B87C;
    case 68u: goto L_0887B888;
    case 69u: goto L_0887B890;
    case 70u: goto L_0887B898;
    case 71u: goto L_0887B8A0;
    case 72u: goto L_0887B8A8;
    case 73u: goto L_0887B8C8;
    case 74u: goto L_0887B8E4;
    case 75u: goto L_0887B8F0;
    case 76u: goto L_0887B90C;
    case 77u: goto L_0887B91C;
    case 78u: goto L_0887B94C;
    case 79u: goto L_0887B96C;
    case 80u: goto L_0887B97C;
    case 81u: goto L_0887B9A8;
    case 82u: goto L_0887B9B0;
    case 83u: goto L_0887B9BC;
    case 84u: goto L_0887B9D8;
    case 85u: goto L_0887B9F4;
    case 86u: goto L_0887BA00;
    case 87u: goto L_0887BA1C;
    case 88u: goto L_0887BA34;
    case 89u: goto L_0887BA3C;
    case 90u: goto L_0887BA44;
    case 91u: goto L_0887BA4C;
    case 92u: goto L_0887BA58;
    case 93u: goto L_0887BA64;
    case 94u: goto L_0887BA68;
    case 95u: goto L_0887BA8C;
    case 96u: goto L_0887BA94;
    case 97u: goto L_0887BA9C;
    case 98u: goto L_0887BAA4;
    case 99u: goto L_0887BAAC;
    case 100u: goto L_0887BAB4;
    case 101u: goto L_0887BAB8;
    case 102u: goto L_0887BAC0;
    case 103u: goto L_0887BAC8;
    case 104u: goto L_0887BAD0;
    case 105u: goto L_0887BAD8;
    case 106u: goto L_0887BAE0;
    case 107u: goto L_0887BAE8;
    case 108u: goto L_0887BAF4;
    case 109u: goto L_0887BB14;
    case 110u: goto L_0887BB20;
    case 111u: goto L_0887BB38;
    case 112u: goto L_0887BB40;
    case 113u: goto L_0887BB4C;
    case 114u: goto L_0887BB80;
    case 115u: goto L_0887BBA0;
    case 116u: goto L_0887BBAC;
    case 117u: goto L_0887BBB8;
    case 118u: goto L_0887BBC4;
    case 119u: goto L_0887BBCC;
    case 120u: goto L_0887BBD4;
    case 121u: goto L_0887BBDC;
    case 122u: goto L_0887BBE0;
    case 123u: goto L_0887BC04;
    case 124u: goto L_0887BC3C;
    case 125u: goto L_0887BC48;
    case 126u: goto L_0887BC50;
    case 127u: goto L_0887BC58;
    case 128u: goto L_0887BC60;
    case 129u: goto L_0887BC68;
    case 130u: goto L_0887BC70;
    case 131u: goto L_0887BC78;
    case 132u: goto L_0887BC80;
    case 133u: goto L_0887BC88;
    case 134u: goto L_0887BC94;
    case 135u: goto L_0887BCA4;
    case 136u: goto L_0887BCAC;
    case 137u: goto L_0887BCB8;
    case 138u: goto L_0887BCC0;
    case 139u: goto L_0887BCCC;
    case 140u: goto L_0887BCD4;
    case 141u: goto L_0887BCDC;
    case 142u: goto L_0887BCEC;
    case 143u: goto L_0887BCF4;
    case 144u: goto L_0887BD00;
    case 145u: goto L_0887BD10;
    case 146u: goto L_0887BD34;
    case 147u: goto L_0887BD40;
    case 148u: goto L_0887BD4C;
    case 149u: goto L_0887BD5C;
    case 150u: goto L_0887BD7C;
    case 151u: goto L_0887BD88;
    case 152u: goto L_0887BD8C;
    case 153u: goto L_0887BD98;
    case 154u: goto L_0887BDB0;
    case 155u: goto L_0887BDC8;
    case 156u: goto L_0887BDD0;
    case 157u: goto L_0887BDDC;
    case 158u: goto L_0887BDF4;
    case 159u: goto L_0887BDFC;
    case 160u: goto L_0887BE08;
    case 161u: goto L_0887BE10;
    case 162u: goto L_0887BE3C;
    case 163u: goto L_0887BE74;
    case 164u: goto L_0887BE80;
    case 165u: goto L_0887BE88;
    case 166u: goto L_0887BE90;
    case 167u: goto L_0887BE98;
    case 168u: goto L_0887BEB4;
    case 169u: goto L_0887BEBC;
    case 170u: goto L_0887BEC8;
    case 171u: goto L_0887BED0;
    case 172u: goto L_0887BED8;
    case 173u: goto L_0887BEE0;
    case 174u: goto L_0887BEF8;
    case 175u: goto L_0887BF04;
    case 176u: goto L_0887BF0C;
    case 177u: goto L_0887BF14;
    case 178u: goto L_0887BF1C;
    case 179u: goto L_0887BF24;
    case 180u: goto L_0887BF2C;
    case 181u: goto L_0887BF34;
    case 182u: goto L_0887BF44;
    case 183u: goto L_0887BF54;
    case 184u: goto L_0887BF60;
    case 185u: goto L_0887BF70;
    case 186u: goto L_0887BF80;
    case 187u: goto L_0887BF98;
    case 188u: goto L_0887BF9C;
    case 189u: goto L_0887BFBC;
    case 190u: goto L_0887BFCC;
    case 191u: goto L_0887BFD4;
    case 192u: goto L_0887BFF4;
    case 193u: goto L_0887BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887B000:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0887B014;
      }
      goto L_0887B00C;
    }
L_0887B00C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0887B014;
L_0887B014:
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
L_0887B02C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0887B060u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9280));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B060u) goto L_0887B060;
    return;
L_0887B060:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B084u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9300));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B084u) goto L_0887B084;
    return;
L_0887B084:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B0A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9316));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B0A4u) goto L_0887B0A4;
    return;
L_0887B0A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B0C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9336));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B0C4u) goto L_0887B0C4;
    return;
L_0887B0C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B0E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9360));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B0E4u) goto L_0887B0E4;
    return;
L_0887B0E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B104u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9380));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B104u) goto L_0887B104;
    return;
L_0887B104:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B124u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9404));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B124u) goto L_0887B124;
    return;
L_0887B124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B144u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9420));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B144u) goto L_0887B144;
    return;
L_0887B144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B164u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9440));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B164u) goto L_0887B164;
    return;
L_0887B164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B184u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9468));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B184u) goto L_0887B184;
    return;
L_0887B184:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B1A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9492));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B1A4u) goto L_0887B1A4;
    return;
L_0887B1A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B1C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9520));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B1C4u) goto L_0887B1C4;
    return;
L_0887B1C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B1E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9548));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B1E4u) goto L_0887B1E4;
    return;
L_0887B1E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B204u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9580));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B204u) goto L_0887B204;
    return;
L_0887B204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B224u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9608));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B224u) goto L_0887B224;
    return;
L_0887B224:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B244u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9640));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B244u) goto L_0887B244;
    return;
L_0887B244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B264u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B264u) goto L_0887B264;
    return;
L_0887B264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B284u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9684));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B284u) goto L_0887B284;
    return;
L_0887B284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B2A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9704));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B2A4u) goto L_0887B2A4;
    return;
L_0887B2A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B2C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9724));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B2C4u) goto L_0887B2C4;
    return;
L_0887B2C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B2E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9744));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B2E4u) goto L_0887B2E4;
    return;
L_0887B2E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B304u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9756));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B304u) goto L_0887B304;
    return;
L_0887B304:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B324u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B324u) goto L_0887B324;
    return;
L_0887B324:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B344u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9788));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B344u) goto L_0887B344;
    return;
L_0887B344:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
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
L_0887B368:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0887B39Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9280));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B39Cu) goto L_0887B39C;
    return;
L_0887B39C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B3C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9300));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B3C4u) goto L_0887B3C4;
    return;
L_0887B3C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B3E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9316));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B3E4u) goto L_0887B3E4;
    return;
L_0887B3E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B404u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9336));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B404u) goto L_0887B404;
    return;
L_0887B404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B424u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9360));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B424u) goto L_0887B424;
    return;
L_0887B424:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B444u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9380));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B444u) goto L_0887B444;
    return;
L_0887B444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B464u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9404));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B464u) goto L_0887B464;
    return;
L_0887B464:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B484u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9420));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B484u) goto L_0887B484;
    return;
L_0887B484:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B4A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9440));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B4A4u) goto L_0887B4A4;
    return;
L_0887B4A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B4C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9468));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B4C4u) goto L_0887B4C4;
    return;
L_0887B4C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B4E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9492));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B4E4u) goto L_0887B4E4;
    return;
L_0887B4E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B504u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9520));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B504u) goto L_0887B504;
    return;
L_0887B504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B524u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9548));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B524u) goto L_0887B524;
    return;
L_0887B524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B544u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9580));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B544u) goto L_0887B544;
    return;
L_0887B544:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B564u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9608));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B564u) goto L_0887B564;
    return;
L_0887B564:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B584u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9640));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B584u) goto L_0887B584;
    return;
L_0887B584:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B5A4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9668));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B5A4u) goto L_0887B5A4;
    return;
L_0887B5A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B5C4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9684));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B5C4u) goto L_0887B5C4;
    return;
L_0887B5C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B5E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9704));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B5E4u) goto L_0887B5E4;
    return;
L_0887B5E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B604u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9724));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B604u) goto L_0887B604;
    return;
L_0887B604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B624u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9744));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B624u) goto L_0887B624;
    return;
L_0887B624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B644u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9756));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B644u) goto L_0887B644;
    return;
L_0887B644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B664u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B664u) goto L_0887B664;
    return;
L_0887B664:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B684u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9788));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B684u) goto L_0887B684;
    return;
L_0887B684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
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
L_0887B6A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0887B6DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9804));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B6DCu) goto L_0887B6DC;
    return;
L_0887B6DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B700u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8964));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B700u) goto L_0887B700;
    return;
L_0887B700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
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
L_0887B724:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0887B758u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9804));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B758u) goto L_0887B758;
    return;
L_0887B758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887B780u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8964));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B780u) goto L_0887B780;
    return;
L_0887B780:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
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
L_0887B7A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0887B7C8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9824));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B7C8u) goto L_0887B7C8;
    return;
L_0887B7C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B7E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0887B808u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9824));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B808u) goto L_0887B808;
    return;
L_0887B808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B828:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0887BBE0;
      }
      goto L_0887B86C;
    }
L_0887B86C:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BBDC;
      }
      goto L_0887B87C;
    }
L_0887B87C:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887BA4C;
      }
      goto L_0887B888;
    }
L_0887B888:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0887BAC0;
      }
      goto L_0887B890;
    }
L_0887B890:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887BB40;
      }
      goto L_0887B898;
    }
L_0887B898:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887BB4C;
      }
      goto L_0887B8A0;
    }
L_0887B8A0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887BBCC;
      }
      goto L_0887B8A8;
    }
L_0887B8A8:
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[31] = (0x0887B8C8u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 75u, 0x088176B8u>(ctx, &aot_mem) && ctx.pc == 0x0887B8C8u) goto L_0887B8C8;
    return;
L_0887B8C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7340)));
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(11032)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-6928));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_0887B90C;
      }
      goto L_0887B8E4;
    }
L_0887B8E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(22292), aot_gpr[18]);
    aot_gpr[31] = (0x0887B8F0u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B8F0u) goto L_0887B8F0;
    return;
L_0887B8F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0887B90Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887B90Cu) goto L_0887B90C;
    return;
L_0887B90C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(22292)));
    aot_gpr[19] = (0u < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0887B94C;
      }
      goto L_0887B91C;
    }
L_0887B91C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0887B9A8;
      }
      goto L_0887B94C;
    }
L_0887B94C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[4] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_0887B97C;
      }
      goto L_0887B96C;
    }
L_0887B96C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0887B9A8;
      }
      goto L_0887B97C;
    }
L_0887B97C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0887B9A8;
L_0887B9A8:
    aot_gpr[31] = (0x0887B9B0u);
    aot_gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 70u, 0x0881764Cu>(ctx, &aot_mem) && ctx.pc == 0x0887B9B0u) goto L_0887B9B0;
    return;
L_0887B9B0:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0887B9D8;
      }
      goto L_0887B9BC;
    }
L_0887B9BC:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[20] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0887B9F4;
      }
      goto L_0887B9D8;
    }
L_0887B9D8:
    aot_gpr[4] = (16752u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[20] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16448u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(144), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(148), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0887B9F4;
L_0887B9F4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0887BA00u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0887BA00u) goto L_0887BA00;
    return;
L_0887BA00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(27496)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0887BA1Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 58u, 0x088B73F4u>(ctx, &aot_mem) && ctx.pc == 0x0887BA1Cu) goto L_0887BA1C;
    return;
L_0887BA1C:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5272)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0887BA34u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_0887B6A8;
L_0887BA34:
    aot_gpr[31] = (0x0887BA3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 148u, 0x0887ACA0u>(ctx, &aot_mem) && ctx.pc == 0x0887BA3Cu) goto L_0887BA3C;
    return;
L_0887BA3C:
    aot_gpr[31] = (0x0887BA44u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B368;
L_0887BA44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0887BBDC;
      }
      goto L_0887BA4C;
    }
L_0887BA4C:
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887BA68;
      }
      goto L_0887BA58;
    }
L_0887BA58:
    aot_gpr[5] = (0u | 6u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887BAB8;
      }
      goto L_0887BA64;
    }
L_0887BA64:
    aot_gpr[5] = (2218u << 16u);
    goto L_0887BA68;
L_0887BA68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8808), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5272)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BAA4;
      }
      goto L_0887BA8C;
    }
L_0887BA8C:
    aot_gpr[31] = (0x0887BA94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B6A8;
L_0887BA94:
    aot_gpr[31] = (0x0887BA9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 148u, 0x0887ACA0u>(ctx, &aot_mem) && ctx.pc == 0x0887BA9Cu) goto L_0887BA9C;
    return;
L_0887BA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BAAC;
      }
      goto L_0887BAA4;
    }
L_0887BAA4:
    aot_gpr[31] = (0x0887BAACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B724;
L_0887BAAC:
    aot_gpr[31] = (0x0887BAB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B368;
L_0887BAB4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0887BAB8;
L_0887BAB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BBDC;
      }
      goto L_0887BAC0;
    }
L_0887BAC0:
    aot_gpr[31] = (0x0887BAC8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B6A8;
L_0887BAC8:
    aot_gpr[31] = (0x0887BAD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 119u, 0x0887A96Cu>(ctx, &aot_mem) && ctx.pc == 0x0887BAD0u) goto L_0887BAD0;
    return;
L_0887BAD0:
    aot_gpr[31] = (0x0887BAD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B02C;
L_0887BAD8:
    aot_gpr[31] = (0x0887BAE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B7A4;
L_0887BAE0:
    aot_gpr[31] = (0x0887BAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 115u, 0x0882BF48u>(ctx, &aot_mem) && ctx.pc == 0x0887BAE8u) goto L_0887BAE8;
    return;
L_0887BAE8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0887BAF4u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0887BAF4u) goto L_0887BAF4;
    return;
L_0887BAF4:
    aot_gpr[8] = (16256u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 255u);
    aot_gpr[31] = (0x0887BB14u);
    aot_gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0887BB14u) goto L_0887BB14;
    return;
L_0887BB14:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0887BB20u);
    aot_gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x0887BB20u) goto L_0887BB20;
    return;
L_0887BB20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 255u);
    aot_gpr[31] = (0x0887BB38u);
    aot_gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0887BB38u) goto L_0887BB38;
    return;
L_0887BB38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0887BBDC;
      }
      goto L_0887BB40;
    }
L_0887BB40:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_0887BBDC;
      }
      goto L_0887BB4C;
    }
L_0887BB4C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8808), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5272)));
    aot_gpr[18] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(9840));
    aot_gpr[31] = (0x0887BB80u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x0887BB80u) goto L_0887BB80;
    return;
L_0887BB80:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[2] << 6u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2432));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0887BBA0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0887BBA0u) goto L_0887BBA0;
    return;
L_0887BBA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x0887BBACu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08811280u>(ctx, &aot_mem) && ctx.pc == 0x0887BBACu) goto L_0887BBAC;
    return;
L_0887BBAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BBC4;
      }
      goto L_0887BBB8;
    }
L_0887BBB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5492)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5492), aot_gpr[5]);
    goto L_0887BBC4;
L_0887BBC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0887BBDC;
      }
      goto L_0887BBCC;
    }
L_0887BBCC:
    aot_gpr[31] = (0x0887BBD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B828;
L_0887BBD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0887BBDC;
      }
      goto L_0887BBDC;
    }
L_0887BBDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    goto L_0887BBE0;
L_0887BBE0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BC04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887BC94;
      }
      goto L_0887BC3C;
    }
L_0887BC3C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887BC60;
      }
      goto L_0887BC48;
    }
L_0887BC48:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887BC88;
      }
      goto L_0887BC50;
    }
L_0887BC50:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC78;
      }
      goto L_0887BC58;
    }
L_0887BC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC88;
      }
      goto L_0887BC60;
    }
L_0887BC60:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887BC80;
      }
      goto L_0887BC68;
    }
L_0887BC68:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC88;
      }
      goto L_0887BC70;
    }
L_0887BC70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC88;
      }
      goto L_0887BC78;
    }
L_0887BC78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC88;
      }
      goto L_0887BC80;
    }
L_0887BC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BC88;
      }
      goto L_0887BC88;
    }
L_0887BC88:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0887BC94;
L_0887BC94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0887BCC0;
      }
      goto L_0887BCA4;
    }
L_0887BCA4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[5] = (16128u << 16u);
      if (branch_taken) {
          goto L_0887BE08;
      }
      goto L_0887BCAC;
    }
L_0887BCAC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_0887BCDC;
      }
      goto L_0887BCB8;
    }
L_0887BCB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BD00;
      }
      goto L_0887BCC0;
    }
L_0887BCC0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887BD98;
      }
      goto L_0887BCCC;
    }
L_0887BCCC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887BDDC;
      }
      goto L_0887BCD4;
    }
L_0887BCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BE08;
      }
      goto L_0887BCDC;
    }
L_0887BCDC:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BCF4;
      }
      goto L_0887BCEC;
    }
L_0887BCEC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_0887BCF4;
L_0887BCF4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7048)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0887BE10;
      }
      goto L_0887BD00;
    }
L_0887BD00:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0887BD8C;
      }
      goto L_0887BD10;
    }
L_0887BD10:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(48))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0887BD34u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 261u, 0x08874E50u>(ctx, &aot_mem) && ctx.pc == 0x0887BD34u) goto L_0887BD34;
    return;
L_0887BD34:
    aot_gpr[18] = (0u | 5u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[18];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0887BD4C;
      }
      goto L_0887BD40;
    }
L_0887BD40:
    aot_gpr[4] = (16448u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0887BD4C;
      }
      goto L_0887BD4C;
    }
L_0887BD4C:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BD8C;
      }
      goto L_0887BD5C;
    }
L_0887BD5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(48))))));
    aot_gpr[21] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[18] = (0u | 4u);
    aot_gpr[31] = (0x0887BD7Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 261u, 0x08874E50u>(ctx, &aot_mem) && ctx.pc == 0x0887BD7Cu) goto L_0887BD7C;
    return;
L_0887BD7C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == aot_gpr[21]) {
    aot_gpr[18] = (0u | 3u);
        goto L_0887BD88;
    }
    goto L_0887BD88;
L_0887BD88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    goto L_0887BD8C;
L_0887BD8C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7048)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0887BE10;
      }
      goto L_0887BD98;
    }
L_0887BD98:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BDD0;
      }
      goto L_0887BDB0;
    }
L_0887BDB0:
    aot_gpr[4] = (16448u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BDD0;
      }
      goto L_0887BDC8;
    }
L_0887BDC8:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_0887BDD0;
L_0887BDD0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7048)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0887BE10;
      }
      goto L_0887BDDC;
    }
L_0887BDDC:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887BDFC;
      }
      goto L_0887BDF4;
    }
L_0887BDF4:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_0887BDFC;
L_0887BDFC:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7048)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_0887BE10;
      }
      goto L_0887BE08;
    }
L_0887BE08:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7048)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0887BE10;
L_0887BE10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887BE3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 21u, 0x0887C120u>(ctx, &aot_mem); return;
      }
      goto L_0887BE74;
    }
L_0887BE74:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 4u, 0x0887C024u>(ctx, &aot_mem); return;
      }
      goto L_0887BE80;
    }
L_0887BE80:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 9u, 0x0887C090u>(ctx, &aot_mem); return;
      }
      goto L_0887BE88;
    }
L_0887BE88:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 17u, 0x0887C0F8u>(ctx, &aot_mem); return;
      }
      goto L_0887BE90;
    }
L_0887BE90:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 19u, 0x0887C110u>(ctx, &aot_mem); return;
      }
      goto L_0887BE98;
    }
L_0887BE98:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-6976));
      if (branch_taken) {
          goto L_0887BEC8;
      }
      goto L_0887BEB4;
    }
L_0887BEB4:
    aot_gpr[31] = (0x0887BEBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B7E4;
L_0887BEBC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(25))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 1u);
      if (branch_taken) {
          goto L_0887BED8;
      }
      goto L_0887BEC8;
    }
L_0887BEC8:
    aot_gpr[31] = (0x0887BED0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B7A4;
L_0887BED0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(25))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    goto L_0887BED8;
L_0887BED8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BF34;
      }
      goto L_0887BEE0;
    }
L_0887BEE0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    aot_gpr[31] = (0x0887BEF8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887BEF8u) goto L_0887BEF8;
    return;
L_0887BEF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BF1C;
      }
      goto L_0887BF04;
    }
L_0887BF04:
    aot_gpr[31] = (0x0887BF0Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 119u, 0x0887A96Cu>(ctx, &aot_mem) && ctx.pc == 0x0887BF0Cu) goto L_0887BF0C;
    return;
L_0887BF0C:
    aot_gpr[31] = (0x0887BF14u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B724;
L_0887BF14:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887BF34;
      }
      goto L_0887BF1C;
    }
L_0887BF1C:
    aot_gpr[31] = (0x0887BF24u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0887B6A8;
L_0887BF24:
    aot_gpr[31] = (0x0887BF2Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 148u, 0x0887ACA0u>(ctx, &aot_mem) && ctx.pc == 0x0887BF2Cu) goto L_0887BF2C;
    return;
L_0887BF2C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0887BF34;
L_0887BF34:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(7))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BF60;
      }
      goto L_0887BF44;
    }
L_0887BF44:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0887BF54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9848));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0887BF54u) goto L_0887BF54;
    return;
L_0887BF54:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_0887BF60;
L_0887BF60:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BFCC;
      }
      goto L_0887BF70;
    }
L_0887BF70:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887BF9C;
      }
      goto L_0887BF80;
    }
L_0887BF80:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(48))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0887BF98u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 237u, 0x08874CE0u>(ctx, &aot_mem) && ctx.pc == 0x0887BF98u) goto L_0887BF98;
    return;
L_0887BF98:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_0887BF9C;
L_0887BF9C:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8824));
    aot_gpr[31] = (0x0887BFBCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(9864));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887BFBCu) goto L_0887BFBC;
    return;
L_0887BFBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0887BFCC;
L_0887BFCC:
    aot_gpr[31] = (0x0887BFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 64u, 0x088175B8u>(ctx, &aot_mem) && ctx.pc == 0x0887BFD4u) goto L_0887BFD4;
    return;
L_0887BFD4:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0887BFF4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887BFF4u) goto L_0887BFF4;
    return;
L_0887BFF4:
    aot_gpr[31] = (0x0887BFFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5272)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 174u, 0x088B5F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0887BFFCu) goto L_0887BFFC;
    return;
L_0887BFFC:
    aot_gpr[31] = (0x0887C004u);
    aot_gpr[4] = (0u | 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 86u, 0x0882E5C4u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0119(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0119_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_119(Runtime &runtime) {
    runtime.register_generated_unit(119u, 0x0887B000u, 4096u, &recomp_unit_0119, &recomp_unit_0119_entry);
    runtime.register_function(0x0887B000u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B00Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B014u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B02Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B060u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B084u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B0A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B0C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B0E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B104u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B124u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B144u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B164u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B184u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B1A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B1C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B1E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B204u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B224u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B244u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B264u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B284u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B2A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B2C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B2E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B304u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B324u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B344u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B368u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B39Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B3C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B3E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B404u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B424u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B444u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B464u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B484u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B4A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B4C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B4E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B504u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B524u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B544u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B564u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B584u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B5A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B5C4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B5E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B604u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B624u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B644u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B664u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B684u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B6A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B6DCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B700u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B724u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B758u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B780u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B7A4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B7C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B7E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B808u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B828u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B838u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B86Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B87Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B888u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B890u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B898u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B8A0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B8A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B8C8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B8E4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B8F0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B90Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B91Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B94Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B96Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B97Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B9A8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B9B0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B9BCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B9D8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887B9F4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA64u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BA9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAD8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAE8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BAF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BB14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BB20u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BB38u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BB40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BB4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BB80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BBA0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BBACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BBB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BBC4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BBCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BBD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BBDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BBE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC48u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC50u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC58u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC68u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC78u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BC94u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCA4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCACu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCB8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCC0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCECu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BCF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD00u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD40u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD4Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD5Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD7Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD8Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BD98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BDB0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BDC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BDD0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BDDCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BDF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BDFCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BE08u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BE10u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BE3Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BE74u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BE80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BE88u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BE90u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BE98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BEB4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BEBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BEC8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BED0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BED8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BEE0u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BEF8u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF04u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF0Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF14u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF1Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF24u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF2Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF34u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF44u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF54u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF60u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF70u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF80u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF98u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BF9Cu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BFBCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BFCCu, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BFD4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BFF4u, &recomp_unit_0119, "recomp_unit_0119");
    runtime.register_function(0x0887BFFCu, &recomp_unit_0119, "recomp_unit_0119");
}
} // namespace psprecomp
