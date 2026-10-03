#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0302[1014] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34,
    0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 58, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0,
    0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92,
    0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0,
    106, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    115, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0,
    124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0,
    133, 0, 134, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 155, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164,
    0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 177, 0, 178, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181,
    0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0,
    194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204,
};
void recomp_unit_0302_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08932000u;
        entry_id = (entry_delta < 4056u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0302[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08932000;
    case 2u: goto L_08932008;
    case 3u: goto L_08932020;
    case 4u: goto L_0893202C;
    case 5u: goto L_0893203C;
    case 6u: goto L_08932048;
    case 7u: goto L_08932060;
    case 8u: goto L_08932078;
    case 9u: goto L_089320DC;
    case 10u: goto L_08932108;
    case 11u: goto L_08932114;
    case 12u: goto L_0893211C;
    case 13u: goto L_08932124;
    case 14u: goto L_0893212C;
    case 15u: goto L_0893213C;
    case 16u: goto L_08932144;
    case 17u: goto L_08932158;
    case 18u: goto L_08932160;
    case 19u: goto L_08932174;
    case 20u: goto L_0893217C;
    case 21u: goto L_0893219C;
    case 22u: goto L_089321B8;
    case 23u: goto L_089321F8;
    case 24u: goto L_0893222C;
    case 25u: goto L_08932248;
    case 26u: goto L_0893226C;
    case 27u: goto L_08932288;
    case 28u: goto L_089322D0;
    case 29u: goto L_08932328;
    case 30u: goto L_08932364;
    case 31u: goto L_08932374;
    case 32u: goto L_089323AC;
    case 33u: goto L_089323E4;
    case 34u: goto L_089323FC;
    case 35u: goto L_08932404;
    case 36u: goto L_08932408;
    case 37u: goto L_08932434;
    case 38u: goto L_08932440;
    case 39u: goto L_08932448;
    case 40u: goto L_08932450;
    case 41u: goto L_08932478;
    case 42u: goto L_08932488;
    case 43u: goto L_08932494;
    case 44u: goto L_089324D4;
    case 45u: goto L_089324E0;
    case 46u: goto L_089324E8;
    case 47u: goto L_089324F0;
    case 48u: goto L_08932518;
    case 49u: goto L_08932524;
    case 50u: goto L_0893252C;
    case 51u: goto L_08932534;
    case 52u: goto L_0893255C;
    case 53u: goto L_0893256C;
    case 54u: goto L_08932578;
    case 55u: goto L_089325B8;
    case 56u: goto L_089325C4;
    case 57u: goto L_089325DC;
    case 58u: goto L_089325E0;
    case 59u: goto L_089325EC;
    case 60u: goto L_08932628;
    case 61u: goto L_08932634;
    case 62u: goto L_0893263C;
    case 63u: goto L_08932640;
    case 64u: goto L_08932670;
    case 65u: goto L_08932698;
    case 66u: goto L_089326A4;
    case 67u: goto L_089326AC;
    case 68u: goto L_089326B0;
    case 69u: goto L_089326DC;
    case 70u: goto L_08932704;
    case 71u: goto L_08932710;
    case 72u: goto L_08932718;
    case 73u: goto L_08932720;
    case 74u: goto L_0893274C;
    case 75u: goto L_0893279C;
    case 76u: goto L_089327B0;
    case 77u: goto L_089327BC;
    case 78u: goto L_089327D0;
    case 79u: goto L_089327D8;
    case 80u: goto L_089327E0;
    case 81u: goto L_089327E8;
    case 82u: goto L_089327F0;
    case 83u: goto L_089327F8;
    case 84u: goto L_08932804;
    case 85u: goto L_0893280C;
    case 86u: goto L_08932830;
    case 87u: goto L_08932838;
    case 88u: goto L_08932844;
    case 89u: goto L_0893284C;
    case 90u: goto L_08932854;
    case 91u: goto L_08932874;
    case 92u: goto L_0893287C;
    case 93u: goto L_08932884;
    case 94u: goto L_08932890;
    case 95u: goto L_08932898;
    case 96u: goto L_089328A0;
    case 97u: goto L_089328AC;
    case 98u: goto L_089328B4;
    case 99u: goto L_089328DC;
    case 100u: goto L_08932908;
    case 101u: goto L_08932910;
    case 102u: goto L_08932940;
    case 103u: goto L_08932958;
    case 104u: goto L_08932964;
    case 105u: goto L_08932978;
    case 106u: goto L_08932980;
    case 107u: goto L_08932984;
    case 108u: goto L_089329F4;
    case 109u: goto L_08932A08;
    case 110u: goto L_08932A1C;
    case 111u: goto L_08932A30;
    case 112u: goto L_08932A50;
    case 113u: goto L_08932A58;
    case 114u: goto L_08932A70;
    case 115u: goto L_08932A80;
    case 116u: goto L_08932A8C;
    case 117u: goto L_08932A9C;
    case 118u: goto L_08932AA4;
    case 119u: goto L_08932AAC;
    case 120u: goto L_08932AB0;
    case 121u: goto L_08932AB8;
    case 122u: goto L_08932AEC;
    case 123u: goto L_08932AF8;
    case 124u: goto L_08932B00;
    case 125u: goto L_08932B0C;
    case 126u: goto L_08932B18;
    case 127u: goto L_08932B20;
    case 128u: goto L_08932B44;
    case 129u: goto L_08932B54;
    case 130u: goto L_08932B60;
    case 131u: goto L_08932B6C;
    case 132u: goto L_08932B78;
    case 133u: goto L_08932B80;
    case 134u: goto L_08932B88;
    case 135u: goto L_08932B8C;
    case 136u: goto L_08932B94;
    case 137u: goto L_08932B9C;
    case 138u: goto L_08932BB4;
    case 139u: goto L_08932BBC;
    case 140u: goto L_08932BE4;
    case 141u: goto L_08932C00;
    case 142u: goto L_08932C14;
    case 143u: goto L_08932C1C;
    case 144u: goto L_08932C28;
    case 145u: goto L_08932C34;
    case 146u: goto L_08932C48;
    case 147u: goto L_08932C50;
    case 148u: goto L_08932C58;
    case 149u: goto L_08932C60;
    case 150u: goto L_08932C7C;
    case 151u: goto L_08932C94;
    case 152u: goto L_08932CB4;
    case 153u: goto L_08932CD0;
    case 154u: goto L_08932CE4;
    case 155u: goto L_08932CF4;
    case 156u: goto L_08932CF8;
    case 157u: goto L_08932D28;
    case 158u: goto L_08932D3C;
    case 159u: goto L_08932D44;
    case 160u: goto L_08932D4C;
    case 161u: goto L_08932D54;
    case 162u: goto L_08932D64;
    case 163u: goto L_08932D74;
    case 164u: goto L_08932D7C;
    case 165u: goto L_08932D8C;
    case 166u: goto L_08932D9C;
    case 167u: goto L_08932DBC;
    case 168u: goto L_08932DC4;
    case 169u: goto L_08932DCC;
    case 170u: goto L_08932DDC;
    case 171u: goto L_08932E08;
    case 172u: goto L_08932E14;
    case 173u: goto L_08932E24;
    case 174u: goto L_08932E2C;
    case 175u: goto L_08932E34;
    case 176u: goto L_08932E44;
    case 177u: goto L_08932E48;
    case 178u: goto L_08932E50;
    case 179u: goto L_08932E54;
    case 180u: goto L_08932E6C;
    case 181u: goto L_08932E7C;
    case 182u: goto L_08932E88;
    case 183u: goto L_08932E98;
    case 184u: goto L_08932EA0;
    case 185u: goto L_08932EA8;
    case 186u: goto L_08932EB0;
    case 187u: goto L_08932ECC;
    case 188u: goto L_08932EE4;
    case 189u: goto L_08932EF0;
    case 190u: goto L_08932F58;
    case 191u: goto L_08932F60;
    case 192u: goto L_08932F6C;
    case 193u: goto L_08932F78;
    case 194u: goto L_08932F80;
    case 195u: goto L_08932F88;
    case 196u: goto L_08932F90;
    case 197u: goto L_08932F98;
    case 198u: goto L_08932FA0;
    case 199u: goto L_08932FA8;
    case 200u: goto L_08932FB4;
    case 201u: goto L_08932FBC;
    case 202u: goto L_08932FC4;
    case 203u: goto L_08932FCC;
    case 204u: goto L_08932FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08932000:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08932020u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 114u, 0x08A48CBCu>(ctx, &aot_mem) && ctx.pc == 0x08932020u) goto L_08932020;
    return;
L_08932020:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893202C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893203Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 171u, 0x08A47D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0893203Cu) goto L_0893203C;
    return;
