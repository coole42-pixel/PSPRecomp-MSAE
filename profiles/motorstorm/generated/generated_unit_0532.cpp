#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0532[1024] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 17, 0, 18, 0,
    19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 29, 0,
    30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36,
    37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 40, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 45, 0, 0, 46, 0, 47, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 55, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 70, 0, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 85, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0,
    105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138,
    139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0,
    0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 211,
};
void recomp_unit_0532_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A18000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0532[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A18000;
    case 2u: goto L_08A18018;
    case 3u: goto L_08A18028;
    case 4u: goto L_08A1803C;
    case 5u: goto L_08A18044;
    case 6u: goto L_08A18050;
    case 7u: goto L_08A18060;
    case 8u: goto L_08A18068;
    case 9u: goto L_08A18090;
    case 10u: goto L_08A180A0;
    case 11u: goto L_08A180A8;
    case 12u: goto L_08A180B4;
    case 13u: goto L_08A180BC;
    case 14u: goto L_08A180D8;
    case 15u: goto L_08A180E4;
    case 16u: goto L_08A180EC;
    case 17u: goto L_08A180F0;
    case 18u: goto L_08A180F8;
    case 19u: goto L_08A18100;
    case 20u: goto L_08A1811C;
    case 21u: goto L_08A18128;
    case 22u: goto L_08A18130;
    case 23u: goto L_08A18134;
    case 24u: goto L_08A1813C;
    case 25u: goto L_08A18144;
    case 26u: goto L_08A18160;
    case 27u: goto L_08A1816C;
    case 28u: goto L_08A18174;
    case 29u: goto L_08A18178;
    case 30u: goto L_08A18180;
    case 31u: goto L_08A1818C;
    case 32u: goto L_08A18194;
    case 33u: goto L_08A181B0;
    case 34u: goto L_08A181CC;
    case 35u: goto L_08A181E8;
    case 36u: goto L_08A181FC;
    case 37u: goto L_08A18200;
    case 38u: goto L_08A18210;
    case 39u: goto L_08A18224;
    case 40u: goto L_08A18228;
    case 41u: goto L_08A18238;
    case 42u: goto L_08A18240;
    case 43u: goto L_08A1824C;
    case 44u: goto L_08A18254;
    case 45u: goto L_08A18258;
    case 46u: goto L_08A18264;
    case 47u: goto L_08A1826C;
    case 48u: goto L_08A18274;
    case 49u: goto L_08A182AC;
    case 50u: goto L_08A182B0;
    case 51u: goto L_08A182C8;
    case 52u: goto L_08A182E0;
    case 53u: goto L_08A182E8;
    case 54u: goto L_08A182F0;
    case 55u: goto L_08A182F4;
    case 56u: goto L_08A18300;
    case 57u: goto L_08A18328;
    case 58u: goto L_08A18350;
    case 59u: goto L_08A18388;
    case 60u: goto L_08A1838C;
    case 61u: goto L_08A183A4;
    case 62u: goto L_08A183BC;
    case 63u: goto L_08A183C4;
    case 64u: goto L_08A183CC;
    case 65u: goto L_08A183D0;
    case 66u: goto L_08A183DC;
    case 67u: goto L_08A18404;
    case 68u: goto L_08A1842C;
    case 69u: goto L_08A18464;
    case 70u: goto L_08A18468;
    case 71u: goto L_08A18480;
    case 72u: goto L_08A18498;
    case 73u: goto L_08A184A0;
    case 74u: goto L_08A184A8;
    case 75u: goto L_08A184AC;
    case 76u: goto L_08A184B8;
    case 77u: goto L_08A184E0;
    case 78u: goto L_08A18508;
    case 79u: goto L_08A18540;
    case 80u: goto L_08A18544;
    case 81u: goto L_08A1855C;
    case 82u: goto L_08A18564;
    case 83u: goto L_08A1856C;
    case 84u: goto L_08A18574;
    case 85u: goto L_08A18578;
    case 86u: goto L_08A18584;
    case 87u: goto L_08A185AC;
    case 88u: goto L_08A185D4;
    case 89u: goto L_08A18604;
    case 90u: goto L_08A18614;
    case 91u: goto L_08A1861C;
    case 92u: goto L_08A18628;
    case 93u: goto L_08A18630;
    case 94u: goto L_08A1864C;
    case 95u: goto L_08A18658;
    case 96u: goto L_08A18664;
    case 97u: goto L_08A18678;
    case 98u: goto L_08A186B8;
    case 99u: goto L_08A186C8;
    case 100u: goto L_08A186D4;
    case 101u: goto L_08A186DC;
    case 102u: goto L_08A186E8;
    case 103u: goto L_08A186F0;
    case 104u: goto L_08A186F8;
    case 105u: goto L_08A18700;
    case 106u: goto L_08A18708;
    case 107u: goto L_08A18710;
    case 108u: goto L_08A18728;
    case 109u: goto L_08A18760;
    case 110u: goto L_08A18774;
    case 111u: goto L_08A18780;
    case 112u: goto L_08A187A8;
    case 113u: goto L_08A187BC;
    case 114u: goto L_08A187D8;
    case 115u: goto L_08A18810;
    case 116u: goto L_08A18824;
    case 117u: goto L_08A18830;
    case 118u: goto L_08A18834;
    case 119u: goto L_08A1884C;
    case 120u: goto L_08A18860;
    case 121u: goto L_08A18864;
    case 122u: goto L_08A18878;
    case 123u: goto L_08A18898;
    case 124u: goto L_08A188CC;
    case 125u: goto L_08A188D4;
    case 126u: goto L_08A188DC;
    case 127u: goto L_08A188F8;
    case 128u: goto L_08A18904;
    case 129u: goto L_08A18930;
    case 130u: goto L_08A18934;
    case 131u: goto L_08A18948;
    case 132u: goto L_08A18964;
    case 133u: goto L_08A18998;
    case 134u: goto L_08A189A0;
    case 135u: goto L_08A189A8;
    case 136u: goto L_08A189C4;
    case 137u: goto L_08A189D0;
    case 138u: goto L_08A189FC;
    case 139u: goto L_08A18A00;
    case 140u: goto L_08A18A14;
    case 141u: goto L_08A18A30;
    case 142u: goto L_08A18A64;
    case 143u: goto L_08A18A6C;
    case 144u: goto L_08A18A74;
    case 145u: goto L_08A18A90;
    case 146u: goto L_08A18A9C;
    case 147u: goto L_08A18AB0;
    case 148u: goto L_08A18AB4;
    case 149u: goto L_08A18AC8;
    case 150u: goto L_08A18AE4;
    case 151u: goto L_08A18B18;
    case 152u: goto L_08A18B20;
    case 153u: goto L_08A18B28;
    case 154u: goto L_08A18B44;
    case 155u: goto L_08A18B50;
    case 156u: goto L_08A18B7C;
    case 157u: goto L_08A18B80;
    case 158u: goto L_08A18B94;
    case 159u: goto L_08A18BB0;
    case 160u: goto L_08A18BE4;
    case 161u: goto L_08A18BEC;
    case 162u: goto L_08A18BF4;
    case 163u: goto L_08A18C10;
    case 164u: goto L_08A18C1C;
    case 165u: goto L_08A18C30;
    case 166u: goto L_08A18C34;
    case 167u: goto L_08A18C48;
    case 168u: goto L_08A18C64;
    case 169u: goto L_08A18C78;
    case 170u: goto L_08A18C80;
    case 171u: goto L_08A18CA0;
    case 172u: goto L_08A18CB8;
    case 173u: goto L_08A18CCC;
    case 174u: goto L_08A18CDC;
    case 175u: goto L_08A18CE4;
    case 176u: goto L_08A18D04;
    case 177u: goto L_08A18D2C;
    case 178u: goto L_08A18D44;
    case 179u: goto L_08A18D50;
    case 180u: goto L_08A18D60;
    case 181u: goto L_08A18D68;
    case 182u: goto L_08A18D88;
    case 183u: goto L_08A18DB0;
    case 184u: goto L_08A18DCC;
    case 185u: goto L_08A18DD4;
    case 186u: goto L_08A18DE4;
    case 187u: goto L_08A18DEC;
    case 188u: goto L_08A18E0C;
    case 189u: goto L_08A18E34;
    case 190u: goto L_08A18E50;
    case 191u: goto L_08A18E58;
    case 192u: goto L_08A18E68;
    case 193u: goto L_08A18E70;
    case 194u: goto L_08A18E90;
    case 195u: goto L_08A18EB8;
    case 196u: goto L_08A18ED4;
    case 197u: goto L_08A18EDC;
    case 198u: goto L_08A18EEC;
    case 199u: goto L_08A18EF4;
    case 200u: goto L_08A18F14;
    case 201u: goto L_08A18F3C;
    case 202u: goto L_08A18F58;
    case 203u: goto L_08A18F60;
    case 204u: goto L_08A18F70;
    case 205u: goto L_08A18F78;
    case 206u: goto L_08A18F98;
    case 207u: goto L_08A18FC0;
    case 208u: goto L_08A18FDC;
    case 209u: goto L_08A18FE4;
    case 210u: goto L_08A18FF4;
    case 211u: goto L_08A18FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A18000:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 36u);
    aot_gpr[31] = (0x08A18018u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1332));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A18018u) goto L_08A18018;
    return;
