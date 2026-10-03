#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0295[1021] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 11,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 64,
    0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0,
    75, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81,
    0, 82, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0,
    97, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125,
    0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 133, 0, 134, 0, 135, 136, 0, 137, 0, 0, 0,
    0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0,
    0, 153, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 169, 170, 0,
    0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187,
    188, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 193, 0, 0, 194, 0, 0, 0, 0, 195, 196,
    0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0,
    0, 0, 0, 0, 203, 204, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0,
    0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 218, 219, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
};
void recomp_unit_0295_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0892B000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0295[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0892B000;
    case 2u: goto L_0892B024;
    case 3u: goto L_0892B02C;
    case 4u: goto L_0892B034;
    case 5u: goto L_0892B040;
    case 6u: goto L_0892B048;
    case 7u: goto L_0892B050;
    case 8u: goto L_0892B058;
    case 9u: goto L_0892B060;
    case 10u: goto L_0892B070;
    case 11u: goto L_0892B07C;
    case 12u: goto L_0892B088;
    case 13u: goto L_0892B09C;
    case 14u: goto L_0892B0B0;
    case 15u: goto L_0892B0C0;
    case 16u: goto L_0892B0D0;
    case 17u: goto L_0892B14C;
    case 18u: goto L_0892B150;
    case 19u: goto L_0892B158;
    case 20u: goto L_0892B17C;
    case 21u: goto L_0892B1A8;
    case 22u: goto L_0892B1B0;
    case 23u: goto L_0892B1C8;
    case 24u: goto L_0892B1E0;
    case 25u: goto L_0892B1F0;
    case 26u: goto L_0892B21C;
    case 27u: goto L_0892B22C;
    case 28u: goto L_0892B23C;
    case 29u: goto L_0892B244;
    case 30u: goto L_0892B24C;
    case 31u: goto L_0892B294;
    case 32u: goto L_0892B2AC;
    case 33u: goto L_0892B2C0;
    case 34u: goto L_0892B2C8;
    case 35u: goto L_0892B2E4;
    case 36u: goto L_0892B30C;
    case 37u: goto L_0892B314;
    case 38u: goto L_0892B32C;
    case 39u: goto L_0892B338;
    case 40u: goto L_0892B350;
    case 41u: goto L_0892B364;
    case 42u: goto L_0892B394;
    case 43u: goto L_0892B3C0;
    case 44u: goto L_0892B3C8;
    case 45u: goto L_0892B3E0;
    case 46u: goto L_0892B3F8;
    case 47u: goto L_0892B408;
    case 48u: goto L_0892B428;
    case 49u: goto L_0892B450;
    case 50u: goto L_0892B458;
    case 51u: goto L_0892B474;
    case 52u: goto L_0892B480;
    case 53u: goto L_0892B4BC;
    case 54u: goto L_0892B4CC;
    case 55u: goto L_0892B508;
    case 56u: goto L_0892B520;
    case 57u: goto L_0892B530;
    case 58u: goto L_0892B540;
    case 59u: goto L_0892B548;
    case 60u: goto L_0892B550;
    case 61u: goto L_0892B558;
    case 62u: goto L_0892B568;
    case 63u: goto L_0892B570;
    case 64u: goto L_0892B57C;
    case 65u: goto L_0892B584;
    case 66u: goto L_0892B594;
    case 67u: goto L_0892B5A0;
    case 68u: goto L_0892B5AC;
    case 69u: goto L_0892B5B4;
    case 70u: goto L_0892B5C4;
    case 71u: goto L_0892B5DC;
    case 72u: goto L_0892B5E4;
    case 73u: goto L_0892B5F0;
    case 74u: goto L_0892B5F8;
    case 75u: goto L_0892B600;
    case 76u: goto L_0892B604;
    case 77u: goto L_0892B650;
    case 78u: goto L_0892B654;
    case 79u: goto L_0892B660;
    case 80u: goto L_0892B66C;
    case 81u: goto L_0892B67C;
    case 82u: goto L_0892B684;
    case 83u: goto L_0892B688;
    case 84u: goto L_0892B694;
    case 85u: goto L_0892B6B0;
    case 86u: goto L_0892B6E8;
    case 87u: goto L_0892B6F0;
    case 88u: goto L_0892B704;
    case 89u: goto L_0892B718;
    case 90u: goto L_0892B724;
    case 91u: goto L_0892B730;
    case 92u: goto L_0892B744;
    case 93u: goto L_0892B750;
    case 94u: goto L_0892B760;
    case 95u: goto L_0892B76C;
    case 96u: goto L_0892B774;
    case 97u: goto L_0892B780;
    case 98u: goto L_0892B790;
    case 99u: goto L_0892B79C;
    case 100u: goto L_0892B7A4;
    case 101u: goto L_0892B7B0;
    case 102u: goto L_0892B7D0;
    case 103u: goto L_0892B7E0;
    case 104u: goto L_0892B81C;
    case 105u: goto L_0892B830;
    case 106u: goto L_0892B834;
    case 107u: goto L_0892B83C;
    case 108u: goto L_0892B858;
    case 109u: goto L_0892B860;
    case 110u: goto L_0892B880;
    case 111u: goto L_0892B894;
    case 112u: goto L_0892B8B4;
    case 113u: goto L_0892B8B8;
    case 114u: goto L_0892B8C4;
    case 115u: goto L_0892B8D4;
    case 116u: goto L_0892B8E0;
    case 117u: goto L_0892B8E8;
    case 118u: goto L_0892B920;
    case 119u: goto L_0892B940;
    case 120u: goto L_0892B950;
    case 121u: goto L_0892B95C;
    case 122u: goto L_0892B964;
    case 123u: goto L_0892B96C;
    case 124u: goto L_0892B974;
    case 125u: goto L_0892B97C;
    case 126u: goto L_0892B988;
    case 127u: goto L_0892B990;
    case 128u: goto L_0892B998;
    case 129u: goto L_0892B9AC;
    case 130u: goto L_0892B9B4;
    case 131u: goto L_0892B9BC;
    case 132u: goto L_0892B9D0;
    case 133u: goto L_0892B9D4;
    case 134u: goto L_0892B9DC;
    case 135u: goto L_0892B9E4;
    case 136u: goto L_0892B9E8;
    case 137u: goto L_0892B9F0;
    case 138u: goto L_0892BA0C;
    case 139u: goto L_0892BA1C;
    case 140u: goto L_0892BA24;
    case 141u: goto L_0892BA2C;
    case 142u: goto L_0892BA3C;
    case 143u: goto L_0892BA44;
    case 144u: goto L_0892BA4C;
    case 145u: goto L_0892BA58;
    case 146u: goto L_0892BA64;
    case 147u: goto L_0892BA98;
    case 148u: goto L_0892BAA8;
    case 149u: goto L_0892BAB0;
    case 150u: goto L_0892BAD4;
    case 151u: goto L_0892BADC;
    case 152u: goto L_0892BAEC;
    case 153u: goto L_0892BB04;
    case 154u: goto L_0892BB14;
    case 155u: goto L_0892BB1C;
    case 156u: goto L_0892BB24;
    case 157u: goto L_0892BB30;
    case 158u: goto L_0892BB3C;
    case 159u: goto L_0892BB70;
    case 160u: goto L_0892BB8C;
    case 161u: goto L_0892BB94;
    case 162u: goto L_0892BB9C;
    case 163u: goto L_0892BBC0;
    case 164u: goto L_0892BBC8;
    case 165u: goto L_0892BBD8;
    case 166u: goto L_0892BBE0;
    case 167u: goto L_0892BBE8;
    case 168u: goto L_0892BBF0;
    case 169u: goto L_0892BBF4;
    case 170u: goto L_0892BBF8;
    case 171u: goto L_0892BC0C;
    case 172u: goto L_0892BC1C;
    case 173u: goto L_0892BC28;
    case 174u: goto L_0892BC30;
    case 175u: goto L_0892BC34;
    case 176u: goto L_0892BC3C;
    case 177u: goto L_0892BCBC;
    case 178u: goto L_0892BCC4;
    case 179u: goto L_0892BCCC;
    case 180u: goto L_0892BCD4;
    case 181u: goto L_0892BCDC;
    case 182u: goto L_0892BD3C;
    case 183u: goto L_0892BD40;
    case 184u: goto L_0892BD4C;
    case 185u: goto L_0892BD54;
    case 186u: goto L_0892BD60;
    case 187u: goto L_0892BD7C;
    case 188u: goto L_0892BD80;
    case 189u: goto L_0892BD84;
    case 190u: goto L_0892BD90;
    case 191u: goto L_0892BDBC;
    case 192u: goto L_0892BDD4;
    case 193u: goto L_0892BDD8;
    case 194u: goto L_0892BDE4;
    case 195u: goto L_0892BDF8;
    case 196u: goto L_0892BDFC;
    case 197u: goto L_0892BE1C;
    case 198u: goto L_0892BE38;
    case 199u: goto L_0892BE48;
    case 200u: goto L_0892BE5C;
    case 201u: goto L_0892BE68;
    case 202u: goto L_0892BE74;
    case 203u: goto L_0892BE90;
    case 204u: goto L_0892BE94;
    case 205u: goto L_0892BE98;
    case 206u: goto L_0892BEAC;
    case 207u: goto L_0892BEDC;
    case 208u: goto L_0892BEF4;
    case 209u: goto L_0892BF04;
    case 210u: goto L_0892BF0C;
    case 211u: goto L_0892BF20;
    case 212u: goto L_0892BF38;
    case 213u: goto L_0892BF3C;
    case 214u: goto L_0892BF4C;
    case 215u: goto L_0892BF60;
    case 216u: goto L_0892BF6C;
    case 217u: goto L_0892BF78;
    case 218u: goto L_0892BF94;
    case 219u: goto L_0892BF98;
    case 220u: goto L_0892BF9C;
    case 221u: goto L_0892BFB0;
    case 222u: goto L_0892BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0892B000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892B088;
      }
      goto L_0892B024;
    }
