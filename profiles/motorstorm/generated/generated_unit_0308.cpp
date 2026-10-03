#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0308[1020] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 13, 0,
    14, 0, 15, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 26,
    0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0,
    0, 0, 45, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 77, 0, 78, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0,
    82, 83, 0, 84, 0, 0, 85, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    90, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0,
    0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0,
    118, 0, 0, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 167, 0, 0, 0, 168, 169, 0, 0, 0, 170,
};
void recomp_unit_0308_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08938000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0308[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08938000;
    case 2u: goto L_0893800C;
    case 3u: goto L_08938018;
    case 4u: goto L_0893803C;
    case 5u: goto L_0893804C;
    case 6u: goto L_08938054;
    case 7u: goto L_0893805C;
    case 8u: goto L_08938068;
    case 9u: goto L_089380C0;
    case 10u: goto L_089380D8;
    case 11u: goto L_089380E8;
    case 12u: goto L_089380F0;
    case 13u: goto L_089380F8;
    case 14u: goto L_08938100;
    case 15u: goto L_08938108;
    case 16u: goto L_08938114;
    case 17u: goto L_0893811C;
    case 18u: goto L_08938128;
    case 19u: goto L_08938134;
    case 20u: goto L_0893813C;
    case 21u: goto L_08938144;
    case 22u: goto L_0893814C;
    case 23u: goto L_08938158;
    case 24u: goto L_08938160;
    case 25u: goto L_08938170;
    case 26u: goto L_0893817C;
    case 27u: goto L_08938188;
    case 28u: goto L_08938190;
    case 29u: goto L_0893819C;
    case 30u: goto L_089381A8;
    case 31u: goto L_089381B8;
    case 32u: goto L_089381CC;
    case 33u: goto L_089381D4;
    case 34u: goto L_089381E4;
    case 35u: goto L_08938204;
    case 36u: goto L_08938224;
    case 37u: goto L_08938230;
    case 38u: goto L_08938238;
    case 39u: goto L_08938250;
    case 40u: goto L_08938258;
    case 41u: goto L_08938260;
    case 42u: goto L_08938268;
    case 43u: goto L_08938270;
    case 44u: goto L_08938278;
    case 45u: goto L_08938288;
    case 46u: goto L_0893828C;
    case 47u: goto L_089382A0;
    case 48u: goto L_089382F8;
    case 49u: goto L_08938310;
    case 50u: goto L_08938340;
    case 51u: goto L_08938344;
    case 52u: goto L_08938380;
    case 53u: goto L_08938390;
    case 54u: goto L_089383A4;
    case 55u: goto L_089383B8;
    case 56u: goto L_089383C8;
    case 57u: goto L_089383E8;
    case 58u: goto L_089383F8;
    case 59u: goto L_0893842C;
    case 60u: goto L_08938434;
    case 61u: goto L_08938444;
    case 62u: goto L_08938450;
    case 63u: goto L_0893846C;
    case 64u: goto L_08938484;
    case 65u: goto L_08938490;
    case 66u: goto L_089384A0;
    case 67u: goto L_089384BC;
    case 68u: goto L_089384C4;
    case 69u: goto L_089384CC;
    case 70u: goto L_089384E0;
    case 71u: goto L_08938504;
    case 72u: goto L_0893851C;
    case 73u: goto L_08938530;
    case 74u: goto L_08938538;
    case 75u: goto L_08938540;
    case 76u: goto L_08938548;
    case 77u: goto L_0893854C;
    case 78u: goto L_08938554;
    case 79u: goto L_08938560;
    case 80u: goto L_0893856C;
    case 81u: goto L_08938574;
    case 82u: goto L_08938580;
    case 83u: goto L_08938584;
    case 84u: goto L_0893858C;
    case 85u: goto L_08938598;
    case 86u: goto L_0893859C;
    case 87u: goto L_089385B8;
    case 88u: goto L_089385D4;
    case 89u: goto L_089385F4;
    case 90u: goto L_08938600;
    case 91u: goto L_0893860C;
    case 92u: goto L_08938620;
    case 93u: goto L_08938628;
    case 94u: goto L_0893863C;
    case 95u: goto L_08938648;
    case 96u: goto L_08938654;
    case 97u: goto L_08938668;
    case 98u: goto L_08938670;
    case 99u: goto L_08938684;
    case 100u: goto L_08938690;
    case 101u: goto L_0893869C;
    case 102u: goto L_089386BC;
    case 103u: goto L_089386D0;
    case 104u: goto L_089386F0;
    case 105u: goto L_08938708;
    case 106u: goto L_0893871C;
    case 107u: goto L_08938730;
    case 108u: goto L_0893873C;
    case 109u: goto L_08938748;
    case 110u: goto L_08938758;
    case 111u: goto L_08938764;
    case 112u: goto L_08938774;
    case 113u: goto L_08938780;
    case 114u: goto L_0893884C;
    case 115u: goto L_0893885C;
    case 116u: goto L_08938864;
    case 117u: goto L_08938874;
    case 118u: goto L_08938880;
    case 119u: goto L_08938890;
    case 120u: goto L_08938894;
    case 121u: goto L_08938954;
    case 122u: goto L_08938964;
    case 123u: goto L_08938970;
    case 124u: goto L_08938994;
    case 125u: goto L_089389A4;
    case 126u: goto L_089389B0;
    case 127u: goto L_08938A0C;
    case 128u: goto L_08938A38;
    case 129u: goto L_08938A7C;
    case 130u: goto L_08938AA0;
    case 131u: goto L_08938AC4;
    case 132u: goto L_08938AD8;
    case 133u: goto L_08938B04;
    case 134u: goto L_08938B44;
    case 135u: goto L_08938B4C;
    case 136u: goto L_08938B54;
    case 137u: goto L_08938B68;
    case 138u: goto L_08938BBC;
    case 139u: goto L_08938BE0;
    case 140u: goto L_08938BE8;
    case 141u: goto L_08938C18;
    case 142u: goto L_08938C38;
    case 143u: goto L_08938C58;
    case 144u: goto L_08938C78;
    case 145u: goto L_08938C80;
    case 146u: goto L_08938C90;
    case 147u: goto L_08938CA4;
    case 148u: goto L_08938CB0;
    case 149u: goto L_08938CC4;
    case 150u: goto L_08938D34;
    case 151u: goto L_08938DC8;
    case 152u: goto L_08938DDC;
    case 153u: goto L_08938E68;
    case 154u: goto L_08938E70;
    case 155u: goto L_08938E88;
    case 156u: goto L_08938EAC;
    case 157u: goto L_08938EB4;
    case 158u: goto L_08938EEC;
    case 159u: goto L_08938EF8;
    case 160u: goto L_08938F24;
    case 161u: goto L_08938F30;
    case 162u: goto L_08938F84;
    case 163u: goto L_08938F94;
    case 164u: goto L_08938FA0;
    case 165u: goto L_08938FB0;
    case 166u: goto L_08938FC4;
    case 167u: goto L_08938FC8;
    case 168u: goto L_08938FD8;
    case 169u: goto L_08938FDC;
    case 170u: goto L_08938FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08938000:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938018;
      }
      goto L_0893800C;
    }
