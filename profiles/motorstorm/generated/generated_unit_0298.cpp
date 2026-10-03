#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0298[1000] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0,
    0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0,
    0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0,
    69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0,
    73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0,
    0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149,
    150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0,
    0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200,
    0, 201, 0, 0, 0, 0, 0, 202,
};
void recomp_unit_0298_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0892E000u;
        entry_id = (entry_delta < 4000u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0298[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0892E000;
    case 2u: goto L_0892E008;
    case 3u: goto L_0892E018;
    case 4u: goto L_0892E028;
    case 5u: goto L_0892E030;
    case 6u: goto L_0892E040;
    case 7u: goto L_0892E050;
    case 8u: goto L_0892E058;
    case 9u: goto L_0892E060;
    case 10u: goto L_0892E078;
    case 11u: goto L_0892E080;
    case 12u: goto L_0892E0A8;
    case 13u: goto L_0892E0B0;
    case 14u: goto L_0892E0BC;
    case 15u: goto L_0892E0DC;
    case 16u: goto L_0892E0EC;
    case 17u: goto L_0892E0F8;
    case 18u: goto L_0892E104;
    case 19u: goto L_0892E120;
    case 20u: goto L_0892E128;
    case 21u: goto L_0892E130;
    case 22u: goto L_0892E160;
    case 23u: goto L_0892E1CC;
    case 24u: goto L_0892E1D4;
    case 25u: goto L_0892E1F4;
    case 26u: goto L_0892E218;
    case 27u: goto L_0892E21C;
    case 28u: goto L_0892E22C;
    case 29u: goto L_0892E240;
    case 30u: goto L_0892E24C;
    case 31u: goto L_0892E260;
    case 32u: goto L_0892E278;
    case 33u: goto L_0892E29C;
    case 34u: goto L_0892E2B4;
    case 35u: goto L_0892E2C4;
    case 36u: goto L_0892E2E0;
    case 37u: goto L_0892E2F4;
    case 38u: goto L_0892E304;
    case 39u: goto L_0892E310;
    case 40u: goto L_0892E320;
    case 41u: goto L_0892E32C;
    case 42u: goto L_0892E344;
    case 43u: goto L_0892E34C;
    case 44u: goto L_0892E368;
    case 45u: goto L_0892E384;
    case 46u: goto L_0892E38C;
    case 47u: goto L_0892E398;
    case 48u: goto L_0892E3C4;
    case 49u: goto L_0892E3D0;
    case 50u: goto L_0892E3E0;
    case 51u: goto L_0892E404;
    case 52u: goto L_0892E410;
    case 53u: goto L_0892E41C;
    case 54u: goto L_0892E460;
    case 55u: goto L_0892E480;
    case 56u: goto L_0892E490;
    case 57u: goto L_0892E4A0;
    case 58u: goto L_0892E4AC;
    case 59u: goto L_0892E4BC;
    case 60u: goto L_0892E4C4;
    case 61u: goto L_0892E4CC;
    case 62u: goto L_0892E4D4;
    case 63u: goto L_0892E508;
    case 64u: goto L_0892E518;
    case 65u: goto L_0892E528;
    case 66u: goto L_0892E548;
    case 67u: goto L_0892E568;
    case 68u: goto L_0892E574;
    case 69u: goto L_0892E580;
    case 70u: goto L_0892E5B0;
    case 71u: goto L_0892E5EC;
    case 72u: goto L_0892E5F4;
    case 73u: goto L_0892E600;
    case 74u: goto L_0892E60C;
    case 75u: goto L_0892E614;
    case 76u: goto L_0892E620;
    case 77u: goto L_0892E630;
    case 78u: goto L_0892E63C;
    case 79u: goto L_0892E658;
    case 80u: goto L_0892E660;
    case 81u: goto L_0892E670;
    case 82u: goto L_0892E678;
    case 83u: goto L_0892E690;
    case 84u: goto L_0892E6A4;
    case 85u: goto L_0892E6C8;
    case 86u: goto L_0892E6DC;
    case 87u: goto L_0892E6E8;
    case 88u: goto L_0892E6F8;
    case 89u: goto L_0892E704;
    case 90u: goto L_0892E70C;
    case 91u: goto L_0892E71C;
    case 92u: goto L_0892E724;
    case 93u: goto L_0892E734;
    case 94u: goto L_0892E744;
    case 95u: goto L_0892E754;
    case 96u: goto L_0892E764;
    case 97u: goto L_0892E76C;
    case 98u: goto L_0892E774;
    case 99u: goto L_0892E784;
    case 100u: goto L_0892E7A0;
    case 101u: goto L_0892E7BC;
    case 102u: goto L_0892E7C8;
    case 103u: goto L_0892E7D8;
    case 104u: goto L_0892E7E0;
    case 105u: goto L_0892E7F0;
    case 106u: goto L_0892E808;
    case 107u: goto L_0892E810;
    case 108u: goto L_0892E818;
    case 109u: goto L_0892E824;
    case 110u: goto L_0892E830;
    case 111u: goto L_0892E834;
    case 112u: goto L_0892E854;
    case 113u: goto L_0892E85C;
    case 114u: goto L_0892E868;
    case 115u: goto L_0892E878;
    case 116u: goto L_0892E88C;
    case 117u: goto L_0892E89C;
    case 118u: goto L_0892E8C8;
    case 119u: goto L_0892E8D4;
    case 120u: goto L_0892E8DC;
    case 121u: goto L_0892E8EC;
    case 122u: goto L_0892E8F4;
    case 123u: goto L_0892E8FC;
    case 124u: goto L_0892E904;
    case 125u: goto L_0892E930;
    case 126u: goto L_0892E93C;
    case 127u: goto L_0892E970;
    case 128u: goto L_0892E980;
    case 129u: goto L_0892E998;
    case 130u: goto L_0892E9A4;
    case 131u: goto L_0892E9B0;
    case 132u: goto L_0892E9B8;
    case 133u: goto L_0892E9BC;
    case 134u: goto L_0892E9D4;
    case 135u: goto L_0892E9E0;
    case 136u: goto L_0892E9E8;
    case 137u: goto L_0892E9F4;
    case 138u: goto L_0892EA10;
    case 139u: goto L_0892EA24;
    case 140u: goto L_0892EA34;
    case 141u: goto L_0892EA50;
    case 142u: goto L_0892EA64;
    case 143u: goto L_0892EA74;
    case 144u: goto L_0892EA7C;
    case 145u: goto L_0892EA8C;
    case 146u: goto L_0892EAD4;
    case 147u: goto L_0892EB44;
    case 148u: goto L_0892EB64;
    case 149u: goto L_0892EB7C;
    case 150u: goto L_0892EB80;
    case 151u: goto L_0892EB8C;
    case 152u: goto L_0892EB98;
    case 153u: goto L_0892EBB4;
    case 154u: goto L_0892EBD8;
    case 155u: goto L_0892EBF0;
    case 156u: goto L_0892EC00;
    case 157u: goto L_0892EC08;
    case 158u: goto L_0892EC1C;
    case 159u: goto L_0892EC28;
    case 160u: goto L_0892EC44;
    case 161u: goto L_0892EC78;
    case 162u: goto L_0892EC90;
    case 163u: goto L_0892ECA0;
    case 164u: goto L_0892ECA8;
    case 165u: goto L_0892ECBC;
    case 166u: goto L_0892ECC8;
    case 167u: goto L_0892ECE4;
    case 168u: goto L_0892ED10;
    case 169u: goto L_0892ED28;
    case 170u: goto L_0892ED38;
    case 171u: goto L_0892ED40;
    case 172u: goto L_0892ED54;
    case 173u: goto L_0892ED60;
    case 174u: goto L_0892ED80;
    case 175u: goto L_0892EDA8;
    case 176u: goto L_0892EDC0;
    case 177u: goto L_0892EDC4;
    case 178u: goto L_0892EDD4;
    case 179u: goto L_0892EDDC;
    case 180u: goto L_0892EDF0;
    case 181u: goto L_0892EDFC;
    case 182u: goto L_0892EE2C;
    case 183u: goto L_0892EE4C;
    case 184u: goto L_0892EE68;
    case 185u: goto L_0892EE94;
    case 186u: goto L_0892EEB0;
    case 187u: goto L_0892EEBC;
    case 188u: goto L_0892EECC;
    case 189u: goto L_0892EED0;
    case 190u: goto L_0892EED8;
    case 191u: goto L_0892EEEC;
    case 192u: goto L_0892EF08;
    case 193u: goto L_0892EF10;
    case 194u: goto L_0892EF18;
    case 195u: goto L_0892EF2C;
    case 196u: goto L_0892EF34;
    case 197u: goto L_0892EF64;
    case 198u: goto L_0892EF6C;
    case 199u: goto L_0892EF74;
    case 200u: goto L_0892EF7C;
    case 201u: goto L_0892EF84;
    case 202u: goto L_0892EF9C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0892E000:
    aot_gpr[31] = (0x0892E008u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 154u, 0x08928E64u>(ctx, &aot_mem) && ctx.pc == 0x0892E008u) goto L_0892E008;
    return;
L_0892E008:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (0u | 24576u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892E028;
      }
      goto L_0892E018;
    }
L_0892E018:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(16144), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (0u | 0u);
    goto L_0892E028;
L_0892E028:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E078;
      }
      goto L_0892E030;
    }