L_08A18018:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18028:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1803Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1803Cu) goto L_08A1803C;
    return;
L_08A1803C:
    aot_gpr[31] = (0x08A18044u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18044u) goto L_08A18044;
    return;
L_08A18044:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A18050u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A18050u) goto L_08A18050;
    return;
L_08A18050:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18060:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18068:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A180A8;
      }
      goto L_08A18090;
    }
L_08A18090:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A180A0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A181E8;
L_08A180A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A180BC;
      }
      goto L_08A180A8;
    }
L_08A180A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A180D8;
      }
      goto L_08A180B4;
    }
L_08A180B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A180F0;
      }
      goto L_08A180BC;
    }
L_08A180BC:
    aot_gpr[2] = (0u | 1u);
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
L_08A180D8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A180E4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A18274;
L_08A180E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18100;
      }
      goto L_08A180EC;
    }
L_08A180EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_08A180F0;
L_08A180F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1811C;
      }
      goto L_08A180F8;
    }
L_08A180F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A18134;
      }
      goto L_08A18100;
    }
L_08A18100:
    aot_gpr[2] = (0u | 1u);
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
L_08A1811C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A18128u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A18350;
L_08A18128:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18144;
      }
      goto L_08A18130;
    }
L_08A18130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_08A18134;
L_08A18134:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A18160;
      }
      goto L_08A1813C;
    }