L_0893800C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08938018u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 63u, 0x089378A4u>(ctx, &aot_mem) && ctx.pc == 0x08938018u) goto L_08938018;
    return;
L_08938018:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893803C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893804Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 81u, 0x089435FCu>(ctx, &aot_mem) && ctx.pc == 0x0893804Cu) goto L_0893804C;
    return;
L_0893804C:
    aot_gpr[31] = (0x08938054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 180u, 0x08942D80u>(ctx, &aot_mem) && ctx.pc == 0x08938054u) goto L_08938054;
    return;
L_08938054:
    aot_gpr[31] = (0x0893805Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0318_entry, 318u, 184u, 0x08942DD8u>(ctx, &aot_mem) && ctx.pc == 0x0893805Cu) goto L_0893805C;
    return;
L_0893805C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938068:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1712), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1716), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1720), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1724), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1728), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1732), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1736), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1740), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1744), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1748), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1752), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1768), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1772), aot_gpr[15]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1776), aot_gpr[24]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089380C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089380D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    ctx.pc = 0x08A5AC14u;
    return;
L_089380D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938288;
      }
      goto L_089380E8;
    }
L_089380E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938278;
      }
      goto L_089380F0;
    }
L_089380F0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08938268;
      }
      goto L_089380F8;
    }
L_089380F8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08938144;
      }
      goto L_08938100;
    }