L_0892E030:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E078;
      }
      goto L_0892E040;
    }
L_0892E040:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892E078;
      }
      goto L_0892E050;
    }
L_0892E050:
    aot_gpr[31] = (0x0892E058u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0295_entry, 295u, 118u, 0x0892B920u>(ctx, &aot_mem) && ctx.pc == 0x0892E058u) goto L_0892E058;
    return;
L_0892E058:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E078;
      }
      goto L_0892E060;
    }
L_0892E060:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_0892E078;
L_0892E078:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892E0B0;
      }
      goto L_0892E080;
    }
L_0892E080:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (15820u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16140)));
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892E0B0;
      }
      goto L_0892E0A8;
    }
L_0892E0A8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0892E0B0;
L_0892E0B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 161u, 0x0892DC04u>(ctx, &aot_mem); return;
      }
      goto L_0892E0BC;
    }
L_0892E0BC:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16144), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892E0EC;
      }
      goto L_0892E0DC;
    }
L_0892E0DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892E104;
      }
      goto L_0892E0EC;
    }
L_0892E0EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0892E0F8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x0892E0F8u) goto L_0892E0F8;
    return;
L_0892E0F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[31] = (0x0892E104u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(408));
    ctx.pc = 0x08A5B27Cu;
    return;
L_0892E104:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21280)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E128;
      }
      goto L_0892E120;
    }
