#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0481[1024] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 16, 0, 17, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 29, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 42, 43, 0, 44, 0, 0, 0, 45, 46, 0, 0, 0, 47, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 51, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55,
    0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0,
    79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 98,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0,
    104, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139,
    0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0, 147, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 163,
    0, 164, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0,
    0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 179, 180, 0, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0,
    0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 204,
    0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0,
    0, 213, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221,
    0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 241, 0, 0, 0, 242,
};
void recomp_unit_0481_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089E5000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0481[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E5000;
    case 2u: goto L_089E5010;
    case 3u: goto L_089E5028;
    case 4u: goto L_089E5030;
    case 5u: goto L_089E5038;
    case 6u: goto L_089E504C;
    case 7u: goto L_089E5050;
    case 8u: goto L_089E5058;
    case 9u: goto L_089E506C;
    case 10u: goto L_089E5088;
    case 11u: goto L_089E50A0;
    case 12u: goto L_089E50B4;
    case 13u: goto L_089E50CC;
    case 14u: goto L_089E50D8;
    case 15u: goto L_089E50E8;
    case 16u: goto L_089E50EC;
    case 17u: goto L_089E50F4;
    case 18u: goto L_089E50FC;
    case 19u: goto L_089E513C;
    case 20u: goto L_089E5144;
    case 21u: goto L_089E5150;
    case 22u: goto L_089E5174;
    case 23u: goto L_089E5180;
    case 24u: goto L_089E518C;
    case 25u: goto L_089E5194;
    case 26u: goto L_089E519C;
    case 27u: goto L_089E51E0;
    case 28u: goto L_089E51EC;
    case 29u: goto L_089E51F0;
    case 30u: goto L_089E51F8;
    case 31u: goto L_089E521C;
    case 32u: goto L_089E5234;
    case 33u: goto L_089E5248;
    case 34u: goto L_089E5250;
    case 35u: goto L_089E5258;
    case 36u: goto L_089E5268;
    case 37u: goto L_089E5294;
    case 38u: goto L_089E52A0;
    case 39u: goto L_089E52A8;
    case 40u: goto L_089E52B0;
    case 41u: goto L_089E52B8;
    case 42u: goto L_089E52C4;
    case 43u: goto L_089E52C8;
    case 44u: goto L_089E52D0;
    case 45u: goto L_089E52E0;
    case 46u: goto L_089E52E4;
    case 47u: goto L_089E52F4;
    case 48u: goto L_089E5308;
    case 49u: goto L_089E532C;
    case 50u: goto L_089E5338;
    case 51u: goto L_089E533C;
    case 52u: goto L_089E5350;
    case 53u: goto L_089E5358;
    case 54u: goto L_089E5374;
    case 55u: goto L_089E537C;
    case 56u: goto L_089E538C;
    case 57u: goto L_089E5398;
    case 58u: goto L_089E53A0;
    case 59u: goto L_089E53A8;
    case 60u: goto L_089E53B0;
    case 61u: goto L_089E53D0;
    case 62u: goto L_089E53D8;
    case 63u: goto L_089E53E8;
    case 64u: goto L_089E5410;
    case 65u: goto L_089E5418;
    case 66u: goto L_089E5424;
    case 67u: goto L_089E542C;
    case 68u: goto L_089E543C;
    case 69u: goto L_089E545C;
    case 70u: goto L_089E5464;
    case 71u: goto L_089E5474;
    case 72u: goto L_089E549C;
    case 73u: goto L_089E54A8;
    case 74u: goto L_089E54B0;
    case 75u: goto L_089E54B8;
    case 76u: goto L_089E54D0;
    case 77u: goto L_089E54F0;
    case 78u: goto L_089E54F8;
    case 79u: goto L_089E5500;
    case 80u: goto L_089E5514;
    case 81u: goto L_089E5544;
    case 82u: goto L_089E554C;
    case 83u: goto L_089E5574;
    case 84u: goto L_089E5580;
    case 85u: goto L_089E5588;
    case 86u: goto L_089E5590;
    case 87u: goto L_089E55A8;
    case 88u: goto L_089E55C8;
    case 89u: goto L_089E55D0;
    case 90u: goto L_089E55D8;
    case 91u: goto L_089E55EC;
    case 92u: goto L_089E561C;
    case 93u: goto L_089E5624;
    case 94u: goto L_089E5658;
    case 95u: goto L_089E5664;
    case 96u: goto L_089E566C;
    case 97u: goto L_089E5674;
    case 98u: goto L_089E567C;
    case 99u: goto L_089E5680;
    case 100u: goto L_089E56A8;
    case 101u: goto L_089E56B0;
    case 102u: goto L_089E56E0;
    case 103u: goto L_089E56E8;
    case 104u: goto L_089E5700;
    case 105u: goto L_089E5708;
    case 106u: goto L_089E5718;
    case 107u: goto L_089E5724;
    case 108u: goto L_089E572C;
    case 109u: goto L_089E5740;
    case 110u: goto L_089E5748;
    case 111u: goto L_089E5758;
    case 112u: goto L_089E577C;
    case 113u: goto L_089E5784;
    case 114u: goto L_089E5790;
    case 115u: goto L_089E5798;
    case 116u: goto L_089E57A0;
    case 117u: goto L_089E57B0;
    case 118u: goto L_089E57CC;
    case 119u: goto L_089E57D8;
    case 120u: goto L_089E5804;
    case 121u: goto L_089E5808;
    case 122u: goto L_089E5818;
    case 123u: goto L_089E5830;
    case 124u: goto L_089E5858;
    case 125u: goto L_089E5864;
    case 126u: goto L_089E586C;
    case 127u: goto L_089E5874;
    case 128u: goto L_089E5880;
    case 129u: goto L_089E58A0;
    case 130u: goto L_089E58B0;
    case 131u: goto L_089E58D0;
    case 132u: goto L_089E58E8;
    case 133u: goto L_089E58F0;
    case 134u: goto L_089E5904;
    case 135u: goto L_089E592C;
    case 136u: goto L_089E5934;
    case 137u: goto L_089E5968;
    case 138u: goto L_089E5974;
    case 139u: goto L_089E597C;
    case 140u: goto L_089E5984;
    case 141u: goto L_089E598C;
    case 142u: goto L_089E599C;
    case 143u: goto L_089E59A8;
    case 144u: goto L_089E59B4;
    case 145u: goto L_089E59BC;
    case 146u: goto L_089E59C8;
    case 147u: goto L_089E59D0;
    case 148u: goto L_089E59D4;
    case 149u: goto L_089E59FC;
    case 150u: goto L_089E5A04;
    case 151u: goto L_089E5A2C;
    case 152u: goto L_089E5A34;
    case 153u: goto L_089E5A5C;
    case 154u: goto L_089E5A60;
    case 155u: goto L_089E5A80;
    case 156u: goto L_089E5A94;
    case 157u: goto L_089E5A9C;
    case 158u: goto L_089E5AAC;
    case 159u: goto L_089E5AC0;
    case 160u: goto L_089E5ADC;
    case 161u: goto L_089E5AE4;
    case 162u: goto L_089E5AF0;
    case 163u: goto L_089E5AFC;
    case 164u: goto L_089E5B04;
    case 165u: goto L_089E5B08;
    case 166u: goto L_089E5B30;
    case 167u: goto L_089E5B3C;
    case 168u: goto L_089E5B44;
    case 169u: goto L_089E5B68;
    case 170u: goto L_089E5B70;
    case 171u: goto L_089E5B78;
    case 172u: goto L_089E5B84;
    case 173u: goto L_089E5B9C;
    case 174u: goto L_089E5BC4;
    case 175u: goto L_089E5BCC;
    case 176u: goto L_089E5BF4;
    case 177u: goto L_089E5C10;
    case 178u: goto L_089E5C24;
    case 179u: goto L_089E5C28;
    case 180u: goto L_089E5C2C;
    case 181u: goto L_089E5C44;
    case 182u: goto L_089E5C50;
    case 183u: goto L_089E5C60;
    case 184u: goto L_089E5C64;
    case 185u: goto L_089E5C6C;
    case 186u: goto L_089E5C9C;
    case 187u: goto L_089E5CA8;
    case 188u: goto L_089E5CBC;
    case 189u: goto L_089E5CC0;
    case 190u: goto L_089E5CC8;
    case 191u: goto L_089E5CD4;
    case 192u: goto L_089E5CEC;
    case 193u: goto L_089E5CF8;
    case 194u: goto L_089E5D08;
    case 195u: goto L_089E5D10;
    case 196u: goto L_089E5D1C;
    case 197u: goto L_089E5D2C;
    case 198u: goto L_089E5D34;
    case 199u: goto L_089E5D40;
    case 200u: goto L_089E5D50;
    case 201u: goto L_089E5D58;
    case 202u: goto L_089E5D64;
    case 203u: goto L_089E5D74;
    case 204u: goto L_089E5D7C;
    case 205u: goto L_089E5D88;
    case 206u: goto L_089E5D9C;
    case 207u: goto L_089E5DBC;
    case 208u: goto L_089E5DC4;
    case 209u: goto L_089E5DD4;
    case 210u: goto L_089E5DDC;
    case 211u: goto L_089E5DEC;
    case 212u: goto L_089E5DF4;
    case 213u: goto L_089E5E04;
    case 214u: goto L_089E5E0C;
    case 215u: goto L_089E5E1C;
    case 216u: goto L_089E5E24;
    case 217u: goto L_089E5E34;
    case 218u: goto L_089E5E3C;
    case 219u: goto L_089E5E60;
    case 220u: goto L_089E5E74;
    case 221u: goto L_089E5E7C;
    case 222u: goto L_089E5E84;
    case 223u: goto L_089E5E8C;
    case 224u: goto L_089E5EA8;
    case 225u: goto L_089E5EB8;
    case 226u: goto L_089E5EC4;
    case 227u: goto L_089E5ED8;
    case 228u: goto L_089E5F00;
    case 229u: goto L_089E5F18;
    case 230u: goto L_089E5F20;
    case 231u: goto L_089E5F38;
    case 232u: goto L_089E5F4C;
    case 233u: goto L_089E5F54;
    case 234u: goto L_089E5F64;
    case 235u: goto L_089E5F8C;
    case 236u: goto L_089E5F94;
    case 237u: goto L_089E5FA0;
    case 238u: goto L_089E5FB8;
    case 239u: goto L_089E5FC8;
    case 240u: goto L_089E5FE8;
    case 241u: goto L_089E5FEC;
    case 242u: goto L_089E5FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E5000:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8308), 0u);
    aot_gpr[31] = (0x089E5010u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 252u, 0x089E4F94u>(ctx, &aot_mem) && ctx.pc == 0x089E5010u) goto L_089E5010;
    return;
