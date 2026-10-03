#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0456[1022] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0,
    36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 65, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0,
    75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86,
    0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0,
    92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0,
    0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0,
    0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0,
    0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0,
    0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0,
    150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164,
    0, 165, 0, 0, 166, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185,
};
void recomp_unit_0456_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089CC000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0456[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CC000;
    case 2u: goto L_089CC018;
    case 3u: goto L_089CC028;
    case 4u: goto L_089CC034;
    case 5u: goto L_089CC040;
    case 6u: goto L_089CC04C;
    case 7u: goto L_089CC06C;
    case 8u: goto L_089CC09C;
    case 9u: goto L_089CC0AC;
    case 10u: goto L_089CC0B8;
    case 11u: goto L_089CC0C4;
    case 12u: goto L_089CC0D0;
    case 13u: goto L_089CC0F0;
    case 14u: goto L_089CC120;
    case 15u: goto L_089CC130;
    case 16u: goto L_089CC13C;
    case 17u: goto L_089CC148;
    case 18u: goto L_089CC154;
    case 19u: goto L_089CC174;
    case 20u: goto L_089CC1B0;
    case 21u: goto L_089CC1C0;
    case 22u: goto L_089CC1CC;
    case 23u: goto L_089CC1D8;
    case 24u: goto L_089CC1E0;
    case 25u: goto L_089CC208;
    case 26u: goto L_089CC210;
    case 27u: goto L_089CC21C;
    case 28u: goto L_089CC234;
    case 29u: goto L_089CC240;
    case 30u: goto L_089CC268;
    case 31u: goto L_089CC2C4;
    case 32u: goto L_089CC2D4;
    case 33u: goto L_089CC2E0;
    case 34u: goto L_089CC2E8;
    case 35u: goto L_089CC2F4;
    case 36u: goto L_089CC300;
    case 37u: goto L_089CC308;
    case 38u: goto L_089CC330;
    case 39u: goto L_089CC344;
    case 40u: goto L_089CC350;
    case 41u: goto L_089CC35C;
    case 42u: goto L_089CC36C;
    case 43u: goto L_089CC378;
    case 44u: goto L_089CC380;
    case 45u: goto L_089CC3BC;
    case 46u: goto L_089CC3CC;
    case 47u: goto L_089CC3DC;
    case 48u: goto L_089CC404;
    case 49u: goto L_089CC40C;
    case 50u: goto L_089CC414;
    case 51u: goto L_089CC428;
    case 52u: goto L_089CC438;
    case 53u: goto L_089CC43C;
    case 54u: goto L_089CC444;
    case 55u: goto L_089CC480;
    case 56u: goto L_089CC498;
    case 57u: goto L_089CC4AC;
    case 58u: goto L_089CC4F8;
    case 59u: goto L_089CC510;
    case 60u: goto L_089CC51C;
    case 61u: goto L_089CC528;
    case 62u: goto L_089CC530;
    case 63u: goto L_089CC53C;
    case 64u: goto L_089CC58C;
    case 65u: goto L_089CC594;
    case 66u: goto L_089CC598;
    case 67u: goto L_089CC5A4;
    case 68u: goto L_089CC5BC;
    case 69u: goto L_089CC5C8;
    case 70u: goto L_089CC604;
    case 71u: goto L_089CC618;
    case 72u: goto L_089CC654;
    case 73u: goto L_089CC664;
    case 74u: goto L_089CC670;
    case 75u: goto L_089CC680;
    case 76u: goto L_089CC688;
    case 77u: goto L_089CC698;
    case 78u: goto L_089CC6A0;
    case 79u: goto L_089CC6C8;
    case 80u: goto L_089CC6E0;
    case 81u: goto L_089CC6F0;
    case 82u: goto L_089CC708;
    case 83u: goto L_089CC730;
    case 84u: goto L_089CC760;
    case 85u: goto L_089CC770;
    case 86u: goto L_089CC77C;
    case 87u: goto L_089CC788;
    case 88u: goto L_089CC794;
    case 89u: goto L_089CC7B4;
    case 90u: goto L_089CC7E4;
    case 91u: goto L_089CC7F4;
    case 92u: goto L_089CC800;
    case 93u: goto L_089CC80C;
    case 94u: goto L_089CC818;
    case 95u: goto L_089CC838;
    case 96u: goto L_089CC868;
    case 97u: goto L_089CC878;
    case 98u: goto L_089CC884;
    case 99u: goto L_089CC890;
    case 100u: goto L_089CC89C;
    case 101u: goto L_089CC8A8;
    case 102u: goto L_089CC8C8;
    case 103u: goto L_089CC8F8;
    case 104u: goto L_089CC908;
    case 105u: goto L_089CC914;
    case 106u: goto L_089CC920;
    case 107u: goto L_089CC92C;
    case 108u: goto L_089CC94C;
    case 109u: goto L_089CC97C;
    case 110u: goto L_089CC98C;
    case 111u: goto L_089CC998;
    case 112u: goto L_089CC9A4;
    case 113u: goto L_089CC9B0;
    case 114u: goto L_089CC9BC;
    case 115u: goto L_089CC9CC;
    case 116u: goto L_089CC9D8;
    case 117u: goto L_089CC9F8;
    case 118u: goto L_089CCA28;
    case 119u: goto L_089CCA38;
    case 120u: goto L_089CCA44;
    case 121u: goto L_089CCA50;
    case 122u: goto L_089CCA5C;
    case 123u: goto L_089CCA7C;
    case 124u: goto L_089CCAB8;
    case 125u: goto L_089CCAC8;
    case 126u: goto L_089CCAD4;
    case 127u: goto L_089CCAE0;
    case 128u: goto L_089CCAEC;
    case 129u: goto L_089CCAF8;
    case 130u: goto L_089CCB04;
    case 131u: goto L_089CCB10;
    case 132u: goto L_089CCB20;
    case 133u: goto L_089CCB28;
    case 134u: goto L_089CCB34;
    case 135u: goto L_089CCB3C;
    case 136u: goto L_089CCB48;
    case 137u: goto L_089CCB70;
    case 138u: goto L_089CCBA0;
    case 139u: goto L_089CCBB4;
    case 140u: goto L_089CCBCC;
    case 141u: goto L_089CCBD4;
    case 142u: goto L_089CCBE0;
    case 143u: goto L_089CCBEC;
    case 144u: goto L_089CCBF8;
    case 145u: goto L_089CCC04;
    case 146u: goto L_089CCC10;
    case 147u: goto L_089CCC34;
    case 148u: goto L_089CCC64;
    case 149u: goto L_089CCC74;
    case 150u: goto L_089CCC80;
    case 151u: goto L_089CCC8C;
    case 152u: goto L_089CCC98;
    case 153u: goto L_089CCCB8;
    case 154u: goto L_089CCCFC;
    case 155u: goto L_089CCD24;
    case 156u: goto L_089CCD44;
    case 157u: goto L_089CCD50;
    case 158u: goto L_089CCD68;
    case 159u: goto L_089CCD94;
    case 160u: goto L_089CCDAC;
    case 161u: goto L_089CCDD4;
    case 162u: goto L_089CCDE4;
    case 163u: goto L_089CCDF0;
    case 164u: goto L_089CCDFC;
    case 165u: goto L_089CCE04;
    case 166u: goto L_089CCE10;
    case 167u: goto L_089CCE14;
    case 168u: goto L_089CCE24;
    case 169u: goto L_089CCE2C;
    case 170u: goto L_089CCE44;
    case 171u: goto L_089CCE4C;
    case 172u: goto L_089CCE78;
    case 173u: goto L_089CCE88;
    case 174u: goto L_089CCEE8;
    case 175u: goto L_089CCF20;
    case 176u: goto L_089CCF30;
    case 177u: goto L_089CCF3C;
    case 178u: goto L_089CCF58;
    case 179u: goto L_089CCF7C;
    case 180u: goto L_089CCF8C;
    case 181u: goto L_089CCFA8;
    case 182u: goto L_089CCFC0;
    case 183u: goto L_089CCFD0;
    case 184u: goto L_089CCFD8;
    case 185u: goto L_089CCFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CC000:
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CC018u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC018u) goto L_089CC018;
    return;
