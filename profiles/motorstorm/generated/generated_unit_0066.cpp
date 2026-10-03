#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0066[1023] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55,
    0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 68, 69, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0,
    84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 89, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0,
    94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0,
    0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0,
    112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156,
    0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0,
    0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181,
};
void recomp_unit_0066_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08846000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0066[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08846000;
    case 2u: goto L_0884600C;
    case 3u: goto L_0884604C;
    case 4u: goto L_08846060;
    case 5u: goto L_08846078;
    case 6u: goto L_08846090;
    case 7u: goto L_088460A8;
    case 8u: goto L_088460C0;
    case 9u: goto L_088460D8;
    case 10u: goto L_088460F0;
    case 11u: goto L_08846108;
    case 12u: goto L_08846120;
    case 13u: goto L_08846138;
    case 14u: goto L_08846150;
    case 15u: goto L_08846168;
    case 16u: goto L_08846180;
    case 17u: goto L_08846198;
    case 18u: goto L_088461B0;
    case 19u: goto L_088461C8;
    case 20u: goto L_088461E0;
    case 21u: goto L_088461F8;
    case 22u: goto L_08846210;
    case 23u: goto L_08846228;
    case 24u: goto L_08846244;
    case 25u: goto L_08846258;
    case 26u: goto L_0884626C;
    case 27u: goto L_08846280;
    case 28u: goto L_08846294;
    case 29u: goto L_088462A8;
    case 30u: goto L_088462BC;
    case 31u: goto L_088462D0;
    case 32u: goto L_088462E4;
    case 33u: goto L_088462F8;
    case 34u: goto L_088464CC;
    case 35u: goto L_088464E4;
    case 36u: goto L_08846508;
    case 37u: goto L_0884652C;
    case 38u: goto L_08846550;
    case 39u: goto L_08846574;
    case 40u: goto L_08846598;
    case 41u: goto L_088465BC;
    case 42u: goto L_088465E0;
    case 43u: goto L_08846604;
    case 44u: goto L_08846628;
    case 45u: goto L_0884664C;
    case 46u: goto L_08846668;
    case 47u: goto L_08846684;
    case 48u: goto L_088466A0;
    case 49u: goto L_088466BC;
    case 50u: goto L_088466D4;
    case 51u: goto L_08846704;
    case 52u: goto L_08846750;
    case 53u: goto L_0884676C;
    case 54u: goto L_08846774;
    case 55u: goto L_0884677C;
    case 56u: goto L_08846784;
    case 57u: goto L_0884678C;
    case 58u: goto L_08846794;
    case 59u: goto L_088467A8;
    case 60u: goto L_088467BC;
    case 61u: goto L_088467C8;
    case 62u: goto L_088467D0;
    case 63u: goto L_088467E8;
    case 64u: goto L_088467F0;
    case 65u: goto L_08846808;
    case 66u: goto L_08846814;
    case 67u: goto L_0884681C;
    case 68u: goto L_08846828;
    case 69u: goto L_0884682C;
    case 70u: goto L_0884683C;
    case 71u: goto L_08846848;
    case 72u: goto L_08846850;
    case 73u: goto L_08846858;
    case 74u: goto L_08846860;
    case 75u: goto L_08846874;
    case 76u: goto L_08846888;
    case 77u: goto L_08846894;
    case 78u: goto L_088468A8;
    case 79u: goto L_088468B4;
    case 80u: goto L_088468BC;
    case 81u: goto L_088468D4;
    case 82u: goto L_088468DC;
    case 83u: goto L_088468F4;
    case 84u: goto L_08846900;
    case 85u: goto L_08846910;
    case 86u: goto L_08846918;
    case 87u: goto L_08846924;
    case 88u: goto L_08846934;
    case 89u: goto L_08846938;
    case 90u: goto L_08846948;
    case 91u: goto L_08846954;
    case 92u: goto L_0884695C;
    case 93u: goto L_0884696C;
    case 94u: goto L_08846980;
    case 95u: goto L_08846990;
    case 96u: goto L_08846998;
    case 97u: goto L_088469AC;
    case 98u: goto L_088469C0;
    case 99u: goto L_088469CC;
    case 100u: goto L_088469D4;
    case 101u: goto L_088469EC;
    case 102u: goto L_088469F4;
    case 103u: goto L_08846A0C;
    case 104u: goto L_08846A18;
    case 105u: goto L_08846A20;
    case 106u: goto L_08846A2C;
    case 107u: goto L_08846A30;
    case 108u: goto L_08846A44;
    case 109u: goto L_08846A54;
    case 110u: goto L_08846A60;
    case 111u: goto L_08846A74;
    case 112u: goto L_08846A80;
    case 113u: goto L_08846A94;
    case 114u: goto L_08846AA0;
    case 115u: goto L_08846AB4;
    case 116u: goto L_08846AC0;
    case 117u: goto L_08846AD4;
    case 118u: goto L_08846AF4;
    case 119u: goto L_08846B10;
    case 120u: goto L_08846B2C;
    case 121u: goto L_08846B48;
    case 122u: goto L_08846B64;
    case 123u: goto L_08846B80;
    case 124u: goto L_08846B9C;
    case 125u: goto L_08846BB8;
    case 126u: goto L_08846BD4;
    case 127u: goto L_08846BF0;
    case 128u: goto L_08846C0C;
    case 129u: goto L_08846C28;
    case 130u: goto L_08846C44;
    case 131u: goto L_08846C54;
    case 132u: goto L_08846C60;
    case 133u: goto L_08846C68;
    case 134u: goto L_08846C78;
    case 135u: goto L_08846C98;
    case 136u: goto L_08846CA8;
    case 137u: goto L_08846CB0;
    case 138u: goto L_08846CB8;
    case 139u: goto L_08846CC0;
    case 140u: goto L_08846CD0;
    case 141u: goto L_08846CF0;
    case 142u: goto L_08846D00;
    case 143u: goto L_08846D10;
    case 144u: goto L_08846D30;
    case 145u: goto L_08846D3C;
    case 146u: goto L_08846D48;
    case 147u: goto L_08846D58;
    case 148u: goto L_08846D70;
    case 149u: goto L_08846D7C;
    case 150u: goto L_08846D90;
    case 151u: goto L_08846DAC;
    case 152u: goto L_08846DB8;
    case 153u: goto L_08846DCC;
    case 154u: goto L_08846DE8;
    case 155u: goto L_08846DF4;
    case 156u: goto L_08846DFC;
    case 157u: goto L_08846E0C;
    case 158u: goto L_08846E18;
    case 159u: goto L_08846E2C;
    case 160u: goto L_08846E38;
    case 161u: goto L_08846E4C;
    case 162u: goto L_08846E58;
    case 163u: goto L_08846E6C;
    case 164u: goto L_08846E78;
    case 165u: goto L_08846E8C;
    case 166u: goto L_08846E98;
    case 167u: goto L_08846EAC;
    case 168u: goto L_08846ECC;
    case 169u: goto L_08846EE8;
    case 170u: goto L_08846F04;
    case 171u: goto L_08846F20;
    case 172u: goto L_08846F3C;
    case 173u: goto L_08846F58;
    case 174u: goto L_08846F74;
    case 175u: goto L_08846F90;
    case 176u: goto L_08846FAC;
    case 177u: goto L_08846FC8;
    case 178u: goto L_08846FD8;
    case 179u: goto L_08846FE8;
    case 180u: goto L_08846FF0;
    case 181u: goto L_08846FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08846000:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884600C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[31]);
    aot_gpr[31] = (0x0884604Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4692));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0884604Cu) goto L_0884604C;
    return;