L_0892E120:
    aot_gpr[31] = (0x0892E128u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x0892E128u) goto L_0892E128;
    return;
L_0892E128:
    aot_gpr[31] = (0x0892E130u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.pc = 0x08A5B0E4u;
    return;
L_0892E130:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(736)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(740)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(744)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(748)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(756)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(760)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(764)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(768)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892E160:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-320));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[23]);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[23] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[22]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(5392));
    aot_gpr[20] = (aot_gpr[21] + static_cast<std::uint32_t>(5568));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-7472));
    aot_gpr[22] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[31]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892E22C;
      }
      goto L_0892E1CC;
    }
L_0892E1CC:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[30] = (2218u << 16u);
    goto L_0892E1D4;
L_0892E1D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(5392)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 0 ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] ^ 1u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E21C;
      }
      goto L_0892E1F4;
    }
L_0892E1F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(104)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6504)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0892E218u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 113u, 0x0892A870u>(ctx, &aot_mem) && ctx.pc == 0x0892E218u) goto L_0892E218;
    return;
L_0892E218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_0892E21C;
L_0892E21C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0892E1D4;
      }
      goto L_0892E22C;
    }
L_0892E22C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0892E260;
      }
      goto L_0892E240;
    }
L_0892E240:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5568)));
    aot_gpr[31] = (0x0892E24Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 146u, 0x08929B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E24Cu) goto L_0892E24C;
    return;
L_0892E24C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0892E240;
      }
      goto L_0892E260;
    }
L_0892E260:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-8476), 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (17792u << 16u);
      if (branch_taken) {
          goto L_0892E518;
      }
      goto L_0892E278;
    }