L_08A1813C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A18178;
      }
      goto L_08A18144;
    }
L_08A18144:
    aot_gpr[2] = (0u | 1u);
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
L_08A18160:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1816Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A1842C;
L_08A1816C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A181CC;
      }
      goto L_08A18174;
    }
L_08A18174:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_08A18178;
L_08A18178:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A181B0;
      }
      goto L_08A18180;
    }
L_08A18180:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1818Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A18508;
L_08A1818C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A181B0;
      }
      goto L_08A18194;
    }
L_08A18194:
    aot_gpr[2] = (0u | 1u);
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
L_08A181B0:
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
L_08A181CC:
    aot_gpr[2] = (0u | 1u);
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
L_08A181E8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18264;
      }
      goto L_08A181FC;
    }
L_08A181FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08A18200;
L_08A18200:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(536)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08A18258;
    }
    goto L_08A18210;
L_08A18210:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1824C;
      }
      goto L_08A18224;
    }
L_08A18224:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_08A18228;
L_08A18228:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A18240;
      }
      goto L_08A18238;
    }
L_08A18238:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1824C;
      }
      goto L_08A18240;
    }
L_08A18240:
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A18228;
      }
      goto L_08A1824C;
    }
L_08A1824C:
    if (aot_gpr[10] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
        goto L_08A1826C;
    }
    goto L_08A18254;
L_08A18254:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A18258;
L_08A18258:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A18200;
      }
      goto L_08A18264;
    }
L_08A18264:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1826C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A18300;
      }
      goto L_08A182AC;
    }
L_08A182AC:
    aot_gpr[18] = (0u | 0u);
    goto L_08A182B0;
L_08A182B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(908)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A182F4;
    }
    goto L_08A182C8;
L_08A182C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A182E0u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A182E0u) goto L_08A182E0;
    return;
L_08A182E0:
    aot_gpr[31] = (0x08A182E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A182E8u) goto L_08A182E8;
    return;
L_08A182E8:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_08A18328;
    }
    goto L_08A182F0;