L_0884604C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[31] = (0x08846060u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4524));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846060u) goto L_08846060;
    return;
L_08846060:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846078u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4508));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846078u) goto L_08846078;
    return;
L_08846078:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846090u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4484));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846090u) goto L_08846090;
    return;
L_08846090:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088460A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4468));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088460A8u) goto L_088460A8;
    return;
L_088460A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088460C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4444));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088460C0u) goto L_088460C0;
    return;
L_088460C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088460D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4424));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088460D8u) goto L_088460D8;
    return;
L_088460D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088460F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4396));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088460F0u) goto L_088460F0;
    return;
L_088460F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846108u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4380));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846108u) goto L_08846108;
    return;
L_08846108:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846120u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4356));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846120u) goto L_08846120;
    return;
L_08846120:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846138u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4344));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846138u) goto L_08846138;
    return;
L_08846138:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846150u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4324));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846150u) goto L_08846150;
    return;
L_08846150:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846168u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4312));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846168u) goto L_08846168;
    return;
L_08846168:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846180u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4292));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846180u) goto L_08846180;
    return;
L_08846180:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846198u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4272));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846198u) goto L_08846198;
    return;
L_08846198:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088461B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4244));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088461B0u) goto L_088461B0;
    return;
L_088461B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088461C8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4224));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088461C8u) goto L_088461C8;
    return;
