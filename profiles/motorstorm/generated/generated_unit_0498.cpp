#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0498[1018] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 29, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 0, 39, 40, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0,
    0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 68,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0,
    0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0,
    0, 93, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0,
    122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 129, 0, 130, 0, 0, 0, 131, 0,
    0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0,
    0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0,
    148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153,
    0, 0, 0, 0, 154, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 179, 0, 0, 180, 0,
    0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0,
    189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 202, 0, 0, 0, 203, 0, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0,
    217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 223,
};
void recomp_unit_0498_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F6000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0498[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F6000;
    case 2u: goto L_089F6008;
    case 3u: goto L_089F6010;
    case 4u: goto L_089F6030;
    case 5u: goto L_089F6050;
    case 6u: goto L_089F606C;
    case 7u: goto L_089F6088;
    case 8u: goto L_089F60AC;
    case 9u: goto L_089F60B8;
    case 10u: goto L_089F60C4;
    case 11u: goto L_089F60EC;
    case 12u: goto L_089F60F4;
    case 13u: goto L_089F60FC;
    case 14u: goto L_089F6118;
    case 15u: goto L_089F6134;
    case 16u: goto L_089F615C;
    case 17u: goto L_089F616C;
    case 18u: goto L_089F6174;
    case 19u: goto L_089F6180;
    case 20u: goto L_089F6190;
    case 21u: goto L_089F61A8;
    case 22u: goto L_089F61B0;
    case 23u: goto L_089F61C0;
    case 24u: goto L_089F61C8;
    case 25u: goto L_089F61D4;
    case 26u: goto L_089F61E4;
    case 27u: goto L_089F61F8;
    case 28u: goto L_089F6208;
    case 29u: goto L_089F6218;
    case 30u: goto L_089F621C;
    case 31u: goto L_089F6230;
    case 32u: goto L_089F6238;
    case 33u: goto L_089F6248;
    case 34u: goto L_089F6250;
    case 35u: goto L_089F625C;
    case 36u: goto L_089F626C;
    case 37u: goto L_089F6280;
    case 38u: goto L_089F6290;
    case 39u: goto L_089F62A0;
    case 40u: goto L_089F62A4;
    case 41u: goto L_089F62B8;
    case 42u: goto L_089F62C0;
    case 43u: goto L_089F62D0;
    case 44u: goto L_089F62D8;
    case 45u: goto L_089F62E4;
    case 46u: goto L_089F62F4;
    case 47u: goto L_089F6308;
    case 48u: goto L_089F6318;
    case 49u: goto L_089F6328;
    case 50u: goto L_089F6330;
    case 51u: goto L_089F633C;
    case 52u: goto L_089F6344;
    case 53u: goto L_089F6350;
    case 54u: goto L_089F6360;
    case 55u: goto L_089F637C;
    case 56u: goto L_089F63A4;
    case 57u: goto L_089F63B0;
    case 58u: goto L_089F63CC;
    case 59u: goto L_089F63E0;
    case 60u: goto L_089F63F4;
    case 61u: goto L_089F6408;
    case 62u: goto L_089F641C;
    case 63u: goto L_089F6440;
    case 64u: goto L_089F644C;
    case 65u: goto L_089F6458;
    case 66u: goto L_089F646C;
    case 67u: goto L_089F6474;
    case 68u: goto L_089F647C;
    case 69u: goto L_089F6498;
    case 70u: goto L_089F64B4;
    case 71u: goto L_089F64E8;
    case 72u: goto L_089F64F4;
    case 73u: goto L_089F64FC;
    case 74u: goto L_089F650C;
    case 75u: goto L_089F6524;
    case 76u: goto L_089F6544;
    case 77u: goto L_089F656C;
    case 78u: goto L_089F6578;
    case 79u: goto L_089F6588;
    case 80u: goto L_089F6594;
    case 81u: goto L_089F65B4;
    case 82u: goto L_089F6600;
    case 83u: goto L_089F6610;
    case 84u: goto L_089F6634;
    case 85u: goto L_089F665C;
    case 86u: goto L_089F6668;
    case 87u: goto L_089F6684;
    case 88u: goto L_089F6690;
    case 89u: goto L_089F669C;
    case 90u: goto L_089F66B8;
    case 91u: goto L_089F66F0;
    case 92u: goto L_089F66F8;
    case 93u: goto L_089F6704;
    case 94u: goto L_089F6708;
    case 95u: goto L_089F6720;
    case 96u: goto L_089F6728;
    case 97u: goto L_089F6734;
    case 98u: goto L_089F6738;
    case 99u: goto L_089F6750;
    case 100u: goto L_089F6768;
    case 101u: goto L_089F678C;
    case 102u: goto L_089F6798;
    case 103u: goto L_089F67A0;
    case 104u: goto L_089F67A8;
    case 105u: goto L_089F67B0;
    case 106u: goto L_089F67B8;
    case 107u: goto L_089F67D4;
    case 108u: goto L_089F67F0;
    case 109u: goto L_089F6814;
    case 110u: goto L_089F6830;
    case 111u: goto L_089F6840;
    case 112u: goto L_089F684C;
    case 113u: goto L_089F6850;
    case 114u: goto L_089F6864;
    case 115u: goto L_089F6870;
    case 116u: goto L_089F687C;
    case 117u: goto L_089F6898;
    case 118u: goto L_089F68A0;
    case 119u: goto L_089F68A8;
    case 120u: goto L_089F68EC;
    case 121u: goto L_089F68F0;
    case 122u: goto L_089F6900;
    case 123u: goto L_089F6914;
    case 124u: goto L_089F6924;
    case 125u: goto L_089F6934;
    case 126u: goto L_089F6944;
    case 127u: goto L_089F6954;
    case 128u: goto L_089F695C;
    case 129u: goto L_089F6960;
    case 130u: goto L_089F6968;
    case 131u: goto L_089F6978;
    case 132u: goto L_089F698C;
    case 133u: goto L_089F6994;
    case 134u: goto L_089F69A0;
    case 135u: goto L_089F69AC;
    case 136u: goto L_089F69BC;
    case 137u: goto L_089F69CC;
    case 138u: goto L_089F69E0;
    case 139u: goto L_089F69EC;
    case 140u: goto L_089F69F8;
    case 141u: goto L_089F6A08;
    case 142u: goto L_089F6A24;
    case 143u: goto L_089F6A2C;
    case 144u: goto L_089F6A3C;
    case 145u: goto L_089F6A54;
    case 146u: goto L_089F6A60;
    case 147u: goto L_089F6A70;
    case 148u: goto L_089F6A80;
    case 149u: goto L_089F6A88;
    case 150u: goto L_089F6AB4;
    case 151u: goto L_089F6AE8;
    case 152u: goto L_089F6AF4;
    case 153u: goto L_089F6AFC;
    case 154u: goto L_089F6B10;
    case 155u: goto L_089F6B14;
    case 156u: goto L_089F6B24;
    case 157u: goto L_089F6B38;
    case 158u: goto L_089F6B3C;
    case 159u: goto L_089F6B48;
    case 160u: goto L_089F6B58;
    case 161u: goto L_089F6B68;
    case 162u: goto L_089F6B78;
    case 163u: goto L_089F6B88;
    case 164u: goto L_089F6B98;
    case 165u: goto L_089F6BAC;
    case 166u: goto L_089F6BCC;
    case 167u: goto L_089F6C00;
    case 168u: goto L_089F6C04;
    case 169u: goto L_089F6C14;
    case 170u: goto L_089F6C28;
    case 171u: goto L_089F6C4C;
    case 172u: goto L_089F6C60;
    case 173u: goto L_089F6C80;
    case 174u: goto L_089F6CAC;
    case 175u: goto L_089F6CC0;
    case 176u: goto L_089F6CC4;
    case 177u: goto L_089F6CD4;
    case 178u: goto L_089F6CE8;
    case 179u: goto L_089F6CEC;
    case 180u: goto L_089F6CF8;
    case 181u: goto L_089F6D08;
    case 182u: goto L_089F6D18;
    case 183u: goto L_089F6D28;
    case 184u: goto L_089F6D38;
    case 185u: goto L_089F6D48;
    case 186u: goto L_089F6D5C;
    case 187u: goto L_089F6D64;
    case 188u: goto L_089F6D70;
    case 189u: goto L_089F6D80;
    case 190u: goto L_089F6D90;
    case 191u: goto L_089F6D98;
    case 192u: goto L_089F6DA8;
    case 193u: goto L_089F6DAC;
    case 194u: goto L_089F6DBC;
    case 195u: goto L_089F6DD0;
    case 196u: goto L_089F6DD4;
    case 197u: goto L_089F6DE0;
    case 198u: goto L_089F6DF0;
    case 199u: goto L_089F6E04;
    case 200u: goto L_089F6E24;
    case 201u: goto L_089F6E58;
    case 202u: goto L_089F6E5C;
    case 203u: goto L_089F6E6C;
    case 204u: goto L_089F6E80;
    case 205u: goto L_089F6E90;
    case 206u: goto L_089F6EA0;
    case 207u: goto L_089F6EB0;
    case 208u: goto L_089F6EC0;
    case 209u: goto L_089F6ED0;
    case 210u: goto L_089F6EE0;
    case 211u: goto L_089F6EF4;
    case 212u: goto L_089F6F14;
    case 213u: goto L_089F6F48;
    case 214u: goto L_089F6F4C;
    case 215u: goto L_089F6F5C;
    case 216u: goto L_089F6F70;
    case 217u: goto L_089F6F80;
    case 218u: goto L_089F6F90;
    case 219u: goto L_089F6FA0;
    case 220u: goto L_089F6FB0;
    case 221u: goto L_089F6FC0;
    case 222u: goto L_089F6FD0;
    case 223u: goto L_089F6FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F6000:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F6030;
      }
      goto L_089F6008;
    }
