#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0226[1024] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8,
    0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15,
    0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0,
    0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 36,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0,
    0, 0, 0, 56, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66,
    0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 72, 73, 0, 74, 0, 0, 75, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 81, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0,
    0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 115, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    0, 122, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 138,
    0, 0, 0, 139, 0, 0, 0, 140, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146,
    147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169,
    0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0,
    0, 184, 0, 0, 0, 185, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 195, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200,
};
void recomp_unit_0226_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088E6000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0226[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E6000;
    case 2u: goto L_088E6010;
    case 3u: goto L_088E6024;
    case 4u: goto L_088E6028;
    case 5u: goto L_088E6030;
    case 6u: goto L_088E6050;
    case 7u: goto L_088E606C;
    case 8u: goto L_088E607C;
    case 9u: goto L_088E6094;
    case 10u: goto L_088E60A0;
    case 11u: goto L_088E60AC;
    case 12u: goto L_088E60B4;
    case 13u: goto L_088E60D8;
    case 14u: goto L_088E60EC;
    case 15u: goto L_088E60FC;
    case 16u: goto L_088E6104;
    case 17u: goto L_088E6118;
    case 18u: goto L_088E6134;
    case 19u: goto L_088E613C;
    case 20u: goto L_088E6148;
    case 21u: goto L_088E61C4;
    case 22u: goto L_088E61CC;
    case 23u: goto L_088E61E4;
    case 24u: goto L_088E61EC;
    case 25u: goto L_088E61F4;
    case 26u: goto L_088E6204;
    case 27u: goto L_088E621C;
    case 28u: goto L_088E6224;
    case 29u: goto L_088E625C;
    case 30u: goto L_088E6290;
    case 31u: goto L_088E62A8;
    case 32u: goto L_088E62B4;
    case 33u: goto L_088E62C0;
    case 34u: goto L_088E62CC;
    case 35u: goto L_088E62F8;
    case 36u: goto L_088E62FC;
    case 37u: goto L_088E6308;
    case 38u: goto L_088E6324;
    case 39u: goto L_088E6328;
    case 40u: goto L_088E6330;
    case 41u: goto L_088E637C;
    case 42u: goto L_088E638C;
    case 43u: goto L_088E6398;
    case 44u: goto L_088E63D4;
    case 45u: goto L_088E63E4;
    case 46u: goto L_088E63F0;
    case 47u: goto L_088E6430;
    case 48u: goto L_088E643C;
    case 49u: goto L_088E6448;
    case 50u: goto L_088E6454;
    case 51u: goto L_088E6490;
    case 52u: goto L_088E649C;
    case 53u: goto L_088E64BC;
    case 54u: goto L_088E64E8;
    case 55u: goto L_088E64F0;
    case 56u: goto L_088E650C;
    case 57u: goto L_088E6510;
    case 58u: goto L_088E6518;
    case 59u: goto L_088E6534;
    case 60u: goto L_088E6550;
    case 61u: goto L_088E6598;
    case 62u: goto L_088E65A0;
    case 63u: goto L_088E65C0;
    case 64u: goto L_088E65E0;
    case 65u: goto L_088E65F0;
    case 66u: goto L_088E65FC;
    case 67u: goto L_088E6608;
    case 68u: goto L_088E661C;
    case 69u: goto L_088E6634;
    case 70u: goto L_088E6644;
    case 71u: goto L_088E664C;
    case 72u: goto L_088E6658;
    case 73u: goto L_088E665C;
    case 74u: goto L_088E6664;
    case 75u: goto L_088E6670;
    case 76u: goto L_088E6688;
    case 77u: goto L_088E66A0;
    case 78u: goto L_088E66B0;
    case 79u: goto L_088E66B8;
    case 80u: goto L_088E66C8;
    case 81u: goto L_088E66CC;
    case 82u: goto L_088E66D4;
    case 83u: goto L_088E66F0;
    case 84u: goto L_088E66F8;
    case 85u: goto L_088E6714;
    case 86u: goto L_088E671C;
    case 87u: goto L_088E6734;
    case 88u: goto L_088E6764;
    case 89u: goto L_088E67A0;
    case 90u: goto L_088E67B4;
    case 91u: goto L_088E67B8;
    case 92u: goto L_088E67D4;
    case 93u: goto L_088E67F0;
    case 94u: goto L_088E6808;
    case 95u: goto L_088E682C;
    case 96u: goto L_088E688C;
    case 97u: goto L_088E689C;
    case 98u: goto L_088E68A4;
    case 99u: goto L_088E68B8;
    case 100u: goto L_088E68C0;
    case 101u: goto L_088E6908;
    case 102u: goto L_088E690C;
    case 103u: goto L_088E6918;
    case 104u: goto L_088E6924;
    case 105u: goto L_088E6940;
    case 106u: goto L_088E6950;
    case 107u: goto L_088E695C;
    case 108u: goto L_088E6978;
    case 109u: goto L_088E6998;
    case 110u: goto L_088E69A4;
    case 111u: goto L_088E69B0;
    case 112u: goto L_088E69B4;
    case 113u: goto L_088E69D8;
    case 114u: goto L_088E69F0;
    case 115u: goto L_088E69F4;
    case 116u: goto L_088E6A00;
    case 117u: goto L_088E6A1C;
    case 118u: goto L_088E6A30;
    case 119u: goto L_088E6A40;
    case 120u: goto L_088E6A48;
    case 121u: goto L_088E6A64;
    case 122u: goto L_088E6A84;
    case 123u: goto L_088E6A90;
    case 124u: goto L_088E6A98;
    case 125u: goto L_088E6AA8;
    case 126u: goto L_088E6AC0;
    case 127u: goto L_088E6ACC;
    case 128u: goto L_088E6AD8;
    case 129u: goto L_088E6AE4;
    case 130u: goto L_088E6AF0;
    case 131u: goto L_088E6B0C;
    case 132u: goto L_088E6B18;
    case 133u: goto L_088E6B3C;
    case 134u: goto L_088E6B50;
    case 135u: goto L_088E6B58;
    case 136u: goto L_088E6B64;
    case 137u: goto L_088E6B74;
    case 138u: goto L_088E6B7C;
    case 139u: goto L_088E6B8C;
    case 140u: goto L_088E6B9C;
    case 141u: goto L_088E6BA0;
    case 142u: goto L_088E6BAC;
    case 143u: goto L_088E6BB4;
    case 144u: goto L_088E6BD0;
    case 145u: goto L_088E6BF4;
    case 146u: goto L_088E6BFC;
    case 147u: goto L_088E6C00;
    case 148u: goto L_088E6C08;
    case 149u: goto L_088E6C10;
    case 150u: goto L_088E6C1C;
    case 151u: goto L_088E6C28;
    case 152u: goto L_088E6C34;
    case 153u: goto L_088E6C70;
    case 154u: goto L_088E6C88;
    case 155u: goto L_088E6C98;
    case 156u: goto L_088E6CAC;
    case 157u: goto L_088E6CB4;
    case 158u: goto L_088E6CB8;
    case 159u: goto L_088E6CC0;
    case 160u: goto L_088E6CC8;
    case 161u: goto L_088E6CE8;
    case 162u: goto L_088E6CF8;
    case 163u: goto L_088E6D10;
    case 164u: goto L_088E6D30;
    case 165u: goto L_088E6D44;
    case 166u: goto L_088E6D50;
    case 167u: goto L_088E6D68;
    case 168u: goto L_088E6D74;
    case 169u: goto L_088E6D7C;
    case 170u: goto L_088E6D84;
    case 171u: goto L_088E6D8C;
    case 172u: goto L_088E6DD4;
    case 173u: goto L_088E6E00;
    case 174u: goto L_088E6E34;
    case 175u: goto L_088E6E3C;
    case 176u: goto L_088E6E7C;
    case 177u: goto L_088E6E88;
    case 178u: goto L_088E6EB0;
    case 179u: goto L_088E6EC4;
    case 180u: goto L_088E6ED0;
    case 181u: goto L_088E6EDC;
    case 182u: goto L_088E6EEC;
    case 183u: goto L_088E6EF4;
    case 184u: goto L_088E6F04;
    case 185u: goto L_088E6F14;
    case 186u: goto L_088E6F18;
    case 187u: goto L_088E6F28;
    case 188u: goto L_088E6F30;
    case 189u: goto L_088E6F50;
    case 190u: goto L_088E6F74;
    case 191u: goto L_088E6F88;
    case 192u: goto L_088E6F9C;
    case 193u: goto L_088E6FAC;
    case 194u: goto L_088E6FC0;
    case 195u: goto L_088E6FC4;
    case 196u: goto L_088E6FC8;
    case 197u: goto L_088E6FD0;
    case 198u: goto L_088E6FD8;
    case 199u: goto L_088E6FF0;
    case 200u: goto L_088E6FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E6000:
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(88), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E6024;
      }
      goto L_088E6010;
    }
