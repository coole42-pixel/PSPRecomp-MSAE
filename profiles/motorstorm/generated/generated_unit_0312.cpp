#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0312[1009] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17,
    0, 18, 0, 19, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 25, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0,
    0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86,
    0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0,
    96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 108, 0, 0, 0, 0,
    0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0,
    130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0,
    143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0,
    0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171,
    0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0,
    0, 177, 0, 0, 178, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 184,
    0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198,
};
void recomp_unit_0312_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0893C000u;
        entry_id = (entry_delta < 4036u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0312[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0893C000;
    case 2u: goto L_0893C01C;
    case 3u: goto L_0893C024;
    case 4u: goto L_0893C028;
    case 5u: goto L_0893C030;
    case 6u: goto L_0893C068;
    case 7u: goto L_0893C070;
    case 8u: goto L_0893C07C;
    case 9u: goto L_0893C098;
    case 10u: goto L_0893C0B4;
    case 11u: goto L_0893C0B8;
    case 12u: goto L_0893C0C0;
    case 13u: goto L_0893C0C8;
    case 14u: goto L_0893C0D0;
    case 15u: goto L_0893C0D8;
    case 16u: goto L_0893C0F0;
    case 17u: goto L_0893C0FC;
    case 18u: goto L_0893C104;
    case 19u: goto L_0893C10C;
    case 20u: goto L_0893C110;
    case 21u: goto L_0893C118;
    case 22u: goto L_0893C128;
    case 23u: goto L_0893C150;
    case 24u: goto L_0893C158;
    case 25u: goto L_0893C15C;
    case 26u: goto L_0893C170;
    case 27u: goto L_0893C180;
    case 28u: goto L_0893C1A0;
    case 29u: goto L_0893C1AC;
    case 30u: goto L_0893C1C4;
    case 31u: goto L_0893C1D8;
    case 32u: goto L_0893C1E4;
    case 33u: goto L_0893C1F8;
    case 34u: goto L_0893C204;
    case 35u: goto L_0893C260;
    case 36u: goto L_0893C268;
    case 37u: goto L_0893C270;
    case 38u: goto L_0893C278;
    case 39u: goto L_0893C280;
    case 40u: goto L_0893C2DC;
    case 41u: goto L_0893C2E4;
    case 42u: goto L_0893C2F0;
    case 43u: goto L_0893C2F8;
    case 44u: goto L_0893C34C;
    case 45u: goto L_0893C358;
    case 46u: goto L_0893C3B4;
    case 47u: goto L_0893C3C8;
    case 48u: goto L_0893C3D8;
    case 49u: goto L_0893C3E8;
    case 50u: goto L_0893C3F0;
    case 51u: goto L_0893C40C;
    case 52u: goto L_0893C41C;
    case 53u: goto L_0893C424;
    case 54u: goto L_0893C430;
    case 55u: goto L_0893C43C;
    case 56u: goto L_0893C460;
    case 57u: goto L_0893C468;
    case 58u: goto L_0893C488;
    case 59u: goto L_0893C490;
    case 60u: goto L_0893C4A0;
    case 61u: goto L_0893C4B0;
    case 62u: goto L_0893C4B8;
    case 63u: goto L_0893C4CC;
    case 64u: goto L_0893C4D8;
    case 65u: goto L_0893C4E8;
    case 66u: goto L_0893C4F4;
    case 67u: goto L_0893C50C;
    case 68u: goto L_0893C514;
    case 69u: goto L_0893C51C;
    case 70u: goto L_0893C528;
    case 71u: goto L_0893C530;
    case 72u: goto L_0893C538;
    case 73u: goto L_0893C540;
    case 74u: goto L_0893C54C;
    case 75u: goto L_0893C554;
    case 76u: goto L_0893C55C;
    case 77u: goto L_0893C590;
    case 78u: goto L_0893C5AC;
    case 79u: goto L_0893C5B4;
    case 80u: goto L_0893C5BC;
    case 81u: goto L_0893C5C8;
    case 82u: goto L_0893C5DC;
    case 83u: goto L_0893C5EC;
    case 84u: goto L_0893C5F4;
    case 85u: goto L_0893C654;
    case 86u: goto L_0893C67C;
    case 87u: goto L_0893C684;
    case 88u: goto L_0893C68C;
    case 89u: goto L_0893C6CC;
    case 90u: goto L_0893C6E4;
    case 91u: goto L_0893C6EC;
    case 92u: goto L_0893C76C;
    case 93u: goto L_0893C7D4;
    case 94u: goto L_0893C848;
    case 95u: goto L_0893C878;
    case 96u: goto L_0893C880;
    case 97u: goto L_0893C898;
    case 98u: goto L_0893C8B0;
    case 99u: goto L_0893C8F4;
    case 100u: goto L_0893C900;
    case 101u: goto L_0893C910;
    case 102u: goto L_0893C91C;
    case 103u: goto L_0893C95C;
    case 104u: goto L_0893C990;
    case 105u: goto L_0893C9B0;
    case 106u: goto L_0893C9DC;
    case 107u: goto L_0893C9E8;
    case 108u: goto L_0893C9EC;
    case 109u: goto L_0893CA04;
    case 110u: goto L_0893CA0C;
    case 111u: goto L_0893CA14;
    case 112u: goto L_0893CA24;
    case 113u: goto L_0893CA28;
    case 114u: goto L_0893CA30;
    case 115u: goto L_0893CA50;
    case 116u: goto L_0893CA68;
    case 117u: goto L_0893CA90;
    case 118u: goto L_0893CA98;
    case 119u: goto L_0893CAA0;
    case 120u: goto L_0893CAAC;
    case 121u: goto L_0893CAB4;
    case 122u: goto L_0893CABC;
    case 123u: goto L_0893CAC4;
    case 124u: goto L_0893CAD0;
    case 125u: goto L_0893CAD8;
    case 126u: goto L_0893CAE0;
    case 127u: goto L_0893CAE8;
    case 128u: goto L_0893CAF0;
    case 129u: goto L_0893CAF8;
    case 130u: goto L_0893CB00;
    case 131u: goto L_0893CB14;
    case 132u: goto L_0893CB20;
    case 133u: goto L_0893CB2C;
    case 134u: goto L_0893CB34;
    case 135u: goto L_0893CB3C;
    case 136u: goto L_0893CB44;
    case 137u: goto L_0893CB4C;
    case 138u: goto L_0893CB54;
    case 139u: goto L_0893CB5C;
    case 140u: goto L_0893CB64;
    case 141u: goto L_0893CB6C;
    case 142u: goto L_0893CB78;
    case 143u: goto L_0893CB80;
    case 144u: goto L_0893CB94;
    case 145u: goto L_0893CB9C;
    case 146u: goto L_0893CBB8;
    case 147u: goto L_0893CBC0;
    case 148u: goto L_0893CBCC;
    case 149u: goto L_0893CBD4;
    case 150u: goto L_0893CBF4;
    case 151u: goto L_0893CC18;
    case 152u: goto L_0893CC20;
    case 153u: goto L_0893CC28;
    case 154u: goto L_0893CC30;
    case 155u: goto L_0893CC3C;
    case 156u: goto L_0893CC48;
    case 157u: goto L_0893CC78;
    case 158u: goto L_0893CC88;
    case 159u: goto L_0893CC98;
    case 160u: goto L_0893CCB4;
    case 161u: goto L_0893CCE0;
    case 162u: goto L_0893CCEC;
    case 163u: goto L_0893CCF8;
    case 164u: goto L_0893CD0C;
    case 165u: goto L_0893CD1C;
    case 166u: goto L_0893CD28;
    case 167u: goto L_0893CD38;
    case 168u: goto L_0893CD48;
    case 169u: goto L_0893CD5C;
    case 170u: goto L_0893CD74;
    case 171u: goto L_0893CD7C;
    case 172u: goto L_0893CD84;
    case 173u: goto L_0893CD90;
    case 174u: goto L_0893CDD0;
    case 175u: goto L_0893CDEC;
    case 176u: goto L_0893CDF8;
    case 177u: goto L_0893CE04;
    case 178u: goto L_0893CE10;
    case 179u: goto L_0893CE14;
    case 180u: goto L_0893CE1C;
    case 181u: goto L_0893CE60;
    case 182u: goto L_0893CE6C;
    case 183u: goto L_0893CE74;
    case 184u: goto L_0893CE7C;
    case 185u: goto L_0893CE98;
    case 186u: goto L_0893CEA0;
    case 187u: goto L_0893CEA8;
    case 188u: goto L_0893CEB0;
    case 189u: goto L_0893CEB8;
    case 190u: goto L_0893CEC4;
    case 191u: goto L_0893CED0;
    case 192u: goto L_0893CF0C;
    case 193u: goto L_0893CF4C;
    case 194u: goto L_0893CF58;
    case 195u: goto L_0893CF60;
    case 196u: goto L_0893CFA0;
    case 197u: goto L_0893CFB4;
    case 198u: goto L_0893CFC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0893C000:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22728));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C024;
      }
      goto L_0893C01C;
    }
