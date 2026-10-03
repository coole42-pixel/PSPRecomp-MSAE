#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0563[1024] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46,
    0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 82, 0, 0, 0, 83, 84, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 0,
    89, 0, 0, 90, 0, 91, 0, 92, 93, 0, 0, 94, 0, 95, 96, 0, 97, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0,
    110, 0, 111, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0,
    0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 148, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0,
    162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 167, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 192,
};
void recomp_unit_0563_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A37000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0563[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A37000;
    case 2u: goto L_08A37014;
    case 3u: goto L_08A37044;
    case 4u: goto L_08A3704C;
    case 5u: goto L_08A3706C;
    case 6u: goto L_08A3708C;
    case 7u: goto L_08A370A0;
    case 8u: goto L_08A370B4;
    case 9u: goto L_08A370C8;
    case 10u: goto L_08A370F8;
    case 11u: goto L_08A37110;
    case 12u: goto L_08A3712C;
    case 13u: goto L_08A3713C;
    case 14u: goto L_08A37160;
    case 15u: goto L_08A37188;
    case 16u: goto L_08A371B4;
    case 17u: goto L_08A371CC;
    case 18u: goto L_08A371E0;
    case 19u: goto L_08A371F8;
    case 20u: goto L_08A3720C;
    case 21u: goto L_08A3722C;
    case 22u: goto L_08A37244;
    case 23u: goto L_08A37258;
    case 24u: goto L_08A37270;
    case 25u: goto L_08A37284;
    case 26u: goto L_08A3729C;
    case 27u: goto L_08A372B0;
    case 28u: goto L_08A372C8;
    case 29u: goto L_08A372EC;
    case 30u: goto L_08A37308;
    case 31u: goto L_08A3731C;
    case 32u: goto L_08A37338;
    case 33u: goto L_08A3734C;
    case 34u: goto L_08A37358;
    case 35u: goto L_08A3736C;
    case 36u: goto L_08A37380;
    case 37u: goto L_08A37388;
    case 38u: goto L_08A373B0;
    case 39u: goto L_08A373D0;
    case 40u: goto L_08A373E4;
    case 41u: goto L_08A373F8;
    case 42u: goto L_08A3740C;
    case 43u: goto L_08A37420;
    case 44u: goto L_08A37450;
    case 45u: goto L_08A37468;
    case 46u: goto L_08A3747C;
    case 47u: goto L_08A37488;
    case 48u: goto L_08A3749C;
    case 49u: goto L_08A374A4;
    case 50u: goto L_08A374C4;
    case 51u: goto L_08A374E4;
    case 52u: goto L_08A374F8;
    case 53u: goto L_08A3750C;
    case 54u: goto L_08A37520;
    case 55u: goto L_08A37550;
    case 56u: goto L_08A37598;
    case 57u: goto L_08A375B0;
    case 58u: goto L_08A375C8;
    case 59u: goto L_08A375EC;
    case 60u: goto L_08A375F4;
    case 61u: goto L_08A37610;
    case 62u: goto L_08A37628;
    case 63u: goto L_08A37644;
    case 64u: goto L_08A37668;
    case 65u: goto L_08A37678;
    case 66u: goto L_08A3768C;
    case 67u: goto L_08A376B0;
    case 68u: goto L_08A376E8;
    case 69u: goto L_08A3771C;
    case 70u: goto L_08A37730;
    case 71u: goto L_08A37748;
    case 72u: goto L_08A3775C;
    case 73u: goto L_08A3777C;
    case 74u: goto L_08A37790;
    case 75u: goto L_08A377B4;
    case 76u: goto L_08A377D4;
    case 77u: goto L_08A377E0;
    case 78u: goto L_08A377EC;
    case 79u: goto L_08A37800;
    case 80u: goto L_08A37828;
    case 81u: goto L_08A37834;
    case 82u: goto L_08A37838;
    case 83u: goto L_08A37848;
    case 84u: goto L_08A3784C;
    case 85u: goto L_08A37858;
    case 86u: goto L_08A37860;
    case 87u: goto L_08A37868;
    case 88u: goto L_08A37874;
    case 89u: goto L_08A37880;
    case 90u: goto L_08A3788C;
    case 91u: goto L_08A37894;
    case 92u: goto L_08A3789C;
    case 93u: goto L_08A378A0;
    case 94u: goto L_08A378AC;
    case 95u: goto L_08A378B4;
    case 96u: goto L_08A378B8;
    case 97u: goto L_08A378C0;
    case 98u: goto L_08A378C8;
    case 99u: goto L_08A378D4;
    case 100u: goto L_08A378E0;
    case 101u: goto L_08A378EC;
    case 102u: goto L_08A378F4;
    case 103u: goto L_08A37910;
    case 104u: goto L_08A3792C;
    case 105u: goto L_08A37938;
    case 106u: goto L_08A37940;
    case 107u: goto L_08A37954;
    case 108u: goto L_08A3796C;
    case 109u: goto L_08A37978;
    case 110u: goto L_08A37980;
    case 111u: goto L_08A37988;
    case 112u: goto L_08A3798C;
    case 113u: goto L_08A37998;
    case 114u: goto L_08A379A4;
    case 115u: goto L_08A379C4;
    case 116u: goto L_08A379CC;
    case 117u: goto L_08A379E0;
    case 118u: goto L_08A379EC;
    case 119u: goto L_08A379F4;
    case 120u: goto L_08A37A10;
    case 121u: goto L_08A37A38;
    case 122u: goto L_08A37A90;
    case 123u: goto L_08A37AC8;
    case 124u: goto L_08A37ADC;
    case 125u: goto L_08A37AF0;
    case 126u: goto L_08A37B0C;
    case 127u: goto L_08A37B20;
    case 128u: goto L_08A37B2C;
    case 129u: goto L_08A37B64;
    case 130u: goto L_08A37B70;
    case 131u: goto L_08A37B84;
    case 132u: goto L_08A37BA4;
    case 133u: goto L_08A37BAC;
    case 134u: goto L_08A37BE8;
    case 135u: goto L_08A37BF8;
    case 136u: goto L_08A37C00;
    case 137u: goto L_08A37C2C;
    case 138u: goto L_08A37C34;
    case 139u: goto L_08A37C44;
    case 140u: goto L_08A37C50;
    case 141u: goto L_08A37C6C;
    case 142u: goto L_08A37C74;
    case 143u: goto L_08A37C84;
    case 144u: goto L_08A37C90;
    case 145u: goto L_08A37CD4;
    case 146u: goto L_08A37D04;
    case 147u: goto L_08A37D30;
    case 148u: goto L_08A37D34;
    case 149u: goto L_08A37D40;
    case 150u: goto L_08A37D4C;
    case 151u: goto L_08A37D54;
    case 152u: goto L_08A37D5C;
    case 153u: goto L_08A37D64;
    case 154u: goto L_08A37D70;
    case 155u: goto L_08A37D94;
    case 156u: goto L_08A37DB4;
    case 157u: goto L_08A37DC0;
    case 158u: goto L_08A37DC8;
    case 159u: goto L_08A37DCC;
    case 160u: goto L_08A37DEC;
    case 161u: goto L_08A37DF4;
    case 162u: goto L_08A37E00;
    case 163u: goto L_08A37E10;
    case 164u: goto L_08A37E28;
    case 165u: goto L_08A37E3C;
    case 166u: goto L_08A37E50;
    case 167u: goto L_08A37E54;
    case 168u: goto L_08A37E58;
    case 169u: goto L_08A37E64;
    case 170u: goto L_08A37E70;
    case 171u: goto L_08A37E94;
    case 172u: goto L_08A37EC4;
    case 173u: goto L_08A37ECC;
    case 174u: goto L_08A37ED4;
    case 175u: goto L_08A37EE0;
    case 176u: goto L_08A37EF0;
    case 177u: goto L_08A37F44;
    case 178u: goto L_08A37F50;
    case 179u: goto L_08A37F60;
    case 180u: goto L_08A37F6C;
    case 181u: goto L_08A37F88;
    case 182u: goto L_08A37F98;
    case 183u: goto L_08A37FA0;
    case 184u: goto L_08A37FA8;
    case 185u: goto L_08A37FAC;
    case 186u: goto L_08A37FB8;
    case 187u: goto L_08A37FC4;
    case 188u: goto L_08A37FCC;
    case 189u: goto L_08A37FE0;
    case 190u: goto L_08A37FE8;
    case 191u: goto L_08A37FF0;
    case 192u: goto L_08A37FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A37000:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A37014u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37014u) goto L_08A37014;
    return;