L_0892B024:
    aot_gpr[31] = (0x0892B02Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 184u, 0x08929D64u>(ctx, &aot_mem) && ctx.pc == 0x0892B02Cu) goto L_0892B02C;
    return;
L_0892B02C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B070;
      }
      goto L_0892B034;
    }
L_0892B034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892B050;
      }
      goto L_0892B040;
    }
L_0892B040:
    aot_gpr[31] = (0x0892B048u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 198u, 0x0892AEF4u>(ctx, &aot_mem) && ctx.pc == 0x0892B048u) goto L_0892B048;
    return;
L_0892B048:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10804)));
      if (branch_taken) {
          goto L_0892B060;
      }
      goto L_0892B050;
    }
L_0892B050:
    aot_gpr[31] = (0x0892B058u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 209u, 0x0892AF90u>(ctx, &aot_mem) && ctx.pc == 0x0892B058u) goto L_0892B058;
    return;
L_0892B058:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-10804)));
    goto L_0892B060;
L_0892B060:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0892B088;
      }
      goto L_0892B070;
    }
L_0892B070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0892B07Cu);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B0ACu;
    return;
L_0892B07C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0892B088u);
    aot_gpr[5] = (0u | 16u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_0892B088:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B09C:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 73u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0892B14C;
      }
      goto L_0892B0B0;
    }
