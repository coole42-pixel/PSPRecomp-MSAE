#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0454[1015] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13,
    0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 29, 30, 0, 0, 31,
    32, 0, 0, 33, 0, 0, 0, 34, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0,
    42, 0, 43, 0, 0, 44, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 51, 0, 52,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0,
    62, 0, 63, 0, 0, 64, 0, 0, 65, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0,
    70, 0, 71, 0, 0, 0, 72, 0, 0, 73, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 78, 0, 79, 80, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0,
    0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 93, 94, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0,
    0, 0, 123, 0, 124, 125, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0,
    0, 133, 0, 134, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0,
    156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163,
    0, 164, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 173, 0, 174, 0, 175, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 184, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0,
    197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 202, 203, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 217, 0, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 0,
    223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0,
    234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250,
};
void recomp_unit_0454_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089CA000u;
        entry_id = (entry_delta < 4060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0454[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CA000;
    case 2u: goto L_089CA018;
    case 3u: goto L_089CA020;
    case 4u: goto L_089CA028;
    case 5u: goto L_089CA090;
    case 6u: goto L_089CA098;
    case 7u: goto L_089CA0A4;
    case 8u: goto L_089CA0AC;
    case 9u: goto L_089CA0B8;
    case 10u: goto L_089CA0C8;
    case 11u: goto L_089CA0D0;
    case 12u: goto L_089CA0F0;
    case 13u: goto L_089CA0FC;
    case 14u: goto L_089CA108;
    case 15u: goto L_089CA110;
    case 16u: goto L_089CA118;
    case 17u: goto L_089CA154;
    case 18u: goto L_089CA158;
    case 19u: goto L_089CA18C;
    case 20u: goto L_089CA1FC;
    case 21u: goto L_089CA204;
    case 22u: goto L_089CA214;
    case 23u: goto L_089CA21C;
    case 24u: goto L_089CA230;
    case 25u: goto L_089CA238;
    case 26u: goto L_089CA248;
    case 27u: goto L_089CA250;
    case 28u: goto L_089CA25C;
    case 29u: goto L_089CA26C;
    case 30u: goto L_089CA270;
    case 31u: goto L_089CA27C;
    case 32u: goto L_089CA280;
    case 33u: goto L_089CA28C;
    case 34u: goto L_089CA29C;
    case 35u: goto L_089CA2A0;
    case 36u: goto L_089CA2A8;
    case 37u: goto L_089CA2B0;
    case 38u: goto L_089CA2BC;
    case 39u: goto L_089CA2E0;
    case 40u: goto L_089CA2E8;
    case 41u: goto L_089CA2F4;
    case 42u: goto L_089CA300;
    case 43u: goto L_089CA308;
    case 44u: goto L_089CA314;
    case 45u: goto L_089CA318;
    case 46u: goto L_089CA328;
    case 47u: goto L_089CA330;
    case 48u: goto L_089CA354;
    case 49u: goto L_089CA35C;
    case 50u: goto L_089CA368;
    case 51u: goto L_089CA374;
    case 52u: goto L_089CA37C;
    case 53u: goto L_089CA394;
    case 54u: goto L_089CA3A4;
    case 55u: goto L_089CA3AC;
    case 56u: goto L_089CA3BC;
    case 57u: goto L_089CA3C8;
    case 58u: goto L_089CA3D4;
    case 59u: goto L_089CA3DC;
    case 60u: goto L_089CA3E8;
    case 61u: goto L_089CA3F4;
    case 62u: goto L_089CA400;
    case 63u: goto L_089CA408;
    case 64u: goto L_089CA414;
    case 65u: goto L_089CA420;
    case 66u: goto L_089CA424;
    case 67u: goto L_089CA42C;
    case 68u: goto L_089CA468;
    case 69u: goto L_089CA470;
    case 70u: goto L_089CA480;
    case 71u: goto L_089CA488;
    case 72u: goto L_089CA498;
    case 73u: goto L_089CA4A4;
    case 74u: goto L_089CA4A8;
    case 75u: goto L_089CA4B4;
    case 76u: goto L_089CA4BC;
    case 77u: goto L_089CA504;
    case 78u: goto L_089CA50C;
    case 79u: goto L_089CA514;
    case 80u: goto L_089CA518;
    case 81u: goto L_089CA520;
    case 82u: goto L_089CA52C;
    case 83u: goto L_089CA53C;
    case 84u: goto L_089CA548;
    case 85u: goto L_089CA558;
    case 86u: goto L_089CA56C;
    case 87u: goto L_089CA578;
    case 88u: goto L_089CA584;
    case 89u: goto L_089CA58C;
    case 90u: goto L_089CA594;
    case 91u: goto L_089CA5A0;
    case 92u: goto L_089CA5A8;
    case 93u: goto L_089CA5B0;
    case 94u: goto L_089CA5B4;
    case 95u: goto L_089CA5D0;
    case 96u: goto L_089CA5D4;
    case 97u: goto L_089CA5E0;
    case 98u: goto L_089CA604;
    case 99u: goto L_089CA618;
    case 100u: goto L_089CA62C;
    case 101u: goto L_089CA654;
    case 102u: goto L_089CA660;
    case 103u: goto L_089CA678;
    case 104u: goto L_089CA68C;
    case 105u: goto L_089CA6AC;
    case 106u: goto L_089CA6B4;
    case 107u: goto L_089CA6C4;
    case 108u: goto L_089CA704;
    case 109u: goto L_089CA708;
    case 110u: goto L_089CA72C;
    case 111u: goto L_089CA734;
    case 112u: goto L_089CA740;
    case 113u: goto L_089CA748;
    case 114u: goto L_089CA754;
    case 115u: goto L_089CA768;
    case 116u: goto L_089CA770;
    case 117u: goto L_089CA798;
    case 118u: goto L_089CA7B8;
    case 119u: goto L_089CA7C0;
    case 120u: goto L_089CA7D0;
    case 121u: goto L_089CA7E4;
    case 122u: goto L_089CA7EC;
    case 123u: goto L_089CA808;
    case 124u: goto L_089CA810;
    case 125u: goto L_089CA814;
    case 126u: goto L_089CA81C;
    case 127u: goto L_089CA820;
    case 128u: goto L_089CA850;
    case 129u: goto L_089CA858;
    case 130u: goto L_089CA864;
    case 131u: goto L_089CA86C;
    case 132u: goto L_089CA878;
    case 133u: goto L_089CA884;
    case 134u: goto L_089CA88C;
    case 135u: goto L_089CA89C;
    case 136u: goto L_089CA8A4;
    case 137u: goto L_089CA8AC;
    case 138u: goto L_089CA8BC;
    case 139u: goto L_089CA8C4;
    case 140u: goto L_089CA8F8;
    case 141u: goto L_089CA908;
    case 142u: goto L_089CA910;
    case 143u: goto L_089CA934;
    case 144u: goto L_089CA938;
    case 145u: goto L_089CA940;
    case 146u: goto L_089CA96C;
    case 147u: goto L_089CA9CC;
    case 148u: goto L_089CAA08;
    case 149u: goto L_089CAA0C;
    case 150u: goto L_089CAA38;
    case 151u: goto L_089CAA44;
    case 152u: goto L_089CAA48;
    case 153u: goto L_089CAA54;
    case 154u: goto L_089CAA64;
    case 155u: goto L_089CAA70;
    case 156u: goto L_089CAA80;
    case 157u: goto L_089CAA88;
    case 158u: goto L_089CAABC;
    case 159u: goto L_089CAAC8;
    case 160u: goto L_089CAAD8;
    case 161u: goto L_089CAAE4;
    case 162u: goto L_089CAAF4;
    case 163u: goto L_089CAAFC;
    case 164u: goto L_089CAB04;
    case 165u: goto L_089CAB08;
    case 166u: goto L_089CAB18;
    case 167u: goto L_089CAB34;
    case 168u: goto L_089CAB40;
    case 169u: goto L_089CAB44;
    case 170u: goto L_089CAB4C;
    case 171u: goto L_089CAB5C;
    case 172u: goto L_089CAB78;
    case 173u: goto L_089CAB8C;
    case 174u: goto L_089CAB94;
    case 175u: goto L_089CAB9C;
    case 176u: goto L_089CABA0;
    case 177u: goto L_089CABA8;
    case 178u: goto L_089CABB0;
    case 179u: goto L_089CABB8;
    case 180u: goto L_089CABC0;
    case 181u: goto L_089CABCC;
    case 182u: goto L_089CABD4;
    case 183u: goto L_089CABE4;
    case 184u: goto L_089CAC0C;
    case 185u: goto L_089CAC10;
    case 186u: goto L_089CAC1C;
    case 187u: goto L_089CAC24;
    case 188u: goto L_089CAC38;
    case 189u: goto L_089CAC3C;
    case 190u: goto L_089CAC5C;
    case 191u: goto L_089CAC9C;
    case 192u: goto L_089CACA4;
    case 193u: goto L_089CACAC;
    case 194u: goto L_089CACB0;
    case 195u: goto L_089CACE4;
    case 196u: goto L_089CACF0;
    case 197u: goto L_089CAD00;
    case 198u: goto L_089CAD08;
    case 199u: goto L_089CAD20;
    case 200u: goto L_089CAD30;
    case 201u: goto L_089CAD3C;
    case 202u: goto L_089CAD40;
    case 203u: goto L_089CAD44;
    case 204u: goto L_089CAD4C;
    case 205u: goto L_089CAD54;
    case 206u: goto L_089CAD5C;
    case 207u: goto L_089CAD70;
    case 208u: goto L_089CADA8;
    case 209u: goto L_089CADD8;
    case 210u: goto L_089CADE0;
    case 211u: goto L_089CADF4;
    case 212u: goto L_089CAE0C;
    case 213u: goto L_089CAE14;
    case 214u: goto L_089CAE20;
    case 215u: goto L_089CAE28;
    case 216u: goto L_089CAE34;
    case 217u: goto L_089CAE38;
    case 218u: goto L_089CAE44;
    case 219u: goto L_089CAE50;
    case 220u: goto L_089CAE58;
    case 221u: goto L_089CAE60;
    case 222u: goto L_089CAE6C;
    case 223u: goto L_089CAE80;
    case 224u: goto L_089CAE88;
    case 225u: goto L_089CAE94;
    case 226u: goto L_089CAEA0;
    case 227u: goto L_089CAEA8;
    case 228u: goto L_089CAEB0;
    case 229u: goto L_089CAEC0;
    case 230u: goto L_089CAEC8;
    case 231u: goto L_089CAED4;
    case 232u: goto L_089CAEDC;
    case 233u: goto L_089CAEE8;
    case 234u: goto L_089CAF00;
    case 235u: goto L_089CAF08;
    case 236u: goto L_089CAF10;
    case 237u: goto L_089CAF18;
    case 238u: goto L_089CAF20;
    case 239u: goto L_089CAF28;
    case 240u: goto L_089CAF30;
    case 241u: goto L_089CAF38;
    case 242u: goto L_089CAF48;
    case 243u: goto L_089CAF4C;
    case 244u: goto L_089CAF54;
    case 245u: goto L_089CAF9C;
    case 246u: goto L_089CAFA8;
    case 247u: goto L_089CAFB4;
    case 248u: goto L_089CAFC0;
    case 249u: goto L_089CAFCC;
    case 250u: goto L_089CAFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CA000:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (aot_gpr[3] << 4u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    aot_gpr[31] = (0x089CA018u);
    aot_gpr[6] = (aot_gpr[23] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 191u, 0x089C9D90u>(ctx, &aot_mem) && ctx.pc == 0x089CA018u) goto L_089CA018;
    return;
L_089CA018:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CA028;
      }
      goto L_089CA020;
    }
L_089CA020:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_089CA028;
L_089CA028:
    aot_gpr[2] = (aot_gpr[7] << 2u);
    aot_gpr[3] = (aot_gpr[7] << 4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA090:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA110;
      }
      goto L_089CA098;
    }