L_0893C01C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C028;
      }
      goto L_0893C024;
    }
L_0893C024:
    aot_gpr[2] = (0u | 0u);
    goto L_0893C028;
L_0893C028:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C030:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(22728));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[16] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0893C070;
      }
      goto L_0893C068;
    }
L_0893C068:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893C0B4;
      }
      goto L_0893C070;
    }
L_0893C070:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[5];
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[6]);
      if (branch_taken) {
          goto L_0893C098;
      }
      goto L_0893C07C;
    }
L_0893C07C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893C0B4;
      }
      goto L_0893C098;
    }
L_0893C098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[5] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    goto L_0893C0B4;
L_0893C0B4:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    goto L_0893C0B8;
L_0893C0B8:
    aot_gpr[31] = (0x0893C0C0u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 28u, 0x08933124u>(ctx, &aot_mem) && ctx.pc == 0x0893C0C0u) goto L_0893C0C0;
    return;
L_0893C0C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0D8;
      }
      goto L_0893C0C8;
    }
L_0893C0C8:
    aot_gpr[31] = (0x0893C0D0u);
    aot_gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x0893C0D0u) goto L_0893C0D0;
    return;
L_0893C0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0B8;
      }
      goto L_0893C0D8;
    }
L_0893C0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(22728)));
    aot_gpr[31] = (0x0893C0F0u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_0893C0F0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0893C0FCu);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x0893C0FCu) goto L_0893C0FC;
    return;