L_0892B0B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[7] = (0u | 68u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0892B14C;
      }
      goto L_0892B0C0;
    }
L_0892B0C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (0u | 51u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0892B14C;
      }
      goto L_0892B0D0;
    }
L_0892B0D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(9)));
    aot_gpr[8] = (aot_gpr[6] & 1u);
    aot_gpr[7] = (aot_gpr[7] & 127u);
    aot_gpr[8] = (aot_gpr[8] << 7u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7)));
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    aot_gpr[8] = (aot_gpr[9] & 3u);
    aot_gpr[6] = (aot_gpr[6] & 63u);
    aot_gpr[8] = (aot_gpr[8] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(6)));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[9]) >> 2u));
    aot_gpr[9] = (aot_gpr[4] & 7u);
    aot_gpr[8] = (aot_gpr[8] & 31u);
    aot_gpr[9] = (aot_gpr[9] << 5u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 15u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[8] = (aot_gpr[8] << 16u);
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[6] = (aot_gpr[6] << 8u);
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892B150;
      }
      goto L_0892B14C;
    }
L_0892B14C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_0892B150;
L_0892B150:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B158:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0892B1B0;
      }
      goto L_0892B17C;
    }
L_0892B17C:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[9] = (2195u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 2048u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x0892B1A8u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-20324));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B1A8u) goto L_0892B1A8;
    return;
L_0892B1A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B1E0;
      }
      goto L_0892B1B0;
    }
L_0892B1B0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 2048u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0892B1C8u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0892B1C8u) goto L_0892B1C8;
    return;
L_0892B1C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0892B1E0u);
    aot_gpr[8] = (0u | 2048u);
    goto L_0892B09C;
L_0892B1E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B1F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[16] = (32768u << 16u);
      if (branch_taken) {
          goto L_0892B244;
      }
      goto L_0892B21C;
    }
L_0892B21C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[7] = (0u | 65u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0892B244;
      }
      goto L_0892B22C;
    }
L_0892B22C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (0u | 71u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892B244;
      }
      goto L_0892B23C;
    }
L_0892B23C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_0892B244;
      }
      goto L_0892B244;
    }
L_0892B244:
    aot_gpr[31] = (0x0892B24Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    ctx.pc = 0x08A5AA0Cu;
    return;
L_0892B24C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0892B294u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    ctx.pc = 0x08A5A9FCu;
    return;
L_0892B294:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x0892B2ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5AA4Cu;
    return;
L_0892B2AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0892B2C0u);
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    ctx.pc = 0x08A5AA3Cu;
    return;
L_0892B2C0:
    aot_gpr[31] = (0x0892B2C8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 184u, 0x08929D64u>(ctx, &aot_mem) && ctx.pc == 0x0892B2C8u) goto L_0892B2C8;
    return;
L_0892B2C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0892B314;
      }
      goto L_0892B2E4;
    }