L_089CA098:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089CA110;
      }
      goto L_089CA0A4;
    }
L_089CA0A4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA108;
      }
      goto L_089CA0AC;
    }
L_089CA0AC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA108;
      }
      goto L_089CA0B8;
    }
L_089CA0B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089CA0FC;
      }
      goto L_089CA0C8;
    }
L_089CA0C8:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089CA0D0;
L_089CA0D0:
    aot_gpr[7] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[7] << 3u);
    aot_gpr[2] = (aot_gpr[7] << 6u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089CA108;
      }
      goto L_089CA0F0;
    }
L_089CA0F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
        goto L_089CA0D0;
    }
    goto L_089CA0FC;
L_089CA0FC:
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA108:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA110:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA118:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089CA18C;
      }
      goto L_089CA154;
    }
L_089CA154:
    aot_gpr[4] = (0u + 0u);
    goto L_089CA158;
L_089CA158:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA18C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(380));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(380), 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA1FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA1FCu) goto L_089CA1FC;
    return;
L_089CA1FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA158;
      }
      goto L_089CA204;
    }
L_089CA204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(196)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA214u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA214u) goto L_089CA214;
    return;
L_089CA214:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA158;
      }
      goto L_089CA21C;
    }
L_089CA21C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA230u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA230u) goto L_089CA230;
    return;