L_08A182F0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A182F4;
L_08A182F4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A182B0;
      }
      goto L_08A18300;
    }
L_08A18300:
    aot_gpr[2] = (0u | 1u);
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
L_08A18328:
    aot_gpr[2] = (0u | 0u);
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
L_08A18350:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A183DC;
      }
      goto L_08A18388;
    }
L_08A18388:
    aot_gpr[18] = (0u | 0u);
    goto L_08A1838C;
L_08A1838C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(908)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A183D0;
    }
    goto L_08A183A4;
L_08A183A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A183BCu);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A183BCu) goto L_08A183BC;
    return;
L_08A183BC:
    aot_gpr[31] = (0x08A183C4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A183C4u) goto L_08A183C4;
    return;
L_08A183C4:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_08A18404;
    }
    goto L_08A183CC;
L_08A183CC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A183D0;
L_08A183D0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A1838C;
      }
      goto L_08A183DC;
    }
L_08A183DC:
    aot_gpr[2] = (0u | 1u);
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
L_08A18404:
    aot_gpr[2] = (0u | 0u);
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
L_08A1842C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A184B8;
      }
      goto L_08A18464;
    }
L_08A18464:
    aot_gpr[18] = (0u | 0u);
    goto L_08A18468;
L_08A18468:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(516)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A184AC;
    }
    goto L_08A18480;
L_08A18480:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A18498u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A18498u) goto L_08A18498;
    return;
L_08A18498:
    aot_gpr[31] = (0x08A184A0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A184A0u) goto L_08A184A0;
    return;
L_08A184A0:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_08A184E0;
    }
    goto L_08A184A8;
L_08A184A8:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A184AC;
L_08A184AC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A18468;
      }
      goto L_08A184B8;
    }
L_08A184B8:
    aot_gpr[2] = (0u | 1u);
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
L_08A184E0:
    aot_gpr[2] = (0u | 0u);
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
L_08A18508:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A18584;
      }
      goto L_08A18540;
    }
L_08A18540:
    aot_gpr[18] = (0u | 0u);
    goto L_08A18544;
L_08A18544:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(360)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A18578;
    }
    goto L_08A1855C;
L_08A1855C:
    aot_gpr[31] = (0x08A18564u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 117u, 0x08A1D7BCu>(ctx, &aot_mem) && ctx.pc == 0x08A18564u) goto L_08A18564;
    return;
L_08A18564:
    aot_gpr[31] = (0x08A1856Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1856Cu) goto L_08A1856C;
    return;
L_08A1856C:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_08A185AC;
    }
    goto L_08A18574;
L_08A18574:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A18578;
L_08A18578:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[21]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A18544;
      }
      goto L_08A18584;
    }
L_08A18584:
    aot_gpr[2] = (0u | 1u);
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
L_08A185AC:
    aot_gpr[2] = (0u | 0u);
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
L_08A185D4:
    aot_gpr[4] = (aot_gpr[5] << 6u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(324)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A18628;
      }
      goto L_08A18604;
    }
L_08A18604:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(324)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A1861C;
    }
    goto L_08A18614;
L_08A18614:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1861C:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A18604;
      }
      goto L_08A18628;
    }
L_08A18628:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A1864Cu);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 61u, 0x08A19604u>(ctx, &aot_mem) && ctx.pc == 0x08A1864Cu) goto L_08A1864C;
    return;
L_08A1864C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A18658u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A18C64;
L_08A18658:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A18664u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 5u, 0x08A19064u>(ctx, &aot_mem) && ctx.pc == 0x08A18664u) goto L_08A18664;
    return;
L_08A18664:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A186B8u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-1300));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A186B8u) goto L_08A186B8;
    return;
L_08A186B8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A186C8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 149u, 0x08A00A14u>(ctx, &aot_mem) && ctx.pc == 0x08A186C8u) goto L_08A186C8;
    return;
L_08A186C8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A18710;
      }
      goto L_08A186D4;
    }
