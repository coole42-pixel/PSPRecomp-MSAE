#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0132[1018] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0,
    0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0,
    0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0,
    0, 76, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81,
    0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0,
    0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 107,
    0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0,
    135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163,
};
void recomp_unit_0132_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08888000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0132[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08888000;
    case 2u: goto L_08888018;
    case 3u: goto L_08888024;
    case 4u: goto L_08888038;
    case 5u: goto L_08888058;
    case 6u: goto L_08888084;
    case 7u: goto L_0888809C;
    case 8u: goto L_088880EC;
    case 9u: goto L_088880F8;
    case 10u: goto L_0888810C;
    case 11u: goto L_08888118;
    case 12u: goto L_08888148;
    case 13u: goto L_088881A4;
    case 14u: goto L_088881AC;
    case 15u: goto L_088881B8;
    case 16u: goto L_088881C4;
    case 17u: goto L_08888220;
    case 18u: goto L_08888228;
    case 19u: goto L_08888270;
    case 20u: goto L_08888274;
    case 21u: goto L_0888828C;
    case 22u: goto L_088882C4;
    case 23u: goto L_088882F0;
    case 24u: goto L_08888314;
    case 25u: goto L_08888340;
    case 26u: goto L_08888358;
    case 27u: goto L_08888368;
    case 28u: goto L_088883BC;
    case 29u: goto L_088883EC;
    case 30u: goto L_0888841C;
    case 31u: goto L_0888844C;
    case 32u: goto L_08888464;
    case 33u: goto L_0888848C;
    case 34u: goto L_08888498;
    case 35u: goto L_088884A4;
    case 36u: goto L_088884A8;
    case 37u: goto L_088884AC;
    case 38u: goto L_088884E8;
    case 39u: goto L_088884FC;
    case 40u: goto L_0888854C;
    case 41u: goto L_08888558;
    case 42u: goto L_08888560;
    case 43u: goto L_08888568;
    case 44u: goto L_088885DC;
    case 45u: goto L_088885E8;
    case 46u: goto L_088885F0;
    case 47u: goto L_088885F8;
    case 48u: goto L_08888618;
    case 49u: goto L_08888634;
    case 50u: goto L_08888648;
    case 51u: goto L_0888865C;
    case 52u: goto L_08888670;
    case 53u: goto L_08888684;
    case 54u: goto L_08888698;
    case 55u: goto L_088886A8;
    case 56u: goto L_088886C4;
    case 57u: goto L_088886DC;
    case 58u: goto L_088886F8;
    case 59u: goto L_08888710;
    case 60u: goto L_08888718;
    case 61u: goto L_08888724;
    case 62u: goto L_08888730;
    case 63u: goto L_088887C0;
    case 64u: goto L_088887D4;
    case 65u: goto L_088887E4;
    case 66u: goto L_08888810;
    case 67u: goto L_08888834;
    case 68u: goto L_0888884C;
    case 69u: goto L_08888854;
    case 70u: goto L_0888886C;
    case 71u: goto L_0888887C;
    case 72u: goto L_0888888C;
    case 73u: goto L_088888C0;
    case 74u: goto L_088888F0;
    case 75u: goto L_088888F4;
    case 76u: goto L_08888904;
    case 77u: goto L_08888908;
    case 78u: goto L_08888940;
    case 79u: goto L_088889E4;
    case 80u: goto L_088889F4;
    case 81u: goto L_088889FC;
    case 82u: goto L_08888A0C;
    case 83u: goto L_08888A14;
    case 84u: goto L_08888A1C;
    case 85u: goto L_08888A44;
    case 86u: goto L_08888A60;
    case 87u: goto L_08888A68;
    case 88u: goto L_08888A70;
    case 89u: goto L_08888A78;
    case 90u: goto L_08888A90;
    case 91u: goto L_08888A98;
    case 92u: goto L_08888AA4;
    case 93u: goto L_08888AB0;
    case 94u: goto L_08888AB8;
    case 95u: goto L_08888AC0;
    case 96u: goto L_08888AC8;
    case 97u: goto L_08888AD4;
    case 98u: goto L_08888AE4;
    case 99u: goto L_08888AEC;
    case 100u: goto L_08888AFC;
    case 101u: goto L_08888B08;
    case 102u: goto L_08888B38;
    case 103u: goto L_08888B44;
    case 104u: goto L_08888B54;
    case 105u: goto L_08888B6C;
    case 106u: goto L_08888B78;
    case 107u: goto L_08888B7C;
    case 108u: goto L_08888B84;
    case 109u: goto L_08888B8C;
    case 110u: goto L_08888B98;
    case 111u: goto L_08888BB0;
    case 112u: goto L_08888BD8;
    case 113u: goto L_08888BE0;
    case 114u: goto L_08888C08;
    case 115u: goto L_08888C10;
    case 116u: goto L_08888C18;
    case 117u: goto L_08888C20;
    case 118u: goto L_08888C28;
    case 119u: goto L_08888C2C;
    case 120u: goto L_08888C48;
    case 121u: goto L_08888C54;
    case 122u: goto L_08888C64;
    case 123u: goto L_08888C6C;
    case 124u: goto L_08888C78;
    case 125u: goto L_08888CB8;
    case 126u: goto L_08888CC8;
    case 127u: goto L_08888CD8;
    case 128u: goto L_08888D10;
    case 129u: goto L_08888D28;
    case 130u: goto L_08888D34;
    case 131u: goto L_08888D4C;
    case 132u: goto L_08888D54;
    case 133u: goto L_08888D5C;
    case 134u: goto L_08888D70;
    case 135u: goto L_08888D80;
    case 136u: goto L_08888DA0;
    case 137u: goto L_08888DAC;
    case 138u: goto L_08888DBC;
    case 139u: goto L_08888DC4;
    case 140u: goto L_08888DE4;
    case 141u: goto L_08888DF0;
    case 142u: goto L_08888E08;
    case 143u: goto L_08888E38;
    case 144u: goto L_08888E40;
    case 145u: goto L_08888E50;
    case 146u: goto L_08888E70;
    case 147u: goto L_08888E9C;
    case 148u: goto L_08888EB4;
    case 149u: goto L_08888EE8;
    case 150u: goto L_08888EF8;
    case 151u: goto L_08888F00;
    case 152u: goto L_08888F24;
    case 153u: goto L_08888F3C;
    case 154u: goto L_08888F64;
    case 155u: goto L_08888F6C;
    case 156u: goto L_08888F78;
    case 157u: goto L_08888F88;
    case 158u: goto L_08888FA4;
    case 159u: goto L_08888FB0;
    case 160u: goto L_08888FC4;
    case 161u: goto L_08888FD0;
    case 162u: goto L_08888FDC;
    case 163u: goto L_08888FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08888000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08888018u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 32u, 0x08A2D204u>(ctx, &aot_mem) && ctx.pc == 0x08888018u) goto L_08888018;
    return;