L_08938100:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08938270;
      }
      goto L_08938108;
    }
L_08938108:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08938114u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08938114u) goto L_08938114;
    return;
L_08938114:
    aot_gpr[31] = (0x0893811Cu);
    aot_gpr[4] = (0u | 2u);
    ctx.pc = 0x08A5AC4Cu;
    return;
L_0893811C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893813C;
      }
      goto L_08938128;
    }
L_08938128:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08938134u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 63u, 0x089378A4u>(ctx, &aot_mem) && ctx.pc == 0x08938134u) goto L_08938134;
    return;
L_08938134:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893828C;
      }
      goto L_0893813C;
    }
L_0893813C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0893828C;
      }
      goto L_08938144;
    }
L_08938144:
    aot_gpr[31] = (0x0893814Cu);
    // nop
    ctx.pc = 0x08A5AC24u;
    return;
L_0893814C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08938190;
      }
      goto L_08938158;
    }
L_08938158:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893817C;
      }
      goto L_08938160;
    }
L_08938160:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089381A8;
      }
      goto L_08938170;
    }
L_08938170:
    aot_gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[4]);
      if (branch_taken) {
          goto L_08938260;
      }
      goto L_0893817C;
    }
L_0893817C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08938188u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 63u, 0x089378A4u>(ctx, &aot_mem) && ctx.pc == 0x08938188u) goto L_08938188;
    return;
L_08938188:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893828C;
      }
      goto L_08938190;
    }
L_08938190:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x0893819Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 76u, 0x08937920u>(ctx, &aot_mem) && ctx.pc == 0x0893819Cu) goto L_0893819C;
    return;
L_0893819C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0893828C;
      }
      goto L_089381A8;
    }
L_089381A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089381D4;
      }
      goto L_089381B8;
    }
L_089381B8:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-28696)));
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 12u);
        goto L_089381CC;
    }
    goto L_089381CC;
L_089381CC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[4]);
      if (branch_taken) {
          goto L_08938260;
      }
      goto L_089381D4;
    }
L_089381D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (0u | 11u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08938258;
      }
      goto L_089381E4;
    }
L_089381E4:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1524)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938250;
      }
      goto L_08938204;
    }
L_08938204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1524)));
    aot_gpr[5] = (aot_gpr[17] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[17] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x08938224u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x08938224u) goto L_08938224;
    return;
L_08938224:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938238;
      }
      goto L_08938230;
    }
L_08938230:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[4]);
    goto L_08938238;
L_08938238:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1524)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938204;
      }
      goto L_08938250;
    }
L_08938250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938260;
      }
      goto L_08938258;
    }
L_08938258:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[4]);
    goto L_08938260;
L_08938260:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0893828C;
      }
      goto L_08938268;
    }
L_08938268:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0893828C;
      }
      goto L_08938270;
    }
L_08938270:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0893828C;
      }
      goto L_08938278;
    }
L_08938278:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1780)));
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1780), aot_gpr[4]);
      if (branch_taken) {
          goto L_0893828C;
      }
      goto L_08938288;
    }
L_08938288:
    aot_gpr[2] = (0u | 0u);
    goto L_0893828C;
L_0893828C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089382A0:
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<3u>(aot_gpr[7]);
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
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<8u, 8u, 3u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<9u, 9u, 3u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<9u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<6u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<10u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<10u, 10u, 3u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<10u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<10u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089382F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2064));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(2048), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08938444;
      }
      goto L_08938310;
    }
L_08938310:
    aot_gpr[12] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22528));
    aot_gpr[10] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr[12] = (aot_gpr[12] << 4u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[12]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    aot_gpr[5] = (0u | 0u);
    aot_gpr[11] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08938380;
      }
      goto L_08938340;
    }
