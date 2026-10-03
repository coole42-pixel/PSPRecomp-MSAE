#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0214[1024] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 23, 24, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0,
    36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 47,
    0, 48, 0, 0, 0, 49, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 64, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 72, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79,
    80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0,
    93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 100, 0, 101, 0, 0,
    0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0,
    110, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0,
    0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0,
    136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0,
    0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 158, 159, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0,
    181, 0, 182, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 190, 0, 191, 0, 192, 0, 0, 0, 193,
    194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 212,
    0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0,
    220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226,
    0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
};
void recomp_unit_0214_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088DA000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0214[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DA000;
    case 2u: goto L_088DA004;
    case 3u: goto L_088DA014;
    case 4u: goto L_088DA028;
    case 5u: goto L_088DA044;
    case 6u: goto L_088DA050;
    case 7u: goto L_088DA058;
    case 8u: goto L_088DA098;
    case 9u: goto L_088DA0BC;
    case 10u: goto L_088DA0CC;
    case 11u: goto L_088DA0E0;
    case 12u: goto L_088DA0FC;
    case 13u: goto L_088DA108;
    case 14u: goto L_088DA140;
    case 15u: goto L_088DA150;
    case 16u: goto L_088DA17C;
    case 17u: goto L_088DA190;
    case 18u: goto L_088DA1A0;
    case 19u: goto L_088DA1A8;
    case 20u: goto L_088DA1B0;
    case 21u: goto L_088DA1B8;
    case 22u: goto L_088DA1C4;
    case 23u: goto L_088DA1CC;
    case 24u: goto L_088DA1D0;
    case 25u: goto L_088DA1D8;
    case 26u: goto L_088DA1F4;
    case 27u: goto L_088DA200;
    case 28u: goto L_088DA20C;
    case 29u: goto L_088DA21C;
    case 30u: goto L_088DA22C;
    case 31u: goto L_088DA240;
    case 32u: goto L_088DA248;
    case 33u: goto L_088DA24C;
    case 34u: goto L_088DA258;
    case 35u: goto L_088DA274;
    case 36u: goto L_088DA280;
    case 37u: goto L_088DA28C;
    case 38u: goto L_088DA298;
    case 39u: goto L_088DA2A4;
    case 40u: goto L_088DA2AC;
    case 41u: goto L_088DA2B4;
    case 42u: goto L_088DA2C8;
    case 43u: goto L_088DA2D0;
    case 44u: goto L_088DA2E0;
    case 45u: goto L_088DA2E8;
    case 46u: goto L_088DA2F4;
    case 47u: goto L_088DA2FC;
    case 48u: goto L_088DA304;
    case 49u: goto L_088DA314;
    case 50u: goto L_088DA318;
    case 51u: goto L_088DA324;
    case 52u: goto L_088DA32C;
    case 53u: goto L_088DA340;
    case 54u: goto L_088DA348;
    case 55u: goto L_088DA364;
    case 56u: goto L_088DA378;
    case 57u: goto L_088DA390;
    case 58u: goto L_088DA3A0;
    case 59u: goto L_088DA3B8;
    case 60u: goto L_088DA3BC;
    case 61u: goto L_088DA3C4;
    case 62u: goto L_088DA3D4;
    case 63u: goto L_088DA3EC;
    case 64u: goto L_088DA3F0;
    case 65u: goto L_088DA3F8;
    case 66u: goto L_088DA428;
    case 67u: goto L_088DA434;
    case 68u: goto L_088DA440;
    case 69u: goto L_088DA448;
    case 70u: goto L_088DA454;
    case 71u: goto L_088DA45C;
    case 72u: goto L_088DA460;
    case 73u: goto L_088DA470;
    case 74u: goto L_088DA494;
    case 75u: goto L_088DA4C4;
    case 76u: goto L_088DA4D0;
    case 77u: goto L_088DA4DC;
    case 78u: goto L_088DA4E8;
    case 79u: goto L_088DA4FC;
    case 80u: goto L_088DA500;
    case 81u: goto L_088DA508;
    case 82u: goto L_088DA510;
    case 83u: goto L_088DA534;
    case 84u: goto L_088DA584;
    case 85u: goto L_088DA598;
    case 86u: goto L_088DA5A4;
    case 87u: goto L_088DA5C0;
    case 88u: goto L_088DA5D0;
    case 89u: goto L_088DA5D8;
    case 90u: goto L_088DA5E0;
    case 91u: goto L_088DA5E8;
    case 92u: goto L_088DA5F8;
    case 93u: goto L_088DA600;
    case 94u: goto L_088DA610;
    case 95u: goto L_088DA61C;
    case 96u: goto L_088DA624;
    case 97u: goto L_088DA648;
    case 98u: goto L_088DA658;
    case 99u: goto L_088DA668;
    case 100u: goto L_088DA66C;
    case 101u: goto L_088DA674;
    case 102u: goto L_088DA688;
    case 103u: goto L_088DA690;
    case 104u: goto L_088DA6BC;
    case 105u: goto L_088DA6C8;
    case 106u: goto L_088DA6DC;
    case 107u: goto L_088DA6E4;
    case 108u: goto L_088DA6F0;
    case 109u: goto L_088DA6F8;
    case 110u: goto L_088DA700;
    case 111u: goto L_088DA70C;
    case 112u: goto L_088DA714;
    case 113u: goto L_088DA724;
    case 114u: goto L_088DA730;
    case 115u: goto L_088DA744;
    case 116u: goto L_088DA74C;
    case 117u: goto L_088DA75C;
    case 118u: goto L_088DA768;
    case 119u: goto L_088DA770;
    case 120u: goto L_088DA778;
    case 121u: goto L_088DA7A8;
    case 122u: goto L_088DA7B4;
    case 123u: goto L_088DA7C8;
    case 124u: goto L_088DA7D0;
    case 125u: goto L_088DA7E0;
    case 126u: goto L_088DA7EC;
    case 127u: goto L_088DA7F4;
    case 128u: goto L_088DA804;
    case 129u: goto L_088DA80C;
    case 130u: goto L_088DA820;
    case 131u: goto L_088DA834;
    case 132u: goto L_088DA83C;
    case 133u: goto L_088DA84C;
    case 134u: goto L_088DA85C;
    case 135u: goto L_088DA874;
    case 136u: goto L_088DA880;
    case 137u: goto L_088DA88C;
    case 138u: goto L_088DA8AC;
    case 139u: goto L_088DA8DC;
    case 140u: goto L_088DA904;
    case 141u: goto L_088DA914;
    case 142u: goto L_088DA91C;
    case 143u: goto L_088DA928;
    case 144u: goto L_088DA938;
    case 145u: goto L_088DA944;
    case 146u: goto L_088DA990;
    case 147u: goto L_088DA9BC;
    case 148u: goto L_088DA9C4;
    case 149u: goto L_088DA9D4;
    case 150u: goto L_088DA9E4;
    case 151u: goto L_088DA9F4;
    case 152u: goto L_088DAA04;
    case 153u: goto L_088DAA14;
    case 154u: goto L_088DAA28;
    case 155u: goto L_088DAA30;
    case 156u: goto L_088DAA44;
    case 157u: goto L_088DAA58;
    case 158u: goto L_088DAA60;
    case 159u: goto L_088DAA64;
    case 160u: goto L_088DAA6C;
    case 161u: goto L_088DAA90;
    case 162u: goto L_088DAA98;
    case 163u: goto L_088DAAAC;
    case 164u: goto L_088DAAC0;
    case 165u: goto L_088DAAD4;
    case 166u: goto L_088DAB08;
    case 167u: goto L_088DAB40;
    case 168u: goto L_088DAB4C;
    case 169u: goto L_088DAB58;
    case 170u: goto L_088DAB78;
    case 171u: goto L_088DAB84;
    case 172u: goto L_088DAB90;
    case 173u: goto L_088DAB98;
    case 174u: goto L_088DABA8;
    case 175u: goto L_088DABB0;
    case 176u: goto L_088DABC0;
    case 177u: goto L_088DABD0;
    case 178u: goto L_088DABE0;
    case 179u: goto L_088DABE8;
    case 180u: goto L_088DABF0;
    case 181u: goto L_088DAC00;
    case 182u: goto L_088DAC08;
    case 183u: goto L_088DAC18;
    case 184u: goto L_088DAC20;
    case 185u: goto L_088DAC28;
    case 186u: goto L_088DAC30;
    case 187u: goto L_088DAC40;
    case 188u: goto L_088DAC48;
    case 189u: goto L_088DAC58;
    case 190u: goto L_088DAC5C;
    case 191u: goto L_088DAC64;
    case 192u: goto L_088DAC6C;
    case 193u: goto L_088DAC7C;
    case 194u: goto L_088DAC80;
    case 195u: goto L_088DAC88;
    case 196u: goto L_088DAC90;
    case 197u: goto L_088DACA0;
    case 198u: goto L_088DACAC;
    case 199u: goto L_088DACB4;
    case 200u: goto L_088DACC4;
    case 201u: goto L_088DACCC;
    case 202u: goto L_088DACD4;
    case 203u: goto L_088DACDC;
    case 204u: goto L_088DACF4;
    case 205u: goto L_088DAD24;
    case 206u: goto L_088DAD4C;
    case 207u: goto L_088DAD60;
    case 208u: goto L_088DAD94;
    case 209u: goto L_088DADA0;
    case 210u: goto L_088DADE0;
    case 211u: goto L_088DADF8;
    case 212u: goto L_088DADFC;
    case 213u: goto L_088DAE18;
    case 214u: goto L_088DAE20;
    case 215u: goto L_088DAE30;
    case 216u: goto L_088DAE40;
    case 217u: goto L_088DAE50;
    case 218u: goto L_088DAE5C;
    case 219u: goto L_088DAE6C;
    case 220u: goto L_088DAE80;
    case 221u: goto L_088DAE8C;
    case 222u: goto L_088DAEB4;
    case 223u: goto L_088DAECC;
    case 224u: goto L_088DAEE0;
    case 225u: goto L_088DAEE8;
    case 226u: goto L_088DAEFC;
    case 227u: goto L_088DAF0C;
    case 228u: goto L_088DAF14;
    case 229u: goto L_088DAF24;
    case 230u: goto L_088DAF30;
    case 231u: goto L_088DAF38;
    case 232u: goto L_088DAF68;
    case 233u: goto L_088DAFC0;
    case 234u: goto L_088DAFCC;
    case 235u: goto L_088DAFD4;
    case 236u: goto L_088DAFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DA000:
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088DA004;
L_088DA004:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 215u, 0x088D9F84u>(ctx, &aot_mem); return;
      }
      goto L_088DA014;
    }