L_089CA230:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA158;
      }
      goto L_089CA238;
    }
L_089CA238:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u | 55002u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u | 55008u);
      if (branch_taken) {
          goto L_089CA154;
      }
      goto L_089CA248;
    }
L_089CA248:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA394;
      }
      goto L_089CA250;
    }
L_089CA250:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), 0u);
    goto L_089CA25C;
L_089CA25C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(420)));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), aot_gpr[19]);
      if (branch_taken) {
          goto L_089CA368;
      }
      goto L_089CA26C;
    }
L_089CA26C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089CA270;
L_089CA270:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(420)));
        goto L_089CA2E0;
    }
    goto L_089CA27C;
L_089CA27C:
    aot_gpr[6] = (0u + 0u);
    goto L_089CA280;
L_089CA280:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA35C;
      }
      goto L_089CA28C;
    }
L_089CA28C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(416)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CA3C8;
      }
      goto L_089CA29C;
    }
L_089CA29C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
    goto L_089CA2A0;
L_089CA2A0:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA2A8u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA2A8u) goto L_089CA2A8;
    return;
L_089CA2A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA158;
      }
      goto L_089CA2B0;
    }
L_089CA2B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CA42C;
      }
      goto L_089CA2BC;
    }
L_089CA2BC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), 0u);
    goto L_089CA158;