L_089CC018:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC028u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC028u) goto L_089CC028;
    return;
L_089CC028:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC034u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC034u) goto L_089CC034;
    return;
L_089CC034:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC040u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC040u) goto L_089CC040;
    return;
L_089CC040:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC04Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC04Cu) goto L_089CC04C;
    return;
L_089CC04C:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC06C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CC09Cu);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC09Cu) goto L_089CC09C;
    return;
L_089CC09C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC0ACu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC0ACu) goto L_089CC0AC;
    return;
L_089CC0AC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC0B8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC0B8u) goto L_089CC0B8;
    return;
L_089CC0B8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC0C4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC0C4u) goto L_089CC0C4;
    return;
L_089CC0C4:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC0D0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC0D0u) goto L_089CC0D0;
    return;
L_089CC0D0:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC0F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CC120u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC120u) goto L_089CC120;
    return;
L_089CC120:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC130u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC130u) goto L_089CC130;
    return;
L_089CC130:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC13Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC13Cu) goto L_089CC13C;
    return;
L_089CC13C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC148u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC148u) goto L_089CC148;
    return;
L_089CC148:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC154u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC154u) goto L_089CC154;
    return;
L_089CC154:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC174:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[8] + 0u);
    aot_gpr[31] = (0x089CC1B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC1B0u) goto L_089CC1B0;
    return;