L_089F6008:
    aot_gpr[31] = (0x089F6010u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F6050;
L_089F6010:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089F6030:
    aot_gpr[2] = (0u | 0u);
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
L_089F6050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089F606Cu);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 4u, 0x089F5068u>(ctx, &aot_mem) && ctx.pc == 0x089F606Cu) goto L_089F606C;
    return;
L_089F606C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F6088:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F60ACu);
    aot_gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F60ACu) goto L_089F60AC;
    return;
L_089F60AC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F60EC;
      }
      goto L_089F60B8;
    }
L_089F60B8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F60C4u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F60C4u) goto L_089F60C4;
    return;
L_089F60C4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10608));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F60EC;
L_089F60EC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F6118;
      }
      goto L_089F60F4;
    }
L_089F60F4:
    aot_gpr[31] = (0x089F60FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F63B0;
L_089F60FC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089F6118:
    aot_gpr[2] = (0u | 0u);
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
L_089F6134:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089F616C;
      }
      goto L_089F615C;
    }
L_089F615C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F616Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9964));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F616Cu) goto L_089F616C;
    return;
L_089F616C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F6190;
      }
      goto L_089F6174;
    }
L_089F6174:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9964));
    aot_gpr[31] = (0x089F6180u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6180u) goto L_089F6180;
    return;