L_089CA2E0:
    if (aot_gpr[19] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
        goto L_089CA3A4;
    }
    goto L_089CA2E8;
L_089CA2E8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089CA280;
      }
      goto L_089CA2F4;
    }
L_089CA2F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(204)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA300u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA300u) goto L_089CA300;
    return;
L_089CA300:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA318;
      }
      goto L_089CA308;
    }
L_089CA308:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (0u + 0u);
        goto L_089CA280;
    }
    goto L_089CA314;
L_089CA314:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    goto L_089CA318;
L_089CA318:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), 0u);
    goto L_089CA280;
L_089CA328:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089CA5D4;
      }
      goto L_089CA330;
    }
L_089CA330:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), aot_gpr[5]);
      if (branch_taken) {
          goto L_089CA618;
      }
      goto L_089CA354;
    }
L_089CA354:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), aot_gpr[8]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089CA35C;
L_089CA35C:
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), aot_gpr[2]);
    goto L_089CA158;
L_089CA368:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(204)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA374u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA374u) goto L_089CA374;
    return;
L_089CA374:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089CA270;
      }
      goto L_089CA37C;
    }
L_089CA37C:
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), 0u);
    goto L_089CA158;
L_089CA394:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), aot_gpr[2]);
    goto L_089CA25C;
L_089CA3A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089CA3BC;
      }
      goto L_089CA3AC;
    }
L_089CA3AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[2]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), 0u);
    goto L_089CA3BC;
L_089CA3BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), aot_gpr[2]);
    goto L_089CA280;
L_089CA3C8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[9] == 0u) {
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
        goto L_089CA4A8;
    }
    goto L_089CA3D4;
L_089CA3D4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (0u + 0u);
    goto L_089CA3DC;
L_089CA3DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(428)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089CA498;
    }
    goto L_089CA3E8;
L_089CA3E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089CA424;
      }
      goto L_089CA3F4;
    }
L_089CA3F4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), 0u);
        goto L_089CA158;
    }
    goto L_089CA400;
L_089CA400:
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[3] = (0u + 0u);
    goto L_089CA408;
L_089CA408:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    if (aot_gpr[5] == aot_gpr[3]) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
        goto L_089CA498;
    }
    goto L_089CA414;
L_089CA414:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089CA408;
      }
      goto L_089CA420;
    }
L_089CA420:
    aot_gpr[4] = (0u + 0u);
    goto L_089CA424;
L_089CA424:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), 0u);
    goto L_089CA158;
L_089CA42C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(196)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA468u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA468u) goto L_089CA468;
    return;
L_089CA468:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA158;
      }
      goto L_089CA470;
    }
L_089CA470:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u | 55002u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u | 55008u);
      if (branch_taken) {
          goto L_089CA420;
      }
      goto L_089CA480;
    }
L_089CA480:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA52C;
      }
      goto L_089CA488;
    }
L_089CA488:
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), 0u);
    goto L_089CA158;
L_089CA498:
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CA3DC;
      }
      goto L_089CA4A4;
    }
L_089CA4A4:
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089CA4A8;
L_089CA4A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[6]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(416));
    goto L_089CA4B4;
L_089CA4B4:
    aot_gpr[31] = (0x089CA4BCu);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA4BCu) goto L_089CA4BC;
    return;
L_089CA4BC:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (4194u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 19923u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[5]) * static_cast<std::uint64_t>(aot_gpr[2]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(180)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (ctx.hi);
    aot_gpr[7] = (aot_gpr[7] >> 6u);
    aot_gpr[8] = (aot_gpr[7] << 2u);
    aot_gpr[3] = (aot_gpr[7] << 7u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[8]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6000));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA504u);
    aot_gpr[7] = (aot_gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA504u) goto L_089CA504;
    return;
L_089CA504:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(416)));
        goto L_089CA518;
    }
    goto L_089CA50C;
L_089CA50C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4B4;
      }
      goto L_089CA514;
    }
L_089CA514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(416)));
    goto L_089CA518;
L_089CA518:
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(176)));
        goto L_089CA2A0;
    }
    goto L_089CA520;
L_089CA520:
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), 0u);
    goto L_089CA158;
L_089CA52C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (aot_gpr[10] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_089CA424;
      }
      goto L_089CA53C;
    }
L_089CA53C:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    goto L_089CA548;
L_089CA548:
    aot_gpr[2] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA35C;
      }
      goto L_089CA558;
    }
L_089CA558:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-4)));
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[11] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA578;
      }
      goto L_089CA56C;
    }