L_088E6010:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_088E6024;
L_088E6024:
    aot_gpr[2] = (0u | 1u);
    goto L_088E6028;
L_088E6028:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6030:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(194))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6050:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E606C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11));
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_088E60B4;
      }
      goto L_088E607C;
    }
L_088E607C:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-32336)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088E60B4;
      }
      goto L_088E60A0;
    }
L_088E60A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088E60B4;
      }
      goto L_088E60AC;
    }
L_088E60AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(204)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_088E60B4;
L_088E60B4:
    aot_gpr[4] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[9] >> 8u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[9] >> 16u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E60D8:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E60FC;
      }
      goto L_088E60EC;
    }
L_088E60EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_088E60FC;
L_088E60FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6104:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E6134;
      }
      goto L_088E6118;
    }
L_088E6118:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(816)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E6118;
      }
      goto L_088E6134;
    }
L_088E6134:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E613C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(960)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (2215u << 16u);
      if (branch_taken) {
          goto L_088E61C4;
      }
      goto L_088E6148;
    }
L_088E6148:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[6] = (17116u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[6] = (17332u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[6]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] / aot_fpr[16];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[6]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<33u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(896);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(912);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(928);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(944);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 0u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 36u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 40u, 4u);
      ctx.eat_vfpu_prefixes(); }
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088E61C4;
L_088E61C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E61CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[5] = (aot_gpr[6] & 1u);
      if (branch_taken) {
          goto L_088E61EC;
      }
      goto L_088E61E4;
    }