L_089E5010:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5028:
    aot_gpr[31] = (0x089E5030u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 92u, 0x089E4588u>(ctx, &aot_mem) && ctx.pc == 0x089E5030u) goto L_089E5030;
    return;
L_089E5030:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E50CC;
      }
      goto L_089E5038;
    }
L_089E5038:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E50EC;
      }
      goto L_089E504C;
    }
L_089E504C:
    aot_gpr[17] = (0u | 55004u);
    goto L_089E5050;
L_089E5050:
    aot_gpr[31] = (0x089E5058u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5058u) goto L_089E5058;
    return;
L_089E5058:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E506Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E506Cu) goto L_089E506C;
    return;
L_089E506C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E5088u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4136));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5088u) goto L_089E5088;
    return;
L_089E5088:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8308)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089E50A0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E50A0u) goto L_089E50A0;
    return;
L_089E50A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8308), 0u);
    aot_gpr[31] = (0x089E50B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 252u, 0x089E4F94u>(ctx, &aot_mem) && ctx.pc == 0x089E50B4u) goto L_089E50B4;
    return;
L_089E50B4:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E50CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_089E5010;
      }
      goto L_089E50D8;
    }
L_089E50D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4136)));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[17] = (0u | 55004u);
        goto L_089E5050;
    }
    goto L_089E50E8;
