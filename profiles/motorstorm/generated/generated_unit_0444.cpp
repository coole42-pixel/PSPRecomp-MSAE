#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0444[928] = {
    1, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0,
    0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0,
    30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0,
    0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0,
    72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0,
    0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0,
    0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0,
    0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0,
    0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 181,
};
void recomp_unit_0444_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089C0000u;
        entry_id = (entry_delta < 3712u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0444[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C0000;
    case 2u: goto L_089C0004;
    case 3u: goto L_089C0010;
    case 4u: goto L_089C001C;
    case 5u: goto L_089C002C;
    case 6u: goto L_089C0048;
    case 7u: goto L_089C006C;
    case 8u: goto L_089C0078;
    case 9u: goto L_089C0084;
    case 10u: goto L_089C0090;
    case 11u: goto L_089C009C;
    case 12u: goto L_089C00A8;
    case 13u: goto L_089C00B8;
    case 14u: goto L_089C00D4;
    case 15u: goto L_089C00F8;
    case 16u: goto L_089C0104;
    case 17u: goto L_089C0110;
    case 18u: goto L_089C011C;
    case 19u: goto L_089C0128;
    case 20u: goto L_089C0134;
    case 21u: goto L_089C0144;
    case 22u: goto L_089C0160;
    case 23u: goto L_089C0180;
    case 24u: goto L_089C0190;
    case 25u: goto L_089C01AC;
    case 26u: goto L_089C01D0;
    case 27u: goto L_089C01DC;
    case 28u: goto L_089C01E8;
    case 29u: goto L_089C01F4;
    case 30u: goto L_089C0200;
    case 31u: goto L_089C020C;
    case 32u: goto L_089C0218;
    case 33u: goto L_089C0238;
    case 34u: goto L_089C0264;
    case 35u: goto L_089C0280;
    case 36u: goto L_089C028C;
    case 37u: goto L_089C0298;
    case 38u: goto L_089C02A4;
    case 39u: goto L_089C02B8;
    case 40u: goto L_089C02DC;
    case 41u: goto L_089C02E8;
    case 42u: goto L_089C0304;
    case 43u: goto L_089C0328;
    case 44u: goto L_089C0334;
    case 45u: goto L_089C0340;
    case 46u: goto L_089C035C;
    case 47u: goto L_089C0380;
    case 48u: goto L_089C038C;
    case 49u: goto L_089C0398;
    case 50u: goto L_089C03A4;
    case 51u: goto L_089C03B0;
    case 52u: goto L_089C03BC;
    case 53u: goto L_089C03C8;
    case 54u: goto L_089C03D4;
    case 55u: goto L_089C03E0;
    case 56u: goto L_089C03EC;
    case 57u: goto L_089C03F8;
    case 58u: goto L_089C0404;
    case 59u: goto L_089C0410;
    case 60u: goto L_089C041C;
    case 61u: goto L_089C042C;
    case 62u: goto L_089C0438;
    case 63u: goto L_089C0454;
    case 64u: goto L_089C0478;
    case 65u: goto L_089C0484;
    case 66u: goto L_089C0490;
    case 67u: goto L_089C04AC;
    case 68u: goto L_089C04D0;
    case 69u: goto L_089C04DC;
    case 70u: goto L_089C04E8;
    case 71u: goto L_089C04F4;
    case 72u: goto L_089C0500;
    case 73u: goto L_089C050C;
    case 74u: goto L_089C0518;
    case 75u: goto L_089C0524;
    case 76u: goto L_089C0530;
    case 77u: goto L_089C053C;
    case 78u: goto L_089C0548;
    case 79u: goto L_089C0554;
    case 80u: goto L_089C0560;
    case 81u: goto L_089C056C;
    case 82u: goto L_089C0578;
    case 83u: goto L_089C0584;
    case 84u: goto L_089C0590;
    case 85u: goto L_089C059C;
    case 86u: goto L_089C05A8;
    case 87u: goto L_089C05B4;
    case 88u: goto L_089C05C0;
    case 89u: goto L_089C05CC;
    case 90u: goto L_089C05DC;
    case 91u: goto L_089C05EC;
    case 92u: goto L_089C05F8;
    case 93u: goto L_089C0688;
    case 94u: goto L_089C06AC;
    case 95u: goto L_089C06BC;
    case 96u: goto L_089C06C8;
    case 97u: goto L_089C06D4;
    case 98u: goto L_089C06E0;
    case 99u: goto L_089C06EC;
    case 100u: goto L_089C06F8;
    case 101u: goto L_089C0704;
    case 102u: goto L_089C0710;
    case 103u: goto L_089C071C;
    case 104u: goto L_089C0738;
    case 105u: goto L_089C0764;
    case 106u: goto L_089C0774;
    case 107u: goto L_089C0788;
    case 108u: goto L_089C07B4;
    case 109u: goto L_089C07D0;
    case 110u: goto L_089C07DC;
    case 111u: goto L_089C07EC;
    case 112u: goto L_089C07F8;
    case 113u: goto L_089C0804;
    case 114u: goto L_089C0818;
    case 115u: goto L_089C0844;
    case 116u: goto L_089C0860;
    case 117u: goto L_089C0870;
    case 118u: goto L_089C0884;
    case 119u: goto L_089C08B0;
    case 120u: goto L_089C08BC;
    case 121u: goto L_089C08CC;
    case 122u: goto L_089C08D8;
    case 123u: goto L_089C0958;
    case 124u: goto L_089C0984;
    case 125u: goto L_089C09A0;
    case 126u: goto L_089C09AC;
    case 127u: goto L_089C09BC;
    case 128u: goto L_089C09C8;
    case 129u: goto L_089C09DC;
    case 130u: goto L_089C0A08;
    case 131u: goto L_089C0A14;
    case 132u: goto L_089C0A24;
    case 133u: goto L_089C0A30;
    case 134u: goto L_089C0A44;
    case 135u: goto L_089C0A70;
    case 136u: goto L_089C0A8C;
    case 137u: goto L_089C0AA0;
    case 138u: goto L_089C0ACC;
    case 139u: goto L_089C0ADC;
    case 140u: goto L_089C0AF0;
    case 141u: goto L_089C0B1C;
    case 142u: goto L_089C0B2C;
    case 143u: goto L_089C0B40;
    case 144u: goto L_089C0B6C;
    case 145u: goto L_089C0B7C;
    case 146u: goto L_089C0B90;
    case 147u: goto L_089C0BBC;
    case 148u: goto L_089C0BC8;
    case 149u: goto L_089C0BD8;
    case 150u: goto L_089C0BE4;
    case 151u: goto L_089C0BF8;
    case 152u: goto L_089C0C24;
    case 153u: goto L_089C0C34;
    case 154u: goto L_089C0C48;
    case 155u: goto L_089C0C74;
    case 156u: goto L_089C0C80;
    case 157u: goto L_089C0C8C;
    case 158u: goto L_089C0C9C;
    case 159u: goto L_089C0CB0;
    case 160u: goto L_089C0CDC;
    case 161u: goto L_089C0CE8;
    case 162u: goto L_089C0CF8;
    case 163u: goto L_089C0D04;
    case 164u: goto L_089C0D18;
    case 165u: goto L_089C0D44;
    case 166u: goto L_089C0D60;
    case 167u: goto L_089C0D70;
    case 168u: goto L_089C0D84;
    case 169u: goto L_089C0DB0;
    case 170u: goto L_089C0DBC;
    case 171u: goto L_089C0DCC;
    case 172u: goto L_089C0DD8;
    case 173u: goto L_089C0DE4;
    case 174u: goto L_089C0DF8;
    case 175u: goto L_089C0E24;
    case 176u: goto L_089C0E34;
    case 177u: goto L_089C0E40;
    case 178u: goto L_089C0E50;
    case 179u: goto L_089C0E5C;
    case 180u: goto L_089C0E68;
    case 181u: goto L_089C0E7C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C0000:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(472));
    goto L_089C0004;
L_089C0004:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0010u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(476));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0010u) goto L_089C0010;
    return;