L_089F6180:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6190u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6190u) goto L_089F6190;
    return;
L_089F6190:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
        goto L_089F621C;
    }
    goto L_089F61A8;
L_089F61A8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F61C0;
      }
      goto L_089F61B0;
    }
L_089F61B0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F61C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9956));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F61C0u) goto L_089F61C0;
    return;
L_089F61C0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F6218;
      }
      goto L_089F61C8;
    }
L_089F61C8:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9940));
    aot_gpr[31] = (0x089F61D4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F61D4u) goto L_089F61D4;
    return;
L_089F61D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F61E4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F61E4u) goto L_089F61E4;
    return;
L_089F61E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F61F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F61F8u) goto L_089F61F8;
    return;
L_089F61F8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9928));
    aot_gpr[31] = (0x089F6208u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6208u) goto L_089F6208;
    return;
L_089F6208:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6218u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6218u) goto L_089F6218;
    return;
L_089F6218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    goto L_089F621C;
L_089F621C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
        goto L_089F62A4;
    }
    goto L_089F6230;
L_089F6230:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F6248;
      }
      goto L_089F6238;
    }
L_089F6238:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F6248u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9924));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F6248u) goto L_089F6248;
    return;
L_089F6248:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F62A0;
      }
      goto L_089F6250;
    }
