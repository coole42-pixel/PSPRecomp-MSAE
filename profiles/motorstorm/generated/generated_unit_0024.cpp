#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0024[1020] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 36, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 42, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 52, 53, 0,
    0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0,
    0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 103, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 105, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 111, 112, 0, 113, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0,
    121, 0, 122, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 131, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 149, 0, 150, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 156, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 170, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0,
    186, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 201, 0, 0, 0, 202, 0, 0, 0, 203,
    0, 204, 0, 205, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 220, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 225, 226,
};
void recomp_unit_0024_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0881C004u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0024[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0881C004;
    case 2u: goto L_0881C020;
    case 3u: goto L_0881C03C;
    case 4u: goto L_0881C058;
    case 5u: goto L_0881C070;
    case 6u: goto L_0881C07C;
    case 7u: goto L_0881C0A0;
    case 8u: goto L_0881C0A4;
    case 9u: goto L_0881C0C8;
    case 10u: goto L_0881C0E8;
    case 11u: goto L_0881C104;
    case 12u: goto L_0881C10C;
    case 13u: goto L_0881C11C;
    case 14u: goto L_0881C130;
    case 15u: goto L_0881C134;
    case 16u: goto L_0881C13C;
    case 17u: goto L_0881C158;
    case 18u: goto L_0881C17C;
    case 19u: goto L_0881C194;
    case 20u: goto L_0881C19C;
    case 21u: goto L_0881C1B0;
    case 22u: goto L_0881C1C0;
    case 23u: goto L_0881C1D0;
    case 24u: goto L_0881C1D8;
    case 25u: goto L_0881C1F0;
    case 26u: goto L_0881C1F8;
    case 27u: goto L_0881C21C;
    case 28u: goto L_0881C224;
    case 29u: goto L_0881C23C;
    case 30u: goto L_0881C240;
    case 31u: goto L_0881C270;
    case 32u: goto L_0881C27C;
    case 33u: goto L_0881C2A4;
    case 34u: goto L_0881C2D8;
    case 35u: goto L_0881C2F0;
    case 36u: goto L_0881C2F4;
    case 37u: goto L_0881C2FC;
    case 38u: goto L_0881C31C;
    case 39u: goto L_0881C324;
    case 40u: goto L_0881C344;
    case 41u: goto L_0881C36C;
    case 42u: goto L_0881C388;
    case 43u: goto L_0881C390;
    case 44u: goto L_0881C398;
    case 45u: goto L_0881C3A8;
    case 46u: goto L_0881C3BC;
    case 47u: goto L_0881C3C0;
    case 48u: goto L_0881C3CC;
    case 49u: goto L_0881C3DC;
    case 50u: goto L_0881C3E8;
    case 51u: goto L_0881C3F0;
    case 52u: goto L_0881C3F8;
    case 53u: goto L_0881C3FC;
    case 54u: goto L_0881C408;
    case 55u: goto L_0881C420;
    case 56u: goto L_0881C428;
    case 57u: goto L_0881C448;
    case 58u: goto L_0881C450;
    case 59u: goto L_0881C46C;
    case 60u: goto L_0881C474;
    case 61u: goto L_0881C498;
    case 62u: goto L_0881C4A8;
    case 63u: goto L_0881C4AC;
    case 64u: goto L_0881C4B4;
    case 65u: goto L_0881C4CC;
    case 66u: goto L_0881C4D4;
    case 67u: goto L_0881C4F4;
    case 68u: goto L_0881C4FC;
    case 69u: goto L_0881C518;
    case 70u: goto L_0881C520;
    case 71u: goto L_0881C528;
    case 72u: goto L_0881C538;
    case 73u: goto L_0881C53C;
    case 74u: goto L_0881C544;
    case 75u: goto L_0881C560;
    case 76u: goto L_0881C57C;
    case 77u: goto L_0881C594;
    case 78u: goto L_0881C59C;
    case 79u: goto L_0881C5C0;
    case 80u: goto L_0881C5C4;
    case 81u: goto L_0881C5E8;
    case 82u: goto L_0881C604;
    case 83u: goto L_0881C60C;
    case 84u: goto L_0881C61C;
    case 85u: goto L_0881C630;
    case 86u: goto L_0881C634;
    case 87u: goto L_0881C63C;
    case 88u: goto L_0881C658;
    case 89u: goto L_0881C674;
    case 90u: goto L_0881C690;
    case 91u: goto L_0881C6AC;
    case 92u: goto L_0881C6CC;
    case 93u: goto L_0881C6D8;
    case 94u: goto L_0881C6F4;
    case 95u: goto L_0881C710;
    case 96u: goto L_0881C72C;
    case 97u: goto L_0881C744;
    case 98u: goto L_0881C748;
    case 99u: goto L_0881C758;
    case 100u: goto L_0881C768;
    case 101u: goto L_0881C770;
    case 102u: goto L_0881C778;
    case 103u: goto L_0881C77C;
    case 104u: goto L_0881C784;
    case 105u: goto L_0881C7A4;
    case 106u: goto L_0881C7A8;
    case 107u: goto L_0881C7B8;
    case 108u: goto L_0881C7C4;
    case 109u: goto L_0881C7D4;
    case 110u: goto L_0881C7DC;
    case 111u: goto L_0881C7E4;
    case 112u: goto L_0881C7E8;
    case 113u: goto L_0881C7F0;
    case 114u: goto L_0881C80C;
    case 115u: goto L_0881C828;
    case 116u: goto L_0881C840;
    case 117u: goto L_0881C858;
    case 118u: goto L_0881C85C;
    case 119u: goto L_0881C86C;
    case 120u: goto L_0881C87C;
    case 121u: goto L_0881C884;
    case 122u: goto L_0881C88C;
    case 123u: goto L_0881C890;
    case 124u: goto L_0881C898;
    case 125u: goto L_0881C8C0;
    case 126u: goto L_0881C8C8;
    case 127u: goto L_0881C8D4;
    case 128u: goto L_0881C8E4;
    case 129u: goto L_0881C8EC;
    case 130u: goto L_0881C8F4;
    case 131u: goto L_0881C8F8;
    case 132u: goto L_0881C904;
    case 133u: goto L_0881C920;
    case 134u: goto L_0881C93C;
    case 135u: goto L_0881C958;
    case 136u: goto L_0881C974;
    case 137u: goto L_0881C990;
    case 138u: goto L_0881C9AC;
    case 139u: goto L_0881C9C8;
    case 140u: goto L_0881C9E8;
    case 141u: goto L_0881C9F4;
    case 142u: goto L_0881CA10;
    case 143u: goto L_0881CA28;
    case 144u: goto L_0881CA2C;
    case 145u: goto L_0881CA3C;
    case 146u: goto L_0881CA4C;
    case 147u: goto L_0881CA54;
    case 148u: goto L_0881CA5C;
    case 149u: goto L_0881CA60;
    case 150u: goto L_0881CA68;
    case 151u: goto L_0881CA84;
    case 152u: goto L_0881CAA0;
    case 153u: goto L_0881CABC;
    case 154u: goto L_0881CAD8;
    case 155u: goto L_0881CAF4;
    case 156u: goto L_0881CB0C;
    case 157u: goto L_0881CB10;
    case 158u: goto L_0881CB20;
    case 159u: goto L_0881CB30;
    case 160u: goto L_0881CB38;
    case 161u: goto L_0881CB40;
    case 162u: goto L_0881CB44;
    case 163u: goto L_0881CB4C;
    case 164u: goto L_0881CB70;
    case 165u: goto L_0881CB9C;
    case 166u: goto L_0881CBB8;
    case 167u: goto L_0881CBD4;
    case 168u: goto L_0881CBF0;
    case 169u: goto L_0881CC0C;
    case 170u: goto L_0881CC24;
    case 171u: goto L_0881CC28;
    case 172u: goto L_0881CC38;
    case 173u: goto L_0881CC48;
    case 174u: goto L_0881CC50;
    case 175u: goto L_0881CC58;
    case 176u: goto L_0881CC5C;
    case 177u: goto L_0881CC64;
    case 178u: goto L_0881CC80;
    case 179u: goto L_0881CC9C;
    case 180u: goto L_0881CCB8;
    case 181u: goto L_0881CCD0;
    case 182u: goto L_0881CCD4;
    case 183u: goto L_0881CCE4;
    case 184u: goto L_0881CCF4;
    case 185u: goto L_0881CCFC;
    case 186u: goto L_0881CD04;
    case 187u: goto L_0881CD08;
    case 188u: goto L_0881CD10;
    case 189u: goto L_0881CD2C;
    case 190u: goto L_0881CD48;
    case 191u: goto L_0881CD64;
    case 192u: goto L_0881CD80;
    case 193u: goto L_0881CD9C;
    case 194u: goto L_0881CDB8;
    case 195u: goto L_0881CDD4;
    case 196u: goto L_0881CDF0;
    case 197u: goto L_0881CE0C;
    case 198u: goto L_0881CE28;
    case 199u: goto L_0881CE44;
    case 200u: goto L_0881CE5C;
    case 201u: goto L_0881CE60;
    case 202u: goto L_0881CE70;
    case 203u: goto L_0881CE80;
    case 204u: goto L_0881CE88;
    case 205u: goto L_0881CE90;
    case 206u: goto L_0881CE94;
    case 207u: goto L_0881CE9C;
    case 208u: goto L_0881CEB8;
    case 209u: goto L_0881CED4;
    case 210u: goto L_0881CEF0;
    case 211u: goto L_0881CF10;
    case 212u: goto L_0881CF28;
    case 213u: goto L_0881CF38;
    case 214u: goto L_0881CF3C;
    case 215u: goto L_0881CF4C;
    case 216u: goto L_0881CF60;
    case 217u: goto L_0881CF80;
    case 218u: goto L_0881CFA8;
    case 219u: goto L_0881CFB0;
    case 220u: goto L_0881CFB4;
    case 221u: goto L_0881CFBC;
    case 222u: goto L_0881CFC8;
    case 223u: goto L_0881CFD8;
    case 224u: goto L_0881CFE8;
    case 225u: goto L_0881CFEC;
    case 226u: goto L_0881CFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0881C004:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C020:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C03C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C058:
    aot_gpr[10] = (2218u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[11] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[11] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881C130;
      }
      goto L_0881C070;
    }