L_08938340:
    aot_gpr[11] = (aot_gpr[8] + aot_gpr[11]);
    goto L_08938344;
L_08938344:
    { const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 52u, 4u);
      ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 1u, vfpu_side); }
    ctx.execute_vfpu_vdot_ct<2u, 1u, 4u, 3u>();
    ctx.execute_vfpu_compare3(34u, 2u, 100u, 1u, 6u);
    aot_gpr[3] = (aot_gpr[10] | 0u);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_gpr[3] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<34u>());
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08938344;
      }
      goto L_08938380;
    }
L_08938380:
    aot_gpr[13] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[13] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (aot_gpr[4] + aot_gpr[12]);
      if (branch_taken) {
          goto L_08938444;
      }
      goto L_08938390;
    }
L_08938390:
    aot_gpr[3] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[12] = (aot_gpr[29] | 0u);
    aot_gpr[3] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[11] = (aot_gpr[7] + aot_gpr[11]);
    goto L_089383A4;
L_089383A4:
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[13] < aot_gpr[9] ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (aot_gpr[13] | 0u);
        goto L_089383B8;
    }
    goto L_089383B8;
L_089383B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(1024)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089383E8;
      }
      goto L_089383C8;
    }
L_089383C8:
    { const std::uint32_t vfpu_address = aot_gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[3] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[3] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[11] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(48));
    goto L_089383E8;
L_089383E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(1024)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08938434;
      }
      goto L_089383F8;
    }
L_089383F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[5]);
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    aot_gpr[4] = (aot_gpr[3] | 0u);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[31] = (0x0893842Cu);
    aot_gpr[6] = (aot_gpr[11] | 0u);
    goto L_089382A0;
L_0893842C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(48));
    goto L_08938434;
L_08938434:
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[13] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089383A4;
      }
      goto L_08938444;
    }
L_08938444:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(2048)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(2064));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938450:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089384CC;
      }
      goto L_0893846C;
    }
L_0893846C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25448));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08938484u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08938484u) goto L_08938484;
    return;
L_08938484:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089384CC;
      }
      goto L_08938490;
    }
L_08938490:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089384C4;
      }
      goto L_089384A0;
    }
L_089384A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089384BCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089384BCu) goto L_089384BC;
    return;
L_089384BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089384CC;
      }
      goto L_089384C4;
    }
L_089384C4:
    aot_gpr[31] = (0x089384CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089384CCu) goto L_089384CC;
    return;
L_089384CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089384E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08938504u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08938504u) goto L_08938504;
    return;
L_08938504:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1888));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x0893851Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 11u, 0x08945758u>(ctx, &aot_mem) && ctx.pc == 0x0893851Cu) goto L_0893851C;
    return;
L_0893851C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08938540;
      }
      goto L_08938530;
    }
L_08938530:
    aot_gpr[31] = (0x08938538u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x08938538u) goto L_08938538;
    return;
L_08938538:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893854C;
      }
      goto L_08938540;
    }
L_08938540:
    aot_gpr[31] = (0x08938548u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x08938548u) goto L_08938548;
    return;
L_08938548:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_0893854C;
L_0893854C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938584;
      }
      goto L_08938554;
    }
L_08938554:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938574;
      }
      goto L_08938560;
    }
L_08938560:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0893856Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x0893856Cu) goto L_0893856C;
    return;
L_0893856C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[2]);
      if (branch_taken) {
          goto L_08938584;
      }
      goto L_08938574;
    }
L_08938574:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08938580u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 79u, 0x08A4D668u>(ctx, &aot_mem) && ctx.pc == 0x08938580u) goto L_08938580;
    return;
L_08938580:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    goto L_08938584;
L_08938584:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_0893858C;
    }
L_0893858C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08938598u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 98u, 0x08A58690u>(ctx, &aot_mem) && ctx.pc == 0x08938598u) goto L_08938598;
    return;
L_08938598:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    goto L_0893859C;
L_0893859C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089385B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089386BC;
      }
      goto L_089385D4;
    }