L_08888018:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08888024u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 114u, 0x08887DCCu>(ctx, &aot_mem) && ctx.pc == 0x08888024u) goto L_08888024;
    return;
L_08888024:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888038:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25952), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25964)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08888084u);
    aot_gpr[8] = (aot_gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 161u, 0x08937E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08888084u) goto L_08888084;
    return;
L_08888084:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(9128), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888809C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (0u | 53u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x088880ECu);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(27408));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088880ECu) goto L_088880EC;
    return;
L_088880EC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088880F8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088880F8u) goto L_088880F8;
    return;
L_088880F8:
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[4] = (0u | 54u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0888810Cu);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(27472));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0888810Cu) goto L_0888810C;
    return;
L_0888810C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08888118u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08888118u) goto L_08888118;
    return;
L_08888118:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(25964)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(25996)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[9] = (aot_gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7960));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8088));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(7936)));
      if (branch_taken) {
          goto L_088881AC;
      }
      goto L_08888148;
    }
L_08888148:
    aot_gpr[3] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[2] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25976)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25972)));
    aot_gpr[10] = (2215u << 16u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(26004)));
    aot_gpr[10] = (2215u << 16u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(26000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x088881A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0308_entry, 308u, 8u, 0x08938068u>(ctx, &aot_mem) && ctx.pc == 0x088881A4u) goto L_088881A4;
    return;
L_088881A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(25964)));
      if (branch_taken) {
          goto L_08888274;
      }
      goto L_088881AC;
    }