L_0881C070:
    aot_gpr[5] = (0u | 2u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5936));
    aot_gpr[6] = (aot_gpr[11] << 2u);
    goto L_0881C07C;
L_0881C07C:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C11C;
      }
      goto L_0881C0A0;
    }
L_0881C0A0:
    aot_gpr[6] = (aot_gpr[9] & 255u);
    goto L_0881C0A4;
L_0881C0A4:
    aot_gpr[3] = (aot_gpr[6] & 255u);
    aot_gpr[12] = (aot_gpr[3] << 6u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[12] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_0881C0E8;
      }
      goto L_0881C0C8;
    }
L_0881C0C8:
    aot_gpr[3] = (aot_gpr[6] << 6u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[6] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881C10C;
      }
      goto L_0881C0E8;
    }
L_0881C0E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[9] & 255u);
      if (branch_taken) {
          goto L_0881C0A4;
      }
      goto L_0881C104;
    }
L_0881C104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C11C;
      }
      goto L_0881C10C;
    }
L_0881C10C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_0881C134;
      }
      goto L_0881C11C;
    }
L_0881C11C:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[6] = (aot_gpr[11] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[11] << 2u);
      if (branch_taken) {
          goto L_0881C07C;
      }
      goto L_0881C130;
    }
L_0881C130:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881C134;
L_0881C134:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C13C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6200));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C158:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5936));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C17C:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881C1D0;
      }
      goto L_0881C194;
    }