L_089CC1B0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089CC1C0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC1C0u) goto L_089CC1C0;
    return;
L_089CC1C0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC1CCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC1CCu) goto L_089CC1CC;
    return;
L_089CC1CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089CC208;
      }
      goto L_089CC1D8;
    }
L_089CC1D8:
    aot_gpr[31] = (0x089CC1E0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC1E0u) goto L_089CC1E0;
    return;
L_089CC1E0:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC208:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[16] << 1u);
    goto L_089CC210;
L_089CC210:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x089CC21Cu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC21Cu) goto L_089CC21C;
    return;
L_089CC21C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[16] << 1u);
      if (branch_taken) {
          goto L_089CC210;
      }
      goto L_089CC234;
    }
L_089CC234:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089CC240u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC240u) goto L_089CC240;
    return;
L_089CC240:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC268:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    aot_gpr[31] = (0x089CC2C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC2C4u) goto L_089CC2C4;
    return;
L_089CC2C4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CC2D4u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC2D4u) goto L_089CC2D4;
    return;
L_089CC2D4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089CC2E0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC2E0u) goto L_089CC2E0;
    return;
L_089CC2E0:
    if (aot_gpr[16] == aot_gpr[19]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089CC498;
    }
    goto L_089CC2E8;
L_089CC2E8:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089CC2F4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC2F4u) goto L_089CC2F4;
    return;
L_089CC2F4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[3];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CC444;
      }
      goto L_089CC300;
    }
L_089CC300:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[19];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089CC4AC;
      }
      goto L_089CC308;
    }
L_089CC308:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(6));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[5]))));
    aot_gpr[14] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CC480;
      }
      goto L_089CC330;
    }
L_089CC330:
    aot_gpr[13] = (aot_gpr[5] & 127u);
    aot_gpr[15] = (aot_gpr[6] + aot_gpr[13]);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[15] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 65535u);
      if (branch_taken) {
          goto L_089CC3BC;
      }
      goto L_089CC344;
    }
L_089CC344:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089CC43C;
      }
      goto L_089CC350;
    }
L_089CC350:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_089CC35C;
L_089CC35C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] & 16384u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089CC378;
      }
      goto L_089CC36C;
    }
L_089CC36C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089CC594;
      }
      goto L_089CC378;
    }
L_089CC378:
    aot_gpr[31] = (0x089CC380u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC380u) goto L_089CC380;
    return;
L_089CC380:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC3BC:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[12] = (aot_gpr[8] + 0u);
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[11] = (0u + 0u);
      if (branch_taken) {
          goto L_089CC428;
      }
      goto L_089CC3CC;
    }
L_089CC3CC:
    aot_gpr[4] = (aot_gpr[12] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[9] = (aot_gpr[14] + aot_gpr[11]);
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(8));
    goto L_089CC3DC;
L_089CC3DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[6] << 1u);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[5] & 31u)));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089CC40C;
      }
      goto L_089CC404;
    }
L_089CC404:
    aot_gpr[6] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_089CC40C;
L_089CC40C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[10];
    aot_gpr[4] = (aot_gpr[8] & 65535u);
      if (branch_taken) {
          goto L_089CC3DC;
      }
      goto L_089CC414;
    }