L_088DA014:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(1443));
    aot_gpr[22] = (0u | 2u);
    aot_gpr[23] = (0u | 154u);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(1376));
    goto L_088DA028;
L_088DA028:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DA044u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 136u, 0x0885B988u>(ctx, &aot_mem) && ctx.pc == 0x088DA044u) goto L_088DA044;
    return;
L_088DA044:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
        goto L_088DA098;
    }
    goto L_088DA050;
L_088DA050:
    if (aot_gpr[18] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
        goto L_088DA098;
    }
    goto L_088DA058;
L_088DA058:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(50)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1376));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[22]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[23]));
      if (branch_taken) {
          goto L_088DA0BC;
      }
      goto L_088DA098;
    }
L_088DA098:
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1376));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[23]));
    goto L_088DA0BC;
L_088DA0BC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088DA028;
      }
      goto L_088DA0CC;
    }
L_088DA0CC:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(1444));
    aot_gpr[22] = (0u | 3u);
    aot_gpr[23] = (0u | 155u);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(1392));
    goto L_088DA0E0;
L_088DA0E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DA0FCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 140u, 0x0885B9B4u>(ctx, &aot_mem) && ctx.pc == 0x088DA0FCu) goto L_088DA0FC;
    return;
L_088DA0FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA140;
      }
      goto L_088DA108;
    }