L_0893203C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08932048u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08932048u) goto L_08932048;
    return;
L_08932048:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(21337), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932060:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08932078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 132u, 0x08A47944u>(ctx, &aot_mem) && ctx.pc == 0x08932078u) goto L_08932078;
    return;
L_08932078:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21380), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7912)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 1u);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(7920));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7912), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21328), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-22112), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-12896)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[31] = (0x089320DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21332), aot_gpr[4]);
    ctx.pc = 0x08A5AFA4u;
    return;
L_089320DC:
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21316)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(21288));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21296)));
    aot_gpr[31] = (0x08932108u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 64u, 0x08A473A8u>(ctx, &aot_mem) && ctx.pc == 0x08932108u) goto L_08932108;
    return;
L_08932108:
    aot_gpr[16] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(21304));
      if (branch_taken) {
          goto L_08932158;
      }
      goto L_08932114;
    }
L_08932114:
    aot_gpr[31] = (0x0893211Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 18u, 0x08A482D0u>(ctx, &aot_mem) && ctx.pc == 0x0893211Cu) goto L_0893211C;
    return;
L_0893211C:
    aot_gpr[31] = (0x08932124u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 7u, 0x08A48138u>(ctx, &aot_mem) && ctx.pc == 0x08932124u) goto L_08932124;
    return;