L_089CC414:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[12] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (aot_gpr[11] < aot_gpr[13] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[12] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_089CC3CC;
      }
      goto L_089CC428;
    }
L_089CC428:
    aot_gpr[4] = (aot_gpr[15] & 65535u);
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[2];
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_089CC350;
      }
      goto L_089CC438;
    }
L_089CC438:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    goto L_089CC43C;
L_089CC43C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089CC35C;
L_089CC444:
    aot_gpr[16] = (aot_gpr[18] + static_cast<std::uint32_t>(6));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x000000FFu) | ((0u & 0x000000FFu) << 0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) >= 0;
    aot_gpr[14] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CC330;
      }
      goto L_089CC480;
    }
L_089CC480:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[14] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[8] = (aot_gpr[2] & 255u);
    goto L_089CC330;
L_089CC498:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x000000FFu) | ((0u & 0x000000FFu) << 0u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089CC2E8;
L_089CC4AC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(6)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[21] << 1u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(-2)));
    aot_gpr[23] = (aot_gpr[5] & 248u);
    aot_gpr[5] = ((aot_gpr[5] >> 3u) & 0x000000FFu);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(7));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 0 ? 1u : 0u);
    if (aot_gpr[2] != 0u) aot_gpr[3] = (aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 3u));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[2] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[3] & 255u);
      if (branch_taken) {
          goto L_089CC604;
      }
      goto L_089CC4F8;
    }
L_089CC4F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_089CC510;
L_089CC510:
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 65535u);
      if (branch_taken) {
          goto L_089CC344;
      }
      goto L_089CC51C;
    }
L_089CC51C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CC528u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089CC528u) goto L_089CC528;
    return;
L_089CC528:
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (aot_gpr[19] & 65535u);
      if (branch_taken) {
          goto L_089CC344;
      }
      goto L_089CC530;
    }
L_089CC530:
    aot_gpr[8] = (aot_gpr[17] + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    goto L_089CC53C;
L_089CC53C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[7] < aot_gpr[21] ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[23]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 0 ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(7));
    if (aot_gpr[4] == 0u) aot_gpr[3] = (aot_gpr[2]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 31u));
    aot_gpr[5] = (aot_gpr[5] >> 29u);
    aot_gpr[3] = ((aot_gpr[3] >> 3u) & 0x000000FFu);
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] & 7u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[9] << (aot_gpr[2] & 31u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089CC53C;
      }
      goto L_089CC58C;
    }
L_089CC58C:
    aot_gpr[4] = (aot_gpr[19] & 65535u);
    goto L_089CC344;
L_089CC594:
    aot_gpr[5] = (aot_gpr[16] << 1u);
    goto L_089CC598;
L_089CC598:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[31] = (0x089CC5A4u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC5A4u) goto L_089CC5A4;
    return;
L_089CC5A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[2] & 255u);
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[16] << 1u);
      if (branch_taken) {
          goto L_089CC598;
      }
      goto L_089CC5BC;
    }
L_089CC5BC:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089CC5C8u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC5C8u) goto L_089CC5C8;
    return;
L_089CC5C8:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC604:
    aot_gpr[2] = (aot_gpr[6] & 127u);
    aot_gpr[16] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089CC510;
L_089CC618:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[31] = (0x089CC654u);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC654u) goto L_089CC654;
    return;
L_089CC654:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CC664u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC664u) goto L_089CC664;
    return;
L_089CC664:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089CC670u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC670u) goto L_089CC670;
    return;
L_089CC670:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089CC6C8;
      }
      goto L_089CC680;
    }
L_089CC680:
    aot_gpr[31] = (0x089CC688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC688u) goto L_089CC688;
    return;
L_089CC688:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089CC6F0;
      }
      goto L_089CC698;
    }
L_089CC698:
    aot_gpr[31] = (0x089CC6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC6A0u) goto L_089CC6A0;
    return;
L_089CC6A0:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC6C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(6)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x000000FFu) | ((0u & 0x000000FFu) << 0u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_gpr[31] = (0x089CC6E0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC6E0u) goto L_089CC6E0;
    return;
L_089CC6E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[2];
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089CC698;
      }
      goto L_089CC6F0;
    }
