#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0553[1016] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0,
    7, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 16, 0, 0, 17, 0, 18, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36,
    0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 50, 51, 0, 52, 0,
    53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0,
    0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 71, 0, 0, 0, 72,
    0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0,
    0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0,
    110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0,
    0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0,
    132, 0, 133, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0,
    0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0,
    162, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 167, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0,
    0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189,
};
void recomp_unit_0553_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A2D000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0553[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2D000;
    case 2u: goto L_08A2D030;
    case 3u: goto L_08A2D03C;
    case 4u: goto L_08A2D050;
    case 5u: goto L_08A2D068;
    case 6u: goto L_08A2D078;
    case 7u: goto L_08A2D080;
    case 8u: goto L_08A2D088;
    case 9u: goto L_08A2D094;
    case 10u: goto L_08A2D0A4;
    case 11u: goto L_08A2D0AC;
    case 12u: goto L_08A2D0B8;
    case 13u: goto L_08A2D0CC;
    case 14u: goto L_08A2D0D8;
    case 15u: goto L_08A2D100;
    case 16u: goto L_08A2D104;
    case 17u: goto L_08A2D110;
    case 18u: goto L_08A2D118;
    case 19u: goto L_08A2D11C;
    case 20u: goto L_08A2D12C;
    case 21u: goto L_08A2D138;
    case 22u: goto L_08A2D148;
    case 23u: goto L_08A2D158;
    case 24u: goto L_08A2D164;
    case 25u: goto L_08A2D178;
    case 26u: goto L_08A2D1A8;
    case 27u: goto L_08A2D1C0;
    case 28u: goto L_08A2D1D0;
    case 29u: goto L_08A2D1DC;
    case 30u: goto L_08A2D1E4;
    case 31u: goto L_08A2D1F4;
    case 32u: goto L_08A2D204;
    case 33u: goto L_08A2D214;
    case 34u: goto L_08A2D220;
    case 35u: goto L_08A2D264;
    case 36u: goto L_08A2D27C;
    case 37u: goto L_08A2D284;
    case 38u: goto L_08A2D28C;
    case 39u: goto L_08A2D294;
    case 40u: goto L_08A2D2A0;
    case 41u: goto L_08A2D2A8;
    case 42u: goto L_08A2D2B4;
    case 43u: goto L_08A2D2C0;
    case 44u: goto L_08A2D330;
    case 45u: goto L_08A2D338;
    case 46u: goto L_08A2D348;
    case 47u: goto L_08A2D350;
    case 48u: goto L_08A2D358;
    case 49u: goto L_08A2D360;
    case 50u: goto L_08A2D36C;
    case 51u: goto L_08A2D370;
    case 52u: goto L_08A2D378;
    case 53u: goto L_08A2D380;
    case 54u: goto L_08A2D388;
    case 55u: goto L_08A2D390;
    case 56u: goto L_08A2D3A0;
    case 57u: goto L_08A2D3A8;
    case 58u: goto L_08A2D3B0;
    case 59u: goto L_08A2D3BC;
    case 60u: goto L_08A2D3CC;
    case 61u: goto L_08A2D3F0;
    case 62u: goto L_08A2D3F8;
    case 63u: goto L_08A2D408;
    case 64u: goto L_08A2D410;
    case 65u: goto L_08A2D438;
    case 66u: goto L_08A2D440;
    case 67u: goto L_08A2D44C;
    case 68u: goto L_08A2D454;
    case 69u: goto L_08A2D460;
    case 70u: goto L_08A2D468;
    case 71u: goto L_08A2D46C;
    case 72u: goto L_08A2D47C;
    case 73u: goto L_08A2D488;
    case 74u: goto L_08A2D498;
    case 75u: goto L_08A2D4CC;
    case 76u: goto L_08A2D514;
    case 77u: goto L_08A2D520;
    case 78u: goto L_08A2D55C;
    case 79u: goto L_08A2D568;
    case 80u: goto L_08A2D5A0;
    case 81u: goto L_08A2D5AC;
    case 82u: goto L_08A2D5EC;
    case 83u: goto L_08A2D5F4;
    case 84u: goto L_08A2D604;
    case 85u: goto L_08A2D60C;
    case 86u: goto L_08A2D624;
    case 87u: goto L_08A2D630;
    case 88u: goto L_08A2D640;
    case 89u: goto L_08A2D64C;
    case 90u: goto L_08A2D66C;
    case 91u: goto L_08A2D694;
    case 92u: goto L_08A2D6E8;
    case 93u: goto L_08A2D708;
    case 94u: goto L_08A2D734;
    case 95u: goto L_08A2D73C;
    case 96u: goto L_08A2D75C;
    case 97u: goto L_08A2D764;
    case 98u: goto L_08A2D770;
    case 99u: goto L_08A2D778;
    case 100u: goto L_08A2D794;
    case 101u: goto L_08A2D7AC;
    case 102u: goto L_08A2D7BC;
    case 103u: goto L_08A2D7D0;
    case 104u: goto L_08A2D7EC;
    case 105u: goto L_08A2D81C;
    case 106u: goto L_08A2D838;
    case 107u: goto L_08A2D844;
    case 108u: goto L_08A2D864;
    case 109u: goto L_08A2D870;
    case 110u: goto L_08A2D880;
    case 111u: goto L_08A2D88C;
    case 112u: goto L_08A2D8C0;
    case 113u: goto L_08A2D8D8;
    case 114u: goto L_08A2D8E8;
    case 115u: goto L_08A2D8F4;
    case 116u: goto L_08A2D958;
    case 117u: goto L_08A2D960;
    case 118u: goto L_08A2D968;
    case 119u: goto L_08A2D970;
    case 120u: goto L_08A2D978;
    case 121u: goto L_08A2D988;
    case 122u: goto L_08A2D998;
    case 123u: goto L_08A2D9A0;
    case 124u: goto L_08A2D9A8;
    case 125u: goto L_08A2D9B0;
    case 126u: goto L_08A2D9C8;
    case 127u: goto L_08A2D9D0;
    case 128u: goto L_08A2D9E0;
    case 129u: goto L_08A2D9E8;
    case 130u: goto L_08A2D9F0;
    case 131u: goto L_08A2D9F8;
    case 132u: goto L_08A2DA00;
    case 133u: goto L_08A2DA08;
    case 134u: goto L_08A2DA0C;
    case 135u: goto L_08A2DA18;
    case 136u: goto L_08A2DA2C;
    case 137u: goto L_08A2DA34;
    case 138u: goto L_08A2DA44;
    case 139u: goto L_08A2DA5C;
    case 140u: goto L_08A2DA64;
    case 141u: goto L_08A2DA6C;
    case 142u: goto L_08A2DA78;
    case 143u: goto L_08A2DA90;
    case 144u: goto L_08A2DA98;
    case 145u: goto L_08A2DAA0;
    case 146u: goto L_08A2DAAC;
    case 147u: goto L_08A2DAC4;
    case 148u: goto L_08A2DACC;
    case 149u: goto L_08A2DAD4;
    case 150u: goto L_08A2DAE0;
    case 151u: goto L_08A2DB20;
    case 152u: goto L_08A2DB4C;
    case 153u: goto L_08A2DB60;
    case 154u: goto L_08A2DB68;
    case 155u: goto L_08A2DB80;
    case 156u: goto L_08A2DB98;
    case 157u: goto L_08A2DC10;
    case 158u: goto L_08A2DC50;
    case 159u: goto L_08A2DCCC;
    case 160u: goto L_08A2DCEC;
    case 161u: goto L_08A2DCF8;
    case 162u: goto L_08A2DD00;
    case 163u: goto L_08A2DD04;
    case 164u: goto L_08A2DD2C;
    case 165u: goto L_08A2DD44;
    case 166u: goto L_08A2DD8C;
    case 167u: goto L_08A2DD90;
    case 168u: goto L_08A2DD98;
    case 169u: goto L_08A2DDA0;
    case 170u: goto L_08A2DDA8;
    case 171u: goto L_08A2DDB4;
    case 172u: goto L_08A2DDBC;
    case 173u: goto L_08A2DDC4;
    case 174u: goto L_08A2DDCC;
    case 175u: goto L_08A2DDF0;
    case 176u: goto L_08A2DE18;
    case 177u: goto L_08A2DE7C;
    case 178u: goto L_08A2DEA4;
    case 179u: goto L_08A2DEBC;
    case 180u: goto L_08A2DED0;
    case 181u: goto L_08A2DEDC;
    case 182u: goto L_08A2DEE4;
    case 183u: goto L_08A2DEF8;
    case 184u: goto L_08A2DF08;
    case 185u: goto L_08A2DF14;
    case 186u: goto L_08A2DF2C;
    case 187u: goto L_08A2DF48;
    case 188u: goto L_08A2DF7C;
    case 189u: goto L_08A2DFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2D000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D030u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(5596));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 150u, 0x08A2CF60u>(ctx, &aot_mem) && ctx.pc == 0x08A2D030u) goto L_08A2D030;
    return;