L_089E50E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089E50EC;
L_089E50EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E5050;
      }
      goto L_089E50F4;
    }
L_089E50F4:
    aot_gpr[17] = (0u | 55004u);
    goto L_089E5050;
L_089E50FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(72));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E5150;
      }
      goto L_089E513C;
    }
L_089E513C:
    aot_gpr[31] = (0x089E5144u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E5144u) goto L_089E5144;
    return;
L_089E5144:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(11896));
      if (branch_taken) {
          goto L_089E5174;
      }
      goto L_089E5150;
    }
L_089E5150:
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_089E5174:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089E5180u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E5180u) goto L_089E5180;
    return;
L_089E5180:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089E51F0;
      }
      goto L_089E518C;
    }
L_089E518C:
    aot_gpr[31] = (0x089E5194u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 202u, 0x0898DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5194u) goto L_089E5194;
    return;
L_089E5194:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089E51E0;
    }
    goto L_089E519C;
L_089E519C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(64), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(68), aot_gpr[20]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
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
L_089E51E0:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089E51ECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E51ECu) goto L_089E51EC;
    return;
L_089E51EC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    goto L_089E51F0;
L_089E51F0:
    aot_gpr[31] = (0x089E51F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089E51F8u) goto L_089E51F8;
    return;
L_089E51F8:
    aot_gpr[2] = (aot_gpr[17] + 0u);
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
L_089E521C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(11896));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_089E5248;
      }
      goto L_089E5234;
    }