L_089385D4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1888));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938684;
      }
      goto L_089385F4;
    }
L_089385F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893863C;
      }
      goto L_08938600;
    }
L_08938600:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08938628;
      }
      goto L_0893860C;
    }
L_0893860C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08938620u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08938620u) goto L_08938620;
    return;
L_08938620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893863C;
      }
      goto L_08938628;
    }
L_08938628:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29060)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0893863Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0893863Cu) goto L_0893863C;
    return;
L_0893863C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938684;
      }
      goto L_08938648;
    }
L_08938648:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08938670;
      }
      goto L_08938654;
    }
L_08938654:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08938668u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08938668u) goto L_08938668;
    return;
L_08938668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938684;
      }
      goto L_08938670;
    }
L_08938670:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29060)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08938684u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08938684u) goto L_08938684;
    return;
L_08938684:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08938690u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08938690u) goto L_08938690;
    return;
L_08938690:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089386BC;
      }
      goto L_0893869C;
    }
L_0893869C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089386BCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089386BCu) goto L_089386BC;
    return;
L_089386BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089386D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-24592));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[14] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24584), aot_gpr[31]);
    aot_gpr[31] = (0x089386F0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_089382F8;
L_089386F0:
    aot_gpr[15] = (aot_gpr[29] + static_cast<std::uint32_t>(12288));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08938708u);
    aot_gpr[7] = (aot_gpr[15] | 0u);
    goto L_089382F8;
L_08938708:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[15] | 0u);
    aot_gpr[31] = (0x0893871Cu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_089382F8;
L_0893871C:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08938730u);
    aot_gpr[7] = (aot_gpr[15] | 0u);
    goto L_089382F8;
L_08938730:
    aot_gpr[10] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938964;
      }
      goto L_0893873C;
    }
L_0893873C:
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
      if (branch_taken) {
          goto L_08938864;
      }
      goto L_08938748;
    }
L_08938748:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24576));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08938758u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 99u, 0x08A58698u>(ctx, &aot_mem) && ctx.pc == 0x08938758u) goto L_08938758;
    return;
L_08938758:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24576)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893885C;
      }
      goto L_08938764;
    }
L_08938764:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (16256u << 16u);
      if (branch_taken) {
          goto L_0893884C;
      }
      goto L_08938774;
    }
L_08938774:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[4] = (0u | 0u);
    goto L_08938780;
L_08938780:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12332)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12316)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12312)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12300)));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_fpr[16] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[8] = (aot_gpr[8] << 24u);
    aot_gpr[11] = (aot_gpr[11] << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12288)));
    aot_gpr[11] = (aot_gpr[2] & 255u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12292)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12296)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12320)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12324)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[4]);
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[11] = (aot_gpr[11] << 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[11] = (aot_gpr[2] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[18]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24576)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12304)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24576)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24576)));
      if (branch_taken) {
          goto L_08938780;
      }
      goto L_0893884C;
    }
L_0893884C:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0893885Cu);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 122u, 0x0892FCB0u>(ctx, &aot_mem) && ctx.pc == 0x0893885Cu) goto L_0893885C;
    return;
L_0893885C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938964;
      }
      goto L_08938864;
    }
L_08938864:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24580));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08938874u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 105u, 0x08A5871Cu>(ctx, &aot_mem) && ctx.pc == 0x08938874u) goto L_08938874;
    return;
L_08938874:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24580)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938964;
      }
      goto L_08938880;
    }
L_08938880:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_08938954;
      }
      goto L_08938890;
    }
L_08938890:
    aot_gpr[4] = (0u | 0u);
    goto L_08938894;
L_08938894:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12332)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12316)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12312)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12300)));
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[11] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[8] = (aot_gpr[8] << 24u);
    aot_gpr[11] = (aot_gpr[11] << 16u);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12288)));
    aot_gpr[11] = (aot_gpr[2] & 255u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12292)));
    aot_gpr[2] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12296)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12320)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12324)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[4]);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[11] = (aot_gpr[11] << 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[11] = (aot_gpr[2] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24580)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12304)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    aot_gpr[8] = (aot_gpr[6] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24580)));
      if (branch_taken) {
          goto L_08938894;
      }
      goto L_08938954;
    }