L_0892B2E4:
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (2195u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[17] | 0u);
    aot_gpr[11] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892B30Cu);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-20480));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B30Cu) goto L_0892B30C;
    return;
L_0892B30C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B350;
      }
      goto L_0892B314;
    }
L_0892B314:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0892B32Cu);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0892B32Cu) goto L_0892B32C;
    return;
L_0892B32C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x0892B338u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08A5AA04u;
    return;
L_0892B338:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0892B350u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0892B000;
L_0892B350:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B394;
    }
L_0892B394:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[9] = (2195u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 128u);
    aot_gpr[10] = (aot_gpr[16] | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x0892B3C0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-19984));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B3C0u) goto L_0892B3C0;
    return;
L_0892B3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B3F8;
      }
      goto L_0892B3C8;
    }
L_0892B3C8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 128u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0892B3E0u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0892B3E0u) goto L_0892B3E0;
    return;
L_0892B3E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0892B3F8u);
    aot_gpr[8] = (0u | 128u);
    goto L_0892B1F0;
L_0892B3F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B408:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0892B458;
      }
      goto L_0892B428;
    }
L_0892B428:
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (2195u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-20480));
    aot_gpr[31] = (0x0892B450u);
    aot_gpr[11] = (32768u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 4u, 0x0893413Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B450u) goto L_0892B450;
    return;
L_0892B450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B474;
      }
      goto L_0892B458;
    }
L_0892B458:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0892B474u);
    aot_gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0892B474u) goto L_0892B474;
    return;
L_0892B474:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B480:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x0892B4BCu);
    aot_gpr[4] = (0u | 256u);
    ctx.pc = 0x08A5AB6Cu;
    return;
L_0892B4BC:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-10836)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892B8D4;
      }
      goto L_0892B4CC;
    }
L_0892B4CC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8592));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8704));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8448));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10752));
    aot_gpr[4] = (17792u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[23] = (2218u << 16u);
    goto L_0892B508;
L_0892B508:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10808)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0892B520u);
    aot_gpr[6] = (0u | 33u);
    ctx.pc = 0x08A5B024u;
    return;
L_0892B520:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892B604;
      }
      goto L_0892B530;
    }
L_0892B530:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16144)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892B5A0;
      }
      goto L_0892B540;
    }
L_0892B540:
    aot_gpr[31] = (0x0892B548u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5568)));
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 188u, 0x08929D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B548u) goto L_0892B548;
    return;
L_0892B548:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5A0;
      }
      goto L_0892B550;
    }
L_0892B550:
    aot_gpr[31] = (0x0892B558u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5568)));
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 175u, 0x08929CD8u>(ctx, &aot_mem) && ctx.pc == 0x0892B558u) goto L_0892B558;
    return;
L_0892B558:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5568)));
    aot_gpr[16] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(84)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(48)));
    goto L_0892B568;
L_0892B568:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B594;
      }
      goto L_0892B570;
    }
L_0892B570:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0892B57Cu);
    aot_gpr[5] = (0u | 64u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_0892B57C:
    aot_gpr[31] = (0x0892B584u);
    aot_gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x0892B584u) goto L_0892B584;
    return;
L_0892B584:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5568)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0892B568;
      }
      goto L_0892B594;
    }
L_0892B594:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0892B5A0u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B0ACu;
    return;
L_0892B5A0:
    aot_gpr[4] = (0u | 32768u);
    aot_gpr[31] = (0x0892B5ACu);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5AB74u;
    return;
L_0892B5AC:
    aot_gpr[31] = (0x0892B5B4u);
    // nop
    ctx.pc = 0x08A5AB7Cu;
    return;
L_0892B5B4:
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-10808)));
    aot_gpr[31] = (0x0892B5C4u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_0892B5C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-10808)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 33u);
    aot_gpr[31] = (0x0892B5DCu);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B054u;
    return;
L_0892B5DC:
    aot_gpr[31] = (0x0892B5E4u);
    aot_gpr[4] = (0u | 256u);
    ctx.pc = 0x08A5AB6Cu;
    return;
L_0892B5E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-10808)));
    aot_gpr[31] = (0x0892B5F0u);
    aot_gpr[5] = (0u | 8u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_0892B5F0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B600;
      }
      goto L_0892B5F8;
    }
L_0892B5F8:
    aot_gpr[31] = (0x0892B600u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5568)));
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 180u, 0x08929D24u>(ctx, &aot_mem) && ctx.pc == 0x0892B600u) goto L_0892B600;
    return;
L_0892B600:
    aot_gpr[4] = (2219u << 16u);
    goto L_0892B604;
L_0892B604:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10800)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10788)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10800), 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-10788), 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10796)));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10784)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10780)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8480)));
    aot_gpr[18] = (0u | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_0892B67C;
      }
      goto L_0892B650;
    }