L_089F6250:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9908));
    aot_gpr[31] = (0x089F625Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F625Cu) goto L_089F625C;
    return;
L_089F625C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F626Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F626Cu) goto L_089F626C;
    return;
L_089F626C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6280u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6280u) goto L_089F6280;
    return;
L_089F6280:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9928));
    aot_gpr[31] = (0x089F6290u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6290u) goto L_089F6290;
    return;
L_089F6290:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F62A0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F62A0u) goto L_089F62A0;
    return;
L_089F62A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_089F62A4;
L_089F62A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6328;
      }
      goto L_089F62B8;
    }
L_089F62B8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F62D0;
      }
      goto L_089F62C0;
    }
L_089F62C0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F62D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9896));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F62D0u) goto L_089F62D0;
    return;
L_089F62D0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F6328;
      }
      goto L_089F62D8;
    }
L_089F62D8:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9876));
    aot_gpr[31] = (0x089F62E4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F62E4u) goto L_089F62E4;
    return;
L_089F62E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F62F4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F62F4u) goto L_089F62F4;
    return;
L_089F62F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6308u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6308u) goto L_089F6308;
    return;
L_089F6308:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-9928));
    aot_gpr[31] = (0x089F6318u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6318u) goto L_089F6318;
    return;
L_089F6318:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F6328u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6328u) goto L_089F6328;
    return;
L_089F6328:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F633C;
      }
      goto L_089F6330;
    }
L_089F6330:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F633Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9860));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F633Cu) goto L_089F633C;
    return;
L_089F633C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F6360;
      }
      goto L_089F6344;
    }
L_089F6344:
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-9860));
    aot_gpr[31] = (0x089F6350u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6350u) goto L_089F6350;
    return;
L_089F6350:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F6360u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6360u) goto L_089F6360;
    return;
L_089F6360:
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
L_089F637C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F63A4u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F63A4u) goto L_089F63A4;
    return;
L_089F63A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F63B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089F63CCu);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 4u, 0x089F5068u>(ctx, &aot_mem) && ctx.pc == 0x089F63CCu) goto L_089F63CC;
    return;
L_089F63CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F63E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F63E0u) goto L_089F63E0;
    return;
L_089F63E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F63F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F63F4u) goto L_089F63F4;
    return;
L_089F63F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6408u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F6408u) goto L_089F6408;
    return;
L_089F6408:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F641C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F6440u);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F6440u) goto L_089F6440;
    return;
L_089F6440:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F646C;
      }
      goto L_089F644C;
    }
L_089F644C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F6458u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F6458u) goto L_089F6458;
    return;
L_089F6458:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10760));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F646C;
L_089F646C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F6498;
      }
      goto L_089F6474;
    }
L_089F6474:
    aot_gpr[31] = (0x089F647Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F6578;
L_089F647C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089F6498:
    aot_gpr[2] = (0u | 0u);
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
L_089F64B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F650C;
      }
      goto L_089F64E8;
    }