L_089C0010:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C001Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C001Cu) goto L_089C001C;
    return;
L_089C001C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[31] = (0x089C002Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C002Cu) goto L_089C002C;
    return;
L_089C002C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089C0048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C006Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C006Cu) goto L_089C006C;
    return;
L_089C006C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0078u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0078u) goto L_089C0078;
    return;
L_089C0078:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0084u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0084u) goto L_089C0084;
    return;
L_089C0084:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0090u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(472));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0090u) goto L_089C0090;
    return;
L_089C0090:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C009Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(476));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C009Cu) goto L_089C009C;
    return;
L_089C009C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C00A8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C00A8u) goto L_089C00A8;
    return;
L_089C00A8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[31] = (0x089C00B8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C00B8u) goto L_089C00B8;
    return;
L_089C00B8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089C00D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C00F8u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C00F8u) goto L_089C00F8;
    return;
L_089C00F8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0104u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(464));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0104u) goto L_089C0104;
    return;
L_089C0104:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0110u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(468));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0110u) goto L_089C0110;
    return;
L_089C0110:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C011Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(472));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C011Cu) goto L_089C011C;
    return;
L_089C011C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0128u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(476));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0128u) goto L_089C0128;
    return;
L_089C0128:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0134u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0134u) goto L_089C0134;
    return;