L_088DA108:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[18] << 24u);
    aot_gpr[7] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(1392));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[23]));
    goto L_088DA140;
L_088DA140:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088DA0E0;
      }
      goto L_088DA150;
    }
L_088DA150:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA17C:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(250))))));
    aot_gpr[8] = (aot_gpr[6] << 3u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
      if (branch_taken) {
          goto L_088DA1A0;
      }
      goto L_088DA190;
    }
L_088DA190:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(248))))));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA1B0;
      }
      goto L_088DA1A0;
    }
L_088DA1A0:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA1C4;
      }
      goto L_088DA1A8;
    }
L_088DA1A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(248))))));
      if (branch_taken) {
          goto L_088DA1B8;
      }
      goto L_088DA1B0;
    }
L_088DA1B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1296));
      if (branch_taken) {
          goto L_088DA1D0;
      }
      goto L_088DA1B8;
    }
L_088DA1B8:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA1CC;
      }
      goto L_088DA1C4;
    }
L_088DA1C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1304));
      if (branch_taken) {
          goto L_088DA1D0;
      }
      goto L_088DA1CC;
    }
L_088DA1CC:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1312));
    goto L_088DA1D0;
L_088DA1D0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA1D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[8];
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088DA22C;
      }
      goto L_088DA1F4;
    }
L_088DA1F4:
    aot_gpr[7] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088DA21C;
      }
      goto L_088DA200;
    }
L_088DA200:
    aot_gpr[7] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088DA248;
      }
      goto L_088DA20C;
    }
L_088DA20C:
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1392));
      if (branch_taken) {
          goto L_088DA24C;
      }
      goto L_088DA21C;
    }
L_088DA21C:
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1376));
      if (branch_taken) {
          goto L_088DA24C;
      }
      goto L_088DA22C;
    }