L_088E61E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u - aot_gpr[5]);
      if (branch_taken) {
          goto L_088E61EC;
      }
      goto L_088E61EC;
    }
L_088E61EC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6224;
      }
      goto L_088E61F4;
    }
L_088E61F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(812)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6224;
      }
      goto L_088E6204;
    }
L_088E6204:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088E621Cu);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 100u, 0x08944F38u>(ctx, &aot_mem) && ctx.pc == 0x088E621Cu) goto L_088E621C;
    return;
L_088E621C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088E625C;
      }
      goto L_088E6224;
    }
L_088E6224:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<34u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<33u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 1u);
    goto L_088E625C;
L_088E625C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6290:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088E62A8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E62A8u) goto L_088E62A8;
    return;
L_088E62A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E62F8;
      }
      goto L_088E62B4;
    }
L_088E62B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[31] = (0x088E62C0u);
    aot_gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088E62C0u) goto L_088E62C0;
    return;
L_088E62C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E62F8;
      }
      goto L_088E62CC;
    }
L_088E62CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (0u | 100u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 10u);
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[5]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[2] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E62FC;
      }
      goto L_088E62F8;
    }
L_088E62F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088E62FC;
L_088E62FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6308:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-32764)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32764), aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6328;
      }
      goto L_088E6324;
    }
