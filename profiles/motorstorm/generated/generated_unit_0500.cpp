#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0500[1023] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0,
    13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 33, 0, 0, 34, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0,
    0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 58, 59, 0, 60, 0, 61, 0, 62, 63, 0, 0, 64, 0,
    65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 68, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183,
    0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 203, 0, 204, 0, 0, 205, 0, 206, 0,
    0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 211, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218,
};
void recomp_unit_0500_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F8000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0500[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F8000;
    case 2u: goto L_089F8008;
    case 3u: goto L_089F8014;
    case 4u: goto L_089F801C;
    case 5u: goto L_089F8028;
    case 6u: goto L_089F8038;
    case 7u: goto L_089F8040;
    case 8u: goto L_089F8048;
    case 9u: goto L_089F8050;
    case 10u: goto L_089F805C;
    case 11u: goto L_089F8068;
    case 12u: goto L_089F8078;
    case 13u: goto L_089F8080;
    case 14u: goto L_089F8090;
    case 15u: goto L_089F80B0;
    case 16u: goto L_089F80B4;
    case 17u: goto L_089F80E8;
    case 18u: goto L_089F80F4;
    case 19u: goto L_089F8114;
    case 20u: goto L_089F811C;
    case 21u: goto L_089F812C;
    case 22u: goto L_089F813C;
    case 23u: goto L_089F8158;
    case 24u: goto L_089F8160;
    case 25u: goto L_089F816C;
    case 26u: goto L_089F81A8;
    case 27u: goto L_089F81B0;
    case 28u: goto L_089F81B8;
    case 29u: goto L_089F81C0;
    case 30u: goto L_089F81C8;
    case 31u: goto L_089F81D0;
    case 32u: goto L_089F81D8;
    case 33u: goto L_089F81DC;
    case 34u: goto L_089F81E8;
    case 35u: goto L_089F81FC;
    case 36u: goto L_089F8230;
    case 37u: goto L_089F8240;
    case 38u: goto L_089F8248;
    case 39u: goto L_089F8288;
    case 40u: goto L_089F8298;
    case 41u: goto L_089F82B8;
    case 42u: goto L_089F82C0;
    case 43u: goto L_089F82CC;
    case 44u: goto L_089F82D4;
    case 45u: goto L_089F82E0;
    case 46u: goto L_089F82EC;
    case 47u: goto L_089F82F4;
    case 48u: goto L_089F8308;
    case 49u: goto L_089F8318;
    case 50u: goto L_089F8320;
    case 51u: goto L_089F832C;
    case 52u: goto L_089F8338;
    case 53u: goto L_089F8348;
    case 54u: goto L_089F837C;
    case 55u: goto L_089F838C;
    case 56u: goto L_089F83A8;
    case 57u: goto L_089F83B0;
    case 58u: goto L_089F83CC;
    case 59u: goto L_089F83D0;
    case 60u: goto L_089F83D8;
    case 61u: goto L_089F83E0;
    case 62u: goto L_089F83E8;
    case 63u: goto L_089F83EC;
    case 64u: goto L_089F83F8;
    case 65u: goto L_089F8400;
    case 66u: goto L_089F841C;
    case 67u: goto L_089F8424;
    case 68u: goto L_089F8428;
    case 69u: goto L_089F8438;
    case 70u: goto L_089F8440;
    case 71u: goto L_089F844C;
    case 72u: goto L_089F8458;
    case 73u: goto L_089F847C;
    case 74u: goto L_089F848C;
    case 75u: goto L_089F8494;
    case 76u: goto L_089F84C8;
    case 77u: goto L_089F84D0;
    case 78u: goto L_089F84DC;
    case 79u: goto L_089F84EC;
    case 80u: goto L_089F8520;
    case 81u: goto L_089F8558;
    case 82u: goto L_089F8570;
    case 83u: goto L_089F8580;
    case 84u: goto L_089F858C;
    case 85u: goto L_089F8594;
    case 86u: goto L_089F85A4;
    case 87u: goto L_089F85B4;
    case 88u: goto L_089F85D8;
    case 89u: goto L_089F85E0;
    case 90u: goto L_089F85F4;
    case 91u: goto L_089F8620;
    case 92u: goto L_089F8628;
    case 93u: goto L_089F8644;
    case 94u: goto L_089F866C;
    case 95u: goto L_089F86B8;
    case 96u: goto L_089F86C8;
    case 97u: goto L_089F86D0;
    case 98u: goto L_089F86D8;
    case 99u: goto L_089F86E8;
    case 100u: goto L_089F86F8;
    case 101u: goto L_089F8710;
    case 102u: goto L_089F8724;
    case 103u: goto L_089F872C;
    case 104u: goto L_089F8748;
    case 105u: goto L_089F8750;
    case 106u: goto L_089F8758;
    case 107u: goto L_089F8764;
    case 108u: goto L_089F8778;
    case 109u: goto L_089F87A8;
    case 110u: goto L_089F87B0;
    case 111u: goto L_089F87BC;
    case 112u: goto L_089F87D0;
    case 113u: goto L_089F87D8;
    case 114u: goto L_089F87F0;
    case 115u: goto L_089F87F8;
    case 116u: goto L_089F881C;
    case 117u: goto L_089F8828;
    case 118u: goto L_089F8830;
    case 119u: goto L_089F8860;
    case 120u: goto L_089F887C;
    case 121u: goto L_089F8888;
    case 122u: goto L_089F88B8;
    case 123u: goto L_089F88E8;
    case 124u: goto L_089F8900;
    case 125u: goto L_089F890C;
    case 126u: goto L_089F8950;
    case 127u: goto L_089F895C;
    case 128u: goto L_089F8964;
    case 129u: goto L_089F896C;
    case 130u: goto L_089F89B0;
    case 131u: goto L_089F89BC;
    case 132u: goto L_089F89C4;
    case 133u: goto L_089F89D0;
    case 134u: goto L_089F89E4;
    case 135u: goto L_089F89EC;
    case 136u: goto L_089F89F4;
    case 137u: goto L_089F8A08;
    case 138u: goto L_089F8A3C;
    case 139u: goto L_089F8A44;
    case 140u: goto L_089F8A58;
    case 141u: goto L_089F8A68;
    case 142u: goto L_089F8A88;
    case 143u: goto L_089F8A98;
    case 144u: goto L_089F8AA8;
    case 145u: goto L_089F8AB8;
    case 146u: goto L_089F8AC8;
    case 147u: goto L_089F8AD8;
    case 148u: goto L_089F8B28;
    case 149u: goto L_089F8B30;
    case 150u: goto L_089F8B3C;
    case 151u: goto L_089F8B44;
    case 152u: goto L_089F8B4C;
    case 153u: goto L_089F8B64;
    case 154u: goto L_089F8B6C;
    case 155u: goto L_089F8B74;
    case 156u: goto L_089F8BA8;
    case 157u: goto L_089F8BDC;
    case 158u: goto L_089F8BF0;
    case 159u: goto L_089F8C00;
    case 160u: goto L_089F8C10;
    case 161u: goto L_089F8C18;
    case 162u: goto L_089F8C24;
    case 163u: goto L_089F8C2C;
    case 164u: goto L_089F8C34;
    case 165u: goto L_089F8C44;
    case 166u: goto L_089F8C4C;
    case 167u: goto L_089F8C84;
    case 168u: goto L_089F8C98;
    case 169u: goto L_089F8CA8;
    case 170u: goto L_089F8CB8;
    case 171u: goto L_089F8CC0;
    case 172u: goto L_089F8CCC;
    case 173u: goto L_089F8CD4;
    case 174u: goto L_089F8CDC;
    case 175u: goto L_089F8CEC;
    case 176u: goto L_089F8CF4;
    case 177u: goto L_089F8D2C;
    case 178u: goto L_089F8D40;
    case 179u: goto L_089F8D50;
    case 180u: goto L_089F8D60;
    case 181u: goto L_089F8D68;
    case 182u: goto L_089F8D74;
    case 183u: goto L_089F8D7C;
    case 184u: goto L_089F8D84;
    case 185u: goto L_089F8D8C;
    case 186u: goto L_089F8D98;
    case 187u: goto L_089F8DA0;
    case 188u: goto L_089F8DDC;
    case 189u: goto L_089F8DE4;
    case 190u: goto L_089F8E18;
    case 191u: goto L_089F8E28;
    case 192u: goto L_089F8E30;
    case 193u: goto L_089F8E40;
    case 194u: goto L_089F8E50;
    case 195u: goto L_089F8E58;
    case 196u: goto L_089F8E64;
    case 197u: goto L_089F8E6C;
    case 198u: goto L_089F8E74;
    case 199u: goto L_089F8E88;
    case 200u: goto L_089F8EB0;
    case 201u: goto L_089F8EC8;
    case 202u: goto L_089F8ED8;
    case 203u: goto L_089F8EDC;
    case 204u: goto L_089F8EE4;
    case 205u: goto L_089F8EF0;
    case 206u: goto L_089F8EF8;
    case 207u: goto L_089F8F0C;
    case 208u: goto L_089F8F18;
    case 209u: goto L_089F8F20;
    case 210u: goto L_089F8F28;
    case 211u: goto L_089F8F3C;
    case 212u: goto L_089F8F40;
    case 213u: goto L_089F8F48;
    case 214u: goto L_089F8F70;
    case 215u: goto L_089F8FAC;
    case 216u: goto L_089F8FD8;
    case 217u: goto L_089F8FE8;
    case 218u: goto L_089F8FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F8000:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F801C;
      }
      goto L_089F8008;
    }