L_088DA22C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2172)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088DA240u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_088DA17C;
L_088DA240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA24C;
      }
      goto L_088DA248;
    }
L_088DA248:
    aot_gpr[2] = (0u | 0u);
    goto L_088DA24C;
L_088DA24C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088DA2D0;
      }
      goto L_088DA274;
    }
L_088DA274:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(248))))));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA2D0;
      }
      goto L_088DA280;
    }
L_088DA280:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(250))))));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA2D0;
      }
      goto L_088DA28C;
    }
L_088DA28C:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(248))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088DA2AC;
      }
      goto L_088DA298;
    }
L_088DA298:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(250))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088DA2B4;
      }
      goto L_088DA2A4;
    }
L_088DA2A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1392));
      if (branch_taken) {
          goto L_088DA318;
      }
      goto L_088DA2AC;
    }
L_088DA2AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1376));
      if (branch_taken) {
          goto L_088DA318;
      }
      goto L_088DA2B4;
    }
L_088DA2B4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088DA2C8u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_088DA17C;
L_088DA2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA318;
      }
      goto L_088DA2D0;
    }
L_088DA2D0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1442))))));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA304;
      }
      goto L_088DA2E0;
    }
L_088DA2E0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DA2FC;
      }
      goto L_088DA2E8;
    }
L_088DA2E8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DA314;
      }
      goto L_088DA2F4;
    }
L_088DA2F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1392));
      if (branch_taken) {
          goto L_088DA318;
      }
      goto L_088DA2FC;
    }
L_088DA2FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1376));
      if (branch_taken) {
          goto L_088DA318;
      }
      goto L_088DA304;
    }
L_088DA304:
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1312));
      if (branch_taken) {
          goto L_088DA318;
      }
      goto L_088DA314;
    }
L_088DA314:
    aot_gpr[2] = (0u | 0u);
    goto L_088DA318;
L_088DA318:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA324:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA340;
      }
      goto L_088DA32C;
    }
L_088DA32C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1384), aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(1454), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088DA340;
L_088DA340:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA348:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(248))))));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(250))))));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088DA378u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 214u, 0x088D9F28u>(ctx, &aot_mem) && ctx.pc == 0x088DA378u) goto L_088DA378;
    return;
L_088DA378:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2193), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA390:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1442))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA3B8;
      }
      goto L_088DA3A0;
    }
L_088DA3A0:
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1312));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088DA3BC;
      }
      goto L_088DA3B8;
    }
L_088DA3B8:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    goto L_088DA3BC;
L_088DA3BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA3C4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1442))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA3EC;
      }
      goto L_088DA3D4;
    }
L_088DA3D4:
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1312));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(50)));
      if (branch_taken) {
          goto L_088DA3F0;
      }
      goto L_088DA3EC;
    }
L_088DA3EC:
    aot_gpr[2] = (0u | 0u);
    goto L_088DA3F0;
L_088DA3F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA3F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[5] & 65535u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (2215u << 16u);
    goto L_088DA428;
L_088DA428:
    aot_gpr[5] = (aot_gpr[19] & 65535u);
    aot_gpr[31] = (0x088DA434u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 104u, 0x0881C784u>(ctx, &aot_mem) && ctx.pc == 0x088DA434u) goto L_088DA434;
    return;
L_088DA434:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088DA460;
      }
      goto L_088DA440;
    }
L_088DA440:
    aot_gpr[31] = (0x088DA448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x0881C710u>(ctx, &aot_mem) && ctx.pc == 0x088DA448u) goto L_088DA448;
    return;
L_088DA448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x088DA454u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 229u, 0x088B7F30u>(ctx, &aot_mem) && ctx.pc == 0x088DA454u) goto L_088DA454;
    return;
L_088DA454:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA460;
      }
      goto L_088DA45C;
    }
L_088DA45C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088DA460;
L_088DA460:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA428;
      }
      goto L_088DA470;
    }
L_088DA470:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_088DA494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 10u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_088DA4C4;
L_088DA4C4:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x088DA4D0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088DA4D0u) goto L_088DA4D0;
    return;
L_088DA4D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA500;
      }
      goto L_088DA4DC;
    }
L_088DA4DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DA500;
      }
      goto L_088DA4E8;
    }
L_088DA4E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (ctx.hi);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088DA500;
      }
      goto L_088DA4FC;
    }
L_088DA4FC:
    aot_gpr[19] = (0u | 1u);
    goto L_088DA500;
L_088DA500:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DA510;
      }
      goto L_088DA508;
    }
L_088DA508:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA4C4;
      }
      goto L_088DA510;
    }
L_088DA510:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_088DA534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2185), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2199), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088DA8AC;
      }
      goto L_088DA584;
    }