L_089CA56C:
    aot_gpr[2] = (aot_gpr[7] + 0u);
    aot_gpr[7] = (aot_gpr[8] + 0u);
    aot_gpr[8] = (aot_gpr[2] + 0u);
    goto L_089CA578;
L_089CA578:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CA328;
      }
      goto L_089CA584;
    }
L_089CA584:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[4] = (aot_gpr[8] - aot_gpr[7]);
      if (branch_taken) {
          goto L_089CA328;
      }
      goto L_089CA58C;
    }
L_089CA58C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
        goto L_089CA5D4;
    }
    goto L_089CA594;
L_089CA594:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(396)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[2]));
        goto L_089CA5B4;
    }
    goto L_089CA5A0;
L_089CA5A0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089CA5E0;
      }
      goto L_089CA5A8;
    }
L_089CA5A8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
        goto L_089CA5D4;
    }
    goto L_089CA5B0;
L_089CA5B0:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    goto L_089CA5B4;
L_089CA5B4:
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), aot_gpr[3]);
    goto L_089CA5D0;
L_089CA5D0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    goto L_089CA5D4;
L_089CA5D4:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[11] + 0u);
    goto L_089CA548;
L_089CA5E0:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[5] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(408)));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[8] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), aot_gpr[3]);
      if (branch_taken) {
          goto L_089CA5D0;
      }
      goto L_089CA604;
    }
L_089CA604:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), aot_gpr[8]);
    goto L_089CA548;
L_089CA618:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), aot_gpr[2]);
    goto L_089CA158;
L_089CA62C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(388)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(368), 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(364), 0u);
      if (branch_taken) {
          goto L_089CA660;
      }
      goto L_089CA654;
    }
L_089CA654:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089CA678;
      }
      goto L_089CA660;
    }
L_089CA660:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA678:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA68Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(416)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA68Cu) goto L_089CA68C;
    return;
L_089CA68C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(420)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(416), 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CA6ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), 0u);
    goto L_089CA118;
L_089CA6AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089CA660;
      }
      goto L_089CA6B4;
    }
L_089CA6B4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA6C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089CA708;
      }
      goto L_089CA704;
    }
L_089CA704:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(368), 0u);
    goto L_089CA708;
L_089CA708:
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA72Cu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA72Cu) goto L_089CA72C;
    return;
L_089CA72C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA820;
      }
      goto L_089CA734;
    }
L_089CA734:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (0u < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_089CA850;
      }
      goto L_089CA740;
    }
L_089CA740:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089CA770;
      }
      goto L_089CA748;
    }
L_089CA748:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_089CA770;
      }
      goto L_089CA754;
    }
L_089CA754:
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CA768u);
    aot_gpr[9] = (aot_gpr[16] + static_cast<std::uint32_t>(380));
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 201u, 0x089C9E24u>(ctx, &aot_mem) && ctx.pc == 0x089CA768u) goto L_089CA768;
    return;
L_089CA768:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA820;
      }
      goto L_089CA770;
    }
L_089CA770:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[5]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA798u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA798u) goto L_089CA798;
    return;
L_089CA798:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (aot_gpr[3] << 4u);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[3]);
    aot_gpr[31] = (0x089CA7B8u);
    aot_gpr[6] = (aot_gpr[23] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 191u, 0x089C9D90u>(ctx, &aot_mem) && ctx.pc == 0x089CA7B8u) goto L_089CA7B8;
    return;
L_089CA7B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089CA7D0;
      }
      goto L_089CA7C0;
    }
L_089CA7C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (2217u << 16u);
    goto L_089CA7D0;
L_089CA7D0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CA7E4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA7E4u) goto L_089CA7E4;
    return;
L_089CA7E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA820;
      }
      goto L_089CA7EC;
    }
L_089CA7EC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[31] = (0x089CA808u);
    aot_gpr[9] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 201u, 0x089C9E24u>(ctx, &aot_mem) && ctx.pc == 0x089CA808u) goto L_089CA808;
    return;
L_089CA808:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA820;
      }
      goto L_089CA810;
    }
L_089CA810:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089CA814;
L_089CA814:
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089CA88C;
      }
      goto L_089CA81C;
    }
L_089CA81C:
    aot_gpr[3] = (0u + 0u);
    goto L_089CA820;
L_089CA820:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA850:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089CA770;
      }
      goto L_089CA858;
    }
L_089CA858:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089CA864u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089CA118;
L_089CA864:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA820;
      }
      goto L_089CA86C;
    }
L_089CA86C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CA814;
      }
      goto L_089CA878;
    }
L_089CA878:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA814;
      }
      goto L_089CA884;
    }
L_089CA884:
    // nop
    goto L_089CA740;
L_089CA88C:
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089CA89Cu);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 177u, 0x089C9B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA89Cu) goto L_089CA89C;
    return;