L_088461C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088461E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4196));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088461E0u) goto L_088461E0;
    return;
L_088461E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088461F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4180));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088461F8u) goto L_088461F8;
    return;
L_088461F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846210u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4156));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846210u) goto L_08846210;
    return;
L_08846210:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[2]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x08846228u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4140));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846228u) goto L_08846228;
    return;
L_08846228:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08846244u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4120));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846244u) goto L_08846244;
    return;
L_08846244:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08846258u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4100));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846258u) goto L_08846258;
    return;
L_08846258:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884626Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4072));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884626Cu) goto L_0884626C;
    return;
L_0884626C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08846280u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4052));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846280u) goto L_08846280;
    return;
L_08846280:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08846294u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4028));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846294u) goto L_08846294;
    return;
L_08846294:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088462A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4004));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088462A8u) goto L_088462A8;
    return;
L_088462A8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088462BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3972));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088462BCu) goto L_088462BC;
    return;
L_088462BC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088462D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3944));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088462D0u) goto L_088462D0;
    return;
L_088462D0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088462E4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3908));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088462E4u) goto L_088462E4;
    return;
L_088462E4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088462F8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3892));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088462F8u) goto L_088462F8;
    return;
L_088462F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3100)));
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (57344u << 16u);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_088464CC;
    }
L_088464CC:
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[7]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-3096)));
    jump_target = aot_gpr[1];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088464E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_08846508;
    }
L_08846508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_0884652C;
    }
L_0884652C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_08846550;
    }
L_08846550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_08846574;
    }
L_08846574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_08846598;
    }
L_08846598:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_088465BC;
    }
L_088465BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_088465E0;
    }
L_088465E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_08846604;
    }
L_08846604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_08846628;
    }
L_08846628:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_0884664C;
    }
L_0884664C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_08846668;
    }
L_08846668:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_08846684;
    }
L_08846684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_088466A0;
    }
L_088466A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088466D4;
      }
      goto L_088466BC;
    }
L_088466BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088466D4;
L_088466D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[7] = (16128u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x08846750u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 5u, 0x08866050u>(ctx, &aot_mem) && ctx.pc == 0x08846750u) goto L_08846750;
    return;
L_08846750:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3096)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08846784;
      }
      goto L_0884676C;
    }
L_0884676C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 51u, 0x08847384u>(ctx, &aot_mem); return;
      }
      goto L_08846774;
    }
L_08846774:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08846794;
      }
      goto L_0884677C;
    }
L_0884677C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08846860;
      }
      goto L_08846784;
    }
L_08846784:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08846998;
      }
      goto L_0884678C;
    }
L_0884678C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 51u, 0x08847384u>(ctx, &aot_mem); return;
      }
      goto L_08846794;
    }
L_08846794:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088467A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4712));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088467A8u) goto L_088467A8;
    return;
L_088467A8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088467BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3868));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088467BCu) goto L_088467BC;
    return;
L_088467BC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088467C8u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088467C8u) goto L_088467C8;
    return;
L_088467C8:
    aot_gpr[31] = (0x088467D0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088467D0u) goto L_088467D0;
    return;
L_088467D0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2176));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088467E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x088467E8u) goto L_088467E8;
    return;
L_088467E8:
    aot_gpr[31] = (0x088467F0u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088467F0u) goto L_088467F0;
    return;
L_088467F0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884681C;
      }
      goto L_08846808;
    }
L_08846808:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08846814u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846814u) goto L_08846814;
    return;
L_08846814:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_0884682C;
      }
      goto L_0884681C;
    }
L_0884681C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08846828u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846828u) goto L_08846828;
    return;
L_08846828:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_0884682C;
L_0884682C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884683Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3852));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884683Cu) goto L_0884683C;
    return;