L_0892E278:
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[30] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[4] = (20224u << 16u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[20] = (32768u << 16u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[7] = (2218u << 16u);
    goto L_0892E29C;
L_0892E29C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892E508;
      }
      goto L_0892E2B4;
    }
L_0892E2B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E508;
      }
      goto L_0892E2C4;
    }
L_0892E2C4:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] << (aot_gpr[4] & 31u));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-8472)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E368;
      }
      goto L_0892E2E0;
    }
L_0892E2E0:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-10796)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E304;
      }
      goto L_0892E2F4;
    }
L_0892E2F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-8476)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-8476), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892E508;
      }
      goto L_0892E304;
    }
L_0892E304:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E320;
      }
      goto L_0892E310;
    }
L_0892E310:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0892E320u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E320u) goto L_0892E320;
    return;
L_0892E320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[7] = (2218u << 16u);
      if (branch_taken) {
          goto L_0892E34C;
      }
      goto L_0892E32C;
    }
L_0892E32C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E34C;
      }
      goto L_0892E344;
    }
L_0892E344:
    aot_gpr[31] = (0x0892E34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 42u, 0x0892A370u>(ctx, &aot_mem) && ctx.pc == 0x0892E34Cu) goto L_0892E34C;
    return;
L_0892E34C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0892E508;
      }
      goto L_0892E368;
    }
L_0892E368:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-8476)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-8476), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 4096u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E38C;
      }
      goto L_0892E384;
    }
L_0892E384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E508;
      }
      goto L_0892E38C;
    }
L_0892E38C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (static_cast<std::int32_t>(aot_gpr[4]) < 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0892E4D4;
    }
    goto L_0892E398;
L_0892E398:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(112)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0892E3D0;
      }
      goto L_0892E3C4;
    }
L_0892E3C4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892E3E0;
      }
      goto L_0892E3D0;
    }
L_0892E3D0:
    aot_fpr[12] = aot_fpr[12] - aot_fpr[22];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    goto L_0892E3E0;
L_0892E3E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[22];
        goto L_0892E410;
    }
    goto L_0892E404;
L_0892E404:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892E41C;
      }
      goto L_0892E410;
    }
L_0892E410:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[20]);
    goto L_0892E41C;
L_0892E41C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5376)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] & 512u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[8]);
      if (branch_taken) {
          goto L_0892E480;
      }
      goto L_0892E460;
    }
L_0892E460:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0892E480;
L_0892E480:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892E4AC;
      }
      goto L_0892E490;
    }
L_0892E490:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892E4AC;
      }
      goto L_0892E4A0;
    }
L_0892E4A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892E4CC;
      }
      goto L_0892E4AC;
    }
L_0892E4AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[4] & 128u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] & 1u);
      if (branch_taken) {
          goto L_0892E4CC;
      }
      goto L_0892E4BC;
    }
L_0892E4BC:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E4CC;
      }
      goto L_0892E4C4;
    }
L_0892E4C4:
    aot_gpr[4] = (aot_gpr[4] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_0892E4CC;
L_0892E4CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0892E508;
      }
      goto L_0892E4D4;
    }
L_0892E4D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5376)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_0892E508;
L_0892E508:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892E29C;
      }
      goto L_0892E518;
    }
L_0892E518:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892E9D4;
      }
      goto L_0892E528;
    }
L_0892E528:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[29]);
    aot_gpr[30] = (0u | 1u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    aot_gpr[22] = (2219u << 16u);
    aot_gpr[21] = (2219u << 16u);
    aot_gpr[20] = (2218u << 16u);
    goto L_0892E548;
L_0892E548:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[6] & 4096u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E5F4;
      }
      goto L_0892E568;
    }
L_0892E568:
    aot_gpr[4] = (aot_gpr[6] & 64u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E5EC;
      }
      goto L_0892E574;
    }
L_0892E574:
    aot_gpr[4] = (aot_gpr[6] & 8192u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_0892E5B0;
      }
      goto L_0892E580;
    }
L_0892E580:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-10780)));
    aot_gpr[4] = (aot_gpr[30] << (aot_gpr[4] & 31u));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-10780), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-10792)));
    aot_gpr[4] = (aot_gpr[30] << (aot_gpr[4] & 31u));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-10792), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    goto L_0892E5B0;