L_089CA89C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CA820;
      }
      goto L_089CA8A4;
    }
L_089CA8A4:
    if (aot_gpr[19] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089CA820;
    }
    goto L_089CA8AC;
L_089CA8AC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), aot_gpr[2]);
    aot_gpr[31] = (0x089CA8BCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(372));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089CA8BCu) goto L_089CA8BC;
    return;
L_089CA8BC:
    aot_gpr[3] = (0u + 0u);
    goto L_089CA820;
L_089CA8C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089CAA08;
      }
      goto L_089CA8F8;
    }
L_089CA8F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_089CAA0C;
    }
    goto L_089CA908;
L_089CA908:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 6u);
      if (branch_taken) {
          goto L_089CAA08;
      }
      goto L_089CA910;
    }
L_089CA910:
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[21] = (0u + 0u);
      if (branch_taken) {
          goto L_089CAA38;
      }
      goto L_089CA934;
    }
L_089CA934:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    goto L_089CA938;
L_089CA938:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 54504u);
      if (branch_taken) {
          goto L_089CA96C;
      }
      goto L_089CA940;
    }
L_089CA940:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA96C:
    aot_gpr[4] = (aot_gpr[3] << 5u);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[31] = (0x089CA9CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x089CA9CCu) goto L_089CA9CC;
    return;
L_089CA9CC:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CAA08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089CAA0C;
L_089CAA0C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CAA38:
    aot_gpr[20] = (0u + 0u);
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    goto L_089CAA54;
L_089CAA44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    goto L_089CAA48;
L_089CAA48:
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(9) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CA938;
      }
      goto L_089CAA54;
    }
L_089CAA54:
    aot_gpr[18] = (aot_gpr[22] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CAA64u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089CAA64u) goto L_089CAA64;
    return;
L_089CAA64:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089CAA44;
      }
      goto L_089CAA70;
    }
L_089CAA70:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
        goto L_089CAA48;
    }
    goto L_089CAA80;
L_089CAA80:
    aot_gpr[4] = (0u + 0u);
    goto L_089CA940;
L_089CAA88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089CAC3C;
      }
      goto L_089CAABC;
    }
L_089CAABC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CAAC8u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 96u, 0x089C1858u>(ctx, &aot_mem) && ctx.pc == 0x089CAAC8u) goto L_089CAAC8;
    return;
L_089CAAC8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089CAC3C;
      }
      goto L_089CAAD8;
    }
L_089CAAD8:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089CAC3C;
      }
      goto L_089CAAE4;
    }
L_089CAAE4:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[18] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(5));
    goto L_089CAB18;
L_089CAAF4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CAB40;
      }
      goto L_089CAAFC;
    }
L_089CAAFC:
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(460)));
        goto L_089CAB44;
    }
    goto L_089CAB04;
L_089CAB04:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089CAB08;
L_089CAB08:
    aot_gpr[2] = (aot_gpr[13] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CAC38;
      }
      goto L_089CAB18;
    }
L_089CAB18:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[14] + aot_gpr[18]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[12] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(460)));
        goto L_089CAB44;
    }
    goto L_089CAB34;
L_089CAB34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[20];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089CAAF4;
      }
      goto L_089CAB40;
    }
L_089CAB40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(460)));
    goto L_089CAB44;
L_089CAB44:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089CAB08;
    }
    goto L_089CAB4C;
L_089CAB4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(376)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    aot_gpr[3] = (aot_gpr[7] << 3u);
      if (branch_taken) {
          goto L_089CAB04;
      }
      goto L_089CAB5C;
    }
L_089CAB5C:
    aot_gpr[2] = (aot_gpr[7] << 5u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[10] = (aot_gpr[4] + 0u);
    aot_gpr[11] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[9]);
    goto L_089CAB78;
L_089CAB78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-40));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAB9C;
      }
      goto L_089CAB8C;
    }
L_089CAB8C:
    if (aot_gpr[11] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_089CABA0;
    }
    goto L_089CAB94;
L_089CAB94:
    aot_gpr[19] = (aot_gpr[6] + 0u);
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(1));
    goto L_089CAB9C;
L_089CAB9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089CABA0;
L_089CABA0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089CAB08;
    }
    goto L_089CABA8;
L_089CABA8:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[9]);
      if (branch_taken) {
          goto L_089CAB78;
      }
      goto L_089CABB0;
    }
L_089CABB0:
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAB04;
      }
      goto L_089CABB8;
    }
L_089CABB8:
    { const bool branch_taken = aot_gpr[12] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089CAC10;
      }
      goto L_089CABC0;
    }
L_089CABC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CAC10;
      }
      goto L_089CABCC;
    }
L_089CABCC:
    if (aot_gpr[12] != aot_gpr[2]) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089CAB08;
    }
    goto L_089CABD4;