L_089F8008:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 61u);
      if (branch_taken) {
          goto L_089F801C;
      }
      goto L_089F8014;
    }
L_089F8014:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F8040;
      }
      goto L_089F801C;
    }
L_089F801C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_089F81FC;
      }
      goto L_089F8028;
    }
L_089F8028:
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F8038u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    goto L_089F8F70;
L_089F8038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F81FC;
      }
      goto L_089F8040;
    }
L_089F8040:
    aot_gpr[31] = (0x089F8048u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F8048u) goto L_089F8048;
    return;
L_089F8048:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F805C;
      }
      goto L_089F8050;
    }
L_089F8050:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
      if (branch_taken) {
          goto L_089F8080;
      }
      goto L_089F805C;
    }
L_089F805C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_089F81FC;
      }
      goto L_089F8068;
    }
L_089F8068:
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F8078u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    goto L_089F8F70;
L_089F8078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F81FC;
      }
      goto L_089F8080;
    }
L_089F8080:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[30] = (0u | 39u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    aot_gpr[23] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089F80E8;
      }
      goto L_089F8090;
    }
L_089F8090:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F80B0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-8692));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 81u, 0x089F7588u>(ctx, &aot_mem) && ctx.pc == 0x089F80B0u) goto L_089F80B0;
    return;