L_0881C194:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5936));
    goto L_0881C19C;
L_0881C19C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(10)));
    aot_gpr[9] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881C1C0;
      }
      goto L_0881C1B0;
    }
L_0881C1B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    goto L_0881C1C0;
L_0881C1C0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C19C;
      }
      goto L_0881C1D0;
    }
L_0881C1D0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C1D8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881C21C;
      }
      goto L_0881C1F0;
    }
L_0881C1F0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5936));
    goto L_0881C1F8;
L_0881C1F8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] << 24u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C1F8;
      }
      goto L_0881C21C;
    }
L_0881C21C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C224:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0881C2F0;
      }
      goto L_0881C23C;
    }
L_0881C23C:
    aot_gpr[6] = (2218u << 16u);
    goto L_0881C240;
L_0881C240:
    aot_gpr[5] = (aot_gpr[7] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5936));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
      if (branch_taken) {
          goto L_0881C27C;
      }
      goto L_0881C270;
    }
L_0881C270:
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
        goto L_0881C2A4;
    }
    goto L_0881C27C;
L_0881C27C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[7] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5936));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
      if (branch_taken) {
          goto L_0881C2D8;
      }
      goto L_0881C2A4;
    }
L_0881C2A4:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[7] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5936));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0881C2F4;
      }
      goto L_0881C2D8;
    }