L_0893C0FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893C10C;
      }
      goto L_0893C104;
    }
L_0893C104:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 19u);
      if (branch_taken) {
          goto L_0893C110;
      }
      goto L_0893C10C;
    }
L_0893C10C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[21]);
    goto L_0893C110;
L_0893C110:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C128;
      }
      goto L_0893C118;
    }
L_0893C118:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0893C128;
L_0893C128:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_0893C150:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C15C;
      }
      goto L_0893C158;
    }
L_0893C158:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_0893C15C;
L_0893C15C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22728));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[3] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C170:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22720));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C180:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22748), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0893C1A0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24160));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 129u, 0x08933718u>(ctx, &aot_mem) && ctx.pc == 0x0893C1A0u) goto L_0893C1A0;
    return;
L_0893C1A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0893C1ACu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0311_entry, 311u, 103u, 0x0893B9ACu>(ctx, &aot_mem) && ctx.pc == 0x0893C1ACu) goto L_0893C1AC;
    return;
L_0893C1AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0893C1C4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24140));
    ctx.pc = 0x08A5B0FCu;
    return;
L_0893C1C4:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23196), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0893C1D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    goto L_0893C170;
L_0893C1D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C1E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893C1F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23196)));
    ctx.pc = 0x08A5B004u;
    return;
L_0893C1F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C204:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1248));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1232), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1204), aot_gpr[5]);
    aot_gpr[22] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1208), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1212), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1216), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1220), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1224), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1228), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1236), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1240), aot_gpr[30]);
    aot_gpr[17] = (aot_gpr[7] & 255u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1200), aot_gpr[8]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(22720));
    aot_gpr[20] = (2219u << 16u);
    aot_gpr[19] = (2219u << 16u);
    aot_gpr[23] = (2219u << 16u);
    aot_gpr[18] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1244), aot_gpr[31]);
    goto L_0893C260;
L_0893C260:
    aot_gpr[31] = (0x0893C268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x0893C268u) goto L_0893C268;
    return;
L_0893C268:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1200)));
        goto L_0893C280;
    }
    goto L_0893C270;
L_0893C270:
    aot_gpr[31] = (0x0893C278u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 121u, 0x08932AB8u>(ctx, &aot_mem) && ctx.pc == 0x0893C278u) goto L_0893C278;
    return;
L_0893C278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C260;
      }
      goto L_0893C280;
    }
L_0893C280:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(22748), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22756), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(22757), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22744), aot_gpr[16]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22752), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23192), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22758), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22759), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(23176), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23176));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(23179), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0893C2E4;
      }
      goto L_0893C2DC;
    }
L_0893C2DC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_0893C2F8;
      }
      goto L_0893C2E4;
    }
L_0893C2E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1204)));
    aot_gpr[31] = (0x0893C2F0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 129u, 0x08933718u>(ctx, &aot_mem) && ctx.pc == 0x0893C2F0u) goto L_0893C2F0;
    return;
L_0893C2F0:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    goto L_0893C2F8;
L_0893C2F8:
    aot_gpr[4] = (0u | 20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[31] = (0x0893C34Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0375_entry, 375u, 58u, 0x0897B36Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C34Cu) goto L_0893C34C;
    return;
L_0893C34C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[31] = (0x0893C358u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 240u, 0x08974F24u>(ctx, &aot_mem) && ctx.pc == 0x0893C358u) goto L_0893C358;
    return;
L_0893C358:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(22760), aot_gpr[2]);
    aot_gpr[4] = (2196u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17168));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (2196u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16792));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[4] = (2196u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16668));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[4] = (2196u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (2196u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16048));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (2196u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16396));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x0893C3B4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 151u, 0x089738CCu>(ctx, &aot_mem) && ctx.pc == 0x0893C3B4u) goto L_0893C3B4;
    return;
L_0893C3B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(22760)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0893C3C8u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 116u, 0x08978614u>(ctx, &aot_mem) && ctx.pc == 0x0893C3C8u) goto L_0893C3C8;
    return;