L_089F80B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_089F80B4;
L_089F80B4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F80E8:
    aot_gpr[22] = (0u | 34u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
      if (branch_taken) {
          goto L_089F811C;
      }
      goto L_089F80F4;
    }
L_089F80F4:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F8114u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-8688));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 81u, 0x089F7588u>(ctx, &aot_mem) && ctx.pc == 0x089F8114u) goto L_089F8114;
    return;
L_089F8114:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F80B4;
      }
      goto L_089F811C;
    }
L_089F811C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[31] = (0x089F812Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F812Cu) goto L_089F812C;
    return;
L_089F812C:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F813Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F813Cu) goto L_089F813C;
    return;
L_089F813C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(8160));
    aot_gpr[20] = (0u | 10u);
    aot_gpr[19] = (0u | 13u);
    aot_gpr[18] = (0u | 47u);
    aot_gpr[17] = (0u | 62u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089F8158;
L_089F8158:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F80B4;
      }
      goto L_089F8160;
    }
L_089F8160:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] << 24u);
      if (branch_taken) {
          goto L_089F80B4;
      }
      goto L_089F816C;
    }
L_089F816C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[5] ^ 10u);
    aot_gpr[6] = (aot_gpr[6] & 8u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] ^ 13u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F80B4;
      }
      goto L_089F81A8;
    }
L_089F81A8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_089F80B4;
      }
      goto L_089F81B0;
    }
L_089F81B0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F80B4;
      }
      goto L_089F81B8;
    }
L_089F81B8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F80B4;
      }
      goto L_089F81C0;
    }
L_089F81C0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089F80B4;
      }
      goto L_089F81C8;
    }