L_08A186D4:
    aot_gpr[31] = (0x08A186DCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A18728;
L_08A186DC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A186E8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A187D8;
L_08A186E8:
    aot_gpr[31] = (0x08A186F0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A18898;
L_08A186F0:
    aot_gpr[31] = (0x08A186F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A18964;
L_08A186F8:
    aot_gpr[31] = (0x08A18700u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A18A30;
L_08A18700:
    aot_gpr[31] = (0x08A18708u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A18AE4;
L_08A18708:
    aot_gpr[31] = (0x08A18710u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A18BB0;
L_08A18710:
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
L_08A18728:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A18760u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 202u, 0x08A22D04u>(ctx, &aot_mem) && ctx.pc == 0x08A18760u) goto L_08A18760;
    return;
L_08A18760:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A187BC;
      }
      goto L_08A18774;
    }
L_08A18774:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A187BC;
      }
      goto L_08A18780;
    }
L_08A18780:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A187A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 172u, 0x08A22B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A187A8u) goto L_08A187A8;
    return;
L_08A187A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08A18780;
      }
      goto L_08A187BC;
    }
L_08A187BC:
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
L_08A187D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08A18810u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 203u, 0x08A22D18u>(ctx, &aot_mem) && ctx.pc == 0x08A18810u) goto L_08A18810;
    return;
L_08A18810:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A18878;
      }
      goto L_08A18824;
    }
L_08A18824:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A18878;
      }
      goto L_08A18830;
    }
L_08A18830:
    aot_gpr[19] = (0u | 0u);
    goto L_08A18834;
L_08A18834:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08A18864;
    }
    goto L_08A1884C;
L_08A1884C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[31] = (0x08A18860u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 196u, 0x08A22CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A18860u) goto L_08A18860;
    return;
L_08A18860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A18864;
L_08A18864:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A18834;
      }
      goto L_08A18878;
    }
L_08A18878:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18898:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A18948;
      }
      goto L_08A188CC;
    }
L_08A188CC:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1292));
    goto L_08A188D4;
L_08A188D4:
    aot_gpr[31] = (0x08A188DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A188DCu) goto L_08A188DC;
    return;
L_08A188DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A188F8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 16u, 0x089FE14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A188F8u) goto L_08A188F8;
    return;
L_08A188F8:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A18934;
      }
      goto L_08A18904;
    }
L_08A18904:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(144));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A18930u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A18930u) goto L_08A18930;
    return;
L_08A18930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A18934;
L_08A18934:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A188D4;
      }
      goto L_08A18948;
    }
L_08A18948:
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
L_08A18964:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A18A14;
      }
      goto L_08A18998;
    }
L_08A18998:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1276));
    goto L_08A189A0;
L_08A189A0:
    aot_gpr[31] = (0x08A189A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A189A8u) goto L_08A189A8;
    return;
L_08A189A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A189C4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 16u, 0x089FE14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A189C4u) goto L_08A189C4;
    return;
L_08A189C4:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A18A00;
      }
      goto L_08A189D0;
    }
L_08A189D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(144));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A189FCu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A189FCu) goto L_08A189FC;
    return;
L_08A189FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A18A00;
L_08A18A00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A189A0;
      }
      goto L_08A18A14;
    }
L_08A18A14:
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
L_08A18A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A18AC8;
      }
      goto L_08A18A64;
    }
L_08A18A64:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1256));
    goto L_08A18A6C;
L_08A18A6C:
    aot_gpr[31] = (0x08A18A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A18A74u) goto L_08A18A74;
    return;
L_08A18A74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A18A90u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 16u, 0x089FE14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18A90u) goto L_08A18A90;
    return;
L_08A18A90:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A18AB4;
      }
      goto L_08A18A9C;
    }
L_08A18A9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[31] = (0x08A18AB0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 118u, 0x08A1D7D4u>(ctx, &aot_mem) && ctx.pc == 0x08A18AB0u) goto L_08A18AB0;
    return;
L_08A18AB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A18AB4;
L_08A18AB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A18A6C;
      }
      goto L_08A18AC8;
    }
L_08A18AC8:
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
L_08A18AE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A18B94;
      }
      goto L_08A18B18;
    }
L_08A18B18:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1244));
    goto L_08A18B20;
L_08A18B20:
    aot_gpr[31] = (0x08A18B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A18B28u) goto L_08A18B28;
    return;
L_08A18B28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A18B44u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 16u, 0x089FE14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18B44u) goto L_08A18B44;
    return;
L_08A18B44:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A18B80;
      }
      goto L_08A18B50;
    }
L_08A18B50:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(144));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A18B7Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A18B7Cu) goto L_08A18B7C;
    return;