L_088881AC:
    aot_gpr[9] = (aot_gpr[17] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[3] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08888228;
      }
      goto L_088881B8;
    }
L_088881B8:
    aot_gpr[9] = (aot_gpr[17] < static_cast<std::uint32_t>(2000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[3] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08888228;
      }
      goto L_088881C4;
    }
L_088881C4:
    aot_gpr[3] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[2] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25980)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25984)));
    aot_gpr[10] = (2215u << 16u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(26004)));
    aot_gpr[10] = (2215u << 16u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(26000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08888220u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0308_entry, 308u, 8u, 0x08938068u>(ctx, &aot_mem) && ctx.pc == 0x08888220u) goto L_08888220;
    return;
L_08888220:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(25964)));
      if (branch_taken) {
          goto L_08888274;
      }
      goto L_08888228;
    }
L_08888228:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[2] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25988)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25992)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08888270u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0308_entry, 308u, 8u, 0x08938068u>(ctx, &aot_mem) && ctx.pc == 0x08888270u) goto L_08888270;
    return;
L_08888270:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(25964)));
    goto L_08888274;
L_08888274:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888828Cu);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 161u, 0x08937E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0888828Cu) goto L_0888828C;
    return;
L_0888828C:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(9128), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088882C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25964)));
    aot_gpr[5] = (0u | 6u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088882F0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12056));
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 161u, 0x08937E9Cu>(ctx, &aot_mem) && ctx.pc == 0x088882F0u) goto L_088882F0;
    return;
L_088882F0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25968), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(9128), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888314:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25964)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08888340u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12056));
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 161u, 0x08937E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08888340u) goto L_08888340;
    return;
L_08888340:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(9128), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888358:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25969), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888368:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2185u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31912));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(9148), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u | 32768u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9140));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12060));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088883BCu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(26000));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x088883BCu) goto L_088883BC;
    return;
L_088883BC:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26004), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9132));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12100));
    aot_gpr[31] = (0x088883ECu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(25972));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x088883ECu) goto L_088883EC;
    return;
L_088883EC:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25976), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9136));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12144));
    aot_gpr[31] = (0x0888841Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(7936));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x0888841Cu) goto L_0888841C;
    return;
L_0888841C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25996), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9144));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12192));
    aot_gpr[31] = (0x0888844Cu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(25984));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x0888844Cu) goto L_0888844C;
    return;
L_0888844C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25980), aot_gpr[2]);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25964)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_088884AC;
      }
      goto L_08888464;
    }
L_08888464:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0888848Cu);
    aot_gpr[6] = (0u | 1784u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888848Cu) goto L_0888848C;
    return;
L_0888848C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          goto L_088884A8;
      }
      goto L_08888498;
    }
L_08888498:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088884A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12240));
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 122u, 0x08937AACu>(ctx, &aot_mem) && ctx.pc == 0x088884A4u) goto L_088884A4;
    return;
L_088884A4:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_088884A8;
L_088884A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(25964), aot_gpr[18]);
    goto L_088884AC;
L_088884AC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-3216), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25969), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 9u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7932), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(9128), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7944));
    aot_gpr[31] = (0x088884E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12056));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x088884E8u) goto L_088884E8;
    return;