L_089F81C8:
    if (aot_gpr[4] == aot_gpr[30]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
        goto L_089F81DC;
    }
    goto L_089F81D0;
L_089F81D0:
    if (aot_gpr[4] != aot_gpr[22]) {
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
        goto L_089F8230;
    }
    goto L_089F81D8;
L_089F81D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089F81DC;
L_089F81DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F81FC;
      }
      goto L_089F81E8;
    }
L_089F81E8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 7u);
    aot_gpr[31] = (0x089F81FCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_089F8F70;
L_089F81FC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8230:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F8240u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F8240u) goto L_089F8240;
    return;
L_089F8240:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F8158;
      }
      goto L_089F8248;
    }
L_089F8248:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x089F8288u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 250u, 0x089F4FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F8288u) goto L_089F8288;
    return;
L_089F8288:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F8298u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F8298u) goto L_089F8298;
    return;
L_089F8298:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10464));
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-8728));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-8684));
    goto L_089F82B8;
L_089F82B8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F84C8;
      }
      goto L_089F82C0;
    }
L_089F82C0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_089F84C8;
      }
      goto L_089F82CC;
    }
L_089F82CC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F8428;
      }
      goto L_089F82D4;
    }
L_089F82D4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x089F82E0u);
    aot_gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F82E0u) goto L_089F82E0;
    return;
L_089F82E0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F8320;
      }
      goto L_089F82EC;
    }
L_089F82EC:
    aot_gpr[31] = (0x089F82F4u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F82F4u) goto L_089F82F4;
    return;
L_089F82F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[31] = (0x089F8308u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8308u) goto L_089F8308;
    return;
L_089F8308:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x089F8318u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8318u) goto L_089F8318;
    return;
L_089F8318:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_089F8320;
L_089F8320:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089F837C;
    }
    goto L_089F832C;
L_089F832C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089F8348;
      }
      goto L_089F8338;
    }
L_089F8338:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F8348u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_089F8F70;
L_089F8348:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F837C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-18752)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089F83B0;
      }
      goto L_089F838C;
    }
L_089F838C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F83A8u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F83A8u) goto L_089F83A8;
    return;
L_089F83A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F83D0;
      }
      goto L_089F83B0;
    }
L_089F83B0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F83CCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F83CCu) goto L_089F83CC;
    return;
L_089F83CC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_089F83D0;
L_089F83D0:
    aot_gpr[31] = (0x089F83D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F88E8;
L_089F83D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_089F8400;
      }
      goto L_089F83E0;
    }
L_089F83E0:
    aot_gpr[31] = (0x089F83E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 231u, 0x089F4E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089F83E8u) goto L_089F83E8;
    return;
L_089F83E8:
    aot_gpr[20] = (aot_gpr[18] | 0u);
    goto L_089F83EC;
L_089F83EC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F83F8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F83F8u) goto L_089F83F8;
    return;
L_089F83F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F82B8;
      }
      goto L_089F8400;
    }
L_089F8400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F841Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F841Cu) goto L_089F841C;
    return;
L_089F841C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F83EC;
      }
      goto L_089F8424;
    }
L_089F8424:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089F8428;
L_089F8428:
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F8438u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F8438u) goto L_089F8438;
    return;
L_089F8438:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_089F84EC;
      }
      goto L_089F8440;
    }
L_089F8440:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F844Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 201u, 0x089F7BF4u>(ctx, &aot_mem) && ctx.pc == 0x089F844Cu) goto L_089F844C;
    return;
L_089F844C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8494;
      }
      goto L_089F8458;
    }
L_089F8458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F847Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F847Cu) goto L_089F847C;
    return;
L_089F847C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F848Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 231u, 0x089F4E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089F848Cu) goto L_089F848C;
    return;
L_089F848C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F83EC;
      }
      goto L_089F8494;
    }
L_089F8494:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F84C8:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F84EC;
      }
      goto L_089F84D0;
    }
L_089F84D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_089F84EC;
      }
      goto L_089F84DC;
    }
L_089F84DC:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F84ECu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_089F8F70;
L_089F84EC:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8520:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089F8558u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 250u, 0x089F4FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F8558u) goto L_089F8558;
    return;