L_089C0134:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[31] = (0x089C0144u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0144u) goto L_089C0144;
    return;
L_089C0144:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089C0160:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C0180u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0180u) goto L_089C0180;
    return;
L_089C0180:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089C0190u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0190u) goto L_089C0190;
    return;
L_089C0190:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089C01AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C01D0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C01D0u) goto L_089C01D0;
    return;
L_089C01D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C01DCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C01DCu) goto L_089C01DC;
    return;
L_089C01DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C01E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C01E8u) goto L_089C01E8;
    return;
L_089C01E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C01F4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C01F4u) goto L_089C01F4;
    return;
L_089C01F4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0200u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0200u) goto L_089C0200;
    return;
L_089C0200:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C020Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C020Cu) goto L_089C020C;
    return;
L_089C020C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0218u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0218u) goto L_089C0218;
    return;
L_089C0218:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(152));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089C0238:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0264u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C01AC;
L_089C0264:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(312));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089C0280u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0442_entry, 442u, 179u, 0x089BEF10u>(ctx, &aot_mem) && ctx.pc == 0x089C0280u) goto L_089C0280;
    return;
L_089C0280:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C028Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(488));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C028Cu) goto L_089C028C;
    return;
L_089C028C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0298u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(492));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0298u) goto L_089C0298;
    return;
L_089C0298:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C02A4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C02A4u) goto L_089C02A4;
    return;
L_089C02A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C02B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C02DCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C02DCu) goto L_089C02DC;
    return;
L_089C02DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C02E8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C02E8u) goto L_089C02E8;
    return;
L_089C02E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(22));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_089C0304:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C0328u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0328u) goto L_089C0328;
    return;
L_089C0328:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0334u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0334u) goto L_089C0334;
    return;
L_089C0334:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0340u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C0340u) goto L_089C0340;
    return;
L_089C0340:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_089C035C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C0380u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0380u) goto L_089C0380;
    return;
L_089C0380:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C038Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C038Cu) goto L_089C038C;
    return;
L_089C038C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0398u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0398u) goto L_089C0398;
    return;
L_089C0398:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C03A4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C03A4u) goto L_089C03A4;
    return;
L_089C03A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C03B0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C03B0u) goto L_089C03B0;
    return;
L_089C03B0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C03BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C03BCu) goto L_089C03BC;
    return;
L_089C03BC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C03C8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C03C8u) goto L_089C03C8;
    return;
L_089C03C8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C03D4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C03D4u) goto L_089C03D4;
    return;
L_089C03D4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C03E0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C03E0u) goto L_089C03E0;
    return;
L_089C03E0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C03ECu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C03ECu) goto L_089C03EC;
    return;
L_089C03EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C03F8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C03F8u) goto L_089C03F8;
    return;
L_089C03F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0404u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0404u) goto L_089C0404;
    return;