L_08A37014:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37044:
    aot_gpr[31] = (0x08A3704Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A3704Cu) goto L_08A3704C;
    return;
L_08A3704C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8540)));
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8536)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A3706Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3706Cu) goto L_08A3706C;
    return;
L_08A3706C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8548)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8544)));
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A3708Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3708Cu) goto L_08A3708C;
    return;
L_08A3708C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A370A0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A370A0u) goto L_08A370A0;
    return;
L_08A370A0:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A370B4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A370B4u) goto L_08A370B4;
    return;
L_08A370B4:
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A370C8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A370C8u) goto L_08A370C8;
    return;
L_08A370C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A370F8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8684)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8680)));
    aot_gpr[19] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A37110u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A37110u) goto L_08A37110;
    return;
L_08A37110:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3712Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A3712Cu) goto L_08A3712C;
    return;
L_08A3712C:
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A3713Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A3713Cu) goto L_08A3713C;
    return;
L_08A3713C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A37160u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A37160u) goto L_08A37160;
    return;
L_08A37160:
    aot_gpr[4] = (6u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5242));
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[30] = (aot_gpr[19] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A37188u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A37188u) goto L_08A37188;
    return;
L_08A37188:
    aot_gpr[4] = (7u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18351));
    aot_gpr[19] = (aot_gpr[4] - aot_gpr[19]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8604)));
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8600)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A371B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A371B4u) goto L_08A371B4;
    return;