L_0892B650:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0892B654;
L_0892B654:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B66C;
      }
      goto L_0892B660;
    }
L_0892B660:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0892B66Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 74u, 0x08A49E84u>(ctx, &aot_mem) && ctx.pc == 0x0892B66Cu) goto L_0892B66C;
    return;
L_0892B66C:
    aot_gpr[16] = (aot_gpr[16] >> 1u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892B654;
      }
      goto L_0892B67C;
    }
L_0892B67C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892B718;
      }
      goto L_0892B684;
    }
L_0892B684:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0892B688;
L_0892B688:
    aot_gpr[4] = (aot_gpr[19] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B704;
      }
      goto L_0892B694;
    }
L_0892B694:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] & 1u);
    aot_gpr[7] = (aot_gpr[4] >> 16u);
    aot_gpr[6] = (aot_gpr[4] & 65535u);
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_0892B6F0;
      }
      goto L_0892B6B0;
    }
L_0892B6B0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(5756)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0892B6E8u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 70u, 0x08A49E20u>(ctx, &aot_mem) && ctx.pc == 0x0892B6E8u) goto L_0892B6E8;
    return;
L_0892B6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B704;
      }
      goto L_0892B6F0;
    }
L_0892B6F0:
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0892B704u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 70u, 0x08A49E20u>(ctx, &aot_mem) && ctx.pc == 0x0892B704u) goto L_0892B704;
    return;
L_0892B704:
    aot_gpr[19] = (aot_gpr[19] >> 1u);
    aot_gpr[20] = (aot_gpr[20] >> 1u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892B688;
      }
      goto L_0892B718;
    }
L_0892B718:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B730;
      }
      goto L_0892B724;
    }
L_0892B724:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0892B730u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 66u, 0x08A49DD4u>(ctx, &aot_mem) && ctx.pc == 0x0892B730u) goto L_0892B730;
    return;
L_0892B730:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10784), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B750;
      }
      goto L_0892B744;
    }
L_0892B744:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0892B750u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 66u, 0x08A49DD4u>(ctx, &aot_mem) && ctx.pc == 0x0892B750u) goto L_0892B750;
    return;
L_0892B750:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10780), 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892B780;
      }
      goto L_0892B760;
    }
L_0892B760:
    aot_gpr[4] = (aot_gpr[21] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B774;
      }
      goto L_0892B76C;
    }
L_0892B76C:
    aot_gpr[31] = (0x0892B774u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 63u, 0x08A49D98u>(ctx, &aot_mem) && ctx.pc == 0x0892B774u) goto L_0892B774;
    return;
L_0892B774:
    aot_gpr[21] = (aot_gpr[21] >> 1u);
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892B760;
      }
      goto L_0892B780;
    }
L_0892B780:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10792), 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892B7B0;
      }
      goto L_0892B790;
    }
L_0892B790:
    aot_gpr[4] = (aot_gpr[22] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B7A4;
      }
      goto L_0892B79C;
    }
L_0892B79C:
    aot_gpr[31] = (0x0892B7A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 60u, 0x08A49D5Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B7A4u) goto L_0892B7A4;
    return;
L_0892B7A4:
    aot_gpr[22] = (aot_gpr[22] >> 1u);
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892B790;
      }
      goto L_0892B7B0;
    }
L_0892B7B0:
    aot_gpr[20] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-10796), 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16144)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[18] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892B83C;
      }
      goto L_0892B7D0;
    }
L_0892B7D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5568)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0892B83C;
      }
      goto L_0892B7E0;
    }
L_0892B7E0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5372)));
    aot_gpr[4] = (2219u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16140)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16132)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16136)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0892B81Cu);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 40u, 0x08A49BF8u>(ctx, &aot_mem) && ctx.pc == 0x0892B81Cu) goto L_0892B81C;
    return;
L_0892B81C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16136)));
    aot_gpr[5] = (0u | 8192u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1024));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16136), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892B834;
      }
      goto L_0892B830;
    }
L_0892B830:
    aot_gpr[17] = (0u | 1u);
    goto L_0892B834;
L_0892B834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B858;
      }
      goto L_0892B83C;
    }
L_0892B83C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 10u);
    aot_gpr[4] = (0u + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[31] = (0x0892B858u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 35u, 0x08A49BA0u>(ctx, &aot_mem) && ctx.pc == 0x0892B858u) goto L_0892B858;
    return;
L_0892B858:
    aot_gpr[31] = (0x0892B860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 86u, 0x08A49F9Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B860u) goto L_0892B860;
    return;
L_0892B860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-10796)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[2] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-8472), aot_gpr[4]);
    aot_gpr[4] = (0u | 32768u);
    aot_gpr[31] = (0x0892B880u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5AB74u;
    return;
L_0892B880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B8C4;
      }
      goto L_0892B894;
    }