L_089CABD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[4] << 6u);
      if (branch_taken) {
          goto L_089CAB04;
      }
      goto L_089CABE4;
    }
L_089CABE4:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[14]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(468)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(468)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[3] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089CAB08;
    }
    goto L_089CAC0C;
L_089CAC0C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089CAC10;
L_089CAC10:
    aot_gpr[5] = (aot_gpr[17] & 65535u);
    aot_gpr[31] = (0x089CAC1Cu);
    aot_gpr[6] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0446_entry, 446u, 170u, 0x089C2DACu>(ctx, &aot_mem) && ctx.pc == 0x089CAC1Cu) goto L_089CAC1C;
    return;
L_089CAC1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CAC3C;
      }
      goto L_089CAC24;
    }
L_089CAC24:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[13] & 65535u);
    aot_gpr[2] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CAB18;
      }
      goto L_089CAC38;
    }
L_089CAC38:
    aot_gpr[2] = (0u + 0u);
    goto L_089CAC3C;
L_089CAC3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CAC5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
      if (branch_taken) {
          goto L_089CACAC;
      }
      goto L_089CAC9C;
    }
L_089CAC9C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CACAC;
      }
      goto L_089CACA4;
    }
L_089CACA4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CACE4;
      }
      goto L_089CACAC;
    }
L_089CACAC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089CACB0;
L_089CACB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CACE4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089CACF0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089CACF0u) goto L_089CACF0;
    return;
L_089CACF0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089CAD00u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    goto L_089CA090;
L_089CAD00:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CACB0;
      }
      goto L_089CAD08;
    }
L_089CAD08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (0u + 0u);
      if (branch_taken) {
          goto L_089CADA8;
      }
      goto L_089CAD20;
    }
L_089CAD20:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[3] & 65535u);
      if (branch_taken) {
          goto L_089CAE88;
      }
      goto L_089CAD30;
    }
L_089CAD30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    if (aot_gpr[19] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
        goto L_089CAE58;
    }
    goto L_089CAD3C;
L_089CAD3C:
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    goto L_089CAD40;
L_089CAD40:
    aot_gpr[2] = (0u | 65535u);
    goto L_089CAD44;
L_089CAD44:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CAD54;
      }
      goto L_089CAD4C;
    }
L_089CAD4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[20] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_089CADD8;
      }
      goto L_089CAD54;
    }
L_089CAD54:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CACB0;
      }
      goto L_089CAD5C;
    }
L_089CAD5C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089CAD70u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    goto L_089CA6C4;
L_089CAD70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CADA8:
    aot_gpr[3] = (aot_gpr[5] << 6u);
    aot_gpr[2] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089CAD20;
L_089CADD8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089CAD54;
      }
      goto L_089CADE0;
    }
L_089CADE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[23] = (aot_gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_089CADF4;
L_089CADF4:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[8] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089CAE0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 163u, 0x089C9A60u>(ctx, &aot_mem) && ctx.pc == 0x089CAE0Cu) goto L_089CAE0C;
    return;
L_089CAE0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CACB0;
      }
      goto L_089CAE14;
    }
L_089CAE14:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CAD54;
      }
      goto L_089CAE20;
    }
L_089CAE20:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CAEB0;
      }
      goto L_089CAE28;
    }
L_089CAE28:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    if (aot_gpr[19] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(380)));
        goto L_089CAED4;
    }
    goto L_089CAE34;
L_089CAE34:
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[3]);
    goto L_089CAE38;
L_089CAE38:
    aot_gpr[2] = (aot_gpr[20] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
      if (branch_taken) {
          goto L_089CAD54;
      }
      goto L_089CAE44;
    }
L_089CAE44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[16] + 0u);
        goto L_089CADF4;
    }
    goto L_089CAE50;
L_089CAE50:
    // nop
    goto L_089CAD54;
L_089CAE58:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[3] & 65535u);
        goto L_089CAD40;
    }
    goto L_089CAE60;
L_089CAE60:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[20] != aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[3] & 65535u);
        goto L_089CAD40;
    }
    goto L_089CAE6C;
L_089CAE6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(22)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(3)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089CAE80u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0447_entry, 447u, 9u, 0x089C3068u>(ctx, &aot_mem) && ctx.pc == 0x089CAE80u) goto L_089CAE80;
    return;
L_089CAE80:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089CAD3C;
L_089CAE88:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[3] = (aot_gpr[3] & 65535u);
      if (branch_taken) {
          goto L_089CAD44;
      }
      goto L_089CAE94;
    }
L_089CAE94:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089CAEA0u);
    aot_gpr[5] = (aot_gpr[22] + 0u);
    goto L_089CA62C;
L_089CAEA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CACB0;
      }
      goto L_089CAEA8;
    }
L_089CAEA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089CAD3C;
L_089CAEB0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CAEC0u);
    aot_gpr[7] = (0u + 0u);
    goto L_089CA8C4;