L_0881C2D8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881C240;
      }
      goto L_0881C2F0;
    }
L_0881C2F0:
    aot_gpr[2] = (0u | 0u);
    goto L_0881C2F4;
L_0881C2F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C2FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-5944)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881C3A8;
      }
      goto L_0881C31C;
    }
L_0881C31C:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-5936));
    goto L_0881C324;
L_0881C324:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (aot_gpr[10] << 24u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 24u));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C398;
      }
      goto L_0881C344;
    }
L_0881C344:
    aot_gpr[10] = (aot_gpr[8] & 255u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[3] = (aot_gpr[10] << 6u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[10] << 3u);
    aot_gpr[10] = (aot_gpr[3] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_0881C390;
      }
      goto L_0881C36C;
    }
L_0881C36C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] << 24u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 24u));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881C344;
      }
      goto L_0881C388;
    }
L_0881C388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C398;
      }
      goto L_0881C390;
    }
L_0881C390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C3C0;
      }
      goto L_0881C398;
    }
L_0881C398:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C324;
      }
      goto L_0881C3A8;
    }
L_0881C3A8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0881C3BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15060));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0881C3BCu) goto L_0881C3BC;
    return;
L_0881C3BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881C3C0;
L_0881C3C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C3CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881C3DCu);
    // nop
    goto L_0881C2FC;
L_0881C3DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0881C3F8;
      }
      goto L_0881C3E8;
    }
L_0881C3E8:
    aot_gpr[31] = (0x0881C3F0u);
    // nop
    goto L_0881C224;
L_0881C3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C3FC;
      }
      goto L_0881C3F8;
    }
L_0881C3F8:
    aot_gpr[2] = (0u | 0u);
    goto L_0881C3FC;
L_0881C3FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C408:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0881C4A8;
      }
      goto L_0881C420;
    }
L_0881C420:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5936));
    goto L_0881C428;
L_0881C428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (aot_gpr[11] << 24u);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 24u));
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C498;
      }
      goto L_0881C448;
    }
L_0881C448:
    { const bool branch_taken = aot_gpr[10] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C474;
      }
      goto L_0881C450;
    }
L_0881C450:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] << 24u);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 24u));
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881C448;
      }
      goto L_0881C46C;
    }
L_0881C46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C498;
      }
      goto L_0881C474;
    }
L_0881C474:
    aot_gpr[4] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0881C4AC;
      }
      goto L_0881C498;
    }
L_0881C498:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C428;
      }
      goto L_0881C4A8;
    }