L_088884E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7960));
    aot_gpr[31] = (0x088884FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12252));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088884FCu) goto L_088884FC;
    return;
L_088884FC:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9112), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9116), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9120), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6988), 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6984), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0888854Cu);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888854Cu) goto L_0888854C;
    return;
L_0888854C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08888568;
      }
      goto L_08888558;
    }
L_08888558:
    aot_gpr[31] = (0x08888560u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08888560u) goto L_08888560;
    return;
L_08888560:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (2218u << 16u);
    goto L_08888568;
L_08888568:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9124), aot_gpr[17]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9124)));
    aot_gpr[7] = (0u | 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[6] | 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9124)));
    aot_gpr[6] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9124)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088885DCu);
    aot_gpr[6] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088885DCu) goto L_088885DC;
    return;
L_088885DC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088885F8;
      }
      goto L_088885E8;
    }
L_088885E8:
    aot_gpr[31] = (0x088885F0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08888DA0;
L_088885F0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2215u << 16u);
    goto L_088885F8;
L_088885F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26012), aot_gpr[17]);
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
L_08888618:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26012)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08888634u);
    aot_gpr[5] = (0u | 3u);
    goto L_08888DAC;
L_08888634:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26012), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25964)));
    aot_gpr[31] = (0x08888648u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0307_entry, 307u, 126u, 0x08937B48u>(ctx, &aot_mem) && ctx.pc == 0x08888648u) goto L_08888648;
    return;
L_08888648:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9140)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x0888865Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26004)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0888865Cu) goto L_0888865C;
    return;
L_0888865C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9132)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x08888670u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25976)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x08888670u) goto L_08888670;
    return;
L_08888670:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9136)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x08888684u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25996)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x08888684u) goto L_08888684;
    return;
L_08888684:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9144)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[31] = (0x08888698u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25980)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x08888698u) goto L_08888698;
    return;
L_08888698:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(9124)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088886C4;
      }
      goto L_088886A8;
    }
L_088886A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088886C4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088886C4u) goto L_088886C4;
    return;
L_088886C4:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9148), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088886DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(9152)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08888710;
      }
      goto L_088886F8;
    }
L_088886F8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25970)));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25971), static_cast<std::uint8_t>(aot_gpr[6]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25970), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_08888718;
      }
      goto L_08888710;
    }
L_08888710:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25970), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25971), static_cast<std::uint8_t>(0u));
    goto L_08888718;
L_08888718:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08888724u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 5u, 0x08889028u>(ctx, &aot_mem) && ctx.pc == 0x08888724u) goto L_08888724;
    return;
L_08888724:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888730:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[7] = (2u << 16u);
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28804), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x088887C0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x088887C0u) goto L_088887C0;
    return;
L_088887C0:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[26] = __builtin_bit_cast(float, 0u);
    aot_fpr[24] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_0888888C;
      }
      goto L_088887D4;
    }
L_088887D4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088887E4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x088887E4u) goto L_088887E4;
    return;
L_088887E4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 480u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (0u | 272u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6988)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (65409u << 16u);
      if (branch_taken) {
          goto L_08888854;
      }
      goto L_08888810;
    }
L_08888810:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-32640));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (0x08888834u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6988)));
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 166u, 0x08943B80u>(ctx, &aot_mem) && ctx.pc == 0x08888834u) goto L_08888834;
    return;
L_08888834:
    aot_gpr[4] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0888884Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0888884Cu) goto L_0888884C;
    return;
L_0888884C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888887C;
      }
      goto L_08888854;
    }
L_08888854:
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0888886Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 92u, 0x08935918u>(ctx, &aot_mem) && ctx.pc == 0x0888886Cu) goto L_0888886C;
    return;
L_0888886C:
    aot_gpr[4] = (65503u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20658));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_0888887C;
L_0888887C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0888888Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x0888888Cu) goto L_0888888C;
    return;