L_089F8558:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (aot_gpr[21] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089F8570u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8570u) goto L_089F8570;
    return;
L_089F8570:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F8580u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8580u) goto L_089F8580;
    return;
L_089F8580:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F858Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F858Cu) goto L_089F858C;
    return;
L_089F858C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F85B4;
      }
      goto L_089F8594;
    }
L_089F8594:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F85A4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 4u, 0x089F9044u>(ctx, &aot_mem) && ctx.pc == 0x089F85A4u) goto L_089F85A4;
    return;
L_089F85A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_089F85B4;
L_089F85B4:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-8716));
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F85D8u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-8680));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F85D8u) goto L_089F85D8;
    return;
L_089F85D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089F8620;
      }
      goto L_089F85E0;
    }
L_089F85E0:
    aot_gpr[5] = (0u | 11u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F85F4u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_089F8F70;
L_089F85F4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8620:
    aot_gpr[31] = (0x089F8628u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8628u) goto L_089F8628;
    return;
L_089F8628:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x089F8644u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 81u, 0x089F7588u>(ctx, &aot_mem) && ctx.pc == 0x089F8644u) goto L_089F8644;
    return;
L_089F8644:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F866C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x089F86B8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F86B8u) goto L_089F86B8;
    return;
L_089F86B8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F86C8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F86C8u) goto L_089F86C8;
    return;
L_089F86C8:
    aot_gpr[31] = (0x089F86D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 250u, 0x089F4FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F86D0u) goto L_089F86D0;
    return;
L_089F86D0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[21] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F86F8;
      }
      goto L_089F86D8;
    }
L_089F86D8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F86E8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 4u, 0x089F9044u>(ctx, &aot_mem) && ctx.pc == 0x089F86E8u) goto L_089F86E8;
    return;
L_089F86E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_089F86F8;
L_089F86F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-8704));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-8676));
      if (branch_taken) {
          goto L_089F872C;
      }
      goto L_089F8710;
    }
L_089F8710:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F8724u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F8724u) goto L_089F8724;
    return;
L_089F8724:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F8860;
      }
      goto L_089F872C;
    }
L_089F872C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F8748u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F8748u) goto L_089F8748;
    return;
L_089F8748:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_089F8764;
      }
      goto L_089F8750;
    }
L_089F8750:
    aot_gpr[31] = (0x089F8758u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8758u) goto L_089F8758;
    return;
L_089F8758:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F87A8;
      }
      goto L_089F8764;
    }
L_089F8764:
    aot_gpr[5] = (0u | 15u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F8778u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_089F8F70;
L_089F8778:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F87A8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F87F8;
      }
      goto L_089F87B0;
    }
L_089F87B0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F87F8;
      }
      goto L_089F87BC;
    }
L_089F87BC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F87D0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F87D0u) goto L_089F87D0;
    return;
L_089F87D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F87F8;
      }
      goto L_089F87D8;
    }
L_089F87D8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F87F0u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F87F0u) goto L_089F87F0;
    return;
L_089F87F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F87A8;
      }
      goto L_089F87F8;
    }
L_089F87F8:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x089F881Cu);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 81u, 0x089F7588u>(ctx, &aot_mem) && ctx.pc == 0x089F881Cu) goto L_089F881C;
    return;
L_089F881C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F8830;
      }
      goto L_089F8828;
    }
L_089F8828:
    aot_gpr[31] = (0x089F8830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F8830u) goto L_089F8830;
    return;
L_089F8830:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8860:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F887Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-8672));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 81u, 0x089F7588u>(ctx, &aot_mem) && ctx.pc == 0x089F887Cu) goto L_089F887C;
    return;
L_089F887C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F88B8;
      }
      goto L_089F8888;
    }
L_089F8888:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F88B8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F88E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F895C;
      }
      goto L_089F8900;
    }
L_089F8900:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8160));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[6]);
    goto L_089F890C;
L_089F890C:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(8))))));
    aot_gpr[8] = (aot_gpr[8] << 24u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[8]) >> 24u));
    aot_gpr[9] = (aot_gpr[8] & 255u);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (aot_gpr[8] ^ 10u);
    aot_gpr[9] = (aot_gpr[9] & 8u);
    aot_gpr[9] = (0u < aot_gpr[9] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] ^ 13u);
    aot_gpr[9] = (aot_gpr[9] | aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[9] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F8964;
      }
      goto L_089F8950;
    }