L_0881C4A8:
    aot_gpr[2] = (0u | 0u);
    goto L_0881C4AC;
L_0881C4AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C4B4:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0881C538;
      }
      goto L_0881C4CC;
    }
L_0881C4CC:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5936));
    goto L_0881C4D4;
L_0881C4D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (aot_gpr[11] << 24u);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 24u));
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C528;
      }
      goto L_0881C4F4;
    }
L_0881C4F4:
    { const bool branch_taken = aot_gpr[10] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C520;
      }
      goto L_0881C4FC;
    }
L_0881C4FC:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] << 24u);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 24u));
    aot_gpr[11] = (aot_gpr[7] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881C4F4;
      }
      goto L_0881C518;
    }
L_0881C518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C528;
      }
      goto L_0881C520;
    }
L_0881C520:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0881C53C;
      }
      goto L_0881C528;
    }
L_0881C528:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C4D4;
      }
      goto L_0881C538;
    }
L_0881C538:
    aot_gpr[2] = (0u | 0u);
    goto L_0881C53C;
L_0881C53C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C544:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5936));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(10)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C560:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5936));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C57C:
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-5944)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881C630;
      }
      goto L_0881C594;
    }
L_0881C594:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5936));
    aot_gpr[5] = (aot_gpr[9] << 2u);
    goto L_0881C59C;
L_0881C59C:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (aot_gpr[10] << 24u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 24u));
    aot_gpr[10] = (aot_gpr[7] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C61C;
      }
      goto L_0881C5C0;
    }
L_0881C5C0:
    aot_gpr[10] = (aot_gpr[7] & 255u);
    goto L_0881C5C4;
L_0881C5C4:
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[2] = (aot_gpr[10] << 6u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[10] << 3u);
    aot_gpr[10] = (aot_gpr[2] + aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_0881C60C;
      }
      goto L_0881C5E8;
    }
L_0881C5E8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] << 24u);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 24u));
    aot_gpr[10] = (aot_gpr[7] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[10] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_0881C5C4;
      }
      goto L_0881C604;
    }
L_0881C604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C61C;
      }
      goto L_0881C60C;
    }
L_0881C60C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_0881C634;
      }
      goto L_0881C61C;
    }
L_0881C61C:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] & 255u);
    aot_gpr[5] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[9] << 2u);
      if (branch_taken) {
          goto L_0881C59C;
      }
      goto L_0881C630;
    }
L_0881C630:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881C634;
L_0881C634:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C63C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C658:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C674:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C690:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C6AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881C6CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 53u, 0x0881D330u>(ctx, &aot_mem) && ctx.pc == 0x0881C6CCu) goto L_0881C6CC;
    return;
L_0881C6CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C6D8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C6F4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C710:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(51)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C72C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881C778;
      }
      goto L_0881C744;
    }
L_0881C744:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    goto L_0881C748;
L_0881C748:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C770;
      }
      goto L_0881C758;
    }
L_0881C758:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C748;
      }
      goto L_0881C768;
    }
L_0881C768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C778;
      }
      goto L_0881C770;
    }
L_0881C770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C77C;
      }
      goto L_0881C778;
    }
L_0881C778:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881C77C;
L_0881C77C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C784:
    aot_gpr[6] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-5680)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881C7E4;
      }
      goto L_0881C7A4;
    }
L_0881C7A4:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5672));
    goto L_0881C7A8;
L_0881C7A8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881C7C4;
      }
      goto L_0881C7B8;
    }
L_0881C7B8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881C7DC;
      }
      goto L_0881C7C4;
    }
L_0881C7C4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C7A8;
      }
      goto L_0881C7D4;
    }
L_0881C7D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7E4;
      }
      goto L_0881C7DC;
    }
L_0881C7DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7E8;
      }
      goto L_0881C7E4;
    }
L_0881C7E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881C7E8;
L_0881C7E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C7F0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5408));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C80C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5408));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C828:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5408));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C840:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5416)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881C88C;
      }
      goto L_0881C858;
    }