L_0888888C:
    aot_gpr[5] = (16000u << 16u);
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26008)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-25184)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26008), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088888C0u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0555_entry, 555u, 26u, 0x08A2F2E4u>(ctx, &aot_mem) && ctx.pc == 0x088888C0u) goto L_088888C0;
    return;
L_088888C0:
    aot_gpr[4] = (16153u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16179u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088888F4;
      }
      goto L_088888F0;
    }
L_088888F0:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    goto L_088888F4;
L_088888F4:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (17279u << 16u);
      if (branch_taken) {
          goto L_08888908;
      }
      goto L_08888904;
    }
L_08888904:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    goto L_08888908;
L_08888908:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (129u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-32640));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    aot_gpr[8] = (aot_gpr[8] << 24u);
    aot_gpr[31] = (0x08888940u);
    aot_gpr[9] = (aot_gpr[8] | aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 221u, 0x08A4BFECu>(ctx, &aot_mem) && ctx.pc == 0x08888940u) goto L_08888940;
    return;
L_08888940:
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[22]));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[20]));
    aot_gpr[5] = (16896u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[16] = aot_fpr[22] + aot_fpr[14];
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_fpr[14] = aot_fpr[20] + aot_fpr[14];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_fpr[15] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    aot_fpr[17] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[17]));
    aot_gpr[4] = (0u | 32u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(9124)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6984)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(9124)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088889F4;
      }
      goto L_088889E4;
    }
L_088889E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(9124)));
    goto L_088889F4;
L_088889F4:
    aot_gpr[31] = (0x088889FCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x088889FCu) goto L_088889FC;
    return;
L_088889FC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08888A0Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 59u, 0x0892F600u>(ctx, &aot_mem) && ctx.pc == 0x08888A0Cu) goto L_08888A0C;
    return;
L_08888A0C:
    aot_gpr[31] = (0x08888A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 47u, 0x0893D79Cu>(ctx, &aot_mem) && ctx.pc == 0x08888A14u) goto L_08888A14;
    return;
L_08888A14:
    aot_gpr[31] = (0x08888A1Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08888A1Cu) goto L_08888A1C;
    return;
L_08888A1C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888A44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7932)));
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888AFC;
      }
      goto L_08888A60;
    }
L_08888A60:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08888A78;
      }
      goto L_08888A68;
    }
L_08888A68:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_08888A78;
      }
      goto L_08888A70;
    }
L_08888A70:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888A98;
      }
      goto L_08888A78;
    }
L_08888A78:
    aot_gpr[5] = (17375u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (16672u << 16u);
    aot_gpr[31] = (0x08888A90u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_08888730;
L_08888A90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888AFC;
      }
      goto L_08888A98;
    }
L_08888A98:
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_08888AC8;
      }
      goto L_08888AA4;
    }
L_08888AA4:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08888AC8;
      }
      goto L_08888AB0;
    }
L_08888AB0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08888AC8;
      }
      goto L_08888AB8;
    }
L_08888AB8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08888AC8;
      }
      goto L_08888AC0;
    }
L_08888AC0:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888AFC;
      }
      goto L_08888AC8;
    }
L_08888AC8:
    aot_gpr[6] = (17372u << 16u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
      if (branch_taken) {
          goto L_08888AEC;
      }
      goto L_08888AD4;
    }
L_08888AD4:
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08888AE4u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_08888730;
L_08888AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888AFC;
      }
      goto L_08888AEC;
    }
L_08888AEC:
    aot_gpr[5] = (16824u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08888AFCu);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_08888730;
L_08888AFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888B08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(7932), aot_gpr[4]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(9128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888B8C;
      }
      goto L_08888B38;
    }
L_08888B38:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[31] = (0x08888B44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25964)));
    if (rt.invoke_chained_direct<&recomp_unit_0308_entry, 308u, 9u, 0x089380C0u>(ctx, &aot_mem) && ctx.pc == 0x08888B44u) goto L_08888B44;
    return;