L_08932124:
    aot_gpr[31] = (0x0893212Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 6u, 0x08A48128u>(ctx, &aot_mem) && ctx.pc == 0x0893212Cu) goto L_0893212C;
    return;
L_0893212C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6980)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932144;
      }
      goto L_0893213C;
    }
L_0893213C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08932158;
      }
      goto L_08932144;
    }
L_08932144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21316)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[31] = (0x08932158u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 114u, 0x08A477B4u>(ctx, &aot_mem) && ctx.pc == 0x08932158u) goto L_08932158;
    return;
L_08932158:
    aot_gpr[31] = (0x08932160u);
    aot_gpr[4] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 98u, 0x08A47610u>(ctx, &aot_mem) && ctx.pc == 0x08932160u) goto L_08932160;
    return;
L_08932160:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21316)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    aot_gpr[31] = (0x08932174u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(21316), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 55u, 0x089304E4u>(ctx, &aot_mem) && ctx.pc == 0x08932174u) goto L_08932174;
    return;
L_08932174:
    aot_gpr[31] = (0x0893217Cu);
    // nop
    ctx.pc = 0x08A5AFA4u;
    return;
L_0893217C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21316)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21312)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0893219Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 64u, 0x08A473A8u>(ctx, &aot_mem) && ctx.pc == 0x0893219Cu) goto L_0893219C;
    return;
L_0893219C:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(21337), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089321B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x089321F8u);
    aot_gpr[21] = (aot_gpr[7] & 255u);
    ctx.pc = 0x08A5AF1Cu;
    return;
L_089321F8:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29080), aot_gpr[16]);
    aot_gpr[4] = (0u | 4096u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21296), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21312), aot_gpr[17]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (0u | 4096u);
    aot_gpr[31] = (0x0893222Cu);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893222Cu) goto L_0893222C;
    return;
L_0893222C:
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(21288), aot_gpr[2]);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21296)));
    aot_gpr[31] = (0x08932248u);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08932248u) goto L_08932248;
    return;
L_08932248:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(21288));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21312)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0893226Cu);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0893226Cu) goto L_0893226C;
    return;
L_0893226C:
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(21304), aot_gpr[2]);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21312)));
    aot_gpr[31] = (0x08932288u);
    aot_gpr[5] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08932288u) goto L_08932288;
    return;
L_08932288:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(21304));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[20] = (0u | 512u);
    aot_gpr[11] = (2219u << 16u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(21340), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7920));
    aot_gpr[16] = (0u | 272u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[3] = (2219u << 16u);
    aot_gpr[2] = (2219u << 16u);
    aot_gpr[12] = (2219u << 16u);
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[23] = (2219u << 16u);
    aot_gpr[30] = (2219u << 16u);
    if (aot_gpr[19] != 0u) {
    aot_gpr[16] = (0u | 304u);
        goto L_089322D0;
    }
    goto L_089322D0;
L_089322D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(21340)));
    aot_gpr[5] = (2219u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21344), aot_gpr[16]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21348), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(21360), 0u);
    aot_gpr[4] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[6] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21352), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[7] = (0u + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21356), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(21364), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[12] + static_cast<std::uint32_t>(21368), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[31] = (0x08932328u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21372), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0300_entry, 300u, 89u, 0x0893090Cu>(ctx, &aot_mem) && ctx.pc == 0x08932328u) goto L_08932328;
    return;
L_08932328:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21304)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(21312)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (0u | 255u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(21312)));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[31] = (0x08932364u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21316), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 45u, 0x08A4726Cu>(ctx, &aot_mem) && ctx.pc == 0x08932364u) goto L_08932364;
    return;
L_08932364:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(21288)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(21296)));
    aot_gpr[31] = (0x08932374u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 64u, 0x08A473A8u>(ctx, &aot_mem) && ctx.pc == 0x08932374u) goto L_08932374;
    return;
L_08932374:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6980), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(21338), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(21337), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29124), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29123), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29122), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_089325EC;
      }
      goto L_089323AC;
    }
L_089323AC:
    aot_gpr[23] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-29120), aot_gpr[20]);
    aot_gpr[4] = (0u | 296u);
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-29116), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089323E4u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089323E4u) goto L_089323E4;
    return;
L_089323E4:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-29112));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[30] = (aot_gpr[20] + static_cast<std::uint32_t>(-29104));
      if (branch_taken) {
          goto L_08932408;
      }
      goto L_089323FC;
    }