L_089E5234:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5248:
    aot_gpr[31] = (0x089E5250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089E5250u) goto L_089E5250;
    return;
L_089E5250:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089E5234;
      }
      goto L_089E5258;
    }
L_089E5258:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5268:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
      if (branch_taken) {
          goto L_089E53A0;
      }
      goto L_089E5294;
    }
L_089E5294:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E5308;
      }
      goto L_089E52A0;
    }
L_089E52A0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E5308;
      }
      goto L_089E52A8;
    }
L_089E52A8:
    aot_gpr[31] = (0x089E52B0u);
    // nop
    goto L_089E521C;
L_089E52B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089E5308;
      }
      goto L_089E52B8;
    }
L_089E52B8:
    aot_gpr[2] = (aot_gpr[18] & 4096u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E532C;
      }
      goto L_089E52C4;
    }
L_089E52C4:
    aot_gpr[2] = (aot_gpr[18] & 2048u);
    goto L_089E52C8;
L_089E52C8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E52E4;
    }
    goto L_089E52D0;
L_089E52D0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23420)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E533C;
    }
    goto L_089E52E0;
L_089E52E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E52E4;
L_089E52E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x089E52F4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E52F4u) goto L_089E52F4;
    return;
L_089E52F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8284), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    goto L_089E5308;
L_089E5308:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E532C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23424)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[18] & 2048u);
      if (branch_taken) {
          goto L_089E52C8;
      }
      goto L_089E5338;
    }
L_089E5338:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E533C;
L_089E533C:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(23708));
    aot_gpr[31] = (0x089E5350u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 57u, 0x089E4310u>(ctx, &aot_mem) && ctx.pc == 0x089E5350u) goto L_089E5350;
    return;
L_089E5350:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E5308;
      }
      goto L_089E5358;
    }
L_089E5358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(10360));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089E5374u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 184u, 0x089E3DB0u>(ctx, &aot_mem) && ctx.pc == 0x089E5374u) goto L_089E5374;
    return;
L_089E5374:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E5308;
      }
      goto L_089E537C;
    }
L_089E537C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(23708)));
    aot_gpr[2] = (aot_gpr[18] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u | 55005u);
      if (branch_taken) {
          goto L_089E5308;
      }
      goto L_089E538C;
    }
L_089E538C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
      if (branch_taken) {
          goto L_089E5464;
      }
      goto L_089E5398;
    }
L_089E5398:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E53A8;
      }
      goto L_089E53A0;
    }
L_089E53A0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E5308;
L_089E53A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(23700), 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(7));
    goto L_089E53B0;
L_089E53B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8248), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8264), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x089E53D0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 15u, 0x089E90D8u>(ctx, &aot_mem) && ctx.pc == 0x089E53D0u) goto L_089E53D0;
    return;
L_089E53D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E5308;
      }
      goto L_089E53D8;
    }
L_089E53D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089E5308;
      }
      goto L_089E53E8;
    }
L_089E53E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[31] = (0x089E5410u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x089E5410u) goto L_089E5410;
    return;
L_089E5410:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E542C;
      }
      goto L_089E5418;
    }
L_089E5418:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E5424u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5424u) goto L_089E5424;
    return;
L_089E5424:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    goto L_089E5308;
L_089E542C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089E543Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 108u, 0x0898F6C8u>(ctx, &aot_mem) && ctx.pc == 0x089E543Cu) goto L_089E543C;
    return;
L_089E543C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(10360));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16752));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E545Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E545Cu) goto L_089E545C;
    return;
L_089E545C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E52E4;
L_089E5464:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(23704), 0u);
    goto L_089E53B0;
L_089E5474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_089E5544;
      }
      goto L_089E549C;
    }
L_089E549C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E54D0;
      }
      goto L_089E54A8;
    }
L_089E54A8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E54D0;
      }
      goto L_089E54B0;
    }
L_089E54B0:
    aot_gpr[31] = (0x089E54B8u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(100));
    goto L_089E521C;
L_089E54B8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16804));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12068));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E54F0;
      }
      goto L_089E54D0;
    }
L_089E54D0:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089E54F0:
    aot_gpr[31] = (0x089E54F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 120u, 0x089E4774u>(ctx, &aot_mem) && ctx.pc == 0x089E54F8u) goto L_089E54F8;
    return;
L_089E54F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E54D0;
      }
      goto L_089E5500;
    }
L_089E5500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x089E5514u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5514u) goto L_089E5514;
    return;
L_089E5514:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8288), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089E5544:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E54D0;
L_089E554C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_089E561C;
      }
      goto L_089E5574;
    }