L_089C0404:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0410u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0410u) goto L_089C0410;
    return;
L_089C0410:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C041Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C041Cu) goto L_089C041C;
    return;
L_089C041C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089C042Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C042Cu) goto L_089C042C;
    return;
L_089C042C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0438u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089C0438u) goto L_089C0438;
    return;
L_089C0438:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089C0454:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C0478u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0478u) goto L_089C0478;
    return;
L_089C0478:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0484u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0484u) goto L_089C0484;
    return;
L_089C0484:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0490u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C0490u) goto L_089C0490;
    return;
L_089C0490:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_089C04AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C04D0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C04D0u) goto L_089C04D0;
    return;
L_089C04D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C04DCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C04DCu) goto L_089C04DC;
    return;
L_089C04DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C04E8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C04E8u) goto L_089C04E8;
    return;
L_089C04E8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C04F4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C04F4u) goto L_089C04F4;
    return;
L_089C04F4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0500u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C0500u) goto L_089C0500;
    return;
L_089C0500:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C050Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C050Cu) goto L_089C050C;
    return;
L_089C050C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0518u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C0518u) goto L_089C0518;
    return;
L_089C0518:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0524u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0524u) goto L_089C0524;
    return;
L_089C0524:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0530u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0530u) goto L_089C0530;
    return;
L_089C0530:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C053Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C053Cu) goto L_089C053C;
    return;
L_089C053C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0548u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0548u) goto L_089C0548;
    return;
L_089C0548:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0554u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0554u) goto L_089C0554;
    return;
L_089C0554:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0560u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0560u) goto L_089C0560;
    return;
L_089C0560:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C056Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C056Cu) goto L_089C056C;
    return;
L_089C056C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0578u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0578u) goto L_089C0578;
    return;
L_089C0578:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0584u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0584u) goto L_089C0584;
    return;
L_089C0584:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0590u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0590u) goto L_089C0590;
    return;
L_089C0590:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C059Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C059Cu) goto L_089C059C;
    return;
L_089C059C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C05A8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C05A8u) goto L_089C05A8;
    return;
L_089C05A8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C05B4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C05B4u) goto L_089C05B4;
    return;
L_089C05B4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C05C0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C05C0u) goto L_089C05C0;
    return;
L_089C05C0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C05CCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C05CCu) goto L_089C05CC;
    return;
L_089C05CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x089C05DCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C05DCu) goto L_089C05DC;
    return;
L_089C05DC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(160));
    aot_gpr[31] = (0x089C05ECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C05ECu) goto L_089C05EC;
    return;
L_089C05EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C05F8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089C05F8u) goto L_089C05F8;
    return;
L_089C05F8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem); return;
L_089C0688:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089C06ACu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C06ACu) goto L_089C06AC;
    return;
L_089C06AC:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C06BCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C06BCu) goto L_089C06BC;
    return;
L_089C06BC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C06C8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C06C8u) goto L_089C06C8;
    return;
L_089C06C8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C06D4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C06D4u) goto L_089C06D4;
    return;
L_089C06D4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C06E0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C06E0u) goto L_089C06E0;
    return;
L_089C06E0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C06ECu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C06ECu) goto L_089C06EC;
    return;
L_089C06EC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C06F8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C06F8u) goto L_089C06F8;
    return;
L_089C06F8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0704u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C0704u) goto L_089C0704;
    return;
L_089C0704:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0710u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(166));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C0710u) goto L_089C0710;
    return;
L_089C0710:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C071Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089C071Cu) goto L_089C071C;
    return;
L_089C071C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(170));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem); return;
L_089C0738:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0764u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0764:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[31] = (0x089C0774u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0774u) goto L_089C0774;
    return;
L_089C0774:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0788:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C07B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C07B4:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(312));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089C07D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0442_entry, 442u, 179u, 0x089BEF10u>(ctx, &aot_mem) && ctx.pc == 0x089C07D0u) goto L_089C07D0;
    return;
L_089C07D0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C07DCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C07DCu) goto L_089C07DC;
    return;
L_089C07DC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(488));
    aot_gpr[31] = (0x089C07ECu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C07ECu) goto L_089C07EC;
    return;