L_089323FC:
    aot_gpr[31] = (0x08932404u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x08932404u) goto L_08932404;
    return;
L_08932404:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08932408;
L_08932408:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29112), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08932434u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932434u) goto L_08932434;
    return;
L_08932434:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29112)));
        goto L_08932450;
    }
    goto L_08932440;
L_08932440:
    aot_gpr[31] = (0x08932448u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08932448u) goto L_08932448;
    return;
L_08932448:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29112)));
    goto L_08932450;
L_08932450:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29104), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29120)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29116)));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(21364)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[31] = (0x08932478u);
    aot_gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 183u, 0x08943D04u>(ctx, &aot_mem) && ctx.pc == 0x08932478u) goto L_08932478;
    return;
L_08932478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29104)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29112)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          goto L_08932494;
      }
      goto L_08932488;
    }
L_08932488:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (aot_gpr[5] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    goto L_08932494;
L_08932494:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29104)));
    aot_gpr[5] = (65534u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089324D4u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089324D4u) goto L_089324D4;
    return;
L_089324D4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[17]);
        goto L_089324F0;
    }
    goto L_089324E0;
L_089324E0:
    aot_gpr[31] = (0x089324E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x089324E8u) goto L_089324E8;
    return;
L_089324E8:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    goto L_089324F0;
L_089324F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08932518u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932518u) goto L_08932518;
    return;
L_08932518:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08932534;
    }
    goto L_08932524;
L_08932524:
    aot_gpr[31] = (0x0893252Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x0893252Cu) goto L_0893252C;
    return;
L_0893252C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08932534;
L_08932534:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29120)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29116)));
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(21360)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[9]);
    aot_gpr[31] = (0x0893255Cu);
    aot_gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 183u, 0x08943D04u>(ctx, &aot_mem) && ctx.pc == 0x0893255Cu) goto L_0893255C;
    return;
L_0893255C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_08932578;
      }
      goto L_0893256C;
    }
L_0893256C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    goto L_08932578;
L_08932578:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (65534u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089325B8u);
    aot_gpr[6] = (0u | 28u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089325B8u) goto L_089325B8;
    return;
L_089325B8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089325E0;
      }
      goto L_089325C4;
    }
L_089325C4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-29120)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29116)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089325DCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 49u, 0x08945ABCu>(ctx, &aot_mem) && ctx.pc == 0x089325DCu) goto L_089325DC;
    return;
L_089325DC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_089325E0;
L_089325E0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29096), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
    goto L_089325EC;
L_089325EC:
    aot_gpr[4] = (0u | 480u);
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-7056), aot_gpr[4]);
    aot_gpr[4] = (0u | 272u);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-7052), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08932628u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932628u) goto L_08932628;
    return;
L_08932628:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932640;
      }
      goto L_08932634;
    }
L_08932634:
    aot_gpr[31] = (0x0893263Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x0893263Cu) goto L_0893263C;
    return;
L_0893263C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08932640;
L_08932640:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7056)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7920), aot_gpr[17]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7052)));
    aot_gpr[23] = (2219u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(21360)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[18]);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[31] = (0x08932670u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 183u, 0x08943D04u>(ctx, &aot_mem) && ctx.pc == 0x08932670u) goto L_08932670;
    return;
L_08932670:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08932698u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932698u) goto L_08932698;
    return;
L_08932698:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089326B0;
      }
      goto L_089326A4;
    }
L_089326A4:
    aot_gpr[31] = (0x089326ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x089326ACu) goto L_089326AC;
    return;
L_089326AC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_089326B0;
L_089326B0:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7056)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7052)));
    aot_gpr[21] = (2219u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(21364)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[18]);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[31] = (0x089326DCu);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 183u, 0x08943D04u>(ctx, &aot_mem) && ctx.pc == 0x089326DCu) goto L_089326DC;
    return;
L_089326DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08932704u);
    aot_gpr[6] = (0u | 56u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932704u) goto L_08932704;
    return;
L_08932704:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    aot_gpr[16] = (2219u << 16u);
        goto L_08932720;
    }
    goto L_08932710;
L_08932710:
    aot_gpr[31] = (0x08932718u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 10u, 0x08944134u>(ctx, &aot_mem) && ctx.pc == 0x08932718u) goto L_08932718;
    return;
L_08932718:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2219u << 16u);
    goto L_08932720;
L_08932720:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-12896), aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-7056)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-7052)));
    aot_gpr[19] = (2219u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(21368)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[18]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0893274Cu);
    aot_gpr[17] = (2219u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 183u, 0x08943D04u>(ctx, &aot_mem) && ctx.pc == 0x0893274Cu) goto L_0893274C;
    return;