L_0892E5B0:
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_0892E5EC;
L_0892E5EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E9BC;
      }
      goto L_0892E5F4;
    }
L_0892E5F4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E600;
    }
L_0892E600:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[18];
    aot_gpr[7] = (aot_gpr[6] & 64u);
      if (branch_taken) {
          goto L_0892E810;
      }
      goto L_0892E60C;
    }
L_0892E60C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E670;
      }
      goto L_0892E614;
    }
L_0892E614:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E630;
      }
      goto L_0892E620;
    }
L_0892E620:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0892E630u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E630u) goto L_0892E630;
    return;
L_0892E630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892E660;
      }
      goto L_0892E63C;
    }
L_0892E63C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E660;
      }
      goto L_0892E658;
    }
L_0892E658:
    aot_gpr[31] = (0x0892E660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 42u, 0x0892A370u>(ctx, &aot_mem) && ctx.pc == 0x0892E660u) goto L_0892E660;
    return;
L_0892E660:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0892E808;
      }
      goto L_0892E670;
    }
L_0892E670:
    { const bool branch_taken = aot_gpr[9] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892E808;
      }
      goto L_0892E678;
    }
L_0892E678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(5376)));
    aot_gpr[5] = (aot_gpr[8] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E808;
      }
      goto L_0892E690;
    }
L_0892E690:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(52)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[4] & 2u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0892E71C;
      }
      goto L_0892E6A4;
    }
L_0892E6A4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5392)));
    aot_gpr[17] = (aot_gpr[7] << 7u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892E71C;
      }
      goto L_0892E6C8;
    }
L_0892E6C8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[20])) && aot_fpr[12] == aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892E71C;
      }
      goto L_0892E6DC;
    }
L_0892E6DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E6F8;
      }
      goto L_0892E6E8;
    }
L_0892E6E8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0892E6F8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892E6F8u) goto L_0892E6F8;
    return;
L_0892E6F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E70C;
      }
      goto L_0892E704;
    }
L_0892E704:
    aot_gpr[31] = (0x0892E70Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 42u, 0x0892A370u>(ctx, &aot_mem) && ctx.pc == 0x0892E70Cu) goto L_0892E70C;
    return;
L_0892E70C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_0892E71C;
L_0892E71C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E808;
      }
      goto L_0892E724;
    }
L_0892E724:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0892E7D8;
      }
      goto L_0892E734;
    }
L_0892E734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    goto L_0892E744;
L_0892E744:
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_0892E7C8;
      }
      goto L_0892E754;
    }
L_0892E754:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[6] & 8192u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[6] & 64u);
      if (branch_taken) {
          goto L_0892E7C8;
      }
      goto L_0892E764;
    }
L_0892E764:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[6] & 2u);
      if (branch_taken) {
          goto L_0892E7C8;
      }
      goto L_0892E76C;
    }
L_0892E76C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E7C8;
      }
      goto L_0892E774;
    }
L_0892E774:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E7C8;
      }
      goto L_0892E784;
    }
L_0892E784:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(5376)));
    aot_gpr[5] = (aot_gpr[10] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892E7A0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 27u, 0x0892A20Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E7A0u) goto L_0892E7A0;
    return;
L_0892E7A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(5376)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0892E7BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 54u, 0x0892A470u>(ctx, &aot_mem) && ctx.pc == 0x0892E7BCu) goto L_0892E7BC;
    return;
L_0892E7BC:
    aot_gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0892E7D8;
      }
      goto L_0892E7C8;
    }
L_0892E7C8:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892E744;
      }
      goto L_0892E7D8;
    }
L_0892E7D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E808;
      }
      goto L_0892E7E0;
    }
L_0892E7E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E808;
      }
      goto L_0892E7F0;
    }
L_0892E7F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[4]);
    goto L_0892E808;
L_0892E808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E9BC;
      }
      goto L_0892E810;
    }
L_0892E810:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-8193));
      if (branch_taken) {
          goto L_0892E8C8;
      }
      goto L_0892E818;
    }
L_0892E818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
        goto L_0892E834;
    }
    goto L_0892E824;
L_0892E824:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E85C;
      }
      goto L_0892E830;
    }