L_089C07EC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C07F8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(509));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089C07F8u) goto L_089C07F8;
    return;
L_089C07F8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0804u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0804u) goto L_089C0804;
    return;
L_089C0804:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0818:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0844u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0844:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(312));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0860u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0442_entry, 442u, 179u, 0x089BEF10u>(ctx, &aot_mem) && ctx.pc == 0x089C0860u) goto L_089C0860;
    return;
L_089C0860:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[31] = (0x089C0870u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0870u) goto L_089C0870;
    return;
L_089C0870:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C08B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C08B0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C08BCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C08BCu) goto L_089C08BC;
    return;
L_089C08BC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x089C08CCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C08CCu) goto L_089C08CC;
    return;
L_089C08CC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C08D8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C08D8u) goto L_089C08D8;
    return;
L_089C08D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0958:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0984u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0984:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(276));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (0x089C09A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0443_entry, 443u, 226u, 0x089BFEDCu>(ctx, &aot_mem) && ctx.pc == 0x089C09A0u) goto L_089C09A0;
    return;
L_089C09A0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C09ACu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C09ACu) goto L_089C09AC;
    return;
L_089C09AC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(452));
    aot_gpr[31] = (0x089C09BCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C09BCu) goto L_089C09BC;
    return;
L_089C09BC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C09C8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C09C8u) goto L_089C09C8;
    return;
L_089C09C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C09DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0A08u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0A08:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0A14u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0A14u) goto L_089C0A14;
    return;
L_089C0A14:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x089C0A24u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0A24u) goto L_089C0A24;
    return;
L_089C0A24:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0A30u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0A30u) goto L_089C0A30;
    return;
L_089C0A30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0A44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0A70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0A70:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(276));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089C0A8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0443_entry, 443u, 226u, 0x089BFEDCu>(ctx, &aot_mem) && ctx.pc == 0x089C0A8Cu) goto L_089C0A8C;
    return;
L_089C0A8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0AA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0ACCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0ACC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[31] = (0x089C0ADCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0ADCu) goto L_089C0ADC;
    return;
L_089C0ADC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0AF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0B1Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0B1C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[31] = (0x089C0B2Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0B2Cu) goto L_089C0B2C;
    return;
L_089C0B2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0B40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0B6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0B6C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[31] = (0x089C0B7Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0B7Cu) goto L_089C0B7C;
    return;
L_089C0B7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0B90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0BBCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0BBC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0BC8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0BC8u) goto L_089C0BC8;
    return;
L_089C0BC8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x089C0BD8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0BD8u) goto L_089C0BD8;
    return;
L_089C0BD8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0BE4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0BE4u) goto L_089C0BE4;
    return;
L_089C0BE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0BF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0C24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0C24:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[31] = (0x089C0C34u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0C34u) goto L_089C0C34;
    return;
L_089C0C34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0C48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0C74u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_089C0688;
L_089C0C74:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0C80u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0C80u) goto L_089C0C80;
    return;
L_089C0C80:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089C0C8Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0C8Cu) goto L_089C0C8C;
    return;
L_089C0C8C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(180));
    aot_gpr[31] = (0x089C0C9Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0C9Cu) goto L_089C0C9C;
    return;
L_089C0C9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0CB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0CDCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0CDC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0CE8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0CE8u) goto L_089C0CE8;
    return;
L_089C0CE8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x089C0CF8u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0CF8u) goto L_089C0CF8;
    return;
L_089C0CF8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0D04u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0D04u) goto L_089C0D04;
    return;
L_089C0D04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0D18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0D44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0D44:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(276));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0D60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0443_entry, 443u, 226u, 0x089BFEDCu>(ctx, &aot_mem) && ctx.pc == 0x089C0D60u) goto L_089C0D60;
    return;
L_089C0D60:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(448));
    aot_gpr[31] = (0x089C0D70u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0D70u) goto L_089C0D70;
    return;
L_089C0D70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0D84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0DB0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0DB0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0DBCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0DBCu) goto L_089C0DBC;
    return;