L_088DA584:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088DA598u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 224u, 0x088D8F38u>(ctx, &aot_mem) && ctx.pc == 0x088DA598u) goto L_088DA598;
    return;
L_088DA598:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA8AC;
      }
      goto L_088DA5A4;
    }
L_088DA5A4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[23] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_088DA5C0;
L_088DA5C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[30] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DA5D8;
      }
      goto L_088DA5D0;
    }
L_088DA5D0:
    aot_gpr[18] = (aot_gpr[30] | 0u);
    aot_gpr[30] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088DA5D8;
L_088DA5D8:
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DA700;
      }
      goto L_088DA5E0;
    }
L_088DA5E0:
    aot_gpr[31] = (0x088DA5E8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088DA5E8u) goto L_088DA5E8;
    return;
L_088DA5E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DA668;
      }
      goto L_088DA5F8;
    }
L_088DA5F8:
    aot_gpr[31] = (0x088DA600u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA600u) goto L_088DA600;
    return;
L_088DA600:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA61C;
      }
      goto L_088DA610;
    }
L_088DA610:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088DA61C;
L_088DA61C:
    aot_gpr[31] = (0x088DA624u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA624u) goto L_088DA624;
    return;
L_088DA624:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(20))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA648;
    }
L_088DA648:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088DA658u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 224u, 0x088D8F38u>(ctx, &aot_mem) && ctx.pc == 0x088DA658u) goto L_088DA658;
    return;
L_088DA658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA668;
    }
L_088DA668:
    aot_gpr[17] = (0u | 0u);
    goto L_088DA66C;
L_088DA66C:
    aot_gpr[31] = (0x088DA674u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088DA674u) goto L_088DA674;
    return;
L_088DA674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6F8;
      }
      goto L_088DA688;
    }
L_088DA688:
    aot_gpr[31] = (0x088DA690u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA690u) goto L_088DA690;
    return;
L_088DA690:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6F0;
      }
      goto L_088DA6BC;
    }
L_088DA6BC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6F0;
      }
      goto L_088DA6C8;
    }
L_088DA6C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[31] = (0x088DA6DCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088DA494;
L_088DA6DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA6F0;
      }
      goto L_088DA6E4;
    }
L_088DA6E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_088DA6F0;
L_088DA6F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088DA66C;
      }
      goto L_088DA6F8;
    }
L_088DA6F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA700;
    }
L_088DA700:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[23] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DA75C;
      }
      goto L_088DA70C;
    }
L_088DA70C:
    aot_gpr[31] = (0x088DA714u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA714u) goto L_088DA714;
    return;
L_088DA714:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA724;
    }
L_088DA724:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA730;
    }
L_088DA730:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[31] = (0x088DA744u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088DA494;
L_088DA744:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA74C;
    }
L_088DA74C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA75C;
    }
L_088DA75C:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[23] == aot_gpr[4];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088DA770;
      }
      goto L_088DA768;
    }
L_088DA768:
    { const bool branch_taken = aot_gpr[23] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DA7E0;
      }
      goto L_088DA770;
    }
L_088DA770:
    aot_gpr[31] = (0x088DA778u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA778u) goto L_088DA778;
    return;
L_088DA778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA7A8;
    }
L_088DA7A8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA7B4;
    }
L_088DA7B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[31] = (0x088DA7C8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088DA494;
L_088DA7C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA7D0;
    }
L_088DA7D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA7E0;
    }
L_088DA7E0:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[23] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA7EC;
    }
L_088DA7EC:
    aot_gpr[31] = (0x088DA7F4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA7F4u) goto L_088DA7F4;
    return;
L_088DA7F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA88C;
      }
      goto L_088DA804;
    }
L_088DA804:
    aot_gpr[31] = (0x088DA80Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA80Cu) goto L_088DA80C;
    return;
L_088DA80C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    if (aot_gpr[4] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2176)));
        goto L_088DA85C;
    }
    goto L_088DA820;
L_088DA820:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[31] = (0x088DA834u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088DA494;
L_088DA834:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2176)));
        goto L_088DA85C;
    }
    goto L_088DA83C;
L_088DA83C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088DA84Cu);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA84Cu) goto L_088DA84C;
    return;
L_088DA84C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2176)));
    goto L_088DA85C;
L_088DA85C:
    aot_gpr[4] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[31] = (0x088DA874u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 82u, 0x088D9608u>(ctx, &aot_mem) && ctx.pc == 0x088DA874u) goto L_088DA874;
    return;
L_088DA874:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DA880u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA880u) goto L_088DA880;
    return;