L_089CC6F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] & 255u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x000000FFu) | ((0u & 0x000000FFu) << 0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[31] = (0x089CC708u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC708u) goto L_089CC708;
    return;
L_089CC708:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC730:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CC760u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC760u) goto L_089CC760;
    return;
L_089CC760:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC770u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC770u) goto L_089CC770;
    return;
L_089CC770:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC77Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC77Cu) goto L_089CC77C;
    return;
L_089CC77C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC788u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC788u) goto L_089CC788;
    return;
L_089CC788:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC794u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC794u) goto L_089CC794;
    return;
L_089CC794:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC7B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CC7E4u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC7E4u) goto L_089CC7E4;
    return;
L_089CC7E4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC7F4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC7F4u) goto L_089CC7F4;
    return;
L_089CC7F4:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC800u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC800u) goto L_089CC800;
    return;
L_089CC800:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC80Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC80Cu) goto L_089CC80C;
    return;
L_089CC80C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC818u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC818u) goto L_089CC818;
    return;
L_089CC818:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CC868u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC868u) goto L_089CC868;
    return;
L_089CC868:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC878u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC878u) goto L_089CC878;
    return;
L_089CC878:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC884u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC884u) goto L_089CC884;
    return;
L_089CC884:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC890u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC890u) goto L_089CC890;
    return;
L_089CC890:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC89Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC89Cu) goto L_089CC89C;
    return;
L_089CC89C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC8A8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC8A8u) goto L_089CC8A8;
    return;
L_089CC8A8:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC8C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CC8F8u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC8F8u) goto L_089CC8F8;
    return;
L_089CC8F8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC908u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC908u) goto L_089CC908;
    return;
L_089CC908:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC914u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC914u) goto L_089CC914;
    return;
L_089CC914:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC920u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC920u) goto L_089CC920;
    return;
L_089CC920:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC92Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC92Cu) goto L_089CC92C;
    return;
L_089CC92C:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC94C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CC97Cu);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CC97Cu) goto L_089CC97C;
    return;
L_089CC97C:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC98Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC98Cu) goto L_089CC98C;
    return;
L_089CC98C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC998u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC998u) goto L_089CC998;
    return;
L_089CC998:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC9A4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CC9A4u) goto L_089CC9A4;
    return;
L_089CC9A4:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC9B0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC9B0u) goto L_089CC9B0;
    return;
L_089CC9B0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC9BCu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CC9BCu) goto L_089CC9BC;
    return;
L_089CC9BC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089CC9CCu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CC9CCu) goto L_089CC9CC;
    return;
L_089CC9CC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CC9D8u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CC9D8u) goto L_089CC9D8;
    return;
L_089CC9D8:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CC9F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CCA28u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CCA28u) goto L_089CCA28;
    return;
L_089CCA28:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCA38u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CCA38u) goto L_089CCA38;
    return;
L_089CCA38:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCA44u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CCA44u) goto L_089CCA44;
    return;
L_089CCA44:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCA50u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CCA50u) goto L_089CCA50;
    return;
L_089CCA50:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCA5Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CCA5Cu) goto L_089CCA5C;
    return;
L_089CCA5C:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCA7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(64));
    aot_gpr[31] = (0x089CCAB8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CCAB8u) goto L_089CCAB8;
    return;
L_089CCAB8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089CCAC8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CCAC8u) goto L_089CCAC8;
    return;
L_089CCAC8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089CCAD4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CCAD4u) goto L_089CCAD4;
    return;
L_089CCAD4:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089CCAE0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CCAE0u) goto L_089CCAE0;
    return;
L_089CCAE0:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089CCAECu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CCAECu) goto L_089CCAEC;
    return;
L_089CCAEC:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089CCAF8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CCAF8u) goto L_089CCAF8;
    return;
L_089CCAF8:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(10));
    aot_gpr[31] = (0x089CCB04u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CCB04u) goto L_089CCB04;
    return;
L_089CCB04:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089CCB10u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CCB10u) goto L_089CCB10;
    return;
L_089CCB10:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCB20u);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CCB20u) goto L_089CCB20;
    return;
L_089CCB20:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
    goto L_089CCB28;
L_089CCB28:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCB34u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CCB34u) goto L_089CCB34;
    return;
L_089CCB34:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[18];
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_089CCB28;
      }
      goto L_089CCB3C;
    }