L_089CAEC0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089CAE34;
      }
      goto L_089CAEC8;
    }
L_089CAEC8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_089CAE34;
L_089CAED4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[3]);
        goto L_089CAE38;
    }
    goto L_089CAEDC;
L_089CAEDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(364)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[3]);
        goto L_089CAE38;
    }
    goto L_089CAEE8;
L_089CAEE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CAF00u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0453_entry, 453u, 177u, 0x089C9B9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CAF00u) goto L_089CAF00;
    return;
L_089CAF00:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (aot_gpr[2] + 0u);
        goto L_089CACB0;
    }
    goto L_089CAF08;
L_089CAF08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089CAE34;
L_089CAF10:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CAF20;
      }
      goto L_089CAF18;
    }
L_089CAF18:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089CAF20;
L_089CAF20:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CAF28:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CAF4C;
      }
      goto L_089CAF30;
    }
L_089CAF30:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089CAF48;
      }
      goto L_089CAF38;
    }
L_089CAF38:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CAF48:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    goto L_089CAF4C;
L_089CAF4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CAF54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[11] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[31] = (0x089CAF9Cu);
    aot_gpr[16] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CAF9Cu) goto L_089CAF9C;
    return;
L_089CAF9C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CAFA8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CAFA8u) goto L_089CAFA8;
    return;
L_089CAFA8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CAFB4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CAFB4u) goto L_089CAFB4;
    return;
L_089CAFB4:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CAFC0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CAFC0u) goto L_089CAFC0;
    return;
L_089CAFC0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CAFCCu);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CAFCCu) goto L_089CAFCC;
    return;
L_089CAFCC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CAFD8u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CAFD8u) goto L_089CAFD8;
    return;
L_089CAFD8:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0454(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0454_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_454(Runtime &runtime) {
    runtime.register_generated_unit(454u, 0x089CA000u, 4096u, &recomp_unit_0454, &recomp_unit_0454_entry);
    runtime.register_function(0x089CA000u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA018u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA020u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA028u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA090u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA098u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA0A4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA0ACu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA0B8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA0C8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA0D0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA0F0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA0FCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA108u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA110u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA118u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA154u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA158u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA18Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA1FCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA204u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA214u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA21Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA230u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA238u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA248u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA250u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA25Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA26Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA270u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA27Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA280u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA28Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA29Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA2A0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA2A8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA2B0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA2BCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA2E0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA2E8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA2F4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA300u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA308u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA314u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA318u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA328u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA330u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA354u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA35Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA368u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA374u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA37Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA394u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA3A4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA3ACu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA3BCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA3C8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA3D4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA3DCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA3E8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA3F4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA400u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA408u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA414u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA420u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA424u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA42Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA468u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA470u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA480u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA488u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA498u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA4A4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA4A8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA4B4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA4BCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA504u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA50Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA514u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA518u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA520u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA52Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA53Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA548u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA558u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA56Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA578u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA584u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA58Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA594u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA5A0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA5A8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA5B0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA5B4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA5D0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA5D4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA5E0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA604u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA618u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA62Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA654u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA660u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA678u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA68Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA6ACu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA6B4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA6C4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA704u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA708u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA72Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA734u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA740u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA748u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA754u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA768u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA770u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA798u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA7B8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA7C0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA7D0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA7E4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA7ECu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA808u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA810u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA814u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA81Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA820u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA850u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA858u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA864u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA86Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA878u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA884u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA88Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA89Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA8A4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA8ACu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA8BCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA8C4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA8F8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA908u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA910u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA934u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA938u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA940u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA96Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CA9CCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA08u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA0Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA38u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA44u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA48u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA54u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA64u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA70u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA80u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAA88u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAABCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAAC8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAAD8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAAE4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAAF4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAAFCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB04u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB08u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB18u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB34u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB40u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB44u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB4Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB5Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB78u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB8Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB94u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAB9Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CABA0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CABA8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CABB0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CABB8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CABC0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CABCCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CABD4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CABE4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAC0Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAC10u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAC1Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAC24u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAC38u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAC3Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAC5Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAC9Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CACA4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CACACu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CACB0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CACE4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CACF0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD00u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD08u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD20u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD30u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD3Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD40u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD44u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD4Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD54u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD5Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAD70u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CADA8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CADD8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CADE0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CADF4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE0Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE14u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE20u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE28u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE34u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE38u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE44u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE50u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE58u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE60u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE6Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE80u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE88u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAE94u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAEA0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAEA8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAEB0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAEC0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAEC8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAED4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAEDCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAEE8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF00u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF08u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF10u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF18u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF20u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF28u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF30u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF38u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF48u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF4Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF54u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAF9Cu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAFA8u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAFB4u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAFC0u, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAFCCu, &recomp_unit_0454, "recomp_unit_0454");
    runtime.register_function(0x089CAFD8u, &recomp_unit_0454, "recomp_unit_0454");
}
} // namespace psprecomp