L_088DA880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088DA88C;
L_088DA88C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[30] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(10));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_088DA5C0;
      }
      goto L_088DA8AC;
    }
L_088DA8AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA8DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2185), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2199), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_088DA91C;
      }
      goto L_088DA904;
    }
L_088DA904:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088DA914u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_088DA534;
L_088DA914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DA938;
      }
      goto L_088DA91C;
    }
L_088DA91C:
    aot_gpr[7] = (0u | 7u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088DA938;
      }
      goto L_088DA928;
    }
L_088DA928:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088DA938u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_088DA534;
L_088DA938:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DA944:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(2189), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(2178)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(2185), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(2199), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x088DA990u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA990u) goto L_088DA990;
    return;
L_088DA990:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x088DA9BCu);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 95u, 0x088E682Cu>(ctx, &aot_mem) && ctx.pc == 0x088DA9BCu) goto L_088DA9BC;
    return;
L_088DA9BC:
    aot_gpr[31] = (0x088DA9C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA9C4u) goto L_088DA9C4;
    return;
L_088DA9C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2096)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[31] = (0x088DA9D4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA9D4u) goto L_088DA9D4;
    return;
L_088DA9D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1980)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[31] = (0x088DA9E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA9E4u) goto L_088DA9E4;
    return;
L_088DA9E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1988)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DA9F4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DA9F4u) goto L_088DA9F4;
    return;
L_088DA9F4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1984)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DAA04u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAA04u) goto L_088DAA04;
    return;
L_088DAA04:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1992)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088DAA14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAA14u) goto L_088DAA14;
    return;
L_088DAA14:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1996)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1944)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAA58;
      }
      goto L_088DAA28;
    }
L_088DAA28:
    aot_gpr[31] = (0x088DAA30u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAA30u) goto L_088DAA30;
    return;
L_088DAA30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1944)));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x088DAA44u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088DAA44u) goto L_088DAA44;
    return;
L_088DAA44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_088DAA64;
      }
      goto L_088DAA58;
    }
L_088DAA58:
    aot_gpr[31] = (0x088DAA60u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAA60u) goto L_088DAA60;
    return;
L_088DAA60:
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(0u));
    goto L_088DAA64;
L_088DAA64:
    aot_gpr[31] = (0x088DAA6Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAA6Cu) goto L_088DAA6C;
    return;
L_088DAA6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(156), 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[30] = (0u | 2u);
    aot_gpr[23] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[20] = (0u | 0u);
    goto L_088DAA90;
L_088DAA90:
    aot_gpr[31] = (0x088DAA98u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAA98u) goto L_088DAA98;
    return;
L_088DAA98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2012)));
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[31] = (0x088DAAACu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAAACu) goto L_088DAAAC;
    return;
L_088DAAAC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2048)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088DAAC0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAAC0u) goto L_088DAAC0;
    return;
L_088DAAC0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2036)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088DAAD4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAAD4u) goto L_088DAAD4;
    return;
L_088DAAD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2060)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 16u));
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 16u));
    aot_gpr[31] = (0x088DAB08u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(aot_gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAB08u) goto L_088DAB08;
    return;
L_088DAB08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2072)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1948)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DACCC;
      }
      goto L_088DAB40;
    }
L_088DAB40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088DAB4Cu);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0589_entry, 589u, 188u, 0x08A51FB0u>(ctx, &aot_mem) && ctx.pc == 0x088DAB4Cu) goto L_088DAB4C;
    return;
L_088DAB4C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DAB58u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAB58u) goto L_088DAB58;
    return;
L_088DAB58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x088DAB78u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 148u, 0x0885BA04u>(ctx, &aot_mem) && ctx.pc == 0x088DAB78u) goto L_088DAB78;
    return;
L_088DAB78:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DACC4;
      }
      goto L_088DAB84;
    }
L_088DAB84:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DABC0;
      }
      goto L_088DAB90;
    }
L_088DAB90:
    aot_gpr[31] = (0x088DAB98u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAB98u) goto L_088DAB98;
    return;
L_088DAB98:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DABA8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DABA8u) goto L_088DABA8;
    return;
L_088DABA8:
    aot_gpr[31] = (0x088DABB0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DABB0u) goto L_088DABB0;
    return;
L_088DABB0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DABC0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DABC0u) goto L_088DABC0;
    return;
L_088DABC0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DACA0;
      }
      goto L_088DABD0;
    }
L_088DABD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_088DAC20;
      }
      goto L_088DABE0;
    }
L_088DABE0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC5C;
      }
      goto L_088DABE8;
    }
L_088DABE8:
    aot_gpr[31] = (0x088DABF0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DABF0u) goto L_088DABF0;
    return;
L_088DABF0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DAC00u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DAC00u) goto L_088DAC00;
    return;