L_089F8950:
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[6]);
      if (branch_taken) {
          goto L_089F890C;
      }
      goto L_089F895C;
    }
L_089F895C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8964:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F896C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[30]);
    aot_gpr[22] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[30] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[31]);
    aot_gpr[31] = (0x089F89B0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F89B0u) goto L_089F89B0;
    return;
L_089F89B0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089F89BCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 250u, 0x089F4FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F89BCu) goto L_089F89BC;
    return;
L_089F89BC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F89EC;
      }
      goto L_089F89C4;
    }
L_089F89C4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F89EC;
      }
      goto L_089F89D0;
    }
L_089F89D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089F89E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8724));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F89E4u) goto L_089F89E4;
    return;
L_089F89E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8A3C;
      }
      goto L_089F89EC;
    }
L_089F89EC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F8A08;
      }
      goto L_089F89F4;
    }
L_089F89F4:
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F8A08u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    goto L_089F8F70;
L_089F8A08:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8A3C:
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[18]);
      if (branch_taken) {
          goto L_089F8A68;
      }
      goto L_089F8A44;
    }
L_089F8A44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F8A58u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 4u, 0x089F9044u>(ctx, &aot_mem) && ctx.pc == 0x089F8A58u) goto L_089F8A58;
    return;
L_089F8A58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_089F8A68;
L_089F8A68:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[31] = (0x089F8A88u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8A88u) goto L_089F8A88;
    return;
L_089F8A88:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F8A98u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8A98u) goto L_089F8A98;
    return;
L_089F8A98:
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F8AA8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8AA8u) goto L_089F8AA8;
    return;
L_089F8AA8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F8AB8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8AB8u) goto L_089F8AB8;
    return;
L_089F8AB8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F8AC8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8AC8u) goto L_089F8AC8;
    return;
L_089F8AC8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F8AD8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8AD8u) goto L_089F8AD8;
    return;
L_089F8AD8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8668));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8660));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8648));
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(8160));
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[18] = (0u | 62u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(26144));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(10984));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-18744));
    goto L_089F8B28;
L_089F8B28:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8A08;
      }
      goto L_089F8B30;
    }
L_089F8B30:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8A08;
      }
      goto L_089F8B3C;
    }
L_089F8B3C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F8B74;
      }
      goto L_089F8B44;
    }
L_089F8B44:
    aot_gpr[31] = (0x089F8B4Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F8B4Cu) goto L_089F8B4C;
    return;
L_089F8B4C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x089F8B64u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F8B64u) goto L_089F8B64;
    return;
L_089F8B64:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[21]);
        goto L_089F8BA8;
    }
    goto L_089F8B6C;
L_089F8B6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_089F8C34;
      }
      goto L_089F8B74;
    }
L_089F8B74:
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F8BA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F8BDCu);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 260u, 0x089F7F30u>(ctx, &aot_mem) && ctx.pc == 0x089F8BDCu) goto L_089F8BDC;
    return;
L_089F8BDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F8BF0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8BF0u) goto L_089F8BF0;
    return;
L_089F8BF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F8C00u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8C00u) goto L_089F8C00;
    return;
L_089F8C00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_089F8C18;
      }
      goto L_089F8C10;
    }
L_089F8C10:
    aot_gpr[31] = (0x089F8C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F8C18u) goto L_089F8C18;
    return;
L_089F8C18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089F8C2C;
      }
      goto L_089F8C24;
    }
L_089F8C24:
    aot_gpr[31] = (0x089F8C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F8C2Cu) goto L_089F8C2C;
    return;
L_089F8C2C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[23]);
      if (branch_taken) {
          goto L_089F8B28;
      }
      goto L_089F8C34;
    }
L_089F8C34:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x089F8C44u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F8C44u) goto L_089F8C44;
    return;
L_089F8C44:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
        goto L_089F8CDC;
    }
    goto L_089F8C4C;
L_089F8C4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F8C84u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 260u, 0x089F7F30u>(ctx, &aot_mem) && ctx.pc == 0x089F8C84u) goto L_089F8C84;
    return;