L_0893274C:
    aot_gpr[4] = (0u ^ 1u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7912), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u << 2u);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21328), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-12896)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-22112), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(21360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21332), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21340)));
    aot_gpr[31] = (0x0893279Cu);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 149u, 0x08A47A0Cu>(ctx, &aot_mem) && ctx.pc == 0x0893279Cu) goto L_0893279C;
    return;
L_0893279C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(21364)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21340)));
    aot_gpr[4] = (0u | 480u);
    aot_gpr[31] = (0x089327B0u);
    aot_gpr[5] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 197u, 0x08A47F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089327B0u) goto L_089327B0;
    return;
L_089327B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(21368)));
    aot_gpr[31] = (0x089327BCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21340)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 201u, 0x08A47F80u>(ctx, &aot_mem) && ctx.pc == 0x089327BCu) goto L_089327BC;
    return;
L_089327BC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 480u);
    aot_gpr[31] = (0x089327D0u);
    aot_gpr[7] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 19u, 0x08A482F4u>(ctx, &aot_mem) && ctx.pc == 0x089327D0u) goto L_089327D0;
    return;
L_089327D0:
    aot_gpr[31] = (0x089327D8u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 202u, 0x08A47FD4u>(ctx, &aot_mem) && ctx.pc == 0x089327D8u) goto L_089327D8;
    return;
L_089327D8:
    aot_gpr[31] = (0x089327E0u);
    aot_gpr[4] = (65280u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 5u, 0x08A48114u>(ctx, &aot_mem) && ctx.pc == 0x089327E0u) goto L_089327E0;
    return;
L_089327E0:
    aot_gpr[31] = (0x089327E8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 7u, 0x08A48138u>(ctx, &aot_mem) && ctx.pc == 0x089327E8u) goto L_089327E8;
    return;
L_089327E8:
    aot_gpr[31] = (0x089327F0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 6u, 0x08A48128u>(ctx, &aot_mem) && ctx.pc == 0x089327F0u) goto L_089327F0;
    return;
L_089327F0:
    aot_gpr[31] = (0x089327F8u);
    aot_gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 8u, 0x08A48148u>(ctx, &aot_mem) && ctx.pc == 0x089327F8u) goto L_089327F8;
    return;
L_089327F8:
    aot_gpr[4] = (65409u << 16u);
    aot_gpr[31] = (0x08932804u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32640));
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 11u, 0x08A481ACu>(ctx, &aot_mem) && ctx.pc == 0x08932804u) goto L_08932804;
    return;
L_08932804:
    aot_gpr[31] = (0x0893280Cu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 12u, 0x08A481ECu>(ctx, &aot_mem) && ctx.pc == 0x0893280Cu) goto L_0893280C;
    return;
L_0893280C:
    aot_gpr[4] = (0u | 1808u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21320), aot_gpr[4]);
    aot_gpr[4] = (0u | 1912u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(21324), aot_gpr[4]);
    aot_gpr[4] = (0u | 1808u);
    aot_gpr[31] = (0x08932830u);
    aot_gpr[5] = (0u | 1912u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 10u, 0x08A48170u>(ctx, &aot_mem) && ctx.pc == 0x08932830u) goto L_08932830;
    return;
L_08932830:
    aot_gpr[31] = (0x08932838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 171u, 0x08A47D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08932838u) goto L_08932838;
    return;
L_08932838:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08932844u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08932844u) goto L_08932844;
    return;
L_08932844:
    aot_gpr[31] = (0x0893284Cu);
    // nop
    ctx.pc = 0x08A5AF3Cu;
    return;
L_0893284C:
    aot_gpr[31] = (0x08932854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 132u, 0x08A47944u>(ctx, &aot_mem) && ctx.pc == 0x08932854u) goto L_08932854;
    return;
L_08932854:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(21380), aot_gpr[2]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21296)));
    aot_gpr[31] = (0x08932874u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 64u, 0x08A473A8u>(ctx, &aot_mem) && ctx.pc == 0x08932874u) goto L_08932874;
    return;
L_08932874:
    aot_gpr[31] = (0x0893287Cu);
    aot_gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 8u, 0x08A48148u>(ctx, &aot_mem) && ctx.pc == 0x0893287Cu) goto L_0893287C;
    return;
L_0893287C:
    aot_gpr[31] = (0x08932884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 171u, 0x08A47D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08932884u) goto L_08932884;
    return;
L_08932884:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08932890u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 182u, 0x08A47E30u>(ctx, &aot_mem) && ctx.pc == 0x08932890u) goto L_08932890;
    return;
L_08932890:
    aot_gpr[31] = (0x08932898u);
    // nop
    ctx.pc = 0x08A5AF3Cu;
    return;
L_08932898:
    aot_gpr[31] = (0x089328A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 132u, 0x08A47944u>(ctx, &aot_mem) && ctx.pc == 0x089328A0u) goto L_089328A0;
    return;