L_08A2D030:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2D03Cu);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 150u, 0x08A2CF60u>(ctx, &aot_mem) && ctx.pc == 0x08A2D03Cu) goto L_08A2D03C;
    return;
L_08A2D03C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2D050u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D050u) goto L_08A2D050;
    return;
L_08A2D050:
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
L_08A2D068:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 162u, 0x08A2CFFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2D078u) goto L_08A2D078;
    return;
L_08A2D078:
    aot_gpr[31] = (0x08A2D080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 84u, 0x08A3941Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D080u) goto L_08A2D080;
    return;
L_08A2D080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D080;
      }
      goto L_08A2D088;
    }
L_08A2D088:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 84u, 0x08A3941Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D0A4u) goto L_08A2D0A4;
    return;
L_08A2D0A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D0A4;
      }
      goto L_08A2D0AC;
    }
L_08A2D0AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D0B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D0CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D0CCu) goto L_08A2D0CC;
    return;
L_08A2D0CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D0D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(20264));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D12C;
      }
      goto L_08A2D100;
    }
L_08A2D100:
    aot_gpr[4] = (1u << 16u);
    goto L_08A2D104;
L_08A2D104:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D118;
      }
      goto L_08A2D110;
    }
L_08A2D110:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A2D11C;
      }
      goto L_08A2D118;
    }