L_088DAC00:
    aot_gpr[31] = (0x088DAC08u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAC08u) goto L_088DAC08;
    return;
L_088DAC08:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DAC18u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DAC18u) goto L_088DAC18;
    return;
L_088DAC18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
      if (branch_taken) {
          goto L_088DAC5C;
      }
      goto L_088DAC20;
    }
L_088DAC20:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAC5C;
      }
      goto L_088DAC28;
    }
L_088DAC28:
    aot_gpr[31] = (0x088DAC30u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAC30u) goto L_088DAC30;
    return;
L_088DAC30:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DAC40u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DAC40u) goto L_088DAC40;
    return;
L_088DAC40:
    aot_gpr[31] = (0x088DAC48u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAC48u) goto L_088DAC48;
    return;
L_088DAC48:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DAC58u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DAC58u) goto L_088DAC58;
    return;
L_088DAC58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    goto L_088DAC5C;
L_088DAC5C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_088DAC80;
      }
      goto L_088DAC64;
    }
L_088DAC64:
    aot_gpr[31] = (0x088DAC6Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAC6Cu) goto L_088DAC6C;
    return;
L_088DAC6C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DAC7Cu);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DAC7Cu) goto L_088DAC7C;
    return;
L_088DAC7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(22)));
    goto L_088DAC80;
L_088DAC80:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088DACA0;
      }
      goto L_088DAC88;
    }
L_088DAC88:
    aot_gpr[31] = (0x088DAC90u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAC90u) goto L_088DAC90;
    return;
L_088DAC90:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DACA0u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DACA0u) goto L_088DACA0;
    return;
L_088DACA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DACC4;
      }
      goto L_088DACAC;
    }
L_088DACAC:
    aot_gpr[31] = (0x088DACB4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DACB4u) goto L_088DACB4;
    return;
L_088DACB4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088DACC4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 72u, 0x088CD630u>(ctx, &aot_mem) && ctx.pc == 0x088DACC4u) goto L_088DACC4;
    return;
L_088DACC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DACDC;
      }
      goto L_088DACCC;
    }
L_088DACCC:
    aot_gpr[31] = (0x088DACD4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DACD4u) goto L_088DACD4;
    return;
L_088DACD4:
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[20]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    goto L_088DACDC;
L_088DACDC:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088DAA90;
      }
      goto L_088DACF4;
    }
L_088DACF4:
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
L_088DAD24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(2189), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(2178)));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(2185), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(2199), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088DAD4Cu);
    aot_gpr[4] = (aot_gpr[3] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAD4Cu) goto L_088DAD4C;
    return;
L_088DAD4C:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088DAD60u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 93u, 0x088D96D0u>(ctx, &aot_mem) && ctx.pc == 0x088DAD60u) goto L_088DAD60;
    return;
L_088DAD60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x088DAD94u);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0226_entry, 226u, 95u, 0x088E682Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAD94u) goto L_088DAD94;
    return;
L_088DAD94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DADA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x088DADE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 154u, 0x088C5AB8u>(ctx, &aot_mem) && ctx.pc == 0x088DADE0u) goto L_088DADE0;
    return;
L_088DADE0:
    aot_gpr[5] = (15395u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2193)));
    aot_gpr[5] = (aot_gpr[5] | 55050u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (2218u << 16u);
      if (branch_taken) {
          goto L_088DAE5C;
      }
      goto L_088DADF8;
    }
L_088DADF8:
    aot_gpr[4] = (0u | 0u);
    goto L_088DADFC;
L_088DADFC:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1430))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(1436), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DADFC;
      }
      goto L_088DAE18;
    }
L_088DAE18:
    aot_gpr[31] = (0x088DAE20u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAE20u) goto L_088DAE20;
    return;
L_088DAE20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DAE30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2100), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAE30u) goto L_088DAE30;
    return;
L_088DAE30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DAE40u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2104), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 88u, 0x088D7738u>(ctx, &aot_mem) && ctx.pc == 0x088DAE40u) goto L_088DAE40;
    return;
L_088DAE40:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088DAE50u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(2108), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 74u, 0x088D950Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAE50u) goto L_088DAE50;
    return;
L_088DAE50:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2193), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2194), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088DAE5C;
L_088DAE5C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[23] = (0u | 2u);
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    goto L_088DAE6C;
L_088DAE6C:
    aot_gpr[19] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(1424))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF14;
      }
      goto L_088DAE80;
    }
L_088DAE80:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088DAE8Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAE8Cu) goto L_088DAE8C;
    return;
L_088DAE8C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(1424))))));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[19] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAF0C;
      }
      goto L_088DAEB4;
    }