L_089328A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(21380), aot_gpr[2]);
    aot_gpr[31] = (0x089328ACu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 192u, 0x08A47E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089328ACu) goto L_089328AC;
    return;
L_089328AC:
    aot_gpr[31] = (0x089328B4u);
    // nop
    ctx.pc = 0x08A5AFA4u;
    return;
L_089328B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21316)));
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(21312)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089328DCu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 64u, 0x08A473A8u>(ctx, &aot_mem) && ctx.pc == 0x089328DCu) goto L_089328DC;
    return;
L_089328DC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(21336), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-12892), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2244), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2195u << 16u);
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x08932908u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2308));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 177u, 0x08A47DF4u>(ctx, &aot_mem) && ctx.pc == 0x08932908u) goto L_08932908;
    return;
L_08932908:
    aot_gpr[31] = (0x08932910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 96u, 0x0893DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08932910u) goto L_08932910;
    return;
L_08932910:
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
L_08932940:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21388)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[9] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08932A08;
      }
      goto L_08932958;
    }
L_08932958:
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (2219u << 16u);
    goto L_08932964;
L_08932964:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21396)));
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[8]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[10] == 0u) {
    aot_gpr[10] = (aot_gpr[6] << 4u);
        goto L_08932984;
    }
    goto L_08932978;
L_08932978:
    { const bool branch_taken = aot_gpr[10] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_089329F4;
      }
      goto L_08932980;
    }
L_08932980:
    aot_gpr[10] = (aot_gpr[6] << 4u);
    goto L_08932984;
L_08932984:
    aot_gpr[2] = (aot_gpr[10] - aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[10] = (aot_gpr[2] - aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[11] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(12), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(20), aot_gpr[12]);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(32), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(36), aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    goto L_089329F4;
L_089329F4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21388)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[9] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08932964;
      }
      goto L_08932A08;
    }
L_08932A08:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21392), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[6] << 4u);
      if (branch_taken) {
          goto L_08932A50;
      }
      goto L_08932A1C;
    }
L_08932A1C:
    aot_gpr[4] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[4] - aot_gpr[7]);
    aot_gpr[8] = (0u | 2u);
    aot_gpr[4] = (2219u << 16u);
    goto L_08932A30;
L_08932A30:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21396)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(21388)));
    aot_gpr[9] = (aot_gpr[6] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08932A30;
      }
      goto L_08932A50;
    }
L_08932A50:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932A58:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29048));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932A70:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16160));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (0u | 2u);
    goto L_08932A80;
L_08932A80:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(316)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08932AA4;
      }
      goto L_08932A8C;
    }
L_08932A8C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08932A80;
      }
      goto L_08932A9C;
    }
L_08932A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932AAC;
      }
      goto L_08932AA4;
    }
L_08932AA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08932AB0;
      }
      goto L_08932AAC;
    }
L_08932AAC:
    aot_gpr[2] = (0u | 0u);
    goto L_08932AB0;
L_08932AB0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932AB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08932AECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08932A70;
L_08932AEC:
    aot_gpr[18] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16160));
      if (branch_taken) {
          goto L_08932B20;
      }
      goto L_08932AF8;
    }
L_08932AF8:
    aot_gpr[31] = (0x08932B00u);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_08932B00:
    aot_gpr[4] = (aot_gpr[2] & 32u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932B20;
      }
      goto L_08932B0C;
    }
L_08932B0C:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x08932B18u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B2D4u;
    return;
L_08932B18:
    aot_gpr[31] = (0x08932B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08932B20u) goto L_08932B20;
    return;
L_08932B20:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (32770u << 16u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25364)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[30] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[18]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(810));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25368)));
    goto L_08932B44;
L_08932B44:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08932CE4;
      }
      goto L_08932B54;
    }
L_08932B54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(313)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932CE4;
      }
      goto L_08932B60;
    }
L_08932B60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932C1C;
      }
      goto L_08932B6C;
    }
L_08932B6C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08932B78u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B2ACu;
    return;
L_08932B78:
    aot_gpr[31] = (0x08932B80u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08932B80u) goto L_08932B80;
    return;
L_08932B80:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932B8C;
      }
      goto L_08932B88;
    }
L_08932B88:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(0u));
    goto L_08932B8C;
L_08932B8C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[19];
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08932BB4;
      }
      goto L_08932B94;
    }
L_08932B94:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08932BB4;
      }
      goto L_08932B9C;
    }
L_08932B9C:
    aot_gpr[4] = (aot_gpr[17] << 8u);
    aot_gpr[5] = (aot_gpr[17] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[16]);
      if (branch_taken) {
          goto L_08932C14;
      }
      goto L_08932BB4;
    }
L_08932BB4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08932C00;
      }
      goto L_08932BBC;
    }