L_089F8C84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F8C98u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8C98u) goto L_089F8C98;
    return;
L_089F8C98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F8CA8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8CA8u) goto L_089F8CA8;
    return;
L_089F8CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_089F8CC0;
      }
      goto L_089F8CB8;
    }
L_089F8CB8:
    aot_gpr[31] = (0x089F8CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F8CC0u) goto L_089F8CC0;
    return;
L_089F8CC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089F8CD4;
      }
      goto L_089F8CCC;
    }
L_089F8CCC:
    aot_gpr[31] = (0x089F8CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F8CD4u) goto L_089F8CD4;
    return;
L_089F8CD4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
      if (branch_taken) {
          goto L_089F8B28;
      }
      goto L_089F8CDC;
    }
L_089F8CDC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x089F8CECu);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 142u, 0x089F7900u>(ctx, &aot_mem) && ctx.pc == 0x089F8CECu) goto L_089F8CEC;
    return;
L_089F8CEC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8D84;
      }
      goto L_089F8CF4;
    }
L_089F8CF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F8D2Cu);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 260u, 0x089F7F30u>(ctx, &aot_mem) && ctx.pc == 0x089F8D2Cu) goto L_089F8D2C;
    return;
L_089F8D2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F8D40u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8D40u) goto L_089F8D40;
    return;
L_089F8D40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F8D50u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8D50u) goto L_089F8D50;
    return;
L_089F8D50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_089F8D68;
      }
      goto L_089F8D60;
    }
L_089F8D60:
    aot_gpr[31] = (0x089F8D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F8D68u) goto L_089F8D68;
    return;
L_089F8D68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089F8D7C;
      }
      goto L_089F8D74;
    }
L_089F8D74:
    aot_gpr[31] = (0x089F8D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F8D7Cu) goto L_089F8D7C;
    return;
L_089F8D7C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[23]);
      if (branch_taken) {
          goto L_089F8B28;
      }
      goto L_089F8D84;
    }
L_089F8D84:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8A08;
      }
      goto L_089F8D8C;
    }
L_089F8D8C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8B28;
      }
      goto L_089F8D98;
    }
L_089F8D98:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[4] = (aot_gpr[4] << 24u);
      if (branch_taken) {
          goto L_089F8B28;
      }
      goto L_089F8DA0;
    }
L_089F8DA0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[4] ^ 10u);
    aot_gpr[5] = (aot_gpr[5] & 8u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] ^ 13u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F8B28;
      }
      goto L_089F8DDC;
    }
L_089F8DDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F8D84;
      }
      goto L_089F8DE4;
    }
L_089F8DE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089F8E18u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 250u, 0x089F4FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F8E18u) goto L_089F8E18;
    return;
L_089F8E18:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F8E28u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 29u, 0x089F7298u>(ctx, &aot_mem) && ctx.pc == 0x089F8E28u) goto L_089F8E28;
    return;
L_089F8E28:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F8E50;
      }
      goto L_089F8E30;
    }
L_089F8E30:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F8E40u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 4u, 0x089F9044u>(ctx, &aot_mem) && ctx.pc == 0x089F8E40u) goto L_089F8E40;
    return;
L_089F8E40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_089F8E50;
L_089F8E50:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8E6C;
      }
      goto L_089F8E58;
    }
L_089F8E58:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_089F8E6C;
      }
      goto L_089F8E64;
    }
L_089F8E64:
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
        goto L_089F8EB0;
    }
    goto L_089F8E6C;
L_089F8E6C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089F8E88;
      }
      goto L_089F8E74;
    }
L_089F8E74:
    aot_gpr[5] = (0u | 10u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F8E88u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_089F8F70;
L_089F8E88:
    aot_gpr[2] = (0u | 0u);
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
L_089F8EB0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[17] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F8EC8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8EC8u) goto L_089F8EC8;
    return;
L_089F8EC8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F8ED8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8ED8u) goto L_089F8ED8;
    return;
L_089F8ED8:
    aot_gpr[18] = (0u | 62u);
    goto L_089F8EDC;
L_089F8EDC:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8F18;
      }
      goto L_089F8EE4;
    }
L_089F8EE4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F8F18;
      }
      goto L_089F8EF0;
    }