L_08A2D118:
    aot_gpr[7] = (0u | 1u);
    goto L_08A2D11C;
L_08A2D11C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2D104;
      }
      goto L_08A2D12C;
    }
L_08A2D12C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2D1D0;
      }
      goto L_08A2D138;
    }
L_08A2D138:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2D1D0;
      }
      goto L_08A2D148;
    }
L_08A2D148:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D1C0;
      }
      goto L_08A2D158;
    }
L_08A2D158:
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    goto L_08A2D164;
L_08A2D164:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[11]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D1A8;
      }
      goto L_08A2D178;
    }
L_08A2D178:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    goto L_08A2D1A8;
L_08A2D1A8:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A2D164;
      }
      goto L_08A2D1C0;
    }
L_08A2D1C0:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2D148;
      }
      goto L_08A2D1D0;
    }
L_08A2D1D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D1F4;
      }
      goto L_08A2D1DC;
    }
L_08A2D1DC:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A2D1E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D1E4u) goto L_08A2D1E4;
    return;
L_08A2D1E4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D1DC;
      }
      goto L_08A2D1F4;
    }
L_08A2D1F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D204:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D214u);
    // nop
    goto L_08A2D0D8;
L_08A2D214:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D220:
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[9] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[9]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D264:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2D28C;
      }
      goto L_08A2D27C;
    }
L_08A2D27C:
    aot_gpr[31] = (0x08A2D284u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 139u, 0x08A2CE60u>(ctx, &aot_mem) && ctx.pc == 0x08A2D284u) goto L_08A2D284;
    return;
L_08A2D284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D2B4;
      }
      goto L_08A2D28C;
    }
L_08A2D28C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D2A8;
      }
      goto L_08A2D294;
    }
L_08A2D294:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A2D2A0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D2A0u) goto L_08A2D2A0;
    return;
L_08A2D2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D2B4;
      }
      goto L_08A2D2A8;
    }
L_08A2D2A8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A2D2B4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D2B4u) goto L_08A2D2B4;
    return;
L_08A2D2B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D2C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[23] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (0u < aot_gpr[9] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[20] = (aot_gpr[9] | 0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[23] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[11]);
      if (branch_taken) {
          goto L_08A2D338;
      }
      goto L_08A2D330;
    }
L_08A2D330:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D3B0;
      }
      goto L_08A2D338;
    }
L_08A2D338:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[22] = (ctx.lo);
    { const bool branch_taken = aot_gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D388;
      }
      goto L_08A2D348;
    }