L_088E6324:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-32764), 0u);
    goto L_088E6328;
L_088E6328:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6330:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1912));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(424)));
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[18] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E6430;
      }
      goto L_088E637C;
    }
L_088E637C:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(432));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E63D4;
      }
      goto L_088E638C;
    }
L_088E638C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E6398u);
    aot_gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6398u) goto L_088E6398;
    return;
L_088E6398:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088E63D4;
L_088E63D4:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(768));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6490;
      }
      goto L_088E63E4;
    }
L_088E63E4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E63F0u);
    aot_gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E63F0u) goto L_088E63F0;
    return;
L_088E63F0:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[2] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_088E6490;
      }
      goto L_088E6430;
    }
L_088E6430:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6490;
      }
      goto L_088E643C;
    }
L_088E643C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088E6448u);
    aot_gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6448u) goto L_088E6448;
    return;
L_088E6448:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6490;
      }
      goto L_088E6454;
    }
L_088E6454:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[4]));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[17] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_088E6490;
L_088E6490:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E649Cu);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088E613C;
L_088E649C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E64BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_088E64F0;
      }
      goto L_088E64E8;
    }
L_088E64E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_088E6510;
      }
      goto L_088E64F0;
    }
L_088E64F0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088E650Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E650Cu) goto L_088E650C;
    return;
L_088E650C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088E6510;
L_088E6510:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] << 2u);
      if (branch_taken) {
          goto L_088E6534;
      }
      goto L_088E6518;
    }
L_088E6518:
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(836)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_088E6534;
L_088E6534:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
        goto L_088E65A0;
    }
    goto L_088E6598;
L_088E6598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6734;
      }
      goto L_088E65A0;
    }
L_088E65A0:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16768u << 16u);
      if (branch_taken) {
          goto L_088E6734;
      }
      goto L_088E65C0;
    }
L_088E65C0:
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(432));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[21] = (0u | 2u);
    aot_gpr[4] = (16928u << 16u);
    aot_gpr[19] = (aot_gpr[16] | 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_088E65E0;
L_088E65E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(816)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E6664;
      }
      goto L_088E65F0;
    }
L_088E65F0:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(11));
    aot_gpr[31] = (0x088E65FCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x088E65FCu) goto L_088E65FC;
    return;
L_088E65FC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E661C;
      }
      goto L_088E6608;
    }
L_088E6608:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E661Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_088E61CC;
L_088E661C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(152)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E664C;
      }
      goto L_088E6634;
    }
L_088E6634:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088E6644u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 209u, 0x088E5F58u>(ctx, &aot_mem) && ctx.pc == 0x088E6644u) goto L_088E6644;
    return;
L_088E6644:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E665C;
      }
      goto L_088E664C;
    }
L_088E664C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E6658u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 209u, 0x088E5F58u>(ctx, &aot_mem) && ctx.pc == 0x088E6658u) goto L_088E6658;
    return;
L_088E6658:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_088E665C;
L_088E665C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E66CC;
      }
      goto L_088E6664;
    }
L_088E6664:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E66CC;
      }
      goto L_088E6670;
    }
L_088E6670:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(144)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E6688u);
    aot_gpr[6] = (0u | 0u);
    goto L_088E64BC;
L_088E6688:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(152)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E66B8;
      }
      goto L_088E66A0;
    }
L_088E66A0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088E66B0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 209u, 0x088E5F58u>(ctx, &aot_mem) && ctx.pc == 0x088E66B0u) goto L_088E66B0;
    return;
L_088E66B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E66C8;
      }
      goto L_088E66B8;
    }