L_088DAEB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088DAEE8;
      }
      goto L_088DAECC;
    }
L_088DAECC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088DAEE0u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 233u, 0x088D8F9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAEE0u) goto L_088DAEE0;
    return;
L_088DAEE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DAEFC;
      }
      goto L_088DAEE8;
    }
L_088DAEE8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088DAEFCu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 233u, 0x088D8F9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAEFCu) goto L_088DAEFC;
    return;
L_088DAEFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088DAF0Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_088DA534;
L_088DAF0C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    goto L_088DAF14;
L_088DAF14:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DAE6C;
      }
      goto L_088DAF24;
    }
L_088DAF24:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088DAF30u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAF30u) goto L_088DAF30;
    return;
L_088DAF30:
    aot_gpr[31] = (0x088DAF38u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 25u, 0x08A4C1DCu>(ctx, &aot_mem) && ctx.pc == 0x088DAF38u) goto L_088DAF38;
    return;
L_088DAF38:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[31] = (0x088DAF68u);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 179u, 0x0885AADCu>(ctx, &aot_mem) && ctx.pc == 0x088DAF68u) goto L_088DAF68;
    return;
L_088DAF68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[5] = (aot_gpr[5] << 8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[21] = (256u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(972)));
    aot_gpr[7] = (aot_gpr[4] - aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (0u | 11u);
    aot_gpr[7] = (0u | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088DAFC0u);
    aot_gpr[8] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DAFC0u) goto L_088DAFC0;
    return;
L_088DAFC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x088DAFCCu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088DAFCCu) goto L_088DAFCC;
    return;
L_088DAFCC:
    aot_gpr[31] = (0x088DAFD4u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 25u, 0x08A4C1DCu>(ctx, &aot_mem) && ctx.pc == 0x088DAFD4u) goto L_088DAFD4;
    return;
L_088DAFD4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[31] = (0x088DAFFCu);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 179u, 0x0885AADCu>(ctx, &aot_mem) && ctx.pc == 0x088DAFFCu) goto L_088DAFFC;
    return;
L_088DAFFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    ctx.pc = 0x088DB000u; return;
}

void recomp_unit_0214(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0214_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_214(Runtime &runtime) {
    runtime.register_generated_unit(214u, 0x088DA000u, 4096u, &recomp_unit_0214, &recomp_unit_0214_entry);
    runtime.register_function(0x088DA000u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA004u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA014u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA028u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA044u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA050u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA058u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA098u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA0BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA0CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA0E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA0FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA108u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA140u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA150u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA17Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA190u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA1F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA200u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA20Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA21Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA22Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA240u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA248u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA24Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA258u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA274u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA280u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA28Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA298u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA2FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA304u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA314u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA318u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA324u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA32Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA340u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA348u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA364u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA378u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA390u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA3A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA3B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA3BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA3C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA3D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA3ECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA3F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA3F8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA428u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA434u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA440u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA448u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA454u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA45Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA460u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA470u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA494u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA4C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA4D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA4DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA4E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA4FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA500u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA508u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA510u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA534u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA584u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA598u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA5A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA5C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA5D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA5D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA5E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA5E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA5F8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA600u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA610u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA61Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA624u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA648u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA658u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA668u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA66Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA674u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA688u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA690u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA6BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA6C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA6DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA6E4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA6F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA6F8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA700u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA70Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA714u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA724u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA730u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA744u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA74Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA75Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA768u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA770u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA778u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA7A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA7B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA7C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA7D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA7E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA7ECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA7F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA804u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA80Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA820u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA834u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA83Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA84Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA85Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA874u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA880u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA88Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA8ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA8DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA904u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA914u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA91Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA928u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA938u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA944u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA990u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA9BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA9C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA9D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA9E4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DA9F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA04u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA14u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA28u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA44u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA58u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA60u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA64u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA90u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAA98u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAAACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAAC0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAAD4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAB08u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAB40u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAB4Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAB58u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAB78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAB84u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAB90u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAB98u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DABA8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DABB0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DABC0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DABD0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DABE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DABE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DABF0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC00u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC08u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC18u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC20u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC28u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC40u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC48u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC58u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC5Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC64u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC7Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC80u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC88u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAC90u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DACA0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DACACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DACB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DACC4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DACCCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DACD4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DACDCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DACF4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAD24u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAD4Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAD60u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAD94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DADA0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DADE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DADF8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DADFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE18u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE20u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE40u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE50u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE5Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE80u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAE8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAEB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAECCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAEE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAEE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAEFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAF0Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAF14u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAF24u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAF30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAF38u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAF68u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAFC0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAFCCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAFD4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x088DAFFCu, &recomp_unit_0214, "recomp_unit_0214");
}
} // namespace psprecomp