L_08A2D348:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[22]);
      if (branch_taken) {
          goto L_08A2D360;
      }
      goto L_08A2D350;
    }
L_08A2D350:
    aot_gpr[31] = (0x08A2D358u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A2D88C;
L_08A2D358:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2D370;
      }
      goto L_08A2D360;
    }
L_08A2D360:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2D36Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D36Cu) goto L_08A2D36C;
    return;
L_08A2D36C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A2D370;
L_08A2D370:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
        goto L_08A2D378;
    }
    goto L_08A2D378;
L_08A2D378:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2D388;
      }
      goto L_08A2D380;
    }
L_08A2D380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D498;
      }
      goto L_08A2D388;
    }
L_08A2D388:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D3A0;
      }
      goto L_08A2D390;
    }
L_08A2D390:
    aot_gpr[4] = (aot_gpr[23] - aot_gpr[21]);
    aot_gpr[5] = (~(aot_gpr[19] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_08A2D3A0;
L_08A2D3A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D3B0;
      }
      goto L_08A2D3A8;
    }
L_08A2D3A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D498;
      }
      goto L_08A2D3B0;
    }
L_08A2D3B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D3F0;
      }
      goto L_08A2D3BC;
    }
L_08A2D3BC:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[31] = (0x08A2D3CCu);
    aot_gpr[6] = (0u | 1u);
    goto L_08A2D220;
L_08A2D3CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[23]);
    goto L_08A2D3F0;
L_08A2D3F0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D47C;
      }
      goto L_08A2D3F8;
    }
L_08A2D3F8:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A2D47C;
      }
      goto L_08A2D408;
    }
L_08A2D408:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D440;
      }
      goto L_08A2D410;
    }
L_08A2D410:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A2D438u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D438u) goto L_08A2D438;
    return;
L_08A2D438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D44C;
      }
      goto L_08A2D440;
    }
L_08A2D440:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A2D44Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D44Cu) goto L_08A2D44C;
    return;
L_08A2D44C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D460;
      }
      goto L_08A2D454;
    }
L_08A2D454:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[4]);
    goto L_08A2D460;
L_08A2D460:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D46C;
      }
      goto L_08A2D468;
    }
L_08A2D468:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[17]);
    goto L_08A2D46C;
L_08A2D46C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A2D408;
      }
      goto L_08A2D47C;
    }
L_08A2D47C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D498;
      }
      goto L_08A2D488;
    }
L_08A2D488:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    goto L_08A2D498;
L_08A2D498:
    aot_gpr[2] = (aot_gpr[23] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D4CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[11] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[2] = (aot_gpr[10] | 0u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[10] = (aot_gpr[8] | 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-17688)));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D514u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_08A2D2C0;
L_08A2D514:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D520:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[11] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-17688)));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[9] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D55Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_08A2D2C0;
L_08A2D55C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D568:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[11] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-17688)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[11] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D5A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_08A2D2C0;
L_08A2D5A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D5AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A2D5F4;
      }
      goto L_08A2D5EC;
    }
L_08A2D5EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2D604;
      }
      goto L_08A2D5F4;
    }
L_08A2D5F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[4] - aot_gpr[16]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08A2D604;
L_08A2D604:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D640;
      }
      goto L_08A2D60C;
    }
L_08A2D60C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[16] ? 1u : 0u);
    aot_gpr[21] = (ctx.lo);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[18] + aot_gpr[21]);
      if (branch_taken) {
          goto L_08A2D640;
      }
      goto L_08A2D624;
    }
L_08A2D624:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A2D630u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D630u) goto L_08A2D630;
    return;
L_08A2D630:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] - aot_gpr[17]);
      if (branch_taken) {
          goto L_08A2D624;
      }
      goto L_08A2D640;
    }
L_08A2D640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D66C;
      }
      goto L_08A2D64C;
    }
L_08A2D64C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[31] = (0x08A2D66Cu);
    aot_gpr[9] = (0u | 0u);
    goto L_08A2D264;
L_08A2D66C:
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
L_08A2D694:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[30]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[20] = (aot_gpr[7] | 0u);
    aot_gpr[30] = (aot_gpr[8] | 0u);
    aot_gpr[3] = (aot_gpr[9] | 0u);
    aot_gpr[2] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_08A2D7EC;
      }
      goto L_08A2D6E8;
    }