L_08888B44:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 8u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888B84;
      }
      goto L_08888B54;
    }
L_08888B54:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(9128), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 9u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25964)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(7932), aot_gpr[4]);
    aot_gpr[31] = (0x08888B6Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0308_entry, 308u, 4u, 0x0893803Cu>(ctx, &aot_mem) && ctx.pc == 0x08888B6Cu) goto L_08888B6C;
    return;
L_08888B6C:
    aot_gpr[4] = (0u | 12u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08888B7C;
      }
      goto L_08888B78;
    }
L_08888B78:
    aot_gpr[18] = (0u | 10u);
    goto L_08888B7C;
L_08888B7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08888C2C;
      }
      goto L_08888B84;
    }
L_08888B84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 8u);
      if (branch_taken) {
          goto L_08888C28;
      }
      goto L_08888B8C;
    }
L_08888B8C:
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 8u);
      if (branch_taken) {
          goto L_08888C28;
      }
      goto L_08888B98;
    }
L_08888B98:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12256)));
    jump_target = aot_gpr[1];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888BB0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(9120)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(9112)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(9116)));
    aot_gpr[31] = (0x08888BD8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7944));
    goto L_08888058;
L_08888BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C28;
      }
      goto L_08888BE0;
    }
L_08888BE0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(9120)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(9112)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(9116)));
    aot_gpr[31] = (0x08888C08u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7944));
    goto L_0888809C;
L_08888C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C28;
      }
      goto L_08888C10;
    }
L_08888C10:
    aot_gpr[31] = (0x08888C18u);
    // nop
    goto L_088882C4;
L_08888C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08888C28;
      }
      goto L_08888C20;
    }
L_08888C20:
    aot_gpr[31] = (0x08888C28u);
    // nop
    goto L_08888314;
L_08888C28:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08888C2C;
L_08888C2C:
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
L_08888C48:
    aot_gpr[4] = (2218u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(9152)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888C54:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08888C6C;
      }
      goto L_08888C64;
    }
L_08888C64:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25969), static_cast<std::uint8_t>(0u));
    goto L_08888C6C;
L_08888C6C:
    aot_gpr[5] = (2218u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-3216), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888C78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08888CB8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7944));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08888CB8u) goto L_08888CB8;
    return;
L_08888CB8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08888CC8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7960));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08888CC8u) goto L_08888CC8;
    return;
L_08888CC8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08888CD8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8088));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08888CD8u) goto L_08888CD8;
    return;
L_08888CD8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9112), aot_gpr[17]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9116), aot_gpr[16]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(9120), aot_gpr[19]);
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
L_08888D10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25964)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08888D28u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 99u, 0x08A39508u>(ctx, &aot_mem) && ctx.pc == 0x08888D28u) goto L_08888D28;
    return;
L_08888D28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888D34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08888D4Cu);
    aot_gpr[4] = (0u | 8u);
    goto L_08888B08;
L_08888D4C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08888D5C;
      }
      goto L_08888D54;
    }
L_08888D54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08888D70;
      }
      goto L_08888D5C;
    }
L_08888D5C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25964)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1648));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08888D70;
      }
      goto L_08888D70;
    }
L_08888D70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888D80:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25960), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888DA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888DAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08888DE4;
      }
      goto L_08888DBC;
    }
L_08888DBC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08888DE4;
      }
      goto L_08888DC4;
    }
L_08888DC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08888DE4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08888DE4u) goto L_08888DE4;
    return;
L_08888DE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888DF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08888E40;
      }
      goto L_08888E08;
    }
L_08888E08:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5760))))));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25240)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12308));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08888E38u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12296));
    goto L_08888C78;
L_08888E38:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08888E40;
L_08888E40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888E50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08888E70u);
    aot_gpr[5] = (0u | 8464u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08888E70u) goto L_08888E70;
    return;
L_08888E70:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5760))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12308));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[9] = (0u | 8464u);
    aot_gpr[31] = (0x08888E9Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12296));
    goto L_08888C78;