L_0893C3C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(9156), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C55C;
      }
      goto L_0893C3D8;
    }
L_0893C3D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(9156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(22757)));
    aot_gpr[31] = (0x0893C3E8u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 172u, 0x089788ECu>(ctx, &aot_mem) && ctx.pc == 0x0893C3E8u) goto L_0893C3E8;
    return;
L_0893C3E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893C55C;
      }
      goto L_0893C3F0;
    }
L_0893C3F0:
    aot_gpr[7] = (2196u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (0u | 136u);
    aot_gpr[31] = (0x0893C40Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-17700));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0893C40Cu) goto L_0893C40C;
    return;
L_0893C40C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(9156)));
    aot_gpr[31] = (0x0893C41Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 149u, 0x089787C4u>(ctx, &aot_mem) && ctx.pc == 0x0893C41Cu) goto L_0893C41C;
    return;
L_0893C41C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893C55C;
      }
      goto L_0893C424;
    }
L_0893C424:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0893C430u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 98u, 0x089796B8u>(ctx, &aot_mem) && ctx.pc == 0x0893C430u) goto L_0893C430;
    return;
L_0893C430:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0893C43Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0311_entry, 311u, 111u, 0x0893BA24u>(ctx, &aot_mem) && ctx.pc == 0x0893C43Cu) goto L_0893C43C;
    return;
L_0893C43C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1184), 0u);
    aot_gpr[22] = (2196u << 16u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-17636));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(22760)));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(1184));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1188), aot_gpr[22]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0893C460u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 33u, 0x089751B4u>(ctx, &aot_mem) && ctx.pc == 0x0893C460u) goto L_0893C460;
    return;
L_0893C460:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893C55C;
      }
      goto L_0893C468;
    }
L_0893C468:
    aot_gpr[4] = (2196u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1192), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17316));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1196), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(9156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1184), 0u);
    aot_gpr[31] = (0x0893C488u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1192));
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 132u, 0x089786F8u>(ctx, &aot_mem) && ctx.pc == 0x0893C488u) goto L_0893C488;
    return;
L_0893C488:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893C55C;
      }
      goto L_0893C490;
    }
L_0893C490:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C540;
      }
      goto L_0893C4A0;
    }
L_0893C4A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(22748)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0893C4B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 108u, 0x0897971Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C4B0u) goto L_0893C4B0;
    return;
L_0893C4B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(9156)));
      if (branch_taken) {
          goto L_0893C530;
      }
      goto L_0893C4B8;
    }
L_0893C4B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(22748)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0893C4CCu);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 153u, 0x08978800u>(ctx, &aot_mem) && ctx.pc == 0x0893C4CCu) goto L_0893C4CC;
    return;
L_0893C4CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0893C55C;
      }
      goto L_0893C4D8;
    }
L_0893C4D8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-24176)));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893C4F4;
      }
      goto L_0893C4E8;
    }
L_0893C4E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(9156)));
    aot_gpr[31] = (0x0893C4F4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 166u, 0x089788B0u>(ctx, &aot_mem) && ctx.pc == 0x0893C4F4u) goto L_0893C4F4;
    return;
L_0893C4F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1188), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(22760)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1184), 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0893C50Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 33u, 0x089751B4u>(ctx, &aot_mem) && ctx.pc == 0x0893C50Cu) goto L_0893C50C;
    return;
L_0893C50C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893C55C;
      }
      goto L_0893C514;
    }
L_0893C514:
    aot_gpr[31] = (0x0893C51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 109u, 0x0892C7DCu>(ctx, &aot_mem) && ctx.pc == 0x0893C51Cu) goto L_0893C51C;
    return;
L_0893C51C:
    aot_gpr[4] = (0u | 32768u);
    aot_gpr[31] = (0x0893C528u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5AB74u;
    return;
L_0893C528:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(9156)));
      if (branch_taken) {
          goto L_0893C538;
      }
      goto L_0893C530;
    }
L_0893C530:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(22748), aot_gpr[4]);
    goto L_0893C538;
L_0893C538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C54C;
      }
      goto L_0893C540;
    }
L_0893C540:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(22748), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(9156)));
    goto L_0893C54C;
L_0893C54C:
    aot_gpr[31] = (0x0893C554u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 128u, 0x089786CCu>(ctx, &aot_mem) && ctx.pc == 0x0893C554u) goto L_0893C554;
    return;
L_0893C554:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893C55C;
      }
      goto L_0893C55C;
    }
L_0893C55C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1208)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1212)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1216)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1224)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1228)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1232)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1236)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1240)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1244)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1248));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C590:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(22758)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C5C8;
      }
      goto L_0893C5AC;
    }
L_0893C5AC:
    aot_gpr[31] = (0x0893C5B4u);
    aot_gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x0893C5B4u) goto L_0893C5B4;
    return;