L_089E5574:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E55A8;
      }
      goto L_089E5580;
    }
L_089E5580:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E55A8;
      }
      goto L_089E5588;
    }
L_089E5588:
    aot_gpr[31] = (0x089E5590u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(100));
    goto L_089E521C;
L_089E5590:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16820));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12068));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E55C8;
      }
      goto L_089E55A8;
    }
L_089E55A8:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089E55C8:
    aot_gpr[31] = (0x089E55D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 120u, 0x089E4774u>(ctx, &aot_mem) && ctx.pc == 0x089E55D0u) goto L_089E55D0;
    return;
L_089E55D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E55A8;
      }
      goto L_089E55D8;
    }
L_089E55D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x089E55ECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E55ECu) goto L_089E55EC;
    return;
L_089E55EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8292), aot_gpr[18]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089E561C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E55A8;
L_089E5624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2120), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2116), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2112), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2124), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2108), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2104), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2100), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2096), aot_gpr[16]);
      if (branch_taken) {
          goto L_089E5798;
      }
      goto L_089E5658;
    }
L_089E5658:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E567C;
      }
      goto L_089E5664;
    }
L_089E5664:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E567C;
      }
      goto L_089E566C;
    }
L_089E566C:
    aot_gpr[31] = (0x089E5674u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(100));
    goto L_089E521C;
L_089E5674:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089E56A8;
      }
      goto L_089E567C;
    }
L_089E567C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089E5680;
L_089E5680:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2124)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2096)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E56A8:
    aot_gpr[31] = (0x089E56B0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089E56B0u) goto L_089E56B0;
    return;
L_089E56B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(23708));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8244), 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8248), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8264), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E56E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 69u, 0x089E43E8u>(ctx, &aot_mem) && ctx.pc == 0x089E56E0u) goto L_089E56E0;
    return;
L_089E56E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E567C;
      }
      goto L_089E56E8;
    }
L_089E56E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(10360));
    aot_gpr[31] = (0x089E5700u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 184u, 0x089E3DB0u>(ctx, &aot_mem) && ctx.pc == 0x089E5700u) goto L_089E5700;
    return;
L_089E5700:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E567C;
      }
      goto L_089E5708;
    }
L_089E5708:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(23708)));
    aot_gpr[2] = (aot_gpr[21] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u | 55005u);
      if (branch_taken) {
          goto L_089E567C;
      }
      goto L_089E5718;
    }
L_089E5718:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
    { const bool branch_taken = aot_gpr[21] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[21] & 2048u);
      if (branch_taken) {
          goto L_089E572C;
      }
      goto L_089E5724;
    }
L_089E5724:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E567C;
      }
      goto L_089E572C;
    }
L_089E572C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089E5740u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 15u, 0x089E90D8u>(ctx, &aot_mem) && ctx.pc == 0x089E5740u) goto L_089E5740;
    return;
L_089E5740:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E567C;
      }
      goto L_089E5748;
    }
L_089E5748:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E5808;
      }
      goto L_089E5758;
    }
L_089E5758:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[31] = (0x089E577Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x089E577Cu) goto L_089E577C;
    return;
L_089E577C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E57A0;
      }
      goto L_089E5784;
    }
L_089E5784:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E5790u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5790u) goto L_089E5790;
    return;
L_089E5790:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089E5680;
L_089E5798:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E567C;
L_089E57A0:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E57B0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 108u, 0x0898F6C8u>(ctx, &aot_mem) && ctx.pc == 0x089E57B0u) goto L_089E57B0;
    return;
L_089E57B0:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(46));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16844));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17168));
    aot_gpr[31] = (0x089E57CCu);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E57CCu) goto L_089E57CC;
    return;
L_089E57CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E57D8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E57D8u) goto L_089E57D8;
    return;
L_089E57D8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(8312));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(10360));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17196));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[9] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089E5804u);
    aot_gpr[10] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5804u) goto L_089E5804;
    return;
L_089E5804:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    goto L_089E5808;
L_089E5808:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x089E5818u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5818u) goto L_089E5818;
    return;
L_089E5818:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    aot_gpr[16] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8296), aot_gpr[22]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    goto L_089E567C;
L_089E5830:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_089E592C;
      }
      goto L_089E5858;
    }
L_089E5858:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E5880;
      }
      goto L_089E5864;
    }
L_089E5864:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E5880;
      }
      goto L_089E586C;
    }
L_089E586C:
    aot_gpr[31] = (0x089E5874u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(100));
    goto L_089E521C;
L_089E5874:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089E58A0;
      }
      goto L_089E5880;
    }