L_08A371B4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8588)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8584)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A371CCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A371CCu) goto L_08A371CC;
    return;
L_08A371CC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A371E0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A371E0u) goto L_08A371E0;
    return;
L_08A371E0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8572)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8568)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A371F8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A371F8u) goto L_08A371F8;
    return;
L_08A371F8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3720Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3720Cu) goto L_08A3720C;
    return;
L_08A3720C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8612)));
    aot_gpr[21] = (aot_gpr[3] | 0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A3722Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8608)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3722Cu) goto L_08A3722C;
    return;
L_08A3722C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8596)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A37244u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8592)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A37244u) goto L_08A37244;
    return;
L_08A37244:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A37258u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A37258u) goto L_08A37258;
    return;
L_08A37258:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8580)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A37270u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8576)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A37270u) goto L_08A37270;
    return;
L_08A37270:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A37284u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A37284u) goto L_08A37284;
    return;
L_08A37284:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8564)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A3729Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8560)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3729Cu) goto L_08A3729C;
    return;
L_08A3729C:
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A372B0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A372B0u) goto L_08A372B0;
    return;
L_08A372B0:
    aot_gpr[19] = (aot_gpr[30] | aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A372C8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A372C8u) goto L_08A372C8;
    return;
L_08A372C8:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A37450;
      }
      goto L_08A372EC;
    }
L_08A372EC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8676)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8672)));
    aot_gpr[30] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A37308u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A37308u) goto L_08A37308;
    return;
L_08A37308:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A3731Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3731Cu) goto L_08A3731C;
    return;
L_08A3731C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A37338u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A37338u) goto L_08A37338;
    return;
L_08A37338:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A3734Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3734Cu) goto L_08A3734C;
    return;
L_08A3734C:
    aot_gpr[23] = (aot_gpr[3] | 0u);
    { const bool branch_taken = aot_gpr[30] != 0u;
    aot_gpr[22] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A37388;
      }
      goto L_08A37358;
    }
L_08A37358:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A3736Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3736Cu) goto L_08A3736C;
    return;
L_08A3736C:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A37380u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37380u) goto L_08A37380;
    return;
L_08A37380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37420;
      }
      goto L_08A37388;
    }
L_08A37388:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8540)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8536)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A373B0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A373B0u) goto L_08A373B0;
    return;
L_08A373B0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8548)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8544)));
    aot_gpr[21] = (aot_gpr[3] | 0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A373D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A373D0u) goto L_08A373D0;
    return;
L_08A373D0:
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A373E4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A373E4u) goto L_08A373E4;
    return;
L_08A373E4:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A373F8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A373F8u) goto L_08A373F8;
    return;
L_08A373F8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08A3740Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3740Cu) goto L_08A3740C;
    return;
L_08A3740C:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A37420u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37420u) goto L_08A37420;
    return;