L_0884683C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08846848u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 132u, 0x088457F8u>(ctx, &aot_mem) && ctx.pc == 0x08846848u) goto L_08846848;
    return;
L_08846848:
    aot_gpr[31] = (0x08846850u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 231u, 0x08845DB8u>(ctx, &aot_mem) && ctx.pc == 0x08846850u) goto L_08846850;
    return;
L_08846850:
    aot_gpr[31] = (0x08846858u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 242u, 0x08845EE8u>(ctx, &aot_mem) && ctx.pc == 0x08846858u) goto L_08846858;
    return;
L_08846858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 90u, 0x088475E4u>(ctx, &aot_mem); return;
      }
      goto L_08846860;
    }
L_08846860:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08846874u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4692));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08846874u) goto L_08846874;
    return;
L_08846874:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846888u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3868));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846888u) goto L_08846888;
    return;
L_08846888:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846894u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846894u) goto L_08846894;
    return;
L_08846894:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088468A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3836));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088468A8u) goto L_088468A8;
    return;
L_088468A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088468B4u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088468B4u) goto L_088468B4;
    return;
L_088468B4:
    aot_gpr[31] = (0x088468BCu);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088468BCu) goto L_088468BC;
    return;
L_088468BC:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2176));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088468D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x088468D4u) goto L_088468D4;
    return;
L_088468D4:
    aot_gpr[31] = (0x088468DCu);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088468DCu) goto L_088468DC;
    return;
L_088468DC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846918;
      }
      goto L_088468F4;
    }
L_088468F4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08846900u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846900u) goto L_08846900;
    return;
L_08846900:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08846910u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846910u) goto L_08846910;
    return;
L_08846910:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_08846938;
      }
      goto L_08846918;
    }
L_08846918:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08846924u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846924u) goto L_08846924;
    return;
L_08846924:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08846934u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846934u) goto L_08846934;
    return;
L_08846934:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_08846938;
L_08846938:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846948u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3852));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846948u) goto L_08846948;
    return;
L_08846948:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08846954u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 132u, 0x088457F8u>(ctx, &aot_mem) && ctx.pc == 0x08846954u) goto L_08846954;
    return;
L_08846954:
    aot_gpr[31] = (0x0884695Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0884600C;
L_0884695C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884696Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3824));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0884696Cu) goto L_0884696C;
    return;
L_0884696C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846980u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3816));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846980u) goto L_08846980;
    return;
L_08846980:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846990u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 186u, 0x08845AF0u>(ctx, &aot_mem) && ctx.pc == 0x08846990u) goto L_08846990;
    return;
L_08846990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08846858;
      }
      goto L_08846998;
    }
L_08846998:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088469ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4676));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088469ACu) goto L_088469AC;
    return;
L_088469AC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088469C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3868));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088469C0u) goto L_088469C0;
    return;
L_088469C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088469CCu);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088469CCu) goto L_088469CC;
    return;
L_088469CC:
    aot_gpr[31] = (0x088469D4u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088469D4u) goto L_088469D4;
    return;
L_088469D4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2176));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088469ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x088469ECu) goto L_088469EC;
    return;
L_088469EC:
    aot_gpr[31] = (0x088469F4u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088469F4u) goto L_088469F4;
    return;
L_088469F4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08846A20;
      }
      goto L_08846A0C;
    }
L_08846A0C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08846A18u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846A18u) goto L_08846A18;
    return;
L_08846A18:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_08846A30;
      }
      goto L_08846A20;
    }
L_08846A20:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08846A2Cu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846A2Cu) goto L_08846A2C;
    return;
L_08846A2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_08846A30;
L_08846A30:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2696)));
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08846DFC;
      }
      goto L_08846A44;
    }
L_08846A44:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846A54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3796));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846A54u) goto L_08846A54;
    return;
L_08846A54:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846A60u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846A60u) goto L_08846A60;
    return;
L_08846A60:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846A74u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3772));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846A74u) goto L_08846A74;
    return;
L_08846A74:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846A80u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846A80u) goto L_08846A80;
    return;
L_08846A80:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846A94u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3752));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846A94u) goto L_08846A94;
    return;
L_08846A94:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846AA0u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846AA0u) goto L_08846AA0;
    return;