L_088E66B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088E66C8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0225_entry, 225u, 209u, 0x088E5F58u>(ctx, &aot_mem) && ctx.pc == 0x088E66C8u) goto L_088E66C8;
    return;
L_088E66C8:
    aot_gpr[4] = (0u | 1u);
    goto L_088E66CC;
L_088E66CC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E671C;
      }
      goto L_088E66D4;
    }
L_088E66D4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088E66F0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E66F0u) goto L_088E66F0;
    return;
L_088E66F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E671C;
      }
      goto L_088E66F8;
    }
L_088E66F8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(194))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[31] = (0x088E6714u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E6714u) goto L_088E6714;
    return;
L_088E6714:
    aot_gpr[31] = (0x088E671Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 135u, 0x0891F9A8u>(ctx, &aot_mem) && ctx.pc == 0x088E671Cu) goto L_088E671C;
    return;
L_088E671C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(812)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_088E65E0;
      }
      goto L_088E6734;
    }
L_088E6734:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E6764:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(196)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E6808;
      }
      goto L_088E67A0;
    }
L_088E67A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(812)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_088E6808;
      }
      goto L_088E67B4;
    }
L_088E67B4:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_088E67B8;
L_088E67B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(3020)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(112));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088E67D4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088E67D4u) goto L_088E67D4;
    return;
L_088E67D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(816)));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(816)));
    aot_gpr[31] = (0x088E67F0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(194))))));
    if (rt.invoke_chained_direct<&recomp_unit_0251_entry, 251u, 38u, 0x088FF3E0u>(ctx, &aot_mem) && ctx.pc == 0x088E67F0u) goto L_088E67F0;
    return;
L_088E67F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(812)));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E67B8;
      }
      goto L_088E6808;
    }
L_088E6808:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E682C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[8]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[10] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
      if (branch_taken) {
          goto L_088E6A98;
      }
      goto L_088E688C;
    }
L_088E688C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(192))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E68A4;
      }
      goto L_088E689C;
    }
L_088E689C:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    goto L_088E68A4;
L_088E68A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E6A84;
      }
      goto L_088E68B8;
    }
L_088E68B8:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[18] | 0u);
    goto L_088E68C0;
L_088E68C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(868)));
    aot_gpr[5] = (0u | 1000u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[7] << 3u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[30] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E690C;
      }
      goto L_088E6908;
    }
L_088E6908:
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088E690C;
L_088E690C:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x088E6918u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088E6918u) goto L_088E6918;
    return;
L_088E6918:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6A40;
      }
      goto L_088E6924;
    }
L_088E6924:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (0u | 100u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (ctx.lo);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088E6A40;
      }
      goto L_088E6940;
    }
L_088E6940:
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_088E6A40;
      }
      goto L_088E6950;
    }
L_088E6950:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E69F4;
      }
      goto L_088E695C;
    }
L_088E695C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088E69A4;
      }
      goto L_088E6978;
    }
L_088E6978:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088E6998u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088E6998u) goto L_088E6998;
    return;
L_088E6998:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
      if (branch_taken) {
          goto L_088E69B4;
      }
      goto L_088E69A4;
    }
L_088E69A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
    aot_gpr[31] = (0x088E69B0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 135u, 0x088DEA4Cu>(ctx, &aot_mem) && ctx.pc == 0x088E69B0u) goto L_088E69B0;
    return;
L_088E69B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
    goto L_088E69B4;
L_088E69B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x088E69D8u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 113u, 0x088E3930u>(ctx, &aot_mem) && ctx.pc == 0x088E69D8u) goto L_088E69D8;
    return;
L_088E69D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(868)));
    aot_gpr[31] = (0x088E69F0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 100u, 0x088DE784u>(ctx, &aot_mem) && ctx.pc == 0x088E69F0u) goto L_088E69F0;
    return;
L_088E69F0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_088E69F4;
L_088E69F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6A30;
      }
      goto L_088E6A00;
    }