L_08A37420:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37450:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A37468u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37468u) goto L_08A37468;
    return;
L_08A37468:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A3747Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3747Cu) goto L_08A3747C;
    return;
L_08A3747C:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A374A4;
      }
      goto L_08A37488;
    }
L_08A37488:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A3749Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3749Cu) goto L_08A3749C;
    return;
L_08A3749C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37520;
      }
      goto L_08A374A4;
    }
L_08A374A4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8540)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8536)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A374C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A374C4u) goto L_08A374C4;
    return;
L_08A374C4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8548)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8544)));
    aot_gpr[23] = (aot_gpr[3] | 0u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A374E4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A374E4u) goto L_08A374E4;
    return;
L_08A374E4:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A374F8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A374F8u) goto L_08A374F8;
    return;
L_08A374F8:
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A3750Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3750Cu) goto L_08A3750C;
    return;
L_08A3750C:
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A37520u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 76u, 0x08A3F59Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37520u) goto L_08A37520;
    return;
L_08A37520:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (16u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A37668;
      }
      goto L_08A37598;
    }
L_08A37598:
    aot_gpr[4] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[7] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A375EC;
      }
      goto L_08A375B0;
    }
L_08A375B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8660)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8656)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8620)));
    aot_gpr[31] = (0x08A375C8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8616)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A375C8u) goto L_08A375C8;
    return;
L_08A375C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A375EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) < 0;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A37628;
      }
      goto L_08A375F4;
    }
L_08A375F4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8556)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8552)));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-54));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A37610u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A37610u) goto L_08A37610;
    return;
L_08A37610:
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A37668;
      }
      goto L_08A37628;
    }
L_08A37628:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8620)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8616)));
    aot_gpr[5] = (aot_gpr[9] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08A37644u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 127u, 0x08A3F988u>(ctx, &aot_mem) && ctx.pc == 0x08A37644u) goto L_08A37644;
    return;
L_08A37644:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37668:
    aot_gpr[4] = (32752u << 16u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 20u));
      if (branch_taken) {
          goto L_08A376B0;
      }
      goto L_08A37678;
    }
L_08A37678:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A3768Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3768Cu) goto L_08A3768C;
    return;
L_08A3768C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A376B0:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1023));
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[6] = (16u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[8] = (0u | 1023u);
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[7] << 20u);
    aot_gpr[18] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[31] = (0x08A376E8u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A376E8u) goto L_08A376E8;
    return;
L_08A376E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8644)));
    aot_gpr[21] = (aot_gpr[3] | 0u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8640)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A3771Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3771Cu) goto L_08A3771C;
    return;
L_08A3771C:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A37730u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 208u, 0x08A36C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A37730u) goto L_08A37730;
    return;
L_08A37730:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8628)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8624)));
    aot_gpr[5] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A37748u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A37748u) goto L_08A37748;
    return;
L_08A37748:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3775Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3775Cu) goto L_08A3775C;
    return;
L_08A3775C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8636)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8632)));
    aot_gpr[17] = (aot_gpr[3] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A3777Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 81u, 0x08A3F610u>(ctx, &aot_mem) && ctx.pc == 0x08A3777Cu) goto L_08A3777C;
    return;
L_08A3777C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A37790u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A37790u) goto L_08A37790;
    return;
L_08A37790:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A377B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A377E0;
      }
      goto L_08A377D4;
    }
L_08A377D4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A377E0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A377B4;
L_08A377E0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A377ECu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 193u, 0x08A3CC98u>(ctx, &aot_mem) && ctx.pc == 0x08A377ECu) goto L_08A377EC;
    return;
L_08A377EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37800:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A378F4;
      }
      goto L_08A37828;
    }
L_08A37828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A37880;
      }
      goto L_08A37834;
    }
L_08A37834:
    aot_gpr[18] = (0u | 0u);
    goto L_08A37838;
L_08A37838:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[19] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A37868;
    }
    goto L_08A37848;
L_08A37848:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A3784C;
L_08A3784C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A37858u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 193u, 0x08A3CC98u>(ctx, &aot_mem) && ctx.pc == 0x08A37858u) goto L_08A37858;
    return;
L_08A37858:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[5] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A3784C;
      }
      goto L_08A37860;
    }