L_0892E830:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_0892E834;
L_0892E834:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(5376)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0892E854u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 54u, 0x0892A470u>(ctx, &aot_mem) && ctx.pc == 0x0892E854u) goto L_0892E854;
    return;
L_0892E854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E85C;
    }
L_0892E85C:
    aot_gpr[4] = (aot_gpr[6] & 8192u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_0892E89C;
      }
      goto L_0892E868;
    }
L_0892E868:
    aot_gpr[5] = (aot_gpr[6] & 1u);
    aot_gpr[9] = (aot_gpr[30] << (aot_gpr[9] & 31u));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-10792)));
      if (branch_taken) {
          goto L_0892E88C;
      }
      goto L_0892E878;
    }
L_0892E878:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-10780)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-10780), aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[30] << (aot_gpr[9] & 31u));
    goto L_0892E88C;
L_0892E88C:
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-10792), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    goto L_0892E89C;
L_0892E89C:
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E8C8;
    }
L_0892E8C8:
    aot_gpr[5] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] & 32u);
      if (branch_taken) {
          goto L_0892E8EC;
      }
      goto L_0892E8D4;
    }
L_0892E8D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E8EC;
      }
      goto L_0892E8DC;
    }
L_0892E8DC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[6] & 32u);
    goto L_0892E8EC;
L_0892E8EC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[6] & 128u);
      if (branch_taken) {
          goto L_0892E904;
      }
      goto L_0892E8F4;
    }
L_0892E8F4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[6] & 256u);
      if (branch_taken) {
          goto L_0892E904;
      }
      goto L_0892E8FC;
    }
L_0892E8FC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E904;
    }
L_0892E904:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(5376)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E930;
    }
L_0892E930:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0892E93Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 54u, 0x0892A470u>(ctx, &aot_mem) && ctx.pc == 0x0892E93Cu) goto L_0892E93C;
    return;
L_0892E93C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E970;
    }
L_0892E970:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E980;
    }
L_0892E980:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] & 2048u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E998;
    }
L_0892E998:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E9A4;
    }
L_0892E9A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892E9B8;
      }
      goto L_0892E9B0;
    }
L_0892E9B0:
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_0892E9B8;
L_0892E9B8:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    goto L_0892E9BC;
L_0892E9BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892E548;
      }
      goto L_0892E9D4;
    }
L_0892E9D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892EA10;
      }
      goto L_0892E9E0;
    }
L_0892E9E0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EA10;
      }
      goto L_0892E9E8;
    }
L_0892E9E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0892E9F4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0295_entry, 295u, 171u, 0x0892BC0Cu>(ctx, &aot_mem) && ctx.pc == 0x0892E9F4u) goto L_0892E9F4;
    return;
L_0892E9F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[6] = (2195u << 16u);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-17396));
    aot_gpr[31] = (0x0892EA10u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 58u, 0x08A58464u>(ctx, &aot_mem) && ctx.pc == 0x0892EA10u) goto L_0892EA10;
    return;
L_0892EA10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0892EA8C;
      }
      goto L_0892EA24;
    }
L_0892EA24:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[29] | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (2218u << 16u);
    goto L_0892EA34;
L_0892EA34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5376)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[31] = (0x0892EA50u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 196u, 0x08929E00u>(ctx, &aot_mem) && ctx.pc == 0x0892EA50u) goto L_0892EA50;
    return;
L_0892EA50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[5] & 128u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892EA74;
      }
      goto L_0892EA64;
    }
L_0892EA64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[16] << (aot_gpr[4] & 31u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] | aot_gpr[4]);
      if (branch_taken) {
          goto L_0892EA7C;
      }
      goto L_0892EA74;
    }
L_0892EA74:
    aot_gpr[5] = (aot_gpr[5] | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_0892EA7C;
L_0892EA7C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0892EA34;
      }
      goto L_0892EA8C;
    }
L_0892EA8C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-10796)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-10796), aot_gpr[5]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EAD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(5376));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5376), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[23] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(-7472));
    aot_gpr[20] = (aot_gpr[21] + static_cast<std::uint32_t>(5568));
    aot_gpr[22] = (aot_gpr[23] + static_cast<std::uint32_t>(-6504));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(5392));
      if (branch_taken) {
          goto L_0892EB8C;
      }
      goto L_0892EB44;
    }