L_08932BBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] ^ aot_gpr[23]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[22] ? 1u : 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932C00;
      }
      goto L_08932BE4;
    }
L_08932BE4:
    aot_gpr[6] = (aot_gpr[17] << 8u);
    aot_gpr[7] = (aot_gpr[17] << 6u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[4]);
      if (branch_taken) {
          goto L_08932C14;
      }
      goto L_08932C00;
    }
L_08932C00:
    aot_gpr[4] = (aot_gpr[17] << 8u);
    aot_gpr[5] = (aot_gpr[17] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    goto L_08932C14;
L_08932C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932CE4;
      }
      goto L_08932C1C;
    }
L_08932C1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08932C28u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B2A4u;
    return;
L_08932C28:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08932C50;
      }
      goto L_08932C34;
    }
L_08932C34:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08932C58;
      }
      goto L_08932C48;
    }
L_08932C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932C7C;
      }
      goto L_08932C50;
    }
L_08932C50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08932CF8;
      }
      goto L_08932C58;
    }
L_08932C58:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08932C7C;
      }
      goto L_08932C60;
    }
L_08932C60:
    aot_gpr[8] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] << 6u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08932C94;
      }
      goto L_08932C7C;
    }
L_08932C7C:
    aot_gpr[7] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] << 6u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_08932C94;
L_08932C94:
    aot_gpr[7] = (aot_gpr[5] ^ aot_gpr[23]);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[4] < aot_gpr[22] ? 1u : 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[8]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932CD0;
      }
      goto L_08932CB4;
    }
L_08932CB4:
    aot_gpr[7] = (aot_gpr[6] << 8u);
    aot_gpr[6] = (aot_gpr[6] << 6u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[4]);
      if (branch_taken) {
          goto L_08932CE4;
      }
      goto L_08932CD0;
    }
L_08932CD0:
    aot_gpr[4] = (aot_gpr[6] << 8u);
    aot_gpr[5] = (aot_gpr[6] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), 0u);
    goto L_08932CE4;
L_08932CE4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08932B44;
      }
      goto L_08932CF4;
    }
L_08932CF4:
    aot_gpr[2] = (0u | 1u);
    goto L_08932CF8;
L_08932CF8:
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
L_08932D28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08932D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 148u, 0x08943A70u>(ctx, &aot_mem) && ctx.pc == 0x08932D3Cu) goto L_08932D3C;
    return;
L_08932D3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932D7C;
      }
      goto L_08932D44;
    }
L_08932D44:
    aot_gpr[31] = (0x08932D4Cu);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5B094u;
    return;
L_08932D4C:
    aot_gpr[31] = (0x08932D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08932D54u) goto L_08932D54;
    return;
L_08932D54:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22308)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932D74;
      }
      goto L_08932D64;
    }
L_08932D64:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22308)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08932D74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932D74u) goto L_08932D74;
    return;
L_08932D74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08932DCC;
      }
      goto L_08932D7C;
    }
L_08932D7C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22308)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932D9C;
      }
      goto L_08932D8C;
    }
L_08932D8C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22308)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08932D9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08932D9Cu) goto L_08932D9C;
    return;
L_08932D9C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16156)));
    aot_gpr[16] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08932DBCu);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B02Cu;
    return;
L_08932DBC:
    aot_gpr[31] = (0x08932DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08932DC4u) goto L_08932DC4;
    return;
L_08932DC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08932DCC;
      }
      goto L_08932DCC;
    }
L_08932DCC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932DDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21280)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932E08;
    }
L_08932E08:
    aot_gpr[18] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(21400)));
      if (branch_taken) {
          goto L_08932E34;
      }
      goto L_08932E14;
    }
L_08932E14:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08932E24u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B084u;
    return;
L_08932E24:
    aot_gpr[31] = (0x08932E2Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08932E2Cu) goto L_08932E2C;
    return;
L_08932E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932E48;
      }
      goto L_08932E34;
    }
L_08932E34:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08932E44u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_08932E44:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08932E48;
L_08932E48:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08932E54;
      }
      goto L_08932E50;
    }
L_08932E50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(21280), aot_gpr[17]);
    goto L_08932E54;
L_08932E54:
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
L_08932E6C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21408));
    aot_gpr[5] = (0u | 0u);
    goto L_08932E7C;
L_08932E7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08932EA0;
      }
      goto L_08932E88;
    }
L_08932E88:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08932E7C;
      }
      goto L_08932E98;
    }
L_08932E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932EA8;
      }
      goto L_08932EA0;
    }
L_08932EA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08932EA8;
      }
      goto L_08932EA8;
    }
L_08932EA8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932EB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21280)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08932EE4;
      }
      goto L_08932ECC;
    }