L_08A2D6E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A2D708u);
    aot_gpr[6] = (0u | 0u);
    goto L_08A2D220;
L_08A2D708:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2D770;
      }
      goto L_08A2D734;
    }
L_08A2D734:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D764;
      }
      goto L_08A2D73C;
    }
L_08A2D73C:
    aot_gpr[4] = (aot_gpr[22] - aot_gpr[23]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (~(aot_gpr[5] | 0u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2D764;
      }
      goto L_08A2D75C;
    }
L_08A2D75C:
    aot_gpr[31] = (0x08A2D764u);
    // nop
    goto L_08A2D870;
L_08A2D764:
    aot_gpr[21] = (aot_gpr[18] | 0u);
    { const std::uint32_t dividend = aot_gpr[21]; const std::uint32_t divisor = aot_gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.lo);
    goto L_08A2D770;
L_08A2D770:
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[18]);
      if (branch_taken) {
          goto L_08A2D7BC;
      }
      goto L_08A2D778;
    }
L_08A2D778:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    aot_gpr[17] = (ctx.lo);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[22] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A2D7BC;
      }
      goto L_08A2D794;
    }
L_08A2D794:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[5]);
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A2D7ACu);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2D7ACu) goto L_08A2D7AC;
    return;
L_08A2D7AC:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A2D794;
      }
      goto L_08A2D7BC;
    }
L_08A2D7BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2D7EC;
      }
      goto L_08A2D7D0;
    }
L_08A2D7D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A2D7ECu);
    aot_gpr[9] = (aot_gpr[23] | 0u);
    goto L_08A2D264;
L_08A2D7EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D81C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-17688)));
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D838u);
    aot_gpr[10] = (0u | 0u);
    goto L_08A2D694;
L_08A2D838:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D844:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (aot_gpr[9] | 0u);
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (2216u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-17688)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D864u);
    aot_gpr[8] = (0u | 1u);
    goto L_08A2D694;
L_08A2D864:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D870:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D880u);
    aot_gpr[4] = (0u | 9u);
    goto L_08A2D068;
L_08A2D880:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D88C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-17700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[29]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17680));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D8C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08A2DD44;
L_08A2D8C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D8D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D8E8u);
    aot_gpr[4] = (0u | 2u);
    goto L_08A2D068;
L_08A2D8E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D8F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-17704)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[9] = (0u | 65535u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17700), aot_gpr[29]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17652));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(-17704)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[31]);
    aot_gpr[31] = (0x08A2D958u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 94u, 0x08A364F8u>(ctx, &aot_mem) && ctx.pc == 0x08A2D958u) goto L_08A2D958;
    return;
L_08A2D958:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D970;
      }
      goto L_08A2D960;
    }
L_08A2D960:
    aot_gpr[31] = (0x08A2D968u);
    // nop
    goto L_08A2DAAC;
L_08A2D968:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2DA0C;
      }
      goto L_08A2D970;
    }
L_08A2D970:
    aot_gpr[31] = (0x08A2D978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 94u, 0x08A2E5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A2D978u) goto L_08A2D978;
    return;
L_08A2D978:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(228));
    aot_gpr[31] = (0x08A2D988u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(232));
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 131u, 0x08A2E900u>(ctx, &aot_mem) && ctx.pc == 0x08A2D988u) goto L_08A2D988;
    return;
L_08A2D988:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[31] = (0x08A2D998u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 132u, 0x08A2E92Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D998u) goto L_08A2D998;
    return;
L_08A2D998:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D9B0;
      }
      goto L_08A2D9A0;
    }
L_08A2D9A0:
    aot_gpr[31] = (0x08A2D9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 108u, 0x08A2E778u>(ctx, &aot_mem) && ctx.pc == 0x08A2D9A8u) goto L_08A2D9A8;
    return;
L_08A2D9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA00;
      }
      goto L_08A2D9B0;
    }
L_08A2D9B0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(20048));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A2D9C8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 132u, 0x08A2E92Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2D9C8u) goto L_08A2D9C8;
    return;
L_08A2D9C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D9F8;
      }
      goto L_08A2D9D0;
    }
L_08A2D9D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x08A2D9E0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 119u, 0x08A2E810u>(ctx, &aot_mem) && ctx.pc == 0x08A2D9E0u) goto L_08A2D9E0;
    return;