L_0892EB44:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892EB64u);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EB64u) goto L_0892EB64;
    return;
L_0892EB64:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5376), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EB8C;
      }
      goto L_0892EB7C;
    }
L_0892EB7C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0892EB80;
L_0892EB80:
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892EB80;
      }
      goto L_0892EB8C;
    }
L_0892EB8C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0892EB98u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29204));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0892EB98u) goto L_0892EB98;
    return;
L_0892EB98:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892EC1C;
      }
      goto L_0892EBB4;
    }
L_0892EBB4:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892EBD8u);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EBD8u) goto L_0892EBD8;
    return;
L_0892EBD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7472), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0892EC1C;
      }
      goto L_0892EBF0;
    }
L_0892EBF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EC08;
      }
      goto L_0892EC00;
    }
L_0892EC00:
    aot_gpr[31] = (0x0892EC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 57u, 0x089293D0u>(ctx, &aot_mem) && ctx.pc == 0x0892EC08u) goto L_0892EC08;
    return;
L_0892EC08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0892EBF0;
      }
      goto L_0892EC1C;
    }
L_0892EC1C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0892EC28u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29192));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0892EC28u) goto L_0892EC28;
    return;
L_0892EC28:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892ECBC;
      }
      goto L_0892EC44;
    }
L_0892EC44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (aot_gpr[4] << 6u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0892EC78u);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EC78u) goto L_0892EC78;
    return;
L_0892EC78:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(5568), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0892ECBC;
      }
      goto L_0892EC90;
    }
L_0892EC90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(5568)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ECA8;
      }
      goto L_0892ECA0;
    }
L_0892ECA0:
    aot_gpr[31] = (0x0892ECA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 84u, 0x089295F8u>(ctx, &aot_mem) && ctx.pc == 0x0892ECA8u) goto L_0892ECA8;
    return;
L_0892ECA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_0892EC90;
      }
      goto L_0892ECBC;
    }
L_0892ECBC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0892ECC8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29180));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0892ECC8u) goto L_0892ECC8;
    return;
L_0892ECC8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-6504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_0892ED54;
      }
      goto L_0892ECE4;
    }
L_0892ECE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0892ED10u);
    aot_gpr[5] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892ED10u) goto L_0892ED10;
    return;
L_0892ED10:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-6504), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0892ED54;
      }
      goto L_0892ED28;
    }
L_0892ED28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-6504)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ED40;
      }
      goto L_0892ED38;
    }
L_0892ED38:
    aot_gpr[31] = (0x0892ED40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 101u, 0x08929768u>(ctx, &aot_mem) && ctx.pc == 0x0892ED40u) goto L_0892ED40;
    return;
L_0892ED40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_0892ED28;
      }
      goto L_0892ED54;
    }
L_0892ED54:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0892ED60u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29168));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0892ED60u) goto L_0892ED60;
    return;
L_0892ED60:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5392), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[7]);
      if (branch_taken) {
          goto L_0892EDF0;
      }
      goto L_0892ED80;
    }
L_0892ED80:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0892EDA8u);
    aot_gpr[5] = (0u | 16u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EDA8u) goto L_0892EDA8;
    return;
L_0892EDA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(5392), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0892EDF0;
      }
      goto L_0892EDC0;
    }
L_0892EDC0:
    aot_gpr[9] = (2218u << 16u);
    goto L_0892EDC4;
L_0892EDC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EDDC;
      }
      goto L_0892EDD4;
    }
L_0892EDD4:
    aot_gpr[31] = (0x0892EDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 117u, 0x08929904u>(ctx, &aot_mem) && ctx.pc == 0x0892EDDCu) goto L_0892EDDC;
    return;
L_0892EDDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0892EDC4;
      }
      goto L_0892EDF0;
    }
L_0892EDF0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0892EDFCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29156));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0892EDFCu) goto L_0892EDFC;
    return;
L_0892EDFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EE2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[6] != 0u) {
    aot_gpr[7] = (aot_gpr[6] | 0u);
        goto L_0892EE4C;
    }
    goto L_0892EE4C;
L_0892EE4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892EE68u);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0892EE68u) goto L_0892EE68;
    return;