L_08A37860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A37868;
L_08A37868:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A37838;
      }
      goto L_08A37874;
    }
L_08A37874:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A37880u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 193u, 0x08A3CC98u>(ctx, &aot_mem) && ctx.pc == 0x08A37880u) goto L_08A37880;
    return;
L_08A37880:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08A378B4;
      }
      goto L_08A3788C;
    }
L_08A3788C:
    if (aot_gpr[18] == aot_gpr[17]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08A378B8;
    }
    goto L_08A37894;
L_08A37894:
    if (aot_gpr[18] == aot_gpr[17]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08A378B8;
    }
    goto L_08A3789C;
L_08A3789C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A378A0;
L_08A378A0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A378ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 193u, 0x08A3CC98u>(ctx, &aot_mem) && ctx.pc == 0x08A378ACu) goto L_08A378AC;
    return;
L_08A378AC:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    aot_gpr[5] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A378A0;
      }
      goto L_08A378B4;
    }
L_08A378B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    goto L_08A378B8;
L_08A378B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A378C8;
      }
      goto L_08A378C0;
    }
L_08A378C0:
    aot_gpr[31] = (0x08A378C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 193u, 0x08A3CC98u>(ctx, &aot_mem) && ctx.pc == 0x08A378C8u) goto L_08A378C8;
    return;
L_08A378C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A378F4;
      }
      goto L_08A378D4;
    }
L_08A378D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A378E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A378E0u) goto L_08A378E0;
    return;
L_08A378E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A378F4;
      }
      goto L_08A378EC;
    }
L_08A378EC:
    aot_gpr[31] = (0x08A378F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A377B4;
L_08A378F4:
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
L_08A37910:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A37940;
      }
      goto L_08A3792C;
    }
L_08A3792C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2216u << 16u);
        goto L_08A3796C;
    }
    goto L_08A37938;
L_08A37938:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A37978;
      }
      goto L_08A37940;
    }
L_08A37940:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2211u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[31] = (0x08A37954u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30992));
    goto L_08A37D04;
L_08A37954:
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
L_08A3796C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08A37978;
L_08A37978:
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08A3798C;
    }
    goto L_08A37980;
L_08A37980:
    aot_gpr[31] = (0x08A37988u);
    // nop
    goto L_08A37A90;
L_08A37988:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08A3798C;
L_08A3798C:
    aot_gpr[5] = (aot_gpr[4] & 8u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A379F4;
      }
      goto L_08A37998;
    }
L_08A37998:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A379F4;
      }
      goto L_08A379A4;
    }
L_08A379A4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] & 3u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08A379C4;
    }
    goto L_08A379C4;
L_08A379C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A379F4;
      }
      goto L_08A379CC;
    }
L_08A379CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A379E0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A379E0u) goto L_08A379E0;
    return;
L_08A379E0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[4]);
      if (branch_taken) {
          goto L_08A37A10;
      }
      goto L_08A379EC;
    }
L_08A379EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A379CC;
      }
      goto L_08A379F4;
    }
L_08A379F4:
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
L_08A37A10:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
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
L_08A37A38:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[5] = (2212u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32012));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (2212u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-31924));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (2212u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-31776));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (2212u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-31684));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37A90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2211u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31500));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(484));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(56), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A37AC8u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    goto L_08A37A38;
L_08A37AC8:
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(572));
    aot_gpr[5] = (0u | 9u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08A37ADCu);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    goto L_08A37A38;
L_08A37ADC:
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(660));
    aot_gpr[5] = (0u | 10u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[31] = (0x08A37AF0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    goto L_08A37A38;
L_08A37AF0:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(472), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(476), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(480), aot_gpr[9]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37B0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2211u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A37B20u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(30992));
    goto L_08A37D04;
L_08A37B20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37B2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[6] = (0u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A37B64u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 44u, 0x08A33324u>(ctx, &aot_mem) && ctx.pc == 0x08A37B64u) goto L_08A37B64;
    return;
L_08A37B64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37B70:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A37BA4;
      }
      goto L_08A37B84;
    }
L_08A37B84:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A37B84;
      }
      goto L_08A37BA4;
    }
L_08A37BA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37BAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A37C00;
      }
      goto L_08A37BE8;
    }
L_08A37BE8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A37C2C;
      }
      goto L_08A37BF8;
    }