L_089CCB3C:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089CCB48u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CCB48u) goto L_089CCB48;
    return;
L_089CCB48:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCB70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x089CCBA0u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CCBA0u) goto L_089CCBA0;
    return;
L_089CCBA0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[4] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089CCBCC;
      }
      goto L_089CCBB4;
    }
L_089CCBB4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCBCC:
    aot_gpr[31] = (0x089CCBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CCBD4u) goto L_089CCBD4;
    return;
L_089CCBD4:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCBE0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089CCBE0u) goto L_089CCBE0;
    return;
L_089CCBE0:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCBECu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CCBECu) goto L_089CCBEC;
    return;
L_089CCBEC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCBF8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089CCBF8u) goto L_089CCBF8;
    return;
L_089CCBF8:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCC04u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CCC04u) goto L_089CCC04;
    return;
L_089CCC04:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCC10u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CCC10u) goto L_089CCC10;
    return;
L_089CCC10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) aot_gpr[3] = (0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCC34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    aot_gpr[7] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[31] = (0x089CCC64u);
    aot_gpr[17] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089CCC64u) goto L_089CCC64;
    return;
L_089CCC64:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCC74u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089CCC74u) goto L_089CCC74;
    return;
L_089CCC74:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCC80u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CCC80u) goto L_089CCC80;
    return;
L_089CCC80:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCC8Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089CCC8Cu) goto L_089CCC8C;
    return;
L_089CCC8C:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089CCC98u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089CCC98u) goto L_089CCC98;
    return;
L_089CCC98:
    aot_gpr[3] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[3] == 0u) aot_gpr[2] = (0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCCB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[11] = (aot_gpr[6] + 0u);
    aot_gpr[19] = (aot_gpr[8] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089CCD24;
      }
      goto L_089CCCFC;
    }
L_089CCCFC:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCD24:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(64), aot_gpr[7]);
      if (branch_taken) {
          goto L_089CCE4C;
      }
      goto L_089CCD44;
    }
L_089CCD44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[10]);
      if (branch_taken) {
          goto L_089CCD94;
      }
      goto L_089CCD50;
    }
L_089CCD50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[11]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CCD68u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CCD68u) goto L_089CCD68;
    return;
L_089CCD68:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCD94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(156)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(188)));
    aot_gpr[5] = (aot_gpr[11] + aot_gpr[10]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089CCDACu);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CCDACu) goto L_089CCDAC;
    return;
L_089CCDAC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[3] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089CCE4C;
      }
      goto L_089CCDD4;
    }
L_089CCDD4:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[8] = (aot_gpr[29] + 0u);
    goto L_089CCDE4;
L_089CCDE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(444)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089CCE14;
    }
    goto L_089CCDF0;
L_089CCDF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089CCE14;
    }
    goto L_089CCDFC;
L_089CCDFC:
    if (aot_gpr[3] == aot_gpr[18]) {
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
        goto L_089CCE14;
    }
    goto L_089CCE04;
L_089CCE04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == aot_gpr[9]) {
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
        goto L_089CCE78;
    }
    goto L_089CCE10;
L_089CCE10:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089CCE14;
L_089CCE14:
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
      if (branch_taken) {
          goto L_089CCDE4;
      }
      goto L_089CCE24;
    }
L_089CCE24:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089CCE4C;
      }
      goto L_089CCE2C;
    }
L_089CCE2C:
    aot_gpr[7] = (aot_gpr[19] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (0x089CCE44u);
    aot_gpr[11] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0445_entry, 445u, 153u, 0x089C1B60u>(ctx, &aot_mem) && ctx.pc == 0x089CCE44u) goto L_089CCE44;
    return;
L_089CCE44:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089CCCFC;
      }
      goto L_089CCE4C;
    }
L_089CCE4C:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCE78:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_089CCE10;
L_089CCE88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[30]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[19]);
    aot_gpr[8] = (aot_gpr[8] & 65535u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[31]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    aot_gpr[11] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(108), aot_gpr[7]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(116), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(112), aot_gpr[8]);
      if (branch_taken) {
          goto L_089CCF20;
      }
      goto L_089CCEE8;
    }
L_089CCEE8:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CCF20:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 14u, 0x089CD0FCu>(ctx, &aot_mem); return;
    }
    goto L_089CCF30;