L_088E6A00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = aot_gpr[20] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_088E6A30;
      }
      goto L_088E6A1C;
    }
L_088E6A1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_088E6A30;
L_088E6A30:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    goto L_088E6A40;
L_088E6A40:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E6A64;
      }
      goto L_088E6A48;
    }
L_088E6A48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E690C;
      }
      goto L_088E6A64;
    }
L_088E6A64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E68C0;
      }
      goto L_088E6A84;
    }
L_088E6A84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6A98;
      }
      goto L_088E6A90;
    }
L_088E6A90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 5u, 0x088E703Cu>(ctx, &aot_mem); return;
      }
      goto L_088E6A98;
    }
L_088E6A98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6CE8;
      }
      goto L_088E6AA8;
    }
L_088E6AA8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(192))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (0u | 1000u);
      if (branch_taken) {
          goto L_088E6CE8;
      }
      goto L_088E6AC0;
    }
L_088E6AC0:
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[18] | 0u);
    goto L_088E6ACC;
L_088E6ACC:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_088E6AD8;
L_088E6AD8:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x088E6AE4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088E6AE4u) goto L_088E6AE4;
    return;
L_088E6AE4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088E6C00;
      }
      goto L_088E6AF0;
    }
L_088E6AF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[22]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_088E6C00;
      }
      goto L_088E6B0C;
    }
L_088E6B0C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E6B58;
      }
      goto L_088E6B18;
    }
L_088E6B18:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088E6B3Cu);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088E6B3Cu) goto L_088E6B3C;
    return;
L_088E6B3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(856)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E6B50u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 3u, 0x088DE01Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6B50u) goto L_088E6B50;
    return;
L_088E6B50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088E6BFC;
      }
      goto L_088E6B58;
    }
L_088E6B58:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6BFC;
      }
      goto L_088E6B64;
    }
L_088E6B64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088E6B74u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E6B74u) goto L_088E6B74;
    return;
L_088E6B74:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
        goto L_088E6BA0;
    }
    goto L_088E6B7C;
L_088E6B7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088E6B8Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E6B8Cu) goto L_088E6B8C;
    return;
L_088E6B8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6BB4;
      }
      goto L_088E6B9C;
    }
L_088E6B9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
    goto L_088E6BA0;
L_088E6BA0:
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x088E6BACu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E6BACu) goto L_088E6BAC;
    return;
L_088E6BAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6BFC;
      }
      goto L_088E6BB4;
    }
L_088E6BB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088E6BD0u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 9u, 0x088E70BCu>(ctx, &aot_mem) && ctx.pc == 0x088E6BD0u) goto L_088E6BD0;
    return;
L_088E6BD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088E6BF4u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088E6BF4u) goto L_088E6BF4;
    return;
L_088E6BF4:
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_088E6BFC;
L_088E6BFC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088E6C00;
L_088E6C00:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E6C10;
      }
      goto L_088E6C08;
    }
L_088E6C08:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6AD8;
      }
      goto L_088E6C10;
    }
L_088E6C10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6CC8;
      }
      goto L_088E6C1C;
    }
L_088E6C1C:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_088E6C28;
L_088E6C28:
    aot_gpr[4] = (0u | 9u);
    aot_gpr[31] = (0x088E6C34u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088E6C34u) goto L_088E6C34;
    return;
L_088E6C34:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (0u | 100u);
    aot_gpr[6] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[6]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[5] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
      if (branch_taken) {
          goto L_088E6CB8;
      }
      goto L_088E6C70;
    }
L_088E6C70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6CB8;
      }
      goto L_088E6C88;
    }
L_088E6C88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6CB4;
      }
      goto L_088E6C98;
    }
L_088E6C98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(856)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088E6CACu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 3u, 0x088DE01Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6CACu) goto L_088E6CAC;
    return;
L_088E6CAC:
    aot_gpr[20] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[20]));
    goto L_088E6CB4;