L_089F64E8:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10036));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F64F4;
L_089F64F4:
    aot_gpr[31] = (0x089F64FCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F64FCu) goto L_089F64FC;
    return;
L_089F64FC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F64F4;
      }
      goto L_089F650C;
    }
L_089F650C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6524u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9856));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F6524u) goto L_089F6524;
    return;
L_089F6524:
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
L_089F6544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F656Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F656Cu) goto L_089F656C;
    return;
L_089F656C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F6578:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F6588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 4u, 0x089F5068u>(ctx, &aot_mem) && ctx.pc == 0x089F6588u) goto L_089F6588;
    return;
L_089F6588:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F6594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F65B4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F65B4u) goto L_089F65B4;
    return;
L_089F65B4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11016));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-9968));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[31] = (0x089F6600u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6600u) goto L_089F6600;
    return;
L_089F6600:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F6610u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F6610u) goto L_089F6610;
    return;
L_089F6610:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
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
L_089F6634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F669C;
      }
      goto L_089F665C;
    }
L_089F665C:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-10004));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089F6668;
L_089F6668:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F6684u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F6684u) goto L_089F6684;
    return;
L_089F6684:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F6690u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F6690u) goto L_089F6690;
    return;
L_089F6690:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[19] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_089F6668;
    }
    goto L_089F669C;
L_089F669C:
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
L_089F66B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F66F0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F66F0u) goto L_089F66F0;
    return;
L_089F66F0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F6738;
    }
    goto L_089F66F8;
L_089F66F8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F6738;
    }
    goto L_089F6704;
L_089F6704:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_089F6708;
L_089F6708:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F6720u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F6720u) goto L_089F6720;
    return;
L_089F6720:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F6738;
    }
    goto L_089F6728;
L_089F6728:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[18] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_089F6708;
    }
    goto L_089F6734;
L_089F6734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089F6738;
L_089F6738:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F6750u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F6750u) goto L_089F6750;
    return;
L_089F6750:
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
L_089F6768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F678Cu);
    aot_gpr[4] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F678Cu) goto L_089F678C;
    return;
L_089F678C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F67A8;
      }
      goto L_089F6798;
    }
L_089F6798:
    aot_gpr[31] = (0x089F67A0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089F6594;
L_089F67A0:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F67A8;
L_089F67A8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F67D4;
      }
      goto L_089F67B0;
    }
L_089F67B0:
    aot_gpr[31] = (0x089F67B8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F67F0;
L_089F67B8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089F67D4:
    aot_gpr[2] = (0u | 0u);
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
L_089F67F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089F6814u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 4u, 0x089F5068u>(ctx, &aot_mem) && ctx.pc == 0x089F6814u) goto L_089F6814;
    return;
L_089F6814:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6830u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6830u) goto L_089F6830;
    return;
L_089F6830:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6840u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F6840u) goto L_089F6840;
    return;
L_089F6840:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F687C;
      }
      goto L_089F684C;
    }
L_089F684C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_089F6850;
L_089F6850:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F6864u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F6864u) goto L_089F6864;
    return;
L_089F6864:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6870u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 231u, 0x089F4E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089F6870u) goto L_089F6870;
    return;
L_089F6870:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089F6850;
    }
    goto L_089F687C;
L_089F687C:
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
L_089F6898:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F68A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F68A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[21] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F6914;
      }
      goto L_089F68EC;
    }
L_089F68EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089F68F0;
L_089F68F0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6900u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6900u) goto L_089F6900;
    return;
L_089F6900:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_089F68F0;
    }
    goto L_089F6914;
L_089F6914:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9840));
    aot_gpr[31] = (0x089F6924u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6924u) goto L_089F6924;
    return;
L_089F6924:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6934u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6934u) goto L_089F6934;
    return;
L_089F6934:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6944u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6944u) goto L_089F6944;
    return;