L_08846AA0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846AB4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3732));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846AB4u) goto L_08846AB4;
    return;
L_08846AB4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846AC0u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846AC0u) goto L_08846AC0;
    return;
L_08846AC0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846AD4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3712));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846AD4u) goto L_08846AD4;
    return;
L_08846AD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846AF4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3688));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846AF4u) goto L_08846AF4;
    return;
L_08846AF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846B10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3656));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846B10u) goto L_08846B10;
    return;
L_08846B10:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846B2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3636));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846B2Cu) goto L_08846B2C;
    return;
L_08846B2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846B48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3612));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846B48u) goto L_08846B48;
    return;
L_08846B48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846B64u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3592));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846B64u) goto L_08846B64;
    return;
L_08846B64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846B80u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3568));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846B80u) goto L_08846B80;
    return;
L_08846B80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846B9Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3548));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846B9Cu) goto L_08846B9C;
    return;
L_08846B9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846BB8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3524));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846BB8u) goto L_08846BB8;
    return;
L_08846BB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846BD4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3504));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846BD4u) goto L_08846BD4;
    return;
L_08846BD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846BF0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3480));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846BF0u) goto L_08846BF0;
    return;
L_08846BF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846C0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3452));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846C0Cu) goto L_08846C0C;
    return;
L_08846C0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846C28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3424));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846C28u) goto L_08846C28;
    return;
L_08846C28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846C44u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3396));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846C44u) goto L_08846C44;
    return;
L_08846C44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    aot_gpr[31] = (0x08846C54u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08846C54u) goto L_08846C54;
    return;
L_08846C54:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08846CA8;
      }
      goto L_08846C60;
    }
L_08846C60:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08846D3C;
      }
      goto L_08846C68;
    }
L_08846C68:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846C78u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3368));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846C78u) goto L_08846C78;
    return;
L_08846C78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846C98u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3340));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846C98u) goto L_08846C98;
    return;
L_08846C98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08846D3C;
      }
      goto L_08846CA8;
    }
L_08846CA8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08846CC0;
      }
      goto L_08846CB0;
    }
L_08846CB0:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08846D00;
      }
      goto L_08846CB8;
    }
L_08846CB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08846D3C;
      }
      goto L_08846CC0;
    }
L_08846CC0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846CD0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3312));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846CD0u) goto L_08846CD0;
    return;
L_08846CD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846CF0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3340));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846CF0u) goto L_08846CF0;
    return;
L_08846CF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08846D3C;
      }
      goto L_08846D00;
    }
L_08846D00:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846D10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3312));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846D10u) goto L_08846D10;
    return;
L_08846D10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[22] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846D30u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3368));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846D30u) goto L_08846D30;
    return;
L_08846D30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08846D3C;
L_08846D3C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08846D48u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25316)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 16u, 0x0881C13Cu>(ctx, &aot_mem) && ctx.pc == 0x08846D48u) goto L_08846D48;
    return;
L_08846D48:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08846D58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2176)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x08846D58u) goto L_08846D58;
    return;
L_08846D58:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2192)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_08846D70;
    }
    goto L_08846D70;
L_08846D70:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08846D7Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846D7Cu) goto L_08846D7C;
    return;
L_08846D7C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2176));
    aot_gpr[31] = (0x08846D90u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x08846D90u) goto L_08846D90;
    return;
L_08846D90:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_08846DAC;
    }
    goto L_08846DAC;
L_08846DAC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08846DB8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846DB8u) goto L_08846DB8;
    return;
L_08846DB8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2176));
    aot_gpr[31] = (0x08846DCCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 155u, 0x0881CAF4u>(ctx, &aot_mem) && ctx.pc == 0x08846DCCu) goto L_08846DCC;
    return;
L_08846DCC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2192));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(2)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_08846DE8;
    }
    goto L_08846DE8;
L_08846DE8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08846DF4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 163u, 0x0881CB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08846DF4u) goto L_08846DF4;
    return;
L_08846DF4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08847274u>(ctx, &aot_mem); return;
      }
      goto L_08846DFC;
    }
L_08846DFC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846E0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3712));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846E0Cu) goto L_08846E0C;
    return;
L_08846E0C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846E18u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846E18u) goto L_08846E18;
    return;