L_08938954:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08938964u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 114u, 0x0892FBCCu>(ctx, &aot_mem) && ctx.pc == 0x08938964u) goto L_08938964;
    return;
L_08938964:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24584)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(24592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938970:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-432));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[9] = (aot_gpr[5] & 1u);
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089389A4;
      }
      goto L_08938994;
    }
L_08938994:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[7]);
      if (branch_taken) {
          goto L_089389B0;
      }
      goto L_089389A4;
    }
L_089389A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[5]);
    goto L_089389B0;
L_089389B0:
    aot_gpr[5] = (14336u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (17150u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[13] = (aot_gpr[9] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[9] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (17279u << 16u);
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(24));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[25] = (aot_gpr[29] | 0u);
    aot_gpr[24] = (0u | 0u);
    aot_gpr[12] = (0u | 11u);
    aot_gpr[2] = (0u | 16u);
    aot_gpr[10] = (0u | 3u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (0u | 20u);
    aot_gpr[15] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (255u << 16u);
    aot_gpr[5] = (65280u << 16u);
    goto L_08938A0C;
L_08938A0C:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[31])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[31]);
    aot_gpr[14] = (ctx.lo);
    { const bool branch_taken = aot_gpr[31] != aot_gpr[12];
    aot_gpr[14] = (aot_gpr[16] + aot_gpr[14]);
      if (branch_taken) {
          goto L_08938A7C;
      }
      goto L_08938A38;
    }
L_08938A38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[31] = (aot_gpr[14] + aot_gpr[31]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[31] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD16(aot_gpr[31] + static_cast<std::uint32_t>(2)));
    aot_gpr[17] = (aot_gpr[17] << 16u);
    aot_gpr[16] = (aot_gpr[16] | aot_gpr[17]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD16(aot_gpr[31] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr[16]);
    ctx.set_vfpu_scalar_bits_ct<33u>(aot_gpr[31]);
    ctx.execute_vfpu_vx2i(2u, 1u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<2u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938AA0;
      }
      goto L_08938A7C;
    }
L_08938A7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (aot_gpr[14] + aot_gpr[31]);
    ctx.set_vfpu_scalar_bits_ct<0u>(PSPRECOMP_AOT_LOAD32(aot_gpr[31] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<32u>(PSPRECOMP_AOT_LOAD32(aot_gpr[31] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<64u>(PSPRECOMP_AOT_LOAD32(aot_gpr[31] + static_cast<std::uint32_t>(8)));
    goto L_08938AA0;
L_08938AA0:
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[25] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = aot_gpr[31] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938B4C;
      }
      goto L_08938AC4;
    }
L_08938AC4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[16]);
      if (branch_taken) {
          goto L_08938B04;
      }
      goto L_08938AD8;
    }
L_08938AD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[31]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[16]);
    aot_gpr[31] = (aot_gpr[14] + aot_gpr[31]);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[31] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[31] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_08938B44;
      }
      goto L_08938B04;
    }
L_08938B04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[31]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(252)));
    aot_gpr[31] = (aot_gpr[14] + aot_gpr[31]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[31] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[17]);
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD16(aot_gpr[31] + static_cast<std::uint32_t>(2)));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[31]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    { const float fs = aot_fpr[17]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    goto L_08938B44;
L_08938B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938B54;
      }
      goto L_08938B4C;
    }
L_08938B4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_08938B54;
L_08938B54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[10];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[16]);
      if (branch_taken) {
          goto L_08938BBC;
      }
      goto L_08938B68;
    }
L_08938B68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[31]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[31] = (aot_gpr[14] + aot_gpr[31]);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[31] + static_cast<std::uint32_t>(0))))));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_fpr[17] = aot_fpr[17] / aot_fpr[14];
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[31] + static_cast<std::uint32_t>(1))))));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_fpr[17] = aot_fpr[17] / aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[31] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[31] + static_cast<std::uint32_t>(2))))));
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[31]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    aot_fpr[17] = aot_fpr[17] / aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    goto L_08938BBC;
L_08938BBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[31]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(285)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[16]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[31] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08938C80;
      }
      goto L_08938BE0;
    }