L_089E5880:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089E58A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[31] = (0x089E58B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 108u, 0x0898F6C8u>(ctx, &aot_mem) && ctx.pc == 0x089E58B0u) goto L_089E58B0;
    return;
L_089E58B0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10872));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17460));
    aot_gpr[31] = (0x089E58D0u);
    aot_gpr[8] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E58D0u) goto L_089E58D0;
    return;
L_089E58D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17764));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10872));
    aot_gpr[31] = (0x089E58E8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0480_entry, 480u, 120u, 0x089E4774u>(ctx, &aot_mem) && ctx.pc == 0x089E58E8u) goto L_089E58E8;
    return;
L_089E58E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E5880;
      }
      goto L_089E58F0;
    }
L_089E58F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x089E5904u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5904u) goto L_089E5904;
    return;
L_089E5904:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8300), aot_gpr[19]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
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
L_089E592C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E5880;
L_089E5934:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089E59D0;
      }
      goto L_089E5968;
    }
L_089E5968:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E59D4;
      }
      goto L_089E5974;
    }
L_089E5974:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089E59D4;
      }
      goto L_089E597C;
    }
L_089E597C:
    aot_gpr[31] = (0x089E5984u);
    // nop
    goto L_089E521C;
L_089E5984:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E59D4;
      }
      goto L_089E598C;
    }
L_089E598C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23440)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4108));
      if (branch_taken) {
          goto L_089E5B70;
      }
      goto L_089E599C;
    }
L_089E599C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E59A8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E59A8u) goto L_089E59A8;
    return;
L_089E59A8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[3];
    aot_gpr[2] = (aot_gpr[20] < static_cast<std::uint32_t>(65) ? 1u : 0u);
      if (branch_taken) {
          goto L_089E5A34;
      }
      goto L_089E59B4;
    }
L_089E59B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089E59FC;
      }
      goto L_089E59BC;
    }
L_089E59BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          goto L_089E5B9C;
      }
      goto L_089E59C8;
    }
L_089E59C8:
    if (aot_gpr[20] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
        goto L_089E5B44;
    }
    goto L_089E59D0;
L_089E59D0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    goto L_089E59D4;
L_089E59D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E59FC:
    if (aot_gpr[20] != aot_gpr[2]) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
        goto L_089E59D4;
    }
    goto L_089E5A04;
L_089E5A04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17780));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17872));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(17856));
    aot_gpr[31] = (0x089E5A2Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1900));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5A2Cu) goto L_089E5A2C;
    return;
L_089E5A2C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    goto L_089E5A60;
L_089E5A34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17780));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17920));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(17856));
    aot_gpr[31] = (0x089E5A5Cu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1900));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5A5Cu) goto L_089E5A5C;
    return;
L_089E5A5C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    goto L_089E5A60;
L_089E5A60:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[31] = (0x089E5A80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089E5A80u) goto L_089E5A80;
    return;
L_089E5A80:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x089E5A94u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1900));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x089E5A94u) goto L_089E5A94;
    return;
L_089E5A94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E59D4;
      }
      goto L_089E5A9C;
    }
L_089E5A9C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(17856));
    aot_gpr[31] = (0x089E5AACu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x089E5AACu) goto L_089E5AAC;
    return;
L_089E5AAC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8312));
    aot_gpr[31] = (0x089E5AC0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E5AC0u) goto L_089E5AC0;
    return;
L_089E5AC0:
    aot_gpr[8] = (aot_gpr[2] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1900));
    aot_gpr[31] = (0x089E5ADCu);
    aot_gpr[9] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 160u, 0x0898EB8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5ADCu) goto L_089E5ADC;
    return;
L_089E5ADC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E5B30;
      }
      goto L_089E5AE4;
    }
L_089E5AE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E5AF0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089E5AF0u) goto L_089E5AF0;
    return;
L_089E5AF0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089E5B78;
      }
      goto L_089E5AFC;
    }
L_089E5AFC:
    aot_gpr[31] = (0x089E5B04u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E5B04u) goto L_089E5B04;
    return;
L_089E5B04:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089E5B08;
L_089E5B08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5B30:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E5B3Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x089E5B3Cu) goto L_089E5B3C;
    return;
L_089E5B3C:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    goto L_089E5B08;
L_089E5B44:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17780));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(17976));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(17856));
    aot_gpr[31] = (0x089E5B68u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1900));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5B68u) goto L_089E5B68;
    return;
L_089E5B68:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    goto L_089E5A60;
L_089E5B70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089E5B78;
L_089E5B78:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x089E5B84u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5B84u) goto L_089E5B84;
    return;