L_0892EE68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EE94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0892EF18;
      }
      goto L_0892EEB0;
    }
L_0892EEB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_0892EED0;
      }
      goto L_0892EEBC;
    }
L_0892EEBC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892EECCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0892EECCu) goto L_0892EECC;
    return;
L_0892EECC:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_0892EED0;
L_0892EED0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EF18;
      }
      goto L_0892EED8;
    }
L_0892EED8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EF10;
      }
      goto L_0892EEEC;
    }
L_0892EEEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0892EF08u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892EF08u) goto L_0892EF08;
    return;
L_0892EF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892EF18;
      }
      goto L_0892EF10;
    }
L_0892EF10:
    aot_gpr[31] = (0x0892EF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0892EF18u) goto L_0892EF18;
    return;
L_0892EF18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EF2C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892EF34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0892EF6C;
      }
      goto L_0892EF64;
    }
L_0892EF64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0892EF7C;
      }
      goto L_0892EF6C;
    }
L_0892EF6C:
    aot_gpr[31] = (0x0892EF74u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0892EF74u) goto L_0892EF74;
    return;
L_0892EF74:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[5] = (0u | 1u);
    goto L_0892EF7C;
L_0892EF7C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
      if (branch_taken) {
          goto L_0892EF9C;
      }
      goto L_0892EF84;
    }
L_0892EF84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (9472u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_0892EF9C;
L_0892EF9C:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[16]);
    ctx.pc = 0x0892F000u; return;
}

void recomp_unit_0298(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0298_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_298(Runtime &runtime) {
    runtime.register_generated_unit(298u, 0x0892E000u, 4096u, &recomp_unit_0298, &recomp_unit_0298_entry);
    runtime.register_function(0x0892E000u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E008u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E018u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E028u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E030u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E040u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E050u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E058u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E060u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E078u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E080u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E0A8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E0B0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E0BCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E0DCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E0ECu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E0F8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E104u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E120u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E128u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E130u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E160u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E1CCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E1D4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E1F4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E218u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E21Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E22Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E240u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E24Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E260u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E278u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E29Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E2B4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E2C4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E2E0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E2F4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E304u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E310u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E320u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E32Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E344u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E34Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E368u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E384u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E38Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E398u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E3C4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E3D0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E3E0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E404u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E410u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E41Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E460u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E480u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E490u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E4A0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E4ACu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E4BCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E4C4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E4CCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E4D4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E508u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E518u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E528u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E548u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E568u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E574u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E580u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E5B0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E5ECu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E5F4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E600u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E60Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E614u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E620u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E630u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E63Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E658u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E660u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E670u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E678u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E690u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E6A4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E6C8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E6DCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E6E8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E6F8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E704u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E70Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E71Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E724u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E734u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E744u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E754u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E764u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E76Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E774u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E784u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E7A0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E7BCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E7C8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E7D8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E7E0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E7F0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E808u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E810u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E818u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E824u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E830u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E834u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E854u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E85Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E868u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E878u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E88Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E89Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E8C8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E8D4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E8DCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E8ECu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E8F4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E8FCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E904u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E930u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E93Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E970u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E980u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E998u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E9A4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E9B0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E9B8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E9BCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E9D4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E9E0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E9E8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892E9F4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EA10u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EA24u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EA34u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EA50u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EA64u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EA74u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EA7Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EA8Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EAD4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EB44u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EB64u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EB7Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EB80u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EB8Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EB98u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EBB4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EBD8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EBF0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EC00u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EC08u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EC1Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EC28u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EC44u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EC78u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EC90u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ECA0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ECA8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ECBCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ECC8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ECE4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ED10u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ED28u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ED38u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ED40u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ED54u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ED60u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892ED80u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EDA8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EDC0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EDC4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EDD4u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EDDCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EDF0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EDFCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EE2Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EE4Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EE68u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EE94u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EEB0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EEBCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EECCu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EED0u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EED8u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EEECu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF08u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF10u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF18u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF2Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF34u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF64u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF6Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF74u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF7Cu, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF84u, &recomp_unit_0298, "recomp_unit_0298");
    runtime.register_function(0x0892EF9Cu, &recomp_unit_0298, "recomp_unit_0298");
}
} // namespace psprecomp