L_08846E18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846E2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3656));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846E2Cu) goto L_08846E2C;
    return;
L_08846E2C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846E38u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846E38u) goto L_08846E38;
    return;
L_08846E38:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846E4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3612));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846E4Cu) goto L_08846E4C;
    return;
L_08846E4C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846E58u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846E58u) goto L_08846E58;
    return;
L_08846E58:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846E6Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3568));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846E6Cu) goto L_08846E6C;
    return;
L_08846E6C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846E78u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846E78u) goto L_08846E78;
    return;
L_08846E78:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846E8Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3524));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846E8Cu) goto L_08846E8C;
    return;
L_08846E8C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08846E98u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08846E98u) goto L_08846E98;
    return;
L_08846E98:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846EACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3796));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846EACu) goto L_08846EAC;
    return;
L_08846EAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[23] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08846ECCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3284));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846ECCu) goto L_08846ECC;
    return;
L_08846ECC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846EE8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3772));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846EE8u) goto L_08846EE8;
    return;
L_08846EE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846F04u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3252));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846F04u) goto L_08846F04;
    return;
L_08846F04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846F20u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3752));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846F20u) goto L_08846F20;
    return;
L_08846F20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846F3Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3228));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846F3Cu) goto L_08846F3C;
    return;
L_08846F3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846F58u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3732));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846F58u) goto L_08846F58;
    return;
L_08846F58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846F74u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3204));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846F74u) goto L_08846F74;
    return;
L_08846F74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846F90u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3312));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846F90u) goto L_08846F90;
    return;
L_08846F90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846FACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3368));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846FACu) goto L_08846FAC;
    return;
L_08846FAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[31] = (0x08846FC8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3340));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08846FC8u) goto L_08846FC8;
    return;
L_08846FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[23]);
    aot_gpr[31] = (0x08846FD8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08846FD8u) goto L_08846FD8;
    return;
L_08846FD8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 5u, 0x08847054u>(ctx, &aot_mem); return;
      }
      goto L_08846FE8;
    }
L_08846FE8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x0884717Cu>(ctx, &aot_mem); return;
      }
      goto L_08846FF0;
    }
L_08846FF0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 8u, 0x0884706Cu>(ctx, &aot_mem); return;
      }
      goto L_08846FF8;
    }
L_08846FF8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08847000u; return;
}

void recomp_unit_0066(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0066_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_66(Runtime &runtime) {
    runtime.register_generated_unit(66u, 0x08846000u, 4096u, &recomp_unit_0066, &recomp_unit_0066_entry);
    runtime.register_function(0x08846000u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884600Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884604Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846060u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846078u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846090u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088460A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088460C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088460D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088460F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846108u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846120u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846138u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846150u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846168u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846180u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846198u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088461B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088461C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088461E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088461F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846210u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846228u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846244u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846258u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884626Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846280u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846294u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088462A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088462BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088462D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088462E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088462F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088464CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088464E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846508u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884652Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846550u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846574u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846598u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088465BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088465E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846604u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846628u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884664Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846668u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846684u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088466A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088466BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088466D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846704u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846750u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884676Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846774u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884677Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846784u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884678Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846794u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088467A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088467BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088467C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088467D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088467E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088467F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846808u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846814u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884681Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846828u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884682Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884683Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846848u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846850u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846858u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846860u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846874u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846888u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846894u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088468A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088468B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088468BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088468D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088468DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088468F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846900u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846910u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846918u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846924u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846934u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846938u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846948u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846954u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884695Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0884696Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846980u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846990u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846998u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088469ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088469C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088469CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088469D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088469ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x088469F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A54u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846A94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846AA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846AB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846AC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846AD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846AF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846B10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846B2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846B48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846B64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846B80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846B9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846BB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846BD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846BF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846C0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846C28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846C44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846C54u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846C60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846C68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846C78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846C98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846CA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846CB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846CB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846CC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846CD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846CF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D00u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846D90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846DACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846DB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846DCCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846DE8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846DF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846DFCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E6Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846E98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846EACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846ECCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846EE8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846F04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846F20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846F3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846F58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846F74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846F90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846FACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846FC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846FD8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846FE8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846FF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x08846FF8u, &recomp_unit_0066, "recomp_unit_0066");
}
} // namespace psprecomp