L_08938BE0:
    { const bool branch_taken = aot_gpr[31] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08938C80;
      }
      goto L_08938BE8;
    }
L_08938BE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[31]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[16]);
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[31]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (aot_gpr[31] & 255u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[31]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    if (static_cast<std::int32_t>(aot_gpr[31]) < 0) {
    aot_fpr[17] = aot_fpr[17] + aot_fpr[13];
        goto L_08938C18;
    }
    goto L_08938C18;
L_08938C18:
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (aot_gpr[31] & 65280u);
    aot_gpr[31] = (aot_gpr[31] >> 8u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[31]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    if (static_cast<std::int32_t>(aot_gpr[31]) < 0) {
    aot_fpr[17] = aot_fpr[17] + aot_fpr[13];
        goto L_08938C38;
    }
    goto L_08938C38;
L_08938C38:
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (aot_gpr[31] & aot_gpr[7]);
    aot_gpr[31] = (aot_gpr[31] >> 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[31]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    if (static_cast<std::int32_t>(aot_gpr[31]) < 0) {
    aot_fpr[17] = aot_fpr[17] + aot_fpr[13];
        goto L_08938C58;
    }
    goto L_08938C58;
L_08938C58:
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (aot_gpr[14] & aot_gpr[5]);
    aot_gpr[14] = (aot_gpr[14] >> 24u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[14]);
    aot_fpr[17] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[17])));
    if (static_cast<std::int32_t>(aot_gpr[14]) < 0) {
    aot_fpr[17] = aot_fpr[17] + aot_fpr[13];
        goto L_08938C78;
    }
    goto L_08938C78;
L_08938C78:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
      if (branch_taken) {
          goto L_08938C90;
      }
      goto L_08938C80;
    }
L_08938C80:
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08938C90;
L_08938C90:
    aot_gpr[24] = (aot_gpr[24] + static_cast<std::uint32_t>(1));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(48));
    aot_gpr[14] = (aot_gpr[24] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[14] != 0u;
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08938A0C;
      }
      goto L_08938CA4;
    }
L_08938CA4:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08938CB0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_089386D0;
L_08938CB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938CC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[16] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[30]);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[30] = (aot_gpr[9] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28840)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[31]);
    aot_gpr[31] = (0x08938D34u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0311_entry, 311u, 101u, 0x0893B984u>(ctx, &aot_mem) && ctx.pc == 0x08938D34u) goto L_08938D34;
    return;
L_08938D34:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28840)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(132)));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(29)));
    aot_gpr[4] = (aot_gpr[5] ^ 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (7168u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[21] | 0u);
    aot_gpr[11] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[11]);
    aot_gpr[22] = (0u | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr[30]));
      if (branch_taken) {
          goto L_08938E68;
      }
      goto L_08938DC8;
    }
L_08938DC8:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08938DDCu);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 80u, 0x08936B44u>(ctx, &aot_mem) && ctx.pc == 0x08938DDCu) goto L_08938DDC;
    return;
L_08938DDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (4608u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[17] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (1028u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[22] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08938E68;
L_08938E68:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E88;
      }
      goto L_08938E70;
    }
L_08938E70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (21248u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08938E88;
L_08938E88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[21] | 0u);
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[18] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 2u, 0x08939010u>(ctx, &aot_mem); return;
      }
      goto L_08938EAC;
    }
L_08938EAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    goto L_08938EB4;
L_08938EB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938FEC;
      }
      goto L_08938EEC;
    }
L_08938EEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938F24;
      }
      goto L_08938EF8;
    }
L_08938EF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<33u>(aot_gpr[6]);
    ctx.execute_vfpu_vx2i(2u, 1u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<2u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938F30;
      }
      goto L_08938F24;
    }