L_089F6944:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6954u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6954u) goto L_089F6954;
    return;
L_089F6954:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F69A0;
      }
      goto L_089F695C;
    }
L_089F695C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10024));
    goto L_089F6960;
L_089F6960:
    aot_gpr[31] = (0x089F6968u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6968u) goto L_089F6968;
    return;
L_089F6968:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6978u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6978u) goto L_089F6978;
    return;
L_089F6978:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F698Cu);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 11u, 0x089F5118u>(ctx, &aot_mem) && ctx.pc == 0x089F698Cu) goto L_089F698C;
    return;
L_089F698C:
    aot_gpr[31] = (0x089F6994u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 7u, 0x089F50D0u>(ctx, &aot_mem) && ctx.pc == 0x089F6994u) goto L_089F6994;
    return;
L_089F6994:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F6960;
      }
      goto L_089F69A0;
    }
L_089F69A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F69EC;
      }
      goto L_089F69AC;
    }
L_089F69AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-10020));
    aot_gpr[31] = (0x089F69BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F69BCu) goto L_089F69BC;
    return;
L_089F69BC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F69CCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F69CCu) goto L_089F69CC;
    return;
L_089F69CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F69E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F69E0u) goto L_089F69E0;
    return;
L_089F69E0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F6A88;
      }
      goto L_089F69EC;
    }
L_089F69EC:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-10016));
    aot_gpr[31] = (0x089F69F8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F69F8u) goto L_089F69F8;
    return;
L_089F69F8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F6A08u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6A08u) goto L_089F6A08;
    return;
L_089F6A08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F6A24u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F6A24u) goto L_089F6A24;
    return;
L_089F6A24:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089F6A70;
    }
    goto L_089F6A2C;
L_089F6A2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[4] != aot_gpr[17]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089F6A70;
    }
    goto L_089F6A3C;
L_089F6A3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F6A54u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F6A54u) goto L_089F6A54;
    return;
L_089F6A54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_089F6A70;
    }
    goto L_089F6A60;
L_089F6A60:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[21]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F6A88;
      }
      goto L_089F6A70;
    }
L_089F6A70:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6A80u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6A80u) goto L_089F6A80;
    return;
L_089F6A80:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089F6A88;
L_089F6A88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_089F6AB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F6BAC;
      }
      goto L_089F6AE8;
    }
L_089F6AE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089F6AFC;
      }
      goto L_089F6AF4;
    }
L_089F6AF4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089F6B38;
      }
      goto L_089F6AFC;
    }
L_089F6AFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F6B3C;
      }
      goto L_089F6B10;
    }
L_089F6B10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089F6B14;
L_089F6B14:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6B24u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6B24u) goto L_089F6B24;
    return;
L_089F6B24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089F6B14;
    }
    goto L_089F6B38;
L_089F6B38:
    aot_gpr[4] = (2215u << 16u);
    goto L_089F6B3C;
L_089F6B3C:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9836));
    aot_gpr[31] = (0x089F6B48u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6B48u) goto L_089F6B48;
    return;
L_089F6B48:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6B58u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6B58u) goto L_089F6B58;
    return;
L_089F6B58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6B68u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6B68u) goto L_089F6B68;
    return;
L_089F6B68:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6B78u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6B78u) goto L_089F6B78;
    return;
L_089F6B78:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-10016));
    aot_gpr[31] = (0x089F6B88u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6B88u) goto L_089F6B88;
    return;
L_089F6B88:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6B98u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6B98u) goto L_089F6B98;
    return;
L_089F6B98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6BACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6BACu) goto L_089F6BAC;
    return;
L_089F6BAC:
    aot_gpr[2] = (0u | 1u);
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
L_089F6BCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F6C28;
      }
      goto L_089F6C00;
    }
L_089F6C00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089F6C04;
L_089F6C04:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6C14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6C14u) goto L_089F6C14;
    return;