L_089CCF30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[6]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 13u, 0x089CD0F8u>(ctx, &aot_mem); return;
      }
      goto L_089CCF3C;
    }
L_089CCF3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[2] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[7] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 54508u);
      if (branch_taken) {
          goto L_089CCEE8;
      }
      goto L_089CCF58;
    }
L_089CCF58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] << 1u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = (aot_gpr[2] >> 4u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(120), aot_gpr[29]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 13u, 0x089CD0F8u>(ctx, &aot_mem); return;
      }
      goto L_089CCF7C;
    }
L_089CCF7C:
    aot_gpr[18] = (aot_gpr[6] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), 0u);
    aot_gpr[23] = (0u + 0u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(8));
    goto L_089CCF8C;
L_089CCF8C:
    aot_gpr[2] = (aot_gpr[23] << 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(96)));
    aot_gpr[16] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(120)));
    aot_gpr[3] = (aot_gpr[4] << 1u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[20] = (aot_gpr[3] + aot_gpr[2]);
    goto L_089CCFA8;
L_089CCFA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> (aot_gpr[17] & 31u)));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 4u, 0x089CD024u>(ctx, &aot_mem); return;
      }
      goto L_089CCFC0;
    }
L_089CCFC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[16];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 3u, 0x089CD020u>(ctx, &aot_mem); return;
      }
      goto L_089CCFD0;
    }
L_089CCFD0:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[3] = (aot_gpr[16] << 6u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 3u, 0x089CD020u>(ctx, &aot_mem); return;
      }
      goto L_089CCFD8;
    }
L_089CCFD8:
    aot_gpr[2] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0457_entry, 457u, 3u, 0x089CD020u>(ctx, &aot_mem); return;
      }
      goto L_089CCFF4;
    }
L_089CCFF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x089CD000u; return;
}

void recomp_unit_0456(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0456_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_456(Runtime &runtime) {
    runtime.register_generated_unit(456u, 0x089CC000u, 4096u, &recomp_unit_0456, &recomp_unit_0456_entry);
    runtime.register_function(0x089CC000u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC018u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC028u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC034u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC040u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC04Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC06Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC09Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC0ACu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC0B8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC0C4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC0D0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC0F0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC120u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC130u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC13Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC148u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC154u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC174u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC1B0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC1C0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC1CCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC1D8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC1E0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC208u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC210u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC21Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC234u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC240u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC268u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC2C4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC2D4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC2E0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC2E8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC2F4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC300u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC308u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC330u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC344u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC350u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC35Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC36Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC378u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC380u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC3BCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC3CCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC3DCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC404u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC40Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC414u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC428u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC438u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC43Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC444u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC480u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC498u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC4ACu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC4F8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC510u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC51Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC528u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC530u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC53Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC58Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC594u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC598u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC5A4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC5BCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC5C8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC604u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC618u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC654u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC664u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC670u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC680u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC688u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC698u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC6A0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC6C8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC6E0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC6F0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC708u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC730u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC760u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC770u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC77Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC788u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC794u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC7B4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC7E4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC7F4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC800u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC80Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC818u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC838u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC868u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC878u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC884u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC890u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC89Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC8A8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC8C8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC8F8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC908u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC914u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC920u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC92Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC94Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC97Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC98Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC998u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC9A4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC9B0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC9BCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC9CCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC9D8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CC9F8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCA28u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCA38u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCA44u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCA50u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCA5Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCA7Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCAB8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCAC8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCAD4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCAE0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCAECu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCAF8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCB04u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCB10u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCB20u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCB28u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCB34u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCB3Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCB48u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCB70u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCBA0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCBB4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCBCCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCBD4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCBE0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCBECu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCBF8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCC04u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCC10u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCC34u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCC64u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCC74u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCC80u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCC8Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCC98u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCCB8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCCFCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCD24u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCD44u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCD50u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCD68u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCD94u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCDACu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCDD4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCDE4u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCDF0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCDFCu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE04u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE10u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE14u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE24u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE2Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE44u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE4Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE78u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCE88u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCEE8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCF20u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCF30u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCF3Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCF58u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCF7Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCF8Cu, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCFA8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCFC0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCFD0u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCFD8u, &recomp_unit_0456, "recomp_unit_0456");
    runtime.register_function(0x089CCFF4u, &recomp_unit_0456, "recomp_unit_0456");
}
} // namespace psprecomp