L_08A37BF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A37C34;
      }
      goto L_08A37C00;
    }
L_08A37C00:
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
L_08A37C2C:
    aot_gpr[22] = (aot_gpr[6] | 0u);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A37C34;
L_08A37C34:
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[22]);
      if (branch_taken) {
          goto L_08A37C84;
      }
      goto L_08A37C44;
    }
L_08A37C44:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A37C50u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    goto L_08A37B70;
L_08A37C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[22]);
    aot_gpr[31] = (0x08A37C6Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A37F6C;
L_08A37C6C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A37CD4;
      }
      goto L_08A37C74;
    }
L_08A37C74:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A37C44;
      }
      goto L_08A37C84;
    }
L_08A37C84:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A37C90u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_08A37B70;
L_08A37C90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A37CD4:
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[16]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[2] = (ctx.lo);
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
L_08A37D04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(472));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A37D70;
      }
      goto L_08A37D30;
    }
L_08A37D30:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08A37D34;
L_08A37D34:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A37D64;
      }
      goto L_08A37D40;
    }
L_08A37D40:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12))))));
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08A37D5C;
    }
    goto L_08A37D4C;
L_08A37D4C:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A37D54u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A37D54u) goto L_08A37D54;
    return;
L_08A37D54:
    aot_gpr[20] = (aot_gpr[20] | aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08A37D5C;
L_08A37D5C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08A37D40;
      }
      goto L_08A37D64;
    }
L_08A37D64:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[19] != 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08A37D34;
    }
    goto L_08A37D70;
L_08A37D70:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_08A37D94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(67));
      if (branch_taken) {
          goto L_08A37DCC;
      }
      goto L_08A37DB4;
    }
L_08A37DB4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) < 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A37E00;
      }
      goto L_08A37DC0;
    }
L_08A37DC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A37DEC;
      }
      goto L_08A37DC8;
    }
L_08A37DC8:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(67));
    goto L_08A37DCC;
L_08A37DCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37DEC:
    aot_gpr[31] = (0x08A37DF4u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 28u, 0x08A3D1F4u>(ctx, &aot_mem) && ctx.pc == 0x08A37DF4u) goto L_08A37DF4;
    return;
L_08A37DF4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A37E10;
      }
      goto L_08A37E00;
    }
L_08A37E00:
    aot_gpr[5] = (aot_gpr[5] | 2048u);
    aot_gpr[6] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08A37E58;
      }
      goto L_08A37E10;
    }
L_08A37E10:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 32768u);
    aot_gpr[8] = (aot_gpr[6] & 61440u);
    aot_gpr[6] = (aot_gpr[8] ^ 8192u);
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A37E50;
      }
      goto L_08A37E28;
    }
L_08A37E28:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (2212u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-31776));
    if (aot_gpr[7] != aot_gpr[8]) {
    aot_gpr[5] = (aot_gpr[5] | 2048u);
        goto L_08A37E54;
    }
    goto L_08A37E3C;
L_08A37E3C:
    aot_gpr[5] = (aot_gpr[5] | 1024u);
    aot_gpr[7] = (0u | 1024u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A37E58;
      }
      goto L_08A37E50;
    }
L_08A37E50:
    aot_gpr[5] = (aot_gpr[5] | 2048u);
    goto L_08A37E54;
L_08A37E54:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_08A37E58;
L_08A37E58:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[6]);
    aot_gpr[31] = (0x08A37E64u);
    aot_gpr[5] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0568_entry, 568u, 94u, 0x08A3C664u>(ctx, &aot_mem) && ctx.pc == 0x08A37E64u) goto L_08A37E64;
    return;
L_08A37E64:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A37E94;
      }
      goto L_08A37E70;
    }
L_08A37E70:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(67));
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A37EE0;
      }
      goto L_08A37E94;
    }
L_08A37E94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[7] = (2211u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(31500));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[7]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] | 128u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 1024u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A37EE0;
      }
      goto L_08A37EC4;
    }
L_08A37EC4:
    aot_gpr[31] = (0x08A37ECCu);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 199u, 0x08911CECu>(ctx, &aot_mem) && ctx.pc == 0x08A37ECCu) goto L_08A37ECC;
    return;
L_08A37ECC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37EE0;
      }
      goto L_08A37ED4;
    }