L_0892B894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16132)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16136), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16132), aot_gpr[4]);
    aot_gpr[5] = (0u | 24576u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(5568)));
      if (branch_taken) {
          goto L_0892B8B8;
      }
      goto L_0892B8B4;
    }
L_0892B8B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16132), 0u);
    goto L_0892B8B8;
L_0892B8B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0892B8C4u);
    aot_gpr[5] = (0u | 32u);
    ctx.pc = 0x08A5AFD4u;
    return;
L_0892B8C4:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-10836)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B508;
      }
      goto L_0892B8D4;
    }
L_0892B8D4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0892B8E0u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5AB74u;
    return;
L_0892B8E0:
    aot_gpr[31] = (0x0892B8E8u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5B0E4u;
    return;
L_0892B8E8:
    aot_gpr[2] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[31]);
    aot_gpr[31] = (0x0892B940u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x0892B940u) goto L_0892B940;
    return;
L_0892B940:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBF4;
      }
      goto L_0892B950;
    }
L_0892B950:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0892B9F0;
      }
      goto L_0892B95C;
    }
L_0892B95C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0892BA2C;
      }
      goto L_0892B964;
    }
L_0892B964:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892BADC;
      }
      goto L_0892B96C;
    }
L_0892B96C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0892BB04;
      }
      goto L_0892B974;
    }
L_0892B974:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0892BBC8;
      }
      goto L_0892B97C;
    }
L_0892B97C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0892B9BC;
      }
      goto L_0892B988;
    }
L_0892B988:
    aot_gpr[31] = (0x0892B990u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AA4Cu;
    return;
L_0892B990:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892B9B4;
      }
      goto L_0892B998;
    }
L_0892B998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x0892B9ACu);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08A5AA3Cu;
    return;
L_0892B9AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B9D4;
      }
      goto L_0892B9B4;
    }
L_0892B9B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0892BBF8;
      }
      goto L_0892B9BC;
    }
L_0892B9BC:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x0892B9D0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AA5Cu;
    return;
L_0892B9D0:
    aot_gpr[17] = (0u | 1u);
    goto L_0892B9D4;
L_0892B9D4:
    aot_gpr[31] = (0x0892B9DCu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 28u, 0x08933124u>(ctx, &aot_mem) && ctx.pc == 0x0892B9DCu) goto L_0892B9DC;
    return;
L_0892B9DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B9E8;
      }
      goto L_0892B9E4;
    }
L_0892B9E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    goto L_0892B9E8;
L_0892B9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBF4;
      }
      goto L_0892B9F0;
    }
L_0892B9F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[31] = (0x0892BA0Cu);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B244u;
    return;
L_0892BA0C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0892BA24;
      }
      goto L_0892BA1C;
    }
L_0892BA1C:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_0892BA24;
L_0892BA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBF4;
      }
      goto L_0892BA2C;
    }
L_0892BA2C:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(-29208)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BA4C;
      }
      goto L_0892BA3C;
    }
L_0892BA3C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_0892BA44;
L_0892BA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBF4;
      }
      goto L_0892BA4C;
    }
L_0892BA4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x0892BA58u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B2A4u;
    return;
L_0892BA58:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA8;
      }
      goto L_0892BA64;
    }
L_0892BA64:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25860)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25864)));
    aot_gpr[5] = (aot_gpr[7] ^ aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[10]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA8;
      }
      goto L_0892BA98;
    }
L_0892BA98:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0892BA44;
      }
      goto L_0892BAA8;
    }
L_0892BAA8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892BA44;
      }
      goto L_0892BAB0;
    }
L_0892BAB0:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BA44;
      }
      goto L_0892BAD4;
    }
L_0892BAD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0892BBF8;
      }
      goto L_0892BADC;
    }
L_0892BADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (0x0892BAECu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.pc = 0x08A5B264u;
    return;
L_0892BAEC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892BBF4;
      }
      goto L_0892BB04;
    }
L_0892BB04:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(-29208)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB24;
      }
      goto L_0892BB14;
    }
L_0892BB14:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    goto L_0892BB1C;
L_0892BB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBF4;
      }
      goto L_0892BB24;
    }
L_0892BB24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (0x0892BB30u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B2A4u;
    return;
L_0892BB30:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB94;
      }
      goto L_0892BB3C;
    }
L_0892BB3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25860)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-25864)));
    aot_gpr[7] = (aot_gpr[5] ^ aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[10]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB94;
      }
      goto L_0892BB70;
    }
L_0892BB70:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[31] = (0x0892BB8Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x0892BB8Cu) goto L_0892BB8C;
    return;
L_0892BB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB1C;
      }
      goto L_0892BB94;
    }
L_0892BB94:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892BB1C;
      }
      goto L_0892BB9C;
    }