L_0893C5B4:
    aot_gpr[31] = (0x0893C5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x0893C5BCu) goto L_0893C5BC;
    return;
L_0893C5BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(22758)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C5AC;
      }
      goto L_0893C5C8;
    }
L_0893C5C8:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22760)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[31] = (0x0893C5DCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(9156)));
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 248u, 0x08974F90u>(ctx, &aot_mem) && ctx.pc == 0x0893C5DCu) goto L_0893C5DC;
    return;
L_0893C5DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C5EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C5F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    aot_gpr[23] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(23184)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23176));
    aot_gpr[4] = (aot_gpr[31] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(23179)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (2216u << 16u);
      if (branch_taken) {
          goto L_0893C880;
      }
      goto L_0893C654;
    }
L_0893C654:
    aot_gpr[4] = (aot_gpr[31] << 7u);
    aot_gpr[5] = (aot_gpr[31] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(22768));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(22760)));
    aot_gpr[31] = (0x0893C67Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 17u, 0x089750C4u>(ctx, &aot_mem) && ctx.pc == 0x0893C67Cu) goto L_0893C67C;
    return;
L_0893C67C:
    aot_gpr[31] = (0x0893C684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 24u, 0x08940290u>(ctx, &aot_mem) && ctx.pc == 0x0893C684u) goto L_0893C684;
    return;
L_0893C684:
    aot_gpr[31] = (0x0893C68Cu);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 30u, 0x089402D0u>(ctx, &aot_mem) && ctx.pc == 0x0893C68Cu) goto L_0893C68C;
    return;
L_0893C68C:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0893C6CCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0893C6CCu) goto L_0893C6CC;
    return;
L_0893C6CC:
    aot_gpr[4] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0893C6E4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0893C6E4u) goto L_0893C6E4;
    return;
L_0893C6E4:
    aot_gpr[31] = (0x0893C6ECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 166u, 0x08943B80u>(ctx, &aot_mem) && ctx.pc == 0x0893C6ECu) goto L_0893C6EC;
    return;
L_0893C6EC:
    aot_gpr[21] = (0u | 1u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[5] = (0u | 255u);
    aot_gpr[22] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[22] = (64u << 16u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28814)));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[21] = (2218u << 16u);
    aot_gpr[6] = (~(aot_gpr[6] | 0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[6] & 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0893C76Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0893C76Cu) goto L_0893C76C;
    return;
L_0893C76C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(23184)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[10] = (aot_gpr[7] << 7u);
    aot_gpr[6] = (aot_gpr[9] & 65535u);
    aot_gpr[7] = (aot_gpr[7] << 3u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[2] = (0u | 272u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    aot_gpr[7] = (aot_gpr[11] & 65535u);
    aot_gpr[3] = (0u | 512u);
    aot_gpr[9] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[10] = (0u | 3u);
    aot_gpr[11] = (0u | 480u);
    aot_gpr[31] = (0x0893C7D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 167u, 0x08930EF4u>(ctx, &aot_mem) && ctx.pc == 0x0893C7D4u) goto L_0893C7D4;
    return;
L_0893C7D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3664), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3662), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3661), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3660), static_cast<std::uint16_t>(0u));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-3658), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3656), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0893C848u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0893C848u) goto L_0893C848;
    return;
L_0893C848:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0893C878u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0893C878u) goto L_0893C878;
    return;
L_0893C878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C95C;
      }
      goto L_0893C880;
    }
L_0893C880:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0893C898u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 36u, 0x08A4A22Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C898u) goto L_0893C898;
    return;
L_0893C898:
    aot_gpr[4] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0893C8B0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0893C8B0u) goto L_0893C8B0;
    return;
L_0893C8B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_gpr[5] = (65280u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[20])));
      if (branch_taken) {
          goto L_0893C900;
      }
      goto L_0893C8F4;
    }
L_0893C8F4:
    aot_gpr[7] = (20352u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[20] = aot_fpr[20] + aot_fpr[12];
    goto L_0893C900;
L_0893C900:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0893C91C;
      }
      goto L_0893C910;
    }
L_0893C910:
    aot_gpr[7] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_0893C91C;
L_0893C91C:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (0x0893C95Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 51u, 0x0892F518u>(ctx, &aot_mem) && ctx.pc == 0x0893C95Cu) goto L_0893C95C;
    return;
L_0893C95C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C990:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0893C9B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(22760)));
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 8u, 0x08975048u>(ctx, &aot_mem) && ctx.pc == 0x0893C9B0u) goto L_0893C9B0;
    return;
L_0893C9B0:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23188)));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(23184)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23188), aot_gpr[8]);
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[2]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(23179)));
    aot_gpr[16] = (0u < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0893CA14;
      }
      goto L_0893C9DC;
    }
L_0893C9DC:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C9EC;
      }
      goto L_0893C9E8;
    }