L_08A18B7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A18B80;
L_08A18B80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A18B20;
      }
      goto L_08A18B94;
    }
L_08A18B94:
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
L_08A18BB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A18C48;
      }
      goto L_08A18BE4;
    }
L_08A18BE4:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1232));
    goto L_08A18BEC;
L_08A18BEC:
    aot_gpr[31] = (0x08A18BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A18BF4u) goto L_08A18BF4;
    return;
L_08A18BF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A18C10u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 16u, 0x089FE14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18C10u) goto L_08A18C10;
    return;
L_08A18C10:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A18C34;
      }
      goto L_08A18C1C;
    }
L_08A18C1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[31] = (0x08A18C30u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0544_entry, 544u, 121u, 0x08A2488Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18C30u) goto L_08A18C30;
    return;
L_08A18C30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A18C34;
L_08A18C34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A18BEC;
      }
      goto L_08A18C48;
    }
L_08A18C48:
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
L_08A18C64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A18C78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A18C78u) goto L_08A18C78;
    return;
L_08A18C78:
    aot_gpr[31] = (0x08A18C80u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18C80u) goto L_08A18C80;
    return;
L_08A18C80:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(-1332));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 64u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A18CA0u);
    aot_gpr[7] = (0u | 395u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A18CA0u) goto L_08A18CA0;
    return;
L_08A18CA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A18CB8u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18CB8u) goto L_08A18CB8;
    return;
L_08A18CB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A18D44;
      }
      goto L_08A18CCC;
    }
L_08A18CCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A18CDCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A18CDCu) goto L_08A18CDC;
    return;
L_08A18CDC:
    aot_gpr[31] = (0x08A18CE4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18CE4u) goto L_08A18CE4;
    return;
L_08A18CE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A18D04u);
    aot_gpr[7] = (0u | 403u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A18D04u) goto L_08A18D04;
    return;
L_08A18D04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A18D2Cu);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18D2Cu) goto L_08A18D2C;
    return;
L_08A18D2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    goto L_08A18D44;
L_08A18D44:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    if (static_cast<std::int32_t>(aot_gpr[7]) <= 0) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
        goto L_08A18DCC;
    }
    goto L_08A18D50;
L_08A18D50:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A18D60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A18D60u) goto L_08A18D60;
    return;
L_08A18D60:
    aot_gpr[31] = (0x08A18D68u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18D68u) goto L_08A18D68;
    return;
L_08A18D68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A18D88u);
    aot_gpr[7] = (0u | 411u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A18D88u) goto L_08A18D88;
    return;
L_08A18D88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A18DB0u);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18DB0u) goto L_08A18DB0;
    return;
L_08A18DB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08A18DCC;
L_08A18DCC:
    if (static_cast<std::int32_t>(aot_gpr[7]) <= 0) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
        goto L_08A18E50;
    }
    goto L_08A18DD4;
L_08A18DD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A18DE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A18DE4u) goto L_08A18DE4;
    return;
L_08A18DE4:
    aot_gpr[31] = (0x08A18DECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18DECu) goto L_08A18DEC;
    return;
L_08A18DEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A18E0Cu);
    aot_gpr[7] = (0u | 419u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A18E0Cu) goto L_08A18E0C;
    return;
L_08A18E0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A18E34u);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18E34u) goto L_08A18E34;
    return;
L_08A18E34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08A18E50;
L_08A18E50:
    if (static_cast<std::int32_t>(aot_gpr[7]) <= 0) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
        goto L_08A18ED4;
    }
    goto L_08A18E58;
L_08A18E58:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A18E68u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A18E68u) goto L_08A18E68;
    return;
L_08A18E68:
    aot_gpr[31] = (0x08A18E70u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18E70u) goto L_08A18E70;
    return;
L_08A18E70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A18E90u);
    aot_gpr[7] = (0u | 427u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A18E90u) goto L_08A18E90;
    return;
L_08A18E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A18EB8u);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18EB8u) goto L_08A18EB8;
    return;
L_08A18EB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_08A18ED4;
L_08A18ED4:
    if (static_cast<std::int32_t>(aot_gpr[7]) <= 0) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08A18F58;
    }
    goto L_08A18EDC;
L_08A18EDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A18EECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A18EECu) goto L_08A18EEC;
    return;