L_08888E9C:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08888EB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08888FE4;
      }
      goto L_08888EE8;
    }
L_08888EE8:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (0u | 97u);
    aot_gpr[31] = (0x08888EF8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08888EF8u) goto L_08888EF8;
    return;
L_08888EF8:
    aot_gpr[31] = (0x08888F00u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 6u, 0x0886D040u>(ctx, &aot_mem) && ctx.pc == 0x08888F00u) goto L_08888F00;
    return;
L_08888F00:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (0u | 121u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08888F24u);
    aot_gpr[22] = (aot_gpr[6] + static_cast<std::uint32_t>(12312));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08888F24u) goto L_08888F24;
    return;
L_08888F24:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08888F3Cu);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08888F3Cu) goto L_08888F3C;
    return;
L_08888F3C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5760))))));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25240)));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08888F64u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12296));
    goto L_08888C78;
L_08888F64:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F6C;
    }
L_08888F6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F78;
    }
L_08888F78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FDC;
      }
      goto L_08888F88;
    }
L_08888F88:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25969)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25968)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08888FD0;
      }
      goto L_08888FA4;
    }
L_08888FA4:
    aot_gpr[4] = (0u | 41u);
    aot_gpr[31] = (0x08888FB0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08888FB0u) goto L_08888FB0;
    return;
L_08888FB0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08888FC4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08888FC4u) goto L_08888FC4;
    return;
L_08888FC4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08888FE4;
      }
      goto L_08888FD0;
    }
L_08888FD0:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08888FE4;
      }
      goto L_08888FDC;
    }
L_08888FDC:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08888FE4;
L_08888FE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.pc = 0x08889000u; return;
}

void recomp_unit_0132(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0132_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_132(Runtime &runtime) {
    runtime.register_generated_unit(132u, 0x08888000u, 4096u, &recomp_unit_0132, &recomp_unit_0132_entry);
    runtime.register_function(0x08888000u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888018u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888024u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888038u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888058u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888084u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888809Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088880ECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088880F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888810Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888118u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888148u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088881A4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088881ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088881B8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088881C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888220u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888228u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888270u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888274u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888828Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088882C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088882F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888314u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888340u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888358u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888368u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088883BCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088883ECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888841Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888844Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888464u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888848Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888498u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088884A4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088884A8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088884ACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088884E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088884FCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888854Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888558u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888560u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888568u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088885DCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088885E8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088885F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088885F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888618u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888634u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888648u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888865Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888670u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888684u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888698u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088886A8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088886C4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088886DCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088886F8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888710u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888718u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888724u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888730u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088887C0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088887D4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088887E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888810u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888834u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888884Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888854u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888886Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888887Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x0888888Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088888C0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088888F0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088888F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888904u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888908u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888940u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088889E4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088889F4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x088889FCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A0Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A14u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A1Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A44u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A60u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A68u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A70u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A90u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888A98u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AA4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AB0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AB8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AC0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AC8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AD4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AE4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AECu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888AFCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B38u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B44u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B54u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B6Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B7Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B84u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B8Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888B98u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888BB0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888BD8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888BE0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C10u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C18u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C20u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C28u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C2Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C48u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C54u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C64u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C6Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888C78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888CB8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888CC8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888CD8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888D10u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888D28u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888D34u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888D4Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888D54u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888D5Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888D70u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888D80u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888DA0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888DACu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888DBCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888DC4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888DE4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888DF0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888E08u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888E38u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888E40u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888E50u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888E70u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888E9Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888EB4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888EE8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888EF8u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888F00u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888F24u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888F3Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888F64u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888F6Cu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888F78u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888F88u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888FA4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888FB0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888FC4u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888FD0u, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888FDCu, &recomp_unit_0132, "recomp_unit_0132");
    runtime.register_function(0x08888FE4u, &recomp_unit_0132, "recomp_unit_0132");
}
} // namespace psprecomp