L_0893C9E8:
    aot_gpr[4] = (0u | 0u);
    goto L_0893C9EC;
L_0893C9EC:
    aot_gpr[8] = (2219u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(23176));
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CA0C;
      }
      goto L_0893CA04;
    }
L_0893CA04:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(23179), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(23184), aot_gpr[4]);
    goto L_0893CA0C;
L_0893CA0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CA28;
      }
      goto L_0893CA14;
    }
L_0893CA14:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(23184), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893CA28;
      }
      goto L_0893CA24;
    }
L_0893CA24:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(23184), 0u);
    goto L_0893CA28;
L_0893CA28:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893CA50;
      }
      goto L_0893CA30;
    }
L_0893CA30:
    aot_gpr[5] = (aot_gpr[7] << 7u);
    aot_gpr[6] = (aot_gpr[7] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(22768));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(22760)));
    aot_gpr[31] = (0x0893CA50u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 21u, 0x08975100u>(ctx, &aot_mem) && ctx.pc == 0x0893CA50u) goto L_0893CA50;
    return;
L_0893CA50:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CA68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] & 255u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(9156)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0893CA90u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 172u, 0x089788ECu>(ctx, &aot_mem) && ctx.pc == 0x0893CA90u) goto L_0893CA90;
    return;
L_0893CA90:
    aot_gpr[31] = (0x0893CA98u);
    aot_gpr[4] = (0u | 10000u);
    ctx.pc = 0x08A5B094u;
    return;
L_0893CA98:
    aot_gpr[31] = (0x0893CAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893CAA0u) goto L_0893CAA0;
    return;
L_0893CAA0:
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[31] = (0x0893CAACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(22760)));
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 256u, 0x08974FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893CAACu) goto L_0893CAAC;
    return;
L_0893CAAC:
    aot_gpr[31] = (0x0893CAB4u);
    aot_gpr[4] = (0u | 10000u);
    ctx.pc = 0x08A5B094u;
    return;
L_0893CAB4:
    aot_gpr[31] = (0x0893CABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893CABCu) goto L_0893CABC;
    return;
L_0893CABC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CAD0;
      }
      goto L_0893CAC4;
    }
L_0893CAC4:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0893CAD0;
L_0893CAD0:
    aot_gpr[31] = (0x0893CAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 47u, 0x08931568u>(ctx, &aot_mem) && ctx.pc == 0x0893CAD8u) goto L_0893CAD8;
    return;
L_0893CAD8:
    aot_gpr[31] = (0x0893CAE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(9156)));
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 122u, 0x08978680u>(ctx, &aot_mem) && ctx.pc == 0x0893CAE0u) goto L_0893CAE0;
    return;
L_0893CAE0:
    aot_gpr[31] = (0x0893CAE8u);
    aot_gpr[4] = (0u | 10000u);
    ctx.pc = 0x08A5B094u;
    return;
L_0893CAE8:
    aot_gpr[31] = (0x0893CAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893CAF0u) goto L_0893CAF0;
    return;
L_0893CAF0:
    aot_gpr[31] = (0x0893CAF8u);
    aot_gpr[4] = (0u | 10000u);
    ctx.pc = 0x08A5B094u;
    return;
L_0893CAF8:
    aot_gpr[31] = (0x0893CB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893CB00u) goto L_0893CB00;
    return;
L_0893CB00:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(22768));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(22760)));
    aot_gpr[31] = (0x0893CB14u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 21u, 0x08975100u>(ctx, &aot_mem) && ctx.pc == 0x0893CB14u) goto L_0893CB14;
    return;
L_0893CB14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(22760)));
    aot_gpr[31] = (0x0893CB20u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 21u, 0x08975100u>(ctx, &aot_mem) && ctx.pc == 0x0893CB20u) goto L_0893CB20;
    return;
L_0893CB20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(22760)));
    aot_gpr[31] = (0x0893CB2Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 21u, 0x08975100u>(ctx, &aot_mem) && ctx.pc == 0x0893CB2Cu) goto L_0893CB2C;
    return;
L_0893CB2C:
    aot_gpr[31] = (0x0893CB34u);
    aot_gpr[4] = (0u | 20000u);
    ctx.pc = 0x08A5B094u;
    return;
L_0893CB34:
    aot_gpr[31] = (0x0893CB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893CB3Cu) goto L_0893CB3C;
    return;
L_0893CB3C:
    aot_gpr[31] = (0x0893CB44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(22760)));
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 245u, 0x08974F58u>(ctx, &aot_mem) && ctx.pc == 0x0893CB44u) goto L_0893CB44;
    return;
L_0893CB44:
    aot_gpr[31] = (0x0893CB4Cu);
    aot_gpr[4] = (0u | 10000u);
    ctx.pc = 0x08A5B094u;
    return;