L_088E6CB4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088E6CB8;
L_088E6CB8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088E6CC8;
      }
      goto L_088E6CC0;
    }
L_088E6CC0:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6C28;
      }
      goto L_088E6CC8;
    }
L_088E6CC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(192))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(6));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E6ACC;
      }
      goto L_088E6CE8;
    }
L_088E6CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FF0;
      }
      goto L_088E6CF8;
    }
L_088E6CF8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(192))))));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E6FF0;
      }
      goto L_088E6D10;
    }
L_088E6D10:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[30] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[30] << 2u);
    aot_gpr[30] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[18] + aot_gpr[20]);
    goto L_088E6D30;
L_088E6D30:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[21] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088E6D44;
L_088E6D44:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[31] = (0x088E6D50u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 182u, 0x08872D68u>(ctx, &aot_mem) && ctx.pc == 0x088E6D50u) goto L_088E6D50;
    return;
L_088E6D50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[19] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088E6E34;
      }
      goto L_088E6D68;
    }
L_088E6D68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088E6DD4;
      }
      goto L_088E6D74;
    }
L_088E6D74:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088E6E00;
      }
      goto L_088E6D7C;
    }
L_088E6D7C:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088E6E00;
      }
      goto L_088E6D84;
    }
L_088E6D84:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_088E6E00;
      }
      goto L_088E6D8C;
    }
L_088E6D8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u | 1000u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[6] = (0u | 100u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[6] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
      if (branch_taken) {
          goto L_088E6E34;
      }
      goto L_088E6DD4;
    }
L_088E6DD4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[6] << 3u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088E6E34;
      }
      goto L_088E6E00;
    }
L_088E6E00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[7] << 3u);
    aot_gpr[8] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_088E6E34;
L_088E6E34:
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
      if (branch_taken) {
          goto L_088E6FC8;
      }
      goto L_088E6E3C;
    }
L_088E6E3C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(132)));
    aot_gpr[6] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[7]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (0u | 100u);
    aot_gpr[8] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[8]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[6] = (ctx.lo);
    aot_gpr[8] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
      if (branch_taken) {
          goto L_088E6FC4;
      }
      goto L_088E6E7C;
    }
L_088E6E7C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E6ED0;
      }
      goto L_088E6E88;
    }
L_088E6E88:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088E6EB0u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088E6EB0u) goto L_088E6EB0;
    return;
L_088E6EB0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088E6EC4u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 149u, 0x088E2A54u>(ctx, &aot_mem) && ctx.pc == 0x088E6EC4u) goto L_088E6EC4;
    return;
L_088E6EC4:
    aot_gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[21]));
      if (branch_taken) {
          goto L_088E6FC0;
      }
      goto L_088E6ED0;
    }
L_088E6ED0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
      if (branch_taken) {
          goto L_088E6FC0;
      }
      goto L_088E6EDC;
    }
L_088E6EDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E6EECu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E6EECu) goto L_088E6EEC;
    return;
L_088E6EEC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
        goto L_088E6F18;
    }
    goto L_088E6EF4;
L_088E6EF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E6F04u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E6F04u) goto L_088E6F04;
    return;
L_088E6F04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E6F30;
      }
      goto L_088E6F14;
    }
L_088E6F14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    goto L_088E6F18;
L_088E6F18:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088E6F28u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 32u, 0x088E7250u>(ctx, &aot_mem) && ctx.pc == 0x088E6F28u) goto L_088E6F28;
    return;
L_088E6F28:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FC0;
      }
      goto L_088E6F30;
    }
L_088E6F30:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088E6F50u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 9u, 0x088E70BCu>(ctx, &aot_mem) && ctx.pc == 0x088E6F50u) goto L_088E6F50;
    return;
L_088E6F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(860)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(204)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x088E6F74u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 58u, 0x088E73ECu>(ctx, &aot_mem) && ctx.pc == 0x088E6F74u) goto L_088E6F74;
    return;