L_08938F24:
    ctx.set_vfpu_scalar_bits_ct<0u>(PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<32u>(PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<64u>(PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08938F30;
L_08938F30:
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 52u, 4u);
      ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 1u, vfpu_side); }
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[21] | 0u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 24u, 4u);
      ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 2u, vfpu_side); }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 28u, 4u);
      ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 3u, vfpu_side); }
    aot_gpr[18] = (aot_gpr[19] | 0u);
    ctx.execute_vfpu_compare3(2u, 59u, 2u, 4u, 6u);
    ctx.execute_vfpu_compare3(3u, 63u, 3u, 4u, 6u);
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(2u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(3u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(1u, 2u, 4u, 0u);
    ctx.execute_vfpu_vi2x(33u, 3u, 4u, 0u);
    aot_gpr[21] = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_gpr[19] = (ctx.vfpu_scalar_bits_ct<33u>());
    aot_gpr[7] = (aot_gpr[21] | aot_gpr[20]);
    aot_gpr[6] = (aot_gpr[7] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938FDC;
      }
      goto L_08938F84;
    }
L_08938F84:
    aot_gpr[6] = (aot_gpr[19] & aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938FDC;
      }
      goto L_08938F94;
    }
L_08938F94:
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938FDC;
      }
      goto L_08938FA0;
    }
L_08938FA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938FC8;
      }
      goto L_08938FB0;
    }
L_08938FB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (0x08938FC4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 80u, 0x08936B44u>(ctx, &aot_mem) && ctx.pc == 0x08938FC4u) goto L_08938FC4;
    return;
L_08938FC4:
    aot_gpr[22] = (0u | 1u);
    goto L_08938FC8;
L_08938FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[17]);
    aot_gpr[31] = (0x08938FD8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08938970;
L_08938FD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08938FDC;
L_08938FDC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938EEC;
      }
      goto L_08938FEC;
    }
L_08938FEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08939000u; return;
}

void recomp_unit_0308(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0308_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_308(Runtime &runtime) {
    runtime.register_generated_unit(308u, 0x08938000u, 4096u, &recomp_unit_0308, &recomp_unit_0308_entry);
    runtime.register_function(0x08938000u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893800Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938018u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893803Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893804Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938054u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893805Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938068u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089380C0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089380D8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089380E8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089380F0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089380F8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938100u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938108u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938114u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893811Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938128u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938134u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893813Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938144u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893814Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938158u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938160u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938170u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893817Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938188u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938190u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893819Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089381A8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089381B8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089381CCu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089381D4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089381E4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938204u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938224u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938230u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938238u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938250u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938258u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938260u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938268u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938270u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938278u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938288u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893828Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089382A0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089382F8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938310u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938340u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938344u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938380u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938390u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089383A4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089383B8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089383C8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089383E8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089383F8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893842Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938434u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938444u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938450u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893846Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938484u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938490u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089384A0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089384BCu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089384C4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089384CCu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089384E0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938504u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893851Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938530u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938538u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938540u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938548u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893854Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938554u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938560u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893856Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938574u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938580u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938584u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893858Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938598u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893859Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089385B8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089385D4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089385F4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938600u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893860Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938620u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938628u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893863Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938648u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938654u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938668u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938670u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938684u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938690u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893869Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089386BCu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089386D0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089386F0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938708u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893871Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938730u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893873Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938748u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938758u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938764u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938774u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938780u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893884Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x0893885Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938864u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938874u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938880u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938890u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938894u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938954u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938964u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938970u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938994u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089389A4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x089389B0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938A0Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938A38u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938A7Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938AA0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938AC4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938AD8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938B04u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938B44u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938B4Cu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938B54u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938B68u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938BBCu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938BE0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938BE8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938C18u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938C38u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938C58u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938C78u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938C80u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938C90u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938CA4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938CB0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938CC4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938D34u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938DC8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938DDCu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938E68u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938E70u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938E88u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938EACu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938EB4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938EECu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938EF8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938F24u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938F30u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938F84u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938F94u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938FA0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938FB0u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938FC4u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938FC8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938FD8u, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938FDCu, &recomp_unit_0308, "recomp_unit_0308");
    runtime.register_function(0x08938FECu, &recomp_unit_0308, "recomp_unit_0308");
}
} // namespace psprecomp