L_0893CB4C:
    aot_gpr[31] = (0x0893CB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893CB54u) goto L_0893CB54;
    return;
L_0893CB54:
    aot_gpr[31] = (0x0893CB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 129u, 0x0897A778u>(ctx, &aot_mem) && ctx.pc == 0x0893CB5Cu) goto L_0893CB5C;
    return;
L_0893CB5C:
    aot_gpr[31] = (0x0893CB64u);
    aot_gpr[4] = (0u | 10000u);
    ctx.pc = 0x08A5B094u;
    return;
L_0893CB64:
    aot_gpr[31] = (0x0893CB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893CB6Cu) goto L_0893CB6C;
    return;
L_0893CB6C:
    aot_gpr[4] = (0u | 32768u);
    aot_gpr[31] = (0x0893CB78u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5AB74u;
    return;
L_0893CB78:
    aot_gpr[31] = (0x0893CB80u);
    // nop
    ctx.pc = 0x08A5AB7Cu;
    return;
L_0893CB80:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(22748)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893CB9C;
      }
      goto L_0893CB94;
    }
L_0893CB94:
    aot_gpr[31] = (0x0893CB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0296_entry, 296u, 112u, 0x0892C820u>(ctx, &aot_mem) && ctx.pc == 0x0893CB9Cu) goto L_0893CB9C;
    return;
L_0893CB9C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21280)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CBB8;
    }
L_0893CBB8:
    aot_gpr[31] = (0x0893CBC0u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x0893CBC0u) goto L_0893CBC0;
    return;
L_0893CBC0:
    aot_gpr[4] = (4u << 16u);
    aot_gpr[31] = (0x0893CBCCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12144));
    ctx.pc = 0x08A5B094u;
    return;
L_0893CBCC:
    aot_gpr[31] = (0x0893CBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0893CBD4u) goto L_0893CBD4;
    return;
L_0893CBD4:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22756), static_cast<std::uint8_t>(0u));
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
L_0893CBF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(22759), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(22759)));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22760)));
      if (branch_taken) {
          goto L_0893CC28;
      }
      goto L_0893CC18;
    }
L_0893CC18:
    aot_gpr[31] = (0x0893CC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 256u, 0x08974FF0u>(ctx, &aot_mem) && ctx.pc == 0x0893CC20u) goto L_0893CC20;
    return;
L_0893CC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CC30;
      }
      goto L_0893CC28;
    }
L_0893CC28:
    aot_gpr[31] = (0x0893CC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 4u, 0x0897501Cu>(ctx, &aot_mem) && ctx.pc == 0x0893CC30u) goto L_0893CC30;
    return;
L_0893CC30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CC3C:
    aot_gpr[4] = (2219u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(22756)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CC48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(23196)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0893CC78u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B084u;
    return;
L_0893CC78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 128u);
    aot_gpr[31] = (0x0893CC88u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893CC88u) goto L_0893CC88;
    return;
L_0893CC88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(23196)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0893CC98u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B09Cu;
    return;
L_0893CC98:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_0893CCB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23196)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0893CCE0u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B084u;
    return;
L_0893CCE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0893CCECu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0893CCECu) goto L_0893CCEC;
    return;
L_0893CCEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23196)));
    aot_gpr[31] = (0x0893CCF8u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B09Cu;
    return;
L_0893CCF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CD0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893CD1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 7u, 0x0891D060u>(ctx, &aot_mem) && ctx.pc == 0x0893CD1Cu) goto L_0893CD1C;
    return;
L_0893CD1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CD28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_0893CD84;
      }
      goto L_0893CD38;
    }
L_0893CD38:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25664));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_0893CD84;
      }
      goto L_0893CD48;
    }
L_0893CD48:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CD7C;
      }
      goto L_0893CD5C;
    }
L_0893CD5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0893CD74u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893CD74u) goto L_0893CD74;
    return;
L_0893CD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CD84;
      }
      goto L_0893CD7C;
    }
L_0893CD7C:
    aot_gpr[31] = (0x0893CD84u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0893CD84u) goto L_0893CD84;
    return;
L_0893CD84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CD90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(22728));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(22728), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[7] = (2196u << 16u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 136u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22768));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893CDD0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-17700));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x0893CDD0u) goto L_0893CDD0;
    return;
L_0893CDD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25704));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(22720), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0893CDECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28832));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0893CDECu) goto L_0893CDEC;
    return;
L_0893CDEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CDF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CE10;
      }
      goto L_0893CE04;
    }
L_0893CE04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893CE14;
      }
      goto L_0893CE10;
    }
L_0893CE10:
    aot_gpr[2] = (0u | 0u);
    goto L_0893CE14;
L_0893CE14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(42)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893CE74;
      }
      goto L_0893CE60;
    }
L_0893CE60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893CE7C;
      }
      goto L_0893CE6C;
    }