L_089F8EF0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F8F18;
      }
      goto L_089F8EF8;
    }
L_089F8EF8:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F8F0Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F8F0Cu) goto L_089F8F0C;
    return;
L_089F8F0C:
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_089F8EDC;
      }
      goto L_089F8F18;
    }
L_089F8F18:
    if (aot_gpr[21] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_089F8F40;
    }
    goto L_089F8F20;
L_089F8F20:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089F8F3C;
      }
      goto L_089F8F28;
    }
L_089F8F28:
    aot_gpr[5] = (0u | 10u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F8F3Cu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_089F8F70;
L_089F8F3C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_089F8F40;
L_089F8F40:
    if (aot_gpr[4] == aot_gpr[18]) {
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089F8F48;
    }
    goto L_089F8F48;
L_089F8F48:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_089F8F70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 3u, 0x089F9020u>(ctx, &aot_mem); return;
      }
      goto L_089F8FAC;
    }
L_089F8FAC:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18656));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[19] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x089F8FD8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F8FD8u) goto L_089F8FD8;
    return;
L_089F8FD8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F8FE8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F8FE8u) goto L_089F8FE8;
    return;
L_089F8FE8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 3u, 0x089F9020u>(ctx, &aot_mem); return;
      }
      goto L_089F8FF8;
    }
L_089F8FF8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 3u, 0x089F9020u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 1u, 0x089F9000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0500(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0500_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_500(Runtime &runtime) {
    runtime.register_generated_unit(500u, 0x089F8000u, 4096u, &recomp_unit_0500, &recomp_unit_0500_entry);
    runtime.register_function(0x089F8000u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8008u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8014u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F801Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8028u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8038u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8040u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8048u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8050u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F805Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8068u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8078u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8080u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8090u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F80B0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F80B4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F80E8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F80F4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8114u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F811Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F812Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F813Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8158u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8160u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F816Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81A8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81B0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81B8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81C0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81C8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81D0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81D8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81DCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81E8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F81FCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8230u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8240u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8248u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8288u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8298u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F82B8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F82C0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F82CCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F82D4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F82E0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F82ECu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F82F4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8308u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8318u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8320u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F832Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8338u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8348u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F837Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F838Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83A8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83B0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83CCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83D0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83D8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83E0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83E8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83ECu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F83F8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8400u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F841Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8424u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8428u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8438u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8440u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F844Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8458u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F847Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F848Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8494u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F84C8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F84D0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F84DCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F84ECu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8520u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8558u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8570u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8580u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F858Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8594u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F85A4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F85B4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F85D8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F85E0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F85F4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8620u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8628u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8644u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F866Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F86B8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F86C8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F86D0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F86D8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F86E8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F86F8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8710u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8724u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F872Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8748u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8750u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8758u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8764u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8778u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F87A8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F87B0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F87BCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F87D0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F87D8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F87F0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F87F8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F881Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8828u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8830u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8860u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F887Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8888u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F88B8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F88E8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8900u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F890Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8950u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F895Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8964u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F896Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F89B0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F89BCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F89C4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F89D0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F89E4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F89ECu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F89F4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8A08u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8A3Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8A44u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8A58u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8A68u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8A88u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8A98u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8AA8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8AB8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8AC8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8AD8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8B28u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8B30u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8B3Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8B44u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8B4Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8B64u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8B6Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8B74u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8BA8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8BDCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8BF0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C00u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C10u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C18u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C24u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C2Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C34u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C44u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C4Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C84u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8C98u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8CA8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8CB8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8CC0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8CCCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8CD4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8CDCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8CECu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8CF4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D2Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D40u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D50u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D60u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D68u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D74u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D7Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D84u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D8Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8D98u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8DA0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8DDCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8DE4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E18u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E28u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E30u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E40u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E50u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E58u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E64u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E6Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E74u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8E88u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8EB0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8EC8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8ED8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8EDCu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8EE4u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8EF0u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8EF8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8F0Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8F18u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8F20u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8F28u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8F3Cu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8F40u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8F48u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8F70u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8FACu, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8FD8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8FE8u, &recomp_unit_0500, "recomp_unit_0500");
    runtime.register_function(0x089F8FF8u, &recomp_unit_0500, "recomp_unit_0500");
}
} // namespace psprecomp