L_08A37ED4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08A37EE0;
L_08A37EE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37EF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[9]);
    aot_gpr[5] = (0u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[11]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A37F44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 44u, 0x08A33324u>(ctx, &aot_mem) && ctx.pc == 0x08A37F44u) goto L_08A37F44;
    return;
L_08A37F44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37F50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A37F60u);
    // nop
    goto L_08A37910;
L_08A37F60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37F6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08A37F98;
    }
    goto L_08A37F88;
L_08A37F88:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08A37F98;
L_08A37F98:
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08A37FAC;
    }
    goto L_08A37FA0;
L_08A37FA0:
    aot_gpr[31] = (0x08A37FA8u);
    // nop
    goto L_08A37A90;
L_08A37FA8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08A37FAC;
L_08A37FAC:
    aot_gpr[5] = (aot_gpr[4] & 32u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08A37FCC;
      }
      goto L_08A37FB8;
    }
L_08A37FB8:
    aot_gpr[5] = (aot_gpr[4] & 4u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 16u);
      if (branch_taken) {
          goto L_08A37FE0;
      }
      goto L_08A37FC4;
    }
L_08A37FC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 6u, 0x08A38054u>(ctx, &aot_mem); return;
      }
      goto L_08A37FCC;
    }
L_08A37FCC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A37FE0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 8u);
      if (branch_taken) {
          goto L_08A37FFC;
      }
      goto L_08A37FE8;
    }
L_08A37FE8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 2u, 0x08A38010u>(ctx, &aot_mem); return;
      }
      goto L_08A37FF0;
    }
L_08A37FF0:
    aot_gpr[4] = (aot_gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 8u, 0x08A38068u>(ctx, &aot_mem); return;
      }
      goto L_08A37FFC;
    }
L_08A37FFC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08A38000u; return;
}

void recomp_unit_0563(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0563_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_563(Runtime &runtime) {
    runtime.register_generated_unit(563u, 0x08A37000u, 4096u, &recomp_unit_0563, &recomp_unit_0563_entry);
    runtime.register_function(0x08A37000u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37014u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37044u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3704Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3706Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3708Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A370A0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A370B4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A370C8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A370F8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37110u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3712Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3713Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37160u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37188u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A371B4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A371CCu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A371E0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A371F8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3720Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3722Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37244u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37258u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37270u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37284u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3729Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A372B0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A372C8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A372ECu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37308u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3731Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37338u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3734Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37358u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3736Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37380u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37388u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A373B0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A373D0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A373E4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A373F8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3740Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37420u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37450u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37468u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3747Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37488u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3749Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A374A4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A374C4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A374E4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A374F8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3750Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37520u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37550u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37598u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A375B0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A375C8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A375ECu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A375F4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37610u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37628u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37644u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37668u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37678u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3768Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A376B0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A376E8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3771Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37730u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37748u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3775Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3777Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37790u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A377B4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A377D4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A377E0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A377ECu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37800u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37828u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37834u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37838u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37848u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3784Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37858u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37860u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37868u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37874u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37880u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3788Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37894u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3789Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378A0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378ACu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378B4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378B8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378C0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378C8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378D4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378E0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378ECu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A378F4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37910u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3792Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37938u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37940u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37954u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3796Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37978u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37980u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37988u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A3798Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37998u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A379A4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A379C4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A379CCu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A379E0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A379ECu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A379F4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37A10u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37A38u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37A90u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37AC8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37ADCu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37AF0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37B0Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37B20u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37B2Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37B64u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37B70u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37B84u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37BA4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37BACu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37BE8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37BF8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C00u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C2Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C34u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C44u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C50u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C6Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C74u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C84u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37C90u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37CD4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D04u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D30u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D34u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D40u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D4Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D54u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D5Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D64u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D70u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37D94u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37DB4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37DC0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37DC8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37DCCu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37DECu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37DF4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E00u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E10u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E28u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E3Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E50u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E54u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E58u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E64u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E70u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37E94u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37EC4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37ECCu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37ED4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37EE0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37EF0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37F44u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37F50u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37F60u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37F6Cu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37F88u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37F98u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FA0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FA8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FACu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FB8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FC4u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FCCu, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FE0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FE8u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FF0u, &recomp_unit_0563, "recomp_unit_0563");
    runtime.register_function(0x08A37FFCu, &recomp_unit_0563, "recomp_unit_0563");
}
} // namespace psprecomp