L_0893CE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 15u, 0x0893D15Cu>(ctx, &aot_mem); return;
      }
      goto L_0893CE74;
    }
L_0893CE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 15u, 0x0893D15Cu>(ctx, &aot_mem); return;
      }
      goto L_0893CE7C;
    }
L_0893CE7C:
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29052)));
    aot_gpr[5] = (16256u << 16u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2216u << 16u);
      if (branch_taken) {
          goto L_0893CEA0;
      }
      goto L_0893CE98;
    }
L_0893CE98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0893CEB0;
      }
      goto L_0893CEA0;
    }
L_0893CEA0:
    aot_gpr[31] = (0x0893CEA8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0893CEA8u) goto L_0893CEA8;
    return;
L_0893CEA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[21] = (0u | 1u);
    goto L_0893CEB0;
L_0893CEB0:
    aot_gpr[31] = (0x0893CEB8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0893CEB8u) goto L_0893CEB8;
    return;
L_0893CEB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_0893CED0;
      }
      goto L_0893CEC4;
    }
L_0893CEC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_0893CED0;
L_0893CED0:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 10u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (256u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0893CF0Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x0893CF0Cu) goto L_0893CF0C;
    return;
L_0893CF0C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[7] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0893CF4Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0893CF4Cu) goto L_0893CF4C;
    return;
L_0893CF4C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893CF58u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 24u, 0x08935278u>(ctx, &aot_mem) && ctx.pc == 0x0893CF58u) goto L_0893CF58;
    return;
L_0893CF58:
    aot_gpr[31] = (0x0893CF60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 28u, 0x08935318u>(ctx, &aot_mem) && ctx.pc == 0x0893CF60u) goto L_0893CF60;
    return;
L_0893CF60:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28788)));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[23] | 0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(192);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x0893CFA0u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(208);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 156u, 0x08918F68u>(ctx, &aot_mem) && ctx.pc == 0x0893CFA0u) goto L_0893CFA0;
    return;
L_0893CFA0:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0893CFB4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 6u, 0x08940124u>(ctx, &aot_mem) && ctx.pc == 0x0893CFB4u) goto L_0893CFB4;
    return;
L_0893CFB4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0893CFC0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x0893CFC0u) goto L_0893CFC0;
    return;
L_0893CFC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (4096u << 16u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x0893D000u; return;
}

void recomp_unit_0312(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0312_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_312(Runtime &runtime) {
    runtime.register_generated_unit(312u, 0x0893C000u, 4096u, &recomp_unit_0312, &recomp_unit_0312_entry);
    runtime.register_function(0x0893C000u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C01Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C024u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C028u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C030u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C068u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C070u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C07Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C098u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C0B4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C0B8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C0C0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C0C8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C0D0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C0D8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C0F0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C0FCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C104u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C10Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C110u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C118u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C128u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C150u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C158u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C15Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C170u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C180u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C1A0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C1ACu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C1C4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C1D8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C1E4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C1F8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C204u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C260u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C268u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C270u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C278u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C280u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C2DCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C2E4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C2F0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C2F8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C34Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C358u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C3B4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C3C8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C3D8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C3E8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C3F0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C40Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C41Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C424u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C430u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C43Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C460u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C468u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C488u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C490u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C4A0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C4B0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C4B8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C4CCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C4D8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C4E8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C4F4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C50Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C514u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C51Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C528u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C530u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C538u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C540u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C54Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C554u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C55Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C590u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C5ACu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C5B4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C5BCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C5C8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C5DCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C5ECu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C5F4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C654u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C67Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C684u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C68Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C6CCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C6E4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C6ECu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C76Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C7D4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C848u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C878u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C880u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C898u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C8B0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C8F4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C900u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C910u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C91Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C95Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C990u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C9B0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C9DCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C9E8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893C9ECu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA04u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA0Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA14u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA24u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA28u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA30u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA50u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA68u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA90u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CA98u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAA0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAACu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAB4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CABCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAC4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAD0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAD8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAE0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAE8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAF0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CAF8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB00u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB14u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB20u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB2Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB34u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB3Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB44u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB4Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB54u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB5Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB64u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB6Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB78u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB80u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB94u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CB9Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CBB8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CBC0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CBCCu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CBD4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CBF4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC18u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC20u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC28u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC30u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC3Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC48u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC78u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC88u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CC98u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CCB4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CCE0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CCECu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CCF8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD0Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD1Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD28u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD38u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD48u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD5Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD74u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD7Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD84u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CD90u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CDD0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CDECu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CDF8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE04u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE10u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE14u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE1Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE60u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE6Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE74u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE7Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CE98u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CEA0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CEA8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CEB0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CEB8u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CEC4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CED0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CF0Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CF4Cu, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CF58u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CF60u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CFA0u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CFB4u, &recomp_unit_0312, "recomp_unit_0312");
    runtime.register_function(0x0893CFC0u, &recomp_unit_0312, "recomp_unit_0312");
}
} // namespace psprecomp