L_0881C858:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5408));
    goto L_0881C85C;
L_0881C85C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C884;
      }
      goto L_0881C86C;
    }
L_0881C86C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C85C;
      }
      goto L_0881C87C;
    }
L_0881C87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C88C;
      }
      goto L_0881C884;
    }
L_0881C884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C890;
      }
      goto L_0881C88C;
    }
L_0881C88C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881C890;
L_0881C890:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C898:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(3504)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(3508));
      if (branch_taken) {
          goto L_0881C8F4;
      }
      goto L_0881C8C0;
    }
L_0881C8C0:
    aot_gpr[31] = (0x0881C8C8u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_0881C7F0;
L_0881C8C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881C8EC;
      }
      goto L_0881C8D4;
    }
L_0881C8D4:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C8C0;
      }
      goto L_0881C8E4;
    }
L_0881C8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C8F4;
      }
      goto L_0881C8EC;
    }
L_0881C8EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881C8F8;
      }
      goto L_0881C8F4;
    }
L_0881C8F4:
    aot_gpr[2] = (0u | 1u);
    goto L_0881C8F8;
L_0881C8F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C904:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C920:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C93C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C958:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C974:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C990:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C9AC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C9C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881C9E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0881CF4C;
L_0881C9E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C9F4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CA10:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881CA5C;
      }
      goto L_0881CA28;
    }
L_0881CA28:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5144));
    goto L_0881CA2C;
L_0881CA2C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CA54;
      }
      goto L_0881CA3C;
    }
L_0881CA3C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881CA2C;
      }
      goto L_0881CA4C;
    }
L_0881CA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CA5C;
      }
      goto L_0881CA54;
    }
L_0881CA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CA60;
      }
      goto L_0881CA5C;
    }
L_0881CA5C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881CA60;
L_0881CA60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CA68:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4880));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CA84:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4880));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CAA0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4880));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CABC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4880));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CAD8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4880));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CAF4:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881CB40;
      }
      goto L_0881CB0C;
    }
L_0881CB0C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4880));
    goto L_0881CB10;
L_0881CB10:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CB38;
      }
      goto L_0881CB20;
    }
L_0881CB20:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881CB10;
      }
      goto L_0881CB30;
    }
L_0881CB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CB40;
      }
      goto L_0881CB38;
    }
L_0881CB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CB44;
      }
      goto L_0881CB40;
    }
L_0881CB40:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881CB44;
L_0881CB44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CB4C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4880));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CB70:
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-4880));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CB9C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4616));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CBB8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4616));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CBD4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4616));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(52));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CBF0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4616));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CC0C:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4624)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881CC58;
      }
      goto L_0881CC24;
    }
L_0881CC24:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4616));
    goto L_0881CC28;
L_0881CC28:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CC50;
      }
      goto L_0881CC38;
    }
L_0881CC38:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881CC28;
      }
      goto L_0881CC48;
    }
L_0881CC48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CC58;
      }
      goto L_0881CC50;
    }
L_0881CC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CC5C;
      }
      goto L_0881CC58;
    }
L_0881CC58:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881CC5C;
L_0881CC5C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CC64:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4616));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CC80:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4616));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CC9C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4616));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CCB8:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4360)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881CD04;
      }
      goto L_0881CCD0;
    }
L_0881CCD0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4352));
    goto L_0881CCD4;
L_0881CCD4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CCFC;
      }
      goto L_0881CCE4;
    }
L_0881CCE4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881CCD4;
      }
      goto L_0881CCF4;
    }
L_0881CCF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CD04;
      }
      goto L_0881CCFC;
    }
L_0881CCFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CD08;
      }
      goto L_0881CD04;
    }
L_0881CD04:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881CD08;
L_0881CD08:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CD10:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4352));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CD2C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4352));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CD48:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4352));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CD64:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4352));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CD80:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4352));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CD9C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CDB8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(36));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CDD4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CDF0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CE0C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CE28:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CE44:
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-4288)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881CE90;
      }
      goto L_0881CE5C;
    }