L_089F6C14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089F6C04;
    }
    goto L_089F6C28;
L_089F6C28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[6] = (0u | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F6C4Cu);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F6C4Cu) goto L_089F6C4C;
    return;
L_089F6C4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6C60u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6C60u) goto L_089F6C60;
    return;
L_089F6C60:
    aot_gpr[2] = (0u | 1u);
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
L_089F6C80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F6D64;
      }
      goto L_089F6CAC;
    }
L_089F6CAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F6CEC;
      }
      goto L_089F6CC0;
    }
L_089F6CC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089F6CC4;
L_089F6CC4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6CD4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6CD4u) goto L_089F6CD4;
    return;
L_089F6CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089F6CC4;
    }
    goto L_089F6CE8;
L_089F6CE8:
    aot_gpr[4] = (2215u << 16u);
    goto L_089F6CEC;
L_089F6CEC:
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9832));
    aot_gpr[31] = (0x089F6CF8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6CF8u) goto L_089F6CF8;
    return;
L_089F6CF8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6D08u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6D08u) goto L_089F6D08;
    return;
L_089F6D08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6D18u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6D18u) goto L_089F6D18;
    return;
L_089F6D18:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6D28u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6D28u) goto L_089F6D28;
    return;
L_089F6D28:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-9820));
    aot_gpr[31] = (0x089F6D38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6D38u) goto L_089F6D38;
    return;
L_089F6D38:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6D48u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6D48u) goto L_089F6D48;
    return;
L_089F6D48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6D5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6D5Cu) goto L_089F6D5C;
    return;
L_089F6D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6E04;
      }
      goto L_089F6D64;
    }
L_089F6D64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089F6D98;
    }
    goto L_089F6D70;
L_089F6D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6D80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6D80u) goto L_089F6D80;
    return;
L_089F6D80:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6D90u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6D90u) goto L_089F6D90;
    return;
L_089F6D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F6E04;
      }
      goto L_089F6D98;
    }
L_089F6D98:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_089F6DD4;
    }
    goto L_089F6DA8;
L_089F6DA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089F6DAC;
L_089F6DAC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6DBCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6DBCu) goto L_089F6DBC;
    return;
L_089F6DBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089F6DAC;
    }
    goto L_089F6DD0;
L_089F6DD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_089F6DD4;
L_089F6DD4:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6DE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6DE0u) goto L_089F6DE0;
    return;
L_089F6DE0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6DF0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6DF0u) goto L_089F6DF0;
    return;
L_089F6DF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6E04u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6E04u) goto L_089F6E04;
    return;
L_089F6E04:
    aot_gpr[2] = (0u | 1u);
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
L_089F6E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F6E80;
      }
      goto L_089F6E58;
    }
L_089F6E58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089F6E5C;
L_089F6E5C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6E6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6E6Cu) goto L_089F6E6C;
    return;
L_089F6E6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089F6E5C;
    }
    goto L_089F6E80;
L_089F6E80:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9816));
    aot_gpr[31] = (0x089F6E90u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6E90u) goto L_089F6E90;
    return;
L_089F6E90:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6EA0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6EA0u) goto L_089F6EA0;
    return;
L_089F6EA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6EB0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6EB0u) goto L_089F6EB0;
    return;
L_089F6EB0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6EC0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6EC0u) goto L_089F6EC0;
    return;
L_089F6EC0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-9808));
    aot_gpr[31] = (0x089F6ED0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6ED0u) goto L_089F6ED0;
    return;
L_089F6ED0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6EE0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6EE0u) goto L_089F6EE0;
    return;
L_089F6EE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6EF4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6EF4u) goto L_089F6EF4;
    return;
L_089F6EF4:
    aot_gpr[2] = (0u | 1u);
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
L_089F6F14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F6F70;
      }
      goto L_089F6F48;
    }
L_089F6F48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_089F6F4C;
L_089F6F4C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6F5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6F5Cu) goto L_089F6F5C;
    return;