L_08932ECC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(21280), aot_gpr[5]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21400)));
    aot_gpr[31] = (0x08932EE4u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B09Cu;
    return;
L_08932EE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932EF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    aot_gpr[10] = (aot_gpr[4] << 8u);
    aot_gpr[11] = (aot_gpr[4] << 6u);
    aot_gpr[2] = (2219u << 16u);
    aot_gpr[21] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[10] + aot_gpr[11]);
    aot_gpr[8] = (aot_gpr[2] + static_cast<std::uint32_t>(16160));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    aot_gpr[18] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[9] = (0u | 2u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[30] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[9];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08932F80;
      }
      goto L_08932F58;
    }
L_08932F58:
    aot_gpr[31] = (0x08932F60u);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_08932F60:
    aot_gpr[4] = (aot_gpr[2] & 32u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932F80;
      }
      goto L_08932F6C;
    }
L_08932F6C:
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x08932F78u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B2D4u;
    return;
L_08932F78:
    aot_gpr[31] = (0x08932F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x08932F80u) goto L_08932F80;
    return;
L_08932F80:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932FB4;
      }
      goto L_08932F88;
    }
L_08932F88:
    aot_gpr[31] = (0x08932F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 33u, 0x08933178u>(ctx, &aot_mem) && ctx.pc == 0x08932F90u) goto L_08932F90;
    return;
L_08932F90:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08932FA8;
      }
      goto L_08932F98;
    }
L_08932F98:
    aot_gpr[31] = (0x08932FA0u);
    aot_gpr[4] = (0u | 0u);
    goto L_08932AB8;
L_08932FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932F88;
      }
      goto L_08932FA8;
    }
L_08932FA8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08932FB4u);
    aot_gpr[5] = (0u | 1u);
    goto L_08932DDC;
L_08932FB4:
    aot_gpr[31] = (0x08932FBCu);
    // nop
    goto L_08932E6C;
L_08932FBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08932FCC;
      }
      goto L_08932FC4;
    }
L_08932FC4:
    aot_gpr[31] = (0x08932FCCu);
    aot_gpr[4] = (0u | 0u);
    goto L_08932AB8;
L_08932FCC:
    aot_gpr[31] = (0x08932FD4u);
    // nop
    goto L_08932E6C;
L_08932FD4:
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(21408));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[30]);
    ctx.pc = 0x08933000u; return;
}

void recomp_unit_0302(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0302_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_302(Runtime &runtime) {
    runtime.register_generated_unit(302u, 0x08932000u, 4096u, &recomp_unit_0302, &recomp_unit_0302_entry);
    runtime.register_function(0x08932000u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932008u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932020u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893202Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893203Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932048u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932060u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932078u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089320DCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932108u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932114u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893211Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932124u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893212Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893213Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932144u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932158u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932160u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932174u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893217Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893219Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089321B8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089321F8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893222Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932248u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893226Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932288u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089322D0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932328u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932364u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932374u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089323ACu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089323E4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089323FCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932404u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932408u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932434u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932440u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932448u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932450u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932478u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932488u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932494u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089324D4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089324E0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089324E8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089324F0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932518u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932524u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893252Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932534u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893255Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893256Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932578u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089325B8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089325C4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089325DCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089325E0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089325ECu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932628u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932634u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893263Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932640u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932670u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932698u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089326A4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089326ACu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089326B0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089326DCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932704u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932710u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932718u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932720u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893274Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893279Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089327B0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089327BCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089327D0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089327D8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089327E0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089327E8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089327F0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089327F8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932804u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893280Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932830u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932838u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932844u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893284Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932854u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932874u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x0893287Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932884u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932890u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932898u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089328A0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089328ACu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089328B4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089328DCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932908u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932910u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932940u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932958u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932964u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932978u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932980u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932984u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x089329F4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A08u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A1Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A30u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A50u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A58u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A70u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A80u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A8Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932A9Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932AA4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932AACu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932AB0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932AB8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932AECu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932AF8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B00u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B0Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B18u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B20u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B44u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B54u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B60u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B6Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B78u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B80u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B88u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B8Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B94u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932B9Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932BB4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932BBCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932BE4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C00u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C14u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C1Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C28u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C34u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C48u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C50u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C58u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C60u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C7Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932C94u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932CB4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932CD0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932CE4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932CF4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932CF8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D28u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D3Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D44u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D4Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D54u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D64u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D74u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D7Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D8Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932D9Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932DBCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932DC4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932DCCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932DDCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E08u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E14u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E24u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E2Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E34u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E44u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E48u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E50u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E54u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E6Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E7Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E88u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932E98u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932EA0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932EA8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932EB0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932ECCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932EE4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932EF0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932F58u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932F60u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932F6Cu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932F78u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932F80u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932F88u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932F90u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932F98u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932FA0u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932FA8u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932FB4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932FBCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932FC4u, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932FCCu, &recomp_unit_0302, "recomp_unit_0302");
    runtime.register_function(0x08932FD4u, &recomp_unit_0302, "recomp_unit_0302");
}
} // namespace psprecomp