L_0892BB9C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BB1C;
      }
      goto L_0892BBC0;
    }
L_0892BBC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0892BBF8;
      }
      goto L_0892BBC8;
    }
L_0892BBC8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0892BBE8;
      }
      goto L_0892BBD8;
    }
L_0892BBD8:
    aot_gpr[31] = (0x0892BBE0u);
    // nop
    ctx.pc = 0x08A5AA04u;
    return;
L_0892BBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BBF0;
      }
      goto L_0892BBE8;
    }
L_0892BBE8:
    aot_gpr[31] = (0x0892BBF0u);
    // nop
    ctx.pc = 0x08A5AA7Cu;
    return;
L_0892BBF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    goto L_0892BBF4;
L_0892BBF4:
    aot_gpr[2] = (0u | 1u);
    goto L_0892BBF8;
L_0892BBF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BC0C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892BC30;
      }
      goto L_0892BC1C;
    }
L_0892BC1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892BC30;
      }
      goto L_0892BC28;
    }
L_0892BC28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0892BC34;
      }
      goto L_0892BC30;
    }
L_0892BC30:
    aot_gpr[2] = (0u | 0u);
    goto L_0892BC34;
L_0892BC34:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BC3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[11] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(-6504));
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[2] = (aot_gpr[23] + static_cast<std::uint32_t>(5392));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[9]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(5376));
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(-7472));
    aot_gpr[20] = (aot_gpr[21] + static_cast<std::uint32_t>(5568));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    aot_gpr[31] = (0x0892BCBCu);
    aot_gpr[4] = (0u | 768u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 69u, 0x0893339Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BCBCu) goto L_0892BCBC;
    return;
L_0892BCBC:
    aot_gpr[31] = (0x0892BCC4u);
    aot_gpr[4] = (0u | 769u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 69u, 0x0893339Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BCC4u) goto L_0892BCC4;
    return;
L_0892BCC4:
    aot_gpr[31] = (0x0892BCCCu);
    aot_gpr[4] = (0u | 770u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 69u, 0x0893339Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BCCCu) goto L_0892BCCC;
    return;
L_0892BCCC:
    aot_gpr[31] = (0x0892BCD4u);
    aot_gpr[4] = (0u | 772u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 69u, 0x0893339Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BCD4u) goto L_0892BCD4;
    return;
L_0892BCD4:
    aot_gpr[31] = (0x0892BCDCu);
    aot_gpr[4] = (0u | 771u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 69u, 0x0893339Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BCDCu) goto L_0892BCDC;
    return;
L_0892BCDC:
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(5756), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-10832), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5372), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-10828), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-10824), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-10820), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0892BD4C;
      }
      goto L_0892BD3C;
    }
L_0892BD3C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892BD40;
L_0892BD40:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892BD40;
      }
      goto L_0892BD4C;
    }
L_0892BD4C:
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5376), 0u);
        goto L_0892BD84;
    }
    goto L_0892BD54;
L_0892BD54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5376)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892BD80;
      }
      goto L_0892BD60;
    }
L_0892BD60:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892BD7Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BD7Cu) goto L_0892BD7C;
    return;
L_0892BD7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5376), 0u);
    goto L_0892BD80;
L_0892BD80:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5376), 0u);
    goto L_0892BD84;
L_0892BD84:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0892BDE4;
      }
      goto L_0892BD90;
    }
L_0892BD90:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5376), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[30] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[5]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0892BDBCu);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BDBCu) goto L_0892BDBC;
    return;
L_0892BDBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5376), aot_gpr[2]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BDE4;
      }
      goto L_0892BDD4;
    }
L_0892BDD4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892BDD8;
L_0892BDD8:
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[30] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892BDD8;
      }
      goto L_0892BDE4;
    }
L_0892BDE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[30] = (2218u << 16u);
      if (branch_taken) {
          goto L_0892BE1C;
      }
      goto L_0892BDF8;
    }
L_0892BDF8:
    aot_gpr[5] = (0u | 0u);
    goto L_0892BDFC;
L_0892BDFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5376)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892BDFC;
      }
      goto L_0892BE1C;
    }
L_0892BE1C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892BE5C;
      }
      goto L_0892BE38;
    }
L_0892BE38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0892BE48u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 58u, 0x08929414u>(ctx, &aot_mem) && ctx.pc == 0x0892BE48u) goto L_0892BE48;
    return;
L_0892BE48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892BE38;
      }
      goto L_0892BE5C;
    }
L_0892BE5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), 0u);
        goto L_0892BE98;
    }
    goto L_0892BE68;
L_0892BE68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7472)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892BE94;
      }
      goto L_0892BE74;
    }
L_0892BE74:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892BE90u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BE90u) goto L_0892BE90;
    return;