L_089F6F5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_089F6F4C;
    }
    goto L_089F6F70;
L_089F6F70:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9840));
    aot_gpr[31] = (0x089F6F80u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6F80u) goto L_089F6F80;
    return;
L_089F6F80:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F6F90u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6F90u) goto L_089F6F90;
    return;
L_089F6F90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F6FA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6FA0u) goto L_089F6FA0;
    return;
L_089F6FA0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6FB0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6FB0u) goto L_089F6FB0;
    return;
L_089F6FB0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-10016));
    aot_gpr[31] = (0x089F6FC0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F6FC0u) goto L_089F6FC0;
    return;
L_089F6FC0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F6FD0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6FD0u) goto L_089F6FD0;
    return;
L_089F6FD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F6FE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F6FE4u) goto L_089F6FE4;
    return;
L_089F6FE4:
    aot_gpr[2] = (0u | 1u);
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
}

void recomp_unit_0498(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0498_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_498(Runtime &runtime) {
    runtime.register_generated_unit(498u, 0x089F6000u, 4096u, &recomp_unit_0498, &recomp_unit_0498_entry);
    runtime.register_function(0x089F6000u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6008u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6010u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6030u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6050u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F606Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6088u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F60ACu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F60B8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F60C4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F60ECu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F60F4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F60FCu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6118u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6134u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F615Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F616Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6174u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6180u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6190u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F61A8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F61B0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F61C0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F61C8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F61D4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F61E4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F61F8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6208u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6218u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F621Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6230u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6238u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6248u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6250u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F625Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F626Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6280u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6290u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F62A0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F62A4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F62B8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F62C0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F62D0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F62D8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F62E4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F62F4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6308u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6318u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6328u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6330u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F633Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6344u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6350u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6360u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F637Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F63A4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F63B0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F63CCu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F63E0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F63F4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6408u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F641Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6440u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F644Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6458u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F646Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6474u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F647Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6498u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F64B4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F64E8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F64F4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F64FCu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F650Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6524u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6544u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F656Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6578u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6588u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6594u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F65B4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6600u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6610u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6634u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F665Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6668u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6684u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6690u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F669Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F66B8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F66F0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F66F8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6704u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6708u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6720u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6728u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6734u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6738u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6750u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6768u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F678Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6798u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F67A0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F67A8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F67B0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F67B8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F67D4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F67F0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6814u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6830u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6840u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F684Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6850u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6864u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6870u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F687Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6898u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F68A0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F68A8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F68ECu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F68F0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6900u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6914u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6924u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6934u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6944u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6954u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F695Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6960u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6968u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6978u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F698Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6994u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F69A0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F69ACu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F69BCu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F69CCu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F69E0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F69ECu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F69F8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A08u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A24u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A2Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A3Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A54u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A60u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A70u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A80u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6A88u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6AB4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6AE8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6AF4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6AFCu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B10u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B14u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B24u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B38u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B3Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B48u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B58u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B68u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B78u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B88u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6B98u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6BACu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6BCCu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6C00u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6C04u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6C14u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6C28u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6C4Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6C60u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6C80u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6CACu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6CC0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6CC4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6CD4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6CE8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6CECu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6CF8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D08u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D18u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D28u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D38u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D48u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D5Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D64u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D70u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D80u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D90u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6D98u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6DA8u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6DACu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6DBCu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6DD0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6DD4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6DE0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6DF0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6E04u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6E24u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6E58u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6E5Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6E6Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6E80u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6E90u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6EA0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6EB0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6EC0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6ED0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6EE0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6EF4u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6F14u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6F48u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6F4Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6F5Cu, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6F70u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6F80u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6F90u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6FA0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6FB0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6FC0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6FD0u, &recomp_unit_0498, "recomp_unit_0498");
    runtime.register_function(0x089F6FE4u, &recomp_unit_0498, "recomp_unit_0498");
}
} // namespace psprecomp