L_088E6F74:
    aot_gpr[21] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FC0;
      }
      goto L_088E6F88;
    }
L_088E6F88:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(192))))));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FC0;
      }
      goto L_088E6F9C;
    }
L_088E6F9C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088E6FACu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0223_entry, 223u, 21u, 0x088E316Cu>(ctx, &aot_mem) && ctx.pc == 0x088E6FACu) goto L_088E6FAC;
    return;
L_088E6FAC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(192))))));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E6F9C;
      }
      goto L_088E6FC0;
    }
L_088E6FC0:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_088E6FC4;
L_088E6FC4:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_088E6FC8;
L_088E6FC8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6FD8;
      }
      goto L_088E6FD0;
    }
L_088E6FD0:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E6D44;
      }
      goto L_088E6FD8;
    }
L_088E6FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-10));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[4]);
      if (branch_taken) {
          goto L_088E6D30;
      }
      goto L_088E6FF0;
    }
L_088E6FF0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 4u, 0x088E7038u>(ctx, &aot_mem); return;
      }
      goto L_088E6FFC;
    }
L_088E6FFC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(192))))));
    ctx.pc = 0x088E7000u; return;
}

void recomp_unit_0226(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0226_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_226(Runtime &runtime) {
    runtime.register_generated_unit(226u, 0x088E6000u, 4096u, &recomp_unit_0226, &recomp_unit_0226_entry);
    runtime.register_function(0x088E6000u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6010u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6024u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6028u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6030u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6050u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E606Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E607Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6094u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E60A0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E60ACu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E60B4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E60D8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E60ECu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E60FCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6104u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6118u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6134u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E613Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6148u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E61C4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E61CCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E61E4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E61ECu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E61F4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6204u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E621Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6224u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E625Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6290u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E62A8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E62B4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E62C0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E62CCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E62F8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E62FCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6308u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6324u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6328u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6330u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E637Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E638Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6398u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E63D4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E63E4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E63F0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6430u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E643Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6448u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6454u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6490u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E649Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E64BCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E64E8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E64F0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E650Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6510u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6518u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6534u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6550u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6598u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E65A0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E65C0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E65E0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E65F0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E65FCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6608u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E661Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6634u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6644u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E664Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6658u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E665Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6664u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6670u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6688u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E66A0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E66B0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E66B8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E66C8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E66CCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E66D4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E66F0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E66F8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6714u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E671Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6734u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6764u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E67A0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E67B4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E67B8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E67D4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E67F0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6808u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E682Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E688Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E689Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E68A4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E68B8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E68C0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6908u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E690Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6918u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6924u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6940u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6950u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E695Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6978u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6998u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E69A4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E69B0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E69B4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E69D8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E69F0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E69F4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A00u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A1Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A30u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A40u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A48u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A64u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A84u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A90u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6A98u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6AA8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6AC0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6ACCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6AD8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6AE4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6AF0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B0Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B18u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B3Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B50u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B58u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B64u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B74u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B7Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B8Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6B9Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6BA0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6BACu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6BB4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6BD0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6BF4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6BFCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C00u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C08u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C10u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C1Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C28u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C34u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C70u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C88u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6C98u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6CACu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6CB4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6CB8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6CC0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6CC8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6CE8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6CF8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D10u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D30u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D44u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D50u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D68u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D74u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D7Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D84u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6D8Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6DD4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6E00u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6E34u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6E3Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6E7Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6E88u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6EB0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6EC4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6ED0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6EDCu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6EECu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6EF4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F04u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F14u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F18u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F28u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F30u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F50u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F74u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F88u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6F9Cu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6FACu, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6FC0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6FC4u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6FC8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6FD0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6FD8u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6FF0u, &recomp_unit_0226, "recomp_unit_0226");
    runtime.register_function(0x088E6FFCu, &recomp_unit_0226, "recomp_unit_0226");
}
} // namespace psprecomp