L_089E5B84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8276), aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    goto L_089E59D4;
L_089E5B9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17780));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(18024));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(17856));
    aot_gpr[31] = (0x089E5BC4u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1900));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5BC4u) goto L_089E5BC4;
    return;
L_089E5BC4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    goto L_089E5A60;
L_089E5BCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089E5C24;
      }
      goto L_089E5BF4;
    }
L_089E5BF4:
    aot_gpr[2] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12064));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5C10:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(18));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_089E5D9C;
      }
      goto L_089E5C24;
    }
L_089E5C24:
    aot_gpr[16] = (0u + 0u);
    goto L_089E5C28;
L_089E5C28:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089E5C2C;
L_089E5C2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5C44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8256)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (2206u << 16u);
      if (branch_taken) {
          goto L_089E5DC4;
      }
      goto L_089E5C50;
    }
L_089E5C50:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19564));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5C60u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4096));
    goto L_089E5934;
L_089E5C60:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5C64:
    if (aot_gpr[16] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E5E3C;
    }
    goto L_089E5C6C;
L_089E5C6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5C9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8256)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E5E60;
      }
      goto L_089E5CA8;
    }
L_089E5CA8:
    aot_gpr[7] = (2206u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(20196));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5CBCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4096));
    goto L_089E5830;
L_089E5CBC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5CC0;
L_089E5CC0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089E5E3C;
      }
      goto L_089E5CC8;
    }
L_089E5CC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8260)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[16]);
        goto L_089E5EA8;
    }
    goto L_089E5CD4;
L_089E5CD4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8260), aot_gpr[2]);
    goto L_089E5C28;
L_089E5CEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8256)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (2206u << 16u);
      if (branch_taken) {
          goto L_089E5E24;
      }
      goto L_089E5CF8;
    }
L_089E5CF8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20112));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5D08u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2048));
    goto L_089E5624;
L_089E5D08:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5D10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8256)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (2206u << 16u);
      if (branch_taken) {
          goto L_089E5E0C;
      }
      goto L_089E5D1C;
    }
L_089E5D1C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20016));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5D2Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2048));
    goto L_089E554C;
L_089E5D2C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5D34:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8256)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (2206u << 16u);
      if (branch_taken) {
          goto L_089E5DF4;
      }
      goto L_089E5D40;
    }
L_089E5D40:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19884));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5D50u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2048));
    goto L_089E5474;
L_089E5D50:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5D58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8256)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (2206u << 16u);
      if (branch_taken) {
          goto L_089E5DDC;
      }
      goto L_089E5D64;
    }
L_089E5D64:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19800));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5D74u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2048));
    goto L_089E5268;
L_089E5D74:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5D7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u | 55002u);
      if (branch_taken) {
          goto L_089E5E7C;
      }
      goto L_089E5D88;
    }
L_089E5D88:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E5C28;
L_089E5D9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089E5DBCu);
    aot_gpr[16] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E5DBCu) goto L_089E5DBC;
    return;
L_089E5DBC:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089E5C2C;
L_089E5DC4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19564));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5DD4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2048));
    goto L_089E5934;
L_089E5DD4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5DDC:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19800));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5DECu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4096));
    goto L_089E5268;
L_089E5DEC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5DF4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19884));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5E04u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4096));
    goto L_089E5474;
L_089E5E04:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5E0C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20016));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5E1Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4096));
    goto L_089E554C;
L_089E5E1C:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5E24:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20112));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5E34u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4096));
    goto L_089E5624;
L_089E5E34:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5C64;
L_089E5E3C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E5E60:
    aot_gpr[7] = (2206u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(20196));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089E5E74u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2048));
    goto L_089E5830;
L_089E5E74:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089E5CC0;
L_089E5E7C:
    aot_gpr[31] = (0x089E5E84u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089E521C;
L_089E5E84:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089E5EB8;
      }
      goto L_089E5E8C;
    }
L_089E5E8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(100));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E5C28;
L_089E5EA8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E5C28;
L_089E5EB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(23432)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089E5FEC;
    }
    goto L_089E5EC4;
L_089E5EC4:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23708));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E5ED8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4868));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5ED8u) goto L_089E5ED8;
    return;
L_089E5ED8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(512));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8248), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8264), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1576));
    aot_gpr[31] = (0x089E5F00u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089E5F00u) goto L_089E5F00;
    return;
L_089E5F00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(10360));
    aot_gpr[31] = (0x089E5F18u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0479_entry, 479u, 184u, 0x089E3DB0u>(ctx, &aot_mem) && ctx.pc == 0x089E5F18u) goto L_089E5F18;
    return;