L_08A2D9E0:
    aot_gpr[31] = (0x08A2D9E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A2DB98;
L_08A2D9E8:
    aot_gpr[31] = (0x08A2D9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 142u, 0x08A2E9CCu>(ctx, &aot_mem) && ctx.pc == 0x08A2D9F0u) goto L_08A2D9F0;
    return;
L_08A2D9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA00;
      }
      goto L_08A2D9F8;
    }
L_08A2D9F8:
    aot_gpr[31] = (0x08A2DA00u);
    // nop
    goto L_08A2DA44;
L_08A2DA00:
    aot_gpr[31] = (0x08A2DA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 122u, 0x08A2E880u>(ctx, &aot_mem) && ctx.pc == 0x08A2DA08u) goto L_08A2DA08;
    return;
L_08A2DA08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A2DA0C;
L_08A2DA0C:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x08A2DA18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 84u, 0x08A3941Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DA18u) goto L_08A2DA18;
    return;
L_08A2DA18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    goto L_08A2DA2C;
L_08A2DA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA2C;
      }
      goto L_08A2DA34;
    }
L_08A2DA34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DA44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2DA5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-17656), aot_gpr[4]);
    goto L_08A2DA78;
L_08A2DA5C:
    aot_gpr[31] = (0x08A2DA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 84u, 0x08A3941Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DA64u) goto L_08A2DA64;
    return;
L_08A2DA64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA64;
      }
      goto L_08A2DA6C;
    }
L_08A2DA6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DA78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17696)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA98;
      }
      goto L_08A2DA90;
    }
L_08A2DA90:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A2DA98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DA98u) goto L_08A2DA98;
    return;
L_08A2DA98:
    aot_gpr[31] = (0x08A2DAA0u);
    aot_gpr[4] = (0u | 3u);
    goto L_08A2D068;
L_08A2DAA0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DAAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17692)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DACC;
      }
      goto L_08A2DAC4;
    }
L_08A2DAC4:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A2DACCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DACCu) goto L_08A2DACC;
    return;
L_08A2DACC:
    aot_gpr[31] = (0x08A2DAD4u);
    // nop
    goto L_08A2DA78;
L_08A2DAD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DAE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-17700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-17700), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(19980));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-17700), aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DB20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-17700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[29]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08A2DB68;
      }
      goto L_08A2DB4C;
    }
L_08A2DB4C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19980));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A2DB68;
      }
      goto L_08A2DB60;
    }
L_08A2DB60:
    aot_gpr[31] = (0x08A2DB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2DB68u) goto L_08A2DB68;
    return;
L_08A2DB68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DB80:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[2] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5732));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DB98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17640));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-17704)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[29]);
    aot_gpr[5] = (0u | 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[31]);
    aot_gpr[31] = (0x08A2DC10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2DAE0;
L_08A2DC10:
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20004));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DC50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-17700), aot_gpr[6]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17624));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-17704)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[29]);
    aot_gpr[4] = (0u | 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2DD00;
      }
      goto L_08A2DCCC;
    }
L_08A2DCCC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20004));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A2DCECu);
    aot_gpr[5] = (0u | 0u);
    goto L_08A2DB20;
L_08A2DCEC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(136)));
        goto L_08A2DD04;
    }
    goto L_08A2DCF8;
L_08A2DCF8:
    aot_gpr[31] = (0x08A2DD00u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2DD00u) goto L_08A2DD00;
    return;
L_08A2DD00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    goto L_08A2DD04;
L_08A2DD04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DD2C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[2] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(5732));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DD44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-17700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-17700), aot_gpr[29]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-17608));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A2DD90;
      }
      goto L_08A2DD8C;
    }
L_08A2DD8C:
    aot_gpr[16] = (0u | 1u);
    goto L_08A2DD90;
L_08A2DD90:
    aot_gpr[17] = (2211u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-8720));
    goto L_08A2DD98;
L_08A2DD98:
    aot_gpr[31] = (0x08A2DDA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2DDA0u) goto L_08A2DDA0;
    return;
L_08A2DDA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DDCC;
      }
      goto L_08A2DDA8;
    }
L_08A2DDA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-17712)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DDBC;
      }
      goto L_08A2DDB4;
    }