L_0892BE90:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), 0u);
    goto L_0892BE94;
L_0892BE94:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), 0u);
    goto L_0892BE98;
L_0892BE98:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF20;
      }
      goto L_0892BEAC;
    }
L_0892BEAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[22] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0892BEDCu);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BEDCu) goto L_0892BEDC;
    return;
L_0892BEDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0892BF20;
      }
      goto L_0892BEF4;
    }
L_0892BEF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF0C;
      }
      goto L_0892BF04;
    }
L_0892BF04:
    aot_gpr[31] = (0x0892BF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 57u, 0x089293D0u>(ctx, &aot_mem) && ctx.pc == 0x0892BF0Cu) goto L_0892BF0C;
    return;
L_0892BF0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892BEF4;
      }
      goto L_0892BF20;
    }
L_0892BF20:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29308)));
      if (branch_taken) {
          goto L_0892BF60;
      }
      goto L_0892BF38;
    }
L_0892BF38:
    aot_gpr[16] = (0u | 0u);
    goto L_0892BF3C;
L_0892BF3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5568)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x0892BF4Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 85u, 0x0892960Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BF4Cu) goto L_0892BF4C;
    return;
L_0892BF4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0892BF3C;
      }
      goto L_0892BF60;
    }
L_0892BF60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), 0u);
        goto L_0892BF9C;
    }
    goto L_0892BF6C;
L_0892BF6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5568)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892BF98;
      }
      goto L_0892BF78;
    }
L_0892BF78:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892BF94u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BF94u) goto L_0892BF94;
    return;
L_0892BF94:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), 0u);
    goto L_0892BF98;
L_0892BF98:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), 0u);
    goto L_0892BF9C;
L_0892BF9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 5u, 0x0892C034u>(ctx, &aot_mem); return;
      }
      goto L_0892BFB0;
    }
L_0892BFB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[18] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0892BFF0u);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892BFF0u) goto L_0892BFF0;
    return;
L_0892BFF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    ctx.pc = 0x0892C000u; return;
}

void recomp_unit_0295(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0295_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_295(Runtime &runtime) {
    runtime.register_generated_unit(295u, 0x0892B000u, 4096u, &recomp_unit_0295, &recomp_unit_0295_entry);
    runtime.register_function(0x0892B000u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B024u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B02Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B034u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B040u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B048u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B050u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B058u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B060u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B070u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B07Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B088u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B09Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B0B0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B0C0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B0D0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B14Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B150u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B158u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B17Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B1A8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B1B0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B1C8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B1E0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B1F0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B21Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B22Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B23Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B244u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B24Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B294u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B2ACu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B2C0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B2C8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B2E4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B30Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B314u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B32Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B338u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B350u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B364u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B394u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B3C0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B3C8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B3E0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B3F8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B408u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B428u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B450u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B458u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B474u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B480u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B4BCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B4CCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B508u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B520u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B530u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B540u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B548u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B550u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B558u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B568u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B570u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B57Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B584u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B594u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B5A0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B5ACu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B5B4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B5C4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B5DCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B5E4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B5F0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B5F8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B600u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B604u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B650u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B654u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B660u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B66Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B67Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B684u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B688u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B694u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B6B0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B6E8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B6F0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B704u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B718u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B724u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B730u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B744u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B750u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B760u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B76Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B774u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B780u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B790u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B79Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B7A4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B7B0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B7D0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B7E0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B81Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B830u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B834u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B83Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B858u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B860u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B880u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B894u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B8B4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B8B8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B8C4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B8D4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B8E0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B8E8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B920u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B940u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B950u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B95Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B964u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B96Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B974u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B97Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B988u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B990u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B998u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9ACu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9B4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9BCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9D0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9D4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9DCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9E4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9E8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892B9F0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA0Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA1Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA24u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA2Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA3Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA44u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA4Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA58u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA64u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BA98u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BAA8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BAB0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BAD4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BADCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BAECu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB04u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB14u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB1Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB24u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB30u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB3Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB70u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB8Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB94u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BB9Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BBC0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BBC8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BBD8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BBE0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BBE8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BBF0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BBF4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BBF8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BC0Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BC1Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BC28u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BC30u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BC34u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BC3Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BCBCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BCC4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BCCCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BCD4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BCDCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD3Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD40u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD4Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD54u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD60u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD7Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD80u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD84u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BD90u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BDBCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BDD4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BDD8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BDE4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BDF8u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BDFCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE1Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE38u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE48u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE5Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE68u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE74u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE90u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE94u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BE98u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BEACu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BEDCu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BEF4u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF04u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF0Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF20u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF38u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF3Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF4Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF60u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF6Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF78u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF94u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF98u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BF9Cu, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BFB0u, &recomp_unit_0295, "recomp_unit_0295");
    runtime.register_function(0x0892BFF0u, &recomp_unit_0295, "recomp_unit_0295");
}
} // namespace psprecomp