L_08A18EEC:
    aot_gpr[31] = (0x08A18EF4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18EF4u) goto L_08A18EF4;
    return;
L_08A18EF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A18F14u);
    aot_gpr[7] = (0u | 435u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A18F14u) goto L_08A18F14;
    return;
L_08A18F14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A18F3Cu);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18F3Cu) goto L_08A18F3C;
    return;
L_08A18F3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(52), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08A18F58;
L_08A18F58:
    if (static_cast<std::int32_t>(aot_gpr[7]) <= 0) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
        goto L_08A18FDC;
    }
    goto L_08A18F60;
L_08A18F60:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A18F70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A18F70u) goto L_08A18F70;
    return;
L_08A18F70:
    aot_gpr[31] = (0x08A18F78u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18F78u) goto L_08A18F78;
    return;
L_08A18F78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08A18F98u);
    aot_gpr[7] = (0u | 443u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A18F98u) goto L_08A18F98;
    return;
L_08A18F98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A18FC0u);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18FC0u) goto L_08A18FC0;
    return;
L_08A18FC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(56), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A18FDC;
L_08A18FDC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 4u, 0x08A19058u>(ctx, &aot_mem); return;
      }
      goto L_08A18FE4;
    }
L_08A18FE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A18FF4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A18FF4u) goto L_08A18FF4;
    return;
L_08A18FF4:
    aot_gpr[31] = (0x08A18FFCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18FFCu) goto L_08A18FFC;
    return;
L_08A18FFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A19000u; return;
}

void recomp_unit_0532(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0532_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_532(Runtime &runtime) {
    runtime.register_generated_unit(532u, 0x08A18000u, 4096u, &recomp_unit_0532, &recomp_unit_0532_entry);
    runtime.register_function(0x08A18000u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18018u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18028u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1803Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18044u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18050u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18060u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18068u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18090u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180A0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180A8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180B4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180BCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180D8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180E4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180ECu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180F0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A180F8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18100u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1811Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18128u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18130u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18134u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1813Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18144u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18160u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1816Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18174u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18178u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18180u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1818Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18194u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A181B0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A181CCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A181E8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A181FCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18200u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18210u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18224u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18228u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18238u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18240u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1824Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18254u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18258u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18264u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1826Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18274u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A182ACu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A182B0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A182C8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A182E0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A182E8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A182F0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A182F4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18300u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18328u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18350u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18388u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1838Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A183A4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A183BCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A183C4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A183CCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A183D0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A183DCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18404u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1842Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18464u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18468u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18480u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18498u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A184A0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A184A8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A184ACu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A184B8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A184E0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18508u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18540u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18544u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1855Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18564u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1856Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18574u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18578u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18584u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A185ACu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A185D4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18604u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18614u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1861Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18628u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18630u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1864Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18658u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18664u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18678u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A186B8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A186C8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A186D4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A186DCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A186E8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A186F0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A186F8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18700u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18708u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18710u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18728u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18760u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18774u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18780u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A187A8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A187BCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A187D8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18810u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18824u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18830u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18834u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A1884Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18860u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18864u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18878u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18898u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A188CCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A188D4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A188DCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A188F8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18904u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18930u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18934u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18948u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18964u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18998u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A189A0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A189A8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A189C4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A189D0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A189FCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18A00u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18A14u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18A30u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18A64u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18A6Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18A74u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18A90u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18A9Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18AB0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18AB4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18AC8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18AE4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18B18u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18B20u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18B28u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18B44u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18B50u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18B7Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18B80u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18B94u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18BB0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18BE4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18BECu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18BF4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18C10u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18C1Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18C30u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18C34u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18C48u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18C64u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18C78u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18C80u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18CA0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18CB8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18CCCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18CDCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18CE4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18D04u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18D2Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18D44u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18D50u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18D60u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18D68u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18D88u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18DB0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18DCCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18DD4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18DE4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18DECu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18E0Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18E34u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18E50u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18E58u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18E68u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18E70u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18E90u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18EB8u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18ED4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18EDCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18EECu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18EF4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18F14u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18F3Cu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18F58u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18F60u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18F70u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18F78u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18F98u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18FC0u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18FDCu, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18FE4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18FF4u, &recomp_unit_0532, "recomp_unit_0532");
    runtime.register_function(0x08A18FFCu, &recomp_unit_0532, "recomp_unit_0532");
}
} // namespace psprecomp