L_089E5F18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E5F38;
      }
      goto L_089E5F20;
    }
L_089E5F20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E5C28;
L_089E5F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089E5F4Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 15u, 0x089E90D8u>(ctx, &aot_mem) && ctx.pc == 0x089E5F4Cu) goto L_089E5F4C;
    return;
L_089E5F4C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E5F20;
      }
      goto L_089E5F54;
    }
L_089E5F54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0482_entry, 482u, 2u, 0x089E6010u>(ctx, &aot_mem); return;
      }
      goto L_089E5F64;
    }
L_089E5F64:
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[31] = (0x089E5F8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x089E5F8Cu) goto L_089E5F8C;
    return;
L_089E5F8C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089E5FB8;
      }
      goto L_089E5F94;
    }
L_089E5F94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x089E5FA0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0485_entry, 485u, 7u, 0x089E907Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5FA0u) goto L_089E5FA0;
    return;
L_089E5FA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089E5C28;
L_089E5FB8:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089E5FC8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 108u, 0x0898F6C8u>(ctx, &aot_mem) && ctx.pc == 0x089E5FC8u) goto L_089E5FC8;
    return;
L_089E5FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(10360));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16752));
    aot_gpr[7] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089E5FE8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5FE8u) goto L_089E5FE8;
    return;
L_089E5FE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089E5FEC;
L_089E5FEC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[31] = (0x089E5FFCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089E5FFCu) goto L_089E5FFC;
    return;
L_089E5FFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.pc = 0x089E6000u; return;
}

void recomp_unit_0481(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0481_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_481(Runtime &runtime) {
    runtime.register_generated_unit(481u, 0x089E5000u, 4096u, &recomp_unit_0481, &recomp_unit_0481_entry);
    runtime.register_function(0x089E5000u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5010u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5028u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5030u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5038u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E504Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5050u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5058u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E506Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5088u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E50A0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E50B4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E50CCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E50D8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E50E8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E50ECu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E50F4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E50FCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E513Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5144u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5150u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5174u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5180u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E518Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5194u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E519Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E51E0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E51ECu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E51F0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E51F8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E521Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5234u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5248u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5250u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5258u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5268u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5294u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52A0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52A8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52B0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52B8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52C4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52C8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52D0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52E0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52E4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E52F4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5308u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E532Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5338u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E533Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5350u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5358u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5374u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E537Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E538Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5398u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E53A0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E53A8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E53B0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E53D0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E53D8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E53E8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5410u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5418u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5424u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E542Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E543Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E545Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5464u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5474u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E549Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E54A8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E54B0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E54B8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E54D0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E54F0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E54F8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5500u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5514u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5544u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E554Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5574u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5580u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5588u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5590u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E55A8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E55C8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E55D0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E55D8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E55ECu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E561Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5624u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5658u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5664u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E566Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5674u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E567Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5680u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E56A8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E56B0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E56E0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E56E8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5700u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5708u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5718u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5724u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E572Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5740u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5748u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5758u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E577Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5784u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5790u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5798u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E57A0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E57B0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E57CCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E57D8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5804u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5808u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5818u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5830u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5858u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5864u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E586Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5874u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5880u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E58A0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E58B0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E58D0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E58E8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E58F0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5904u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E592Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5934u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5968u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5974u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E597Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5984u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E598Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E599Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E59A8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E59B4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E59BCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E59C8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E59D0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E59D4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E59FCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5A04u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5A2Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5A34u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5A5Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5A60u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5A80u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5A94u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5A9Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5AACu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5AC0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5ADCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5AE4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5AF0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5AFCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B04u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B08u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B30u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B3Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B44u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B68u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B70u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B78u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B84u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5B9Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5BC4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5BCCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5BF4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C10u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C24u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C28u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C2Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C44u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C50u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C60u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C64u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C6Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5C9Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5CA8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5CBCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5CC0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5CC8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5CD4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5CECu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5CF8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D08u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D10u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D1Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D2Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D34u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D40u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D50u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D58u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D64u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D74u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D7Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D88u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5D9Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5DBCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5DC4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5DD4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5DDCu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5DECu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5DF4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E04u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E0Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E1Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E24u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E34u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E3Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E60u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E74u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E7Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E84u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5E8Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5EA8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5EB8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5EC4u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5ED8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F00u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F18u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F20u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F38u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F4Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F54u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F64u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F8Cu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5F94u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5FA0u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5FB8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5FC8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5FE8u, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5FECu, &recomp_unit_0481, "recomp_unit_0481");
    runtime.register_function(0x089E5FFCu, &recomp_unit_0481, "recomp_unit_0481");
}
} // namespace psprecomp