L_08A2DDB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A2DDBC;
      }
      goto L_08A2DDBC;
    }
L_08A2DDBC:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A2DDC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DDC4u) goto L_08A2DDC4;
    return;
L_08A2DDC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DD98;
      }
      goto L_08A2DDCC;
    }
L_08A2DDCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DDF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-256));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[31]);
    aot_gpr[31] = (0x08A2DE18u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26504));
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 119u, 0x08A2E810u>(ctx, &aot_mem) && ctx.pc == 0x08A2DE18u) goto L_08A2DE18;
    return;
L_08A2DE18:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-17592));
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(-17704)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[29]);
    aot_gpr[5] = (0u | 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[31] = (0x08A2DE7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2DAE0;
L_08A2DE7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26480));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x08A2DEA4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0554_entry, 554u, 142u, 0x08A2E9CCu>(ctx, &aot_mem) && ctx.pc == 0x08A2DEA4u) goto L_08A2DEA4;
    return;
L_08A2DEA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DEBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A2DED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2DED0u) goto L_08A2DED0;
    return;
L_08A2DED0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DEE4;
      }
      goto L_08A2DEDC;
    }
L_08A2DEDC:
    aot_gpr[31] = (0x08A2DEE4u);
    // nop
    goto L_08A2DA44;
L_08A2DEE4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DEF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A2DF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A2DF08u) goto L_08A2DF08;
    return;
L_08A2DF08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DF14:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DF2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(30400));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A2DF48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2DF14;
L_08A2DF48:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(30424));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17572), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DF7C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-17572)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-17572)));
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-17568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-17568), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DFDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] >> 13u);
    aot_gpr[4] = (aot_gpr[4] << 13u);
    aot_gpr[4] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8192));
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(4096) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    ctx.pc = 0x08A2E000u; return;
}

void recomp_unit_0553(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0553_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_553(Runtime &runtime) {
    runtime.register_generated_unit(553u, 0x08A2D000u, 4096u, &recomp_unit_0553, &recomp_unit_0553_entry);
    runtime.register_function(0x08A2D000u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D030u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D03Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D050u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D068u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D078u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D080u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D088u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D094u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D0A4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D0ACu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D0B8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D0CCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D0D8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D100u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D104u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D110u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D118u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D11Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D12Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D138u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D148u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D158u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D164u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D178u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D1A8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D1C0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D1D0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D1DCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D1E4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D1F4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D204u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D214u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D220u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D264u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D27Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D284u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D28Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D294u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D2A0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D2A8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D2B4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D2C0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D330u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D338u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D348u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D350u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D358u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D360u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D36Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D370u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D378u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D380u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D388u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D390u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D3A0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D3A8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D3B0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D3BCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D3CCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D3F0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D3F8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D408u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D410u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D438u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D440u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D44Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D454u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D460u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D468u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D46Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D47Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D488u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D498u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D4CCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D514u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D520u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D55Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D568u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D5A0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D5ACu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D5ECu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D5F4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D604u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D60Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D624u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D630u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D640u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D64Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D66Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D694u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D6E8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D708u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D734u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D73Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D75Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D764u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D770u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D778u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D794u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D7ACu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D7BCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D7D0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D7ECu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D81Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D838u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D844u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D864u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D870u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D880u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D88Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D8C0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D8D8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D8E8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D8F4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D958u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D960u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D968u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D970u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D978u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D988u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D998u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9A0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9A8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9B0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9C8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9D0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9E0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9E8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9F0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2D9F8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA00u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA08u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA0Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA18u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA2Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA34u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA44u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA5Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA64u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA6Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA78u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA90u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DA98u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DAA0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DAACu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DAC4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DACCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DAD4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DAE0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DB20u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DB4Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DB60u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DB68u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DB80u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DB98u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DC10u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DC50u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DCCCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DCECu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DCF8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DD00u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DD04u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DD2Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DD44u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DD8Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DD90u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DD98u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DDA0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DDA8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DDB4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DDBCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DDC4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DDCCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DDF0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DE18u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DE7Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DEA4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DEBCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DED0u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DEDCu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DEE4u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DEF8u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DF08u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DF14u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DF2Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DF48u, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DF7Cu, &recomp_unit_0553, "recomp_unit_0553");
    runtime.register_function(0x08A2DFDCu, &recomp_unit_0553, "recomp_unit_0553");
}
} // namespace psprecomp