L_089C0DBC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(176));
    aot_gpr[31] = (0x089C0DCCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0DCCu) goto L_089C0DCC;
    return;
L_089C0DCC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0DD8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(197));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089C0DD8u) goto L_089C0DD8;
    return;
L_089C0DD8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0DE4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0DE4u) goto L_089C0DE4;
    return;
L_089C0DE4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0DF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089C0E24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_089C0688;
L_089C0E24:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[31] = (0x089C0E34u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0E34u) goto L_089C0E34;
    return;
L_089C0E34:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0E40u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(428));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089C0E40u) goto L_089C0E40;
    return;
L_089C0E40:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(432));
    aot_gpr[31] = (0x089C0E50u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089C0E50u) goto L_089C0E50;
    return;
L_089C0E50:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0E5Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(453));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089C0E5Cu) goto L_089C0E5C;
    return;
L_089C0E5C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089C0E68u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089C0E68u) goto L_089C0E68;
    return;
L_089C0E68:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C0E7C:
    aot_gpr[2] = (2205u << 16u);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-32520));
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(16492));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16492), aot_gpr[2]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(32668));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4436));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4728));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4908));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(4952));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4996));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(5040));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5660));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6176));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32360));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(24220));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(31964));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(24668));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6360));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(22516));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6372));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6436));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10556));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6504));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6592));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6636));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6660));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(9980));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9060));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(92), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(9392));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8548));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(100), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(6876));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6788));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(112), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(7876));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    aot_gpr[4] = (2204u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17820));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    aot_gpr[3] = (2204u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(18068));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(120), aot_gpr[4]);
    ctx.pc = 0x089C1000u; return;
}

void recomp_unit_0444(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0444_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_444(Runtime &runtime) {
    runtime.register_generated_unit(444u, 0x089C0000u, 4096u, &recomp_unit_0444, &recomp_unit_0444_entry);
    runtime.register_function(0x089C0000u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0004u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0010u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C001Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C002Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0048u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C006Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0078u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0084u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0090u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C009Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C00A8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C00B8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C00D4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C00F8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0104u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0110u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C011Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0128u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0134u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0144u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0160u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0180u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0190u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C01ACu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C01D0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C01DCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C01E8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C01F4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0200u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C020Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0218u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0238u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0264u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0280u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C028Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0298u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C02A4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C02B8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C02DCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C02E8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0304u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0328u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0334u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0340u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C035Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0380u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C038Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0398u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C03A4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C03B0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C03BCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C03C8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C03D4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C03E0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C03ECu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C03F8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0404u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0410u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C041Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C042Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0438u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0454u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0478u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0484u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0490u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C04ACu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C04D0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C04DCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C04E8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C04F4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0500u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C050Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0518u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0524u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0530u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C053Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0548u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0554u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0560u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C056Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0578u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0584u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0590u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C059Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C05A8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C05B4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C05C0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C05CCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C05DCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C05ECu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C05F8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0688u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C06ACu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C06BCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C06C8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C06D4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C06E0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C06ECu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C06F8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0704u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0710u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C071Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0738u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0764u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0774u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0788u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C07B4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C07D0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C07DCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C07ECu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C07F8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0804u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0818u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0844u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0860u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0870u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0884u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C08B0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C08BCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C08CCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C08D8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0958u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0984u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C09A0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C09ACu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C09BCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C09C8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C09DCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0A08u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0A14u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0A24u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0A30u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0A44u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0A70u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0A8Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0AA0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0ACCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0ADCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0AF0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0B1Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0B2Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0B40u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0B6Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0B7Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0B90u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0BBCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0BC8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0BD8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0BE4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0BF8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0C24u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0C34u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0C48u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0C74u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0C80u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0C8Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0C9Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0CB0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0CDCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0CE8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0CF8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0D04u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0D18u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0D44u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0D60u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0D70u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0D84u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0DB0u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0DBCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0DCCu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0DD8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0DE4u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0DF8u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0E24u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0E34u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0E40u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0E50u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0E5Cu, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0E68u, &recomp_unit_0444, "recomp_unit_0444");
    runtime.register_function(0x089C0E7Cu, &recomp_unit_0444, "recomp_unit_0444");
}
} // namespace psprecomp