L_0881CE5C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    goto L_0881CE60;
L_0881CE60:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881CE88;
      }
      goto L_0881CE70;
    }
L_0881CE70:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881CE60;
      }
      goto L_0881CE80;
    }
L_0881CE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CE90;
      }
      goto L_0881CE88;
    }
L_0881CE88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CE94;
      }
      goto L_0881CE90;
    }
L_0881CE90:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0881CE94;
L_0881CE94:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CE9C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(100));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CEB8:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(164));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CED4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4280));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(196));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CEF0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22472), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CF10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0881CF3C;
      }
      goto L_0881CF28;
    }
L_0881CF28:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0881CF38u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 75u, 0x08A4B424u>(ctx, &aot_mem) && ctx.pc == 0x0881CF38u) goto L_0881CF38;
    return;
L_0881CF38:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_0881CF3C;
L_0881CF3C:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CF4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CF60:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22480), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CF80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881CFB4;
      }
      goto L_0881CFA8;
    }
L_0881CFA8:
    aot_gpr[31] = (0x0881CFB0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 76u, 0x08A4B42Cu>(ctx, &aot_mem) && ctx.pc == 0x0881CFB0u) goto L_0881CFB0;
    return;
L_0881CFB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_0881CFB4;
L_0881CFB4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881CFF0;
      }
      goto L_0881CFBC;
    }
L_0881CFBC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881CFC8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x0881CFC8u) goto L_0881CFC8;
    return;
L_0881CFC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0881CFEC;
      }
      goto L_0881CFD8;
    }
L_0881CFD8:
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881CFE8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x0881CFE8u) goto L_0881CFE8;
    return;
L_0881CFE8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0881CFEC;
L_0881CFEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    goto L_0881CFF0;
L_0881CFF0:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x0881D000u; return;
}

void recomp_unit_0024(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0024_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_24(Runtime &runtime) {
    runtime.register_generated_unit(24u, 0x0881C000u, 4096u, &recomp_unit_0024, &recomp_unit_0024_entry);
    runtime.register_function(0x0881C004u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C020u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C03Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C058u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C070u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C07Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C0A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C0A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C0C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C0E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C104u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C10Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C11Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C130u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C134u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C13Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C158u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C17Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C194u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C19Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C1B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C1C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C1D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C1D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C1F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C1F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C21Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C224u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C23Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C240u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C270u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C27Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C2A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C2D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C2F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C2F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C2FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C31Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C324u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C344u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C36Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C388u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C390u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C398u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C3FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C408u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C420u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C428u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C448u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C450u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C46Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C474u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C498u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C4A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C4ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C4B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C4CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C4D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C4F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C4FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C518u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C520u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C528u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C538u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C53Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C544u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C560u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C57Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C594u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C59Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C5C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C5C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C5E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C604u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C60Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C61Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C630u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C634u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C63Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C658u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C674u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C690u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C6ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C6CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C6D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C6F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C710u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C72Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C744u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C748u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C758u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C768u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C770u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C778u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C77Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C784u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C7F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C80Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C828u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C840u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C858u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C85Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C86Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C87Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C884u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C88Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C890u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C898u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C8C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C8C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C8D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C8E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C8ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C8F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C8F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C904u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C920u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C93Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C958u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C974u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C990u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C9ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C9C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C9E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881C9F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA2Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA5Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CA84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CAA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CABCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CAD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CAF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CB9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CBB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CBD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CBF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC24u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC5Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CC9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CCB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CCD0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CCD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CCE4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CCF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CCFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CD04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CD08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CD10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CD2Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CD48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CD64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CD80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CD9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CDB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CDD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CDF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE5Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CE9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CEB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CED4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CEF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CF10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CF28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CF38u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CF3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CF4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CF60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CF80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0881CFF0u, &recomp_unit_0024, "recomp_unit_0024");
}
} // namespace psprecomp
