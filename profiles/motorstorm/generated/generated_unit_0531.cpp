#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0531[1024] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    15, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0,
    0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 52, 0, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0,
    0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136,
    0, 0, 137, 0, 138, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0,
    152, 0, 153, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184,
    0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 192,
    0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0,
    215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 0,
    223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 230,
};
void recomp_unit_0531_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A17000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0531[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A17000;
    case 2u: goto L_08A17010;
    case 3u: goto L_08A17024;
    case 4u: goto L_08A1702C;
    case 5u: goto L_08A17038;
    case 6u: goto L_08A17048;
    case 7u: goto L_08A1705C;
    case 8u: goto L_08A1707C;
    case 9u: goto L_08A17090;
    case 10u: goto L_08A1709C;
    case 11u: goto L_08A170AC;
    case 12u: goto L_08A170C0;
    case 13u: goto L_08A170EC;
    case 14u: goto L_08A170F8;
    case 15u: goto L_08A17100;
    case 16u: goto L_08A17104;
    case 17u: goto L_08A17124;
    case 18u: goto L_08A17140;
    case 19u: goto L_08A17160;
    case 20u: goto L_08A1716C;
    case 21u: goto L_08A17174;
    case 22u: goto L_08A17188;
    case 23u: goto L_08A171AC;
    case 24u: goto L_08A171B4;
    case 25u: goto L_08A171C0;
    case 26u: goto L_08A171C8;
    case 27u: goto L_08A171D0;
    case 28u: goto L_08A171EC;
    case 29u: goto L_08A171F4;
    case 30u: goto L_08A17208;
    case 31u: goto L_08A17210;
    case 32u: goto L_08A1722C;
    case 33u: goto L_08A1723C;
    case 34u: goto L_08A17250;
    case 35u: goto L_08A17258;
    case 36u: goto L_08A17264;
    case 37u: goto L_08A17274;
    case 38u: goto L_08A17288;
    case 39u: goto L_08A172A8;
    case 40u: goto L_08A172BC;
    case 41u: goto L_08A172C8;
    case 42u: goto L_08A172D8;
    case 43u: goto L_08A172EC;
    case 44u: goto L_08A17320;
    case 45u: goto L_08A1732C;
    case 46u: goto L_08A17338;
    case 47u: goto L_08A1733C;
    case 48u: goto L_08A17360;
    case 49u: goto L_08A17384;
    case 50u: goto L_08A173A8;
    case 51u: goto L_08A173AC;
    case 52u: goto L_08A173B4;
    case 53u: goto L_08A173C0;
    case 54u: goto L_08A173C8;
    case 55u: goto L_08A173D4;
    case 56u: goto L_08A173DC;
    case 57u: goto L_08A173E4;
    case 58u: goto L_08A173F0;
    case 59u: goto L_08A173F8;
    case 60u: goto L_08A17418;
    case 61u: goto L_08A17434;
    case 62u: goto L_08A1744C;
    case 63u: goto L_08A17458;
    case 64u: goto L_08A17460;
    case 65u: goto L_08A17474;
    case 66u: goto L_08A17490;
    case 67u: goto L_08A174B0;
    case 68u: goto L_08A174BC;
    case 69u: goto L_08A174C4;
    case 70u: goto L_08A174D8;
    case 71u: goto L_08A174FC;
    case 72u: goto L_08A17504;
    case 73u: goto L_08A17510;
    case 74u: goto L_08A17518;
    case 75u: goto L_08A17520;
    case 76u: goto L_08A1753C;
    case 77u: goto L_08A17544;
    case 78u: goto L_08A17558;
    case 79u: goto L_08A17560;
    case 80u: goto L_08A1757C;
    case 81u: goto L_08A1758C;
    case 82u: goto L_08A175A0;
    case 83u: goto L_08A175A8;
    case 84u: goto L_08A175B4;
    case 85u: goto L_08A175C4;
    case 86u: goto L_08A175D8;
    case 87u: goto L_08A175F8;
    case 88u: goto L_08A1760C;
    case 89u: goto L_08A17618;
    case 90u: goto L_08A17628;
    case 91u: goto L_08A1763C;
    case 92u: goto L_08A17668;
    case 93u: goto L_08A17674;
    case 94u: goto L_08A1767C;
    case 95u: goto L_08A17680;
    case 96u: goto L_08A176A0;
    case 97u: goto L_08A176BC;
    case 98u: goto L_08A176DC;
    case 99u: goto L_08A176E8;
    case 100u: goto L_08A176F0;
    case 101u: goto L_08A17704;
    case 102u: goto L_08A17728;
    case 103u: goto L_08A17730;
    case 104u: goto L_08A1773C;
    case 105u: goto L_08A17744;
    case 106u: goto L_08A1774C;
    case 107u: goto L_08A17768;
    case 108u: goto L_08A17770;
    case 109u: goto L_08A17784;
    case 110u: goto L_08A1778C;
    case 111u: goto L_08A177A8;
    case 112u: goto L_08A177B8;
    case 113u: goto L_08A177CC;
    case 114u: goto L_08A177D4;
    case 115u: goto L_08A177E0;
    case 116u: goto L_08A177F0;
    case 117u: goto L_08A17804;
    case 118u: goto L_08A17824;
    case 119u: goto L_08A17838;
    case 120u: goto L_08A17844;
    case 121u: goto L_08A17854;
    case 122u: goto L_08A17868;
    case 123u: goto L_08A17894;
    case 124u: goto L_08A178A0;
    case 125u: goto L_08A178A8;
    case 126u: goto L_08A178AC;
    case 127u: goto L_08A178CC;
    case 128u: goto L_08A178EC;
    case 129u: goto L_08A17900;
    case 130u: goto L_08A17914;
    case 131u: goto L_08A17928;
    case 132u: goto L_08A1793C;
    case 133u: goto L_08A17950;
    case 134u: goto L_08A17964;
    case 135u: goto L_08A17974;
    case 136u: goto L_08A1797C;
    case 137u: goto L_08A17988;
    case 138u: goto L_08A17990;
    case 139u: goto L_08A17998;
    case 140u: goto L_08A179A4;
    case 141u: goto L_08A179B0;
    case 142u: goto L_08A179B8;
    case 143u: goto L_08A179D8;
    case 144u: goto L_08A179F4;
    case 145u: goto L_08A17A0C;
    case 146u: goto L_08A17A18;
    case 147u: goto L_08A17A20;
    case 148u: goto L_08A17A34;
    case 149u: goto L_08A17A3C;
    case 150u: goto L_08A17A60;
    case 151u: goto L_08A17A78;
    case 152u: goto L_08A17A80;
    case 153u: goto L_08A17A88;
    case 154u: goto L_08A17A8C;
    case 155u: goto L_08A17A94;
    case 156u: goto L_08A17AB4;
    case 157u: goto L_08A17AC0;
    case 158u: goto L_08A17ACC;
    case 159u: goto L_08A17B08;
    case 160u: goto L_08A17B20;
    case 161u: goto L_08A17B28;
    case 162u: goto L_08A17B4C;
    case 163u: goto L_08A17B78;
    case 164u: goto L_08A17BA4;
    case 165u: goto L_08A17BB4;
    case 166u: goto L_08A17BC0;
    case 167u: goto L_08A17BC8;
    case 168u: goto L_08A17BD4;
    case 169u: goto L_08A17BDC;
    case 170u: goto L_08A17BEC;
    case 171u: goto L_08A17C0C;
    case 172u: goto L_08A17C2C;
    case 173u: goto L_08A17C48;
    case 174u: goto L_08A17C68;
    case 175u: goto L_08A17C74;
    case 176u: goto L_08A17C7C;
    case 177u: goto L_08A17C90;
    case 178u: goto L_08A17CB4;
    case 179u: goto L_08A17CBC;
    case 180u: goto L_08A17CC8;
    case 181u: goto L_08A17CD0;
    case 182u: goto L_08A17CD8;
    case 183u: goto L_08A17CF4;
    case 184u: goto L_08A17CFC;
    case 185u: goto L_08A17D10;
    case 186u: goto L_08A17D18;
    case 187u: goto L_08A17D34;
    case 188u: goto L_08A17D44;
    case 189u: goto L_08A17D58;
    case 190u: goto L_08A17D60;
    case 191u: goto L_08A17D6C;
    case 192u: goto L_08A17D7C;
    case 193u: goto L_08A17D90;
    case 194u: goto L_08A17DB0;
    case 195u: goto L_08A17DC4;
    case 196u: goto L_08A17DD0;
    case 197u: goto L_08A17DE0;
    case 198u: goto L_08A17DF4;
    case 199u: goto L_08A17E20;
    case 200u: goto L_08A17E2C;
    case 201u: goto L_08A17E34;
    case 202u: goto L_08A17E38;
    case 203u: goto L_08A17E58;
    case 204u: goto L_08A17E6C;
    case 205u: goto L_08A17E90;
    case 206u: goto L_08A17E98;
    case 207u: goto L_08A17EA0;
    case 208u: goto L_08A17EC0;
    case 209u: goto L_08A17EC8;
    case 210u: goto L_08A17ED0;
    case 211u: goto L_08A17EDC;
    case 212u: goto L_08A17EE8;
    case 213u: goto L_08A17EF0;
    case 214u: goto L_08A17EF8;
    case 215u: goto L_08A17F00;
    case 216u: goto L_08A17F14;
    case 217u: goto L_08A17F30;
    case 218u: goto L_08A17F38;
    case 219u: goto L_08A17F40;
    case 220u: goto L_08A17F58;
    case 221u: goto L_08A17F64;
    case 222u: goto L_08A17F6C;
    case 223u: goto L_08A17F80;
    case 224u: goto L_08A17F8C;
    case 225u: goto L_08A17FA8;
    case 226u: goto L_08A17FC0;
    case 227u: goto L_08A17FC8;
    case 228u: goto L_08A17FE0;
    case 229u: goto L_08A17FF4;
    case 230u: goto L_08A17FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A17000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17024u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A17024u) goto L_08A17024;
    return;
L_08A17024:
    aot_gpr[31] = (0x08A1702Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1702Cu) goto L_08A1702C;
    return;
L_08A1702C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A17038u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A17038u) goto L_08A17038;
    return;
L_08A17038:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17048:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1705Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A1705Cu) goto L_08A1705C;
    return;
L_08A1705C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15208));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1707C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17090u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A17090u) goto L_08A17090;
    return;
L_08A17090:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1709Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1709Cu) goto L_08A1709C;
    return;
L_08A1709C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A170ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1692));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A170ACu) goto L_08A170AC;
    return;
L_08A170AC:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A170C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A170ECu);
    aot_gpr[4] = (0u | 788u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A170ECu) goto L_08A170EC;
    return;
L_08A170EC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A17104;
      }
      goto L_08A170F8;
    }
L_08A170F8:
    aot_gpr[31] = (0x08A17100u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0544_entry, 544u, 156u, 0x08A24B20u>(ctx, &aot_mem) && ctx.pc == 0x08A17100u) goto L_08A17100;
    return;
L_08A17100:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A17104;
L_08A17104:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A17124:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A17174;
      }
      goto L_08A17140;
    }
L_08A17140:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15272));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18032), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A17160u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17160u) goto L_08A17160;
    return;
L_08A17160:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17174;
      }
      goto L_08A1716C;
    }
L_08A1716C:
    aot_gpr[31] = (0x08A17174u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A1723C;
L_08A17174:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17188:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18032)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A171D0;
      }
      goto L_08A171AC;
    }
L_08A171AC:
    aot_gpr[31] = (0x08A171B4u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A171F4;
L_08A171B4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18032), aot_gpr[17]);
        goto L_08A171D0;
    }
    goto L_08A171C0;
L_08A171C0:
    aot_gpr[31] = (0x08A171C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A17274;
L_08A171C8:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18032), aot_gpr[17]);
    goto L_08A171D0;
L_08A171D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18032)));
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
L_08A171EC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A171F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17208u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A17208u) goto L_08A17208;
    return;
L_08A17208:
    aot_gpr[31] = (0x08A17210u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17210u) goto L_08A17210;
    return;
L_08A17210:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A1722Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1680));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1722Cu) goto L_08A1722C;
    return;
L_08A1722C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1723C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17250u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A17250u) goto L_08A17250;
    return;
L_08A17250:
    aot_gpr[31] = (0x08A17258u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17258u) goto L_08A17258;
    return;
L_08A17258:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A17264u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A17264u) goto L_08A17264;
    return;
L_08A17264:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17288u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A17288u) goto L_08A17288;
    return;
L_08A17288:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15272));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A172A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A172BCu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A172BCu) goto L_08A172BC;
    return;
L_08A172BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A172C8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A172C8u) goto L_08A172C8;
    return;
L_08A172C8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A172D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1644));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A172D8u) goto L_08A172D8;
    return;
L_08A172D8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A172EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A17320u);
    aot_gpr[4] = (0u | 296u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17320u) goto L_08A17320;
    return;
L_08A17320:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1733C;
      }
      goto L_08A1732C;
    }
L_08A1732C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A17338u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A17360;
L_08A17338:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A1733C;
L_08A1733C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
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
L_08A17360:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A17384u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A17384u) goto L_08A17384;
    return;
L_08A17384:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15336));
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1632));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A173A8u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A173A8u) goto L_08A173A8;
    return;
L_08A173A8:
    aot_gpr[18] = (0u | 0u);
    goto L_08A173AC;
L_08A173AC:
    aot_gpr[31] = (0x08A173B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A173B4u) goto L_08A173B4;
    return;
L_08A173B4:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A173F8;
      }
      goto L_08A173C0;
    }
L_08A173C0:
    aot_gpr[31] = (0x08A173C8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A173C8u) goto L_08A173C8;
    return;
L_08A173C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A173F0;
      }
      goto L_08A173D4;
    }
L_08A173D4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A173F0;
      }
      goto L_08A173DC;
    }
L_08A173DC:
    aot_gpr[31] = (0x08A173E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A173E4u) goto L_08A173E4;
    return;
L_08A173E4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A173F0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A173F0u) goto L_08A173F0;
    return;
L_08A173F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A173AC;
      }
      goto L_08A173F8;
    }
L_08A173F8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A17418:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A17460;
      }
      goto L_08A17434;
    }
L_08A17434:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15336));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1744Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A1744Cu) goto L_08A1744C;
    return;
L_08A1744C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17460;
      }
      goto L_08A17458;
    }
L_08A17458:
    aot_gpr[31] = (0x08A17460u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A17460u) goto L_08A17460;
    return;
L_08A17460:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A174C4;
      }
      goto L_08A17490;
    }
L_08A17490:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15472));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18024), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A174B0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A174B0u) goto L_08A174B0;
    return;
L_08A174B0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A174C4;
      }
      goto L_08A174BC;
    }
L_08A174BC:
    aot_gpr[31] = (0x08A174C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A1758C;
L_08A174C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A174D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18024)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A17520;
      }
      goto L_08A174FC;
    }
L_08A174FC:
    aot_gpr[31] = (0x08A17504u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A17544;
L_08A17504:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18024), aot_gpr[17]);
        goto L_08A17520;
    }
    goto L_08A17510;
L_08A17510:
    aot_gpr[31] = (0x08A17518u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A175C4;
L_08A17518:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18024), aot_gpr[17]);
    goto L_08A17520;
L_08A17520:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18024)));
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
L_08A1753C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17558u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A17558u) goto L_08A17558;
    return;
L_08A17558:
    aot_gpr[31] = (0x08A17560u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17560u) goto L_08A17560;
    return;
L_08A17560:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A1757Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1616));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1757Cu) goto L_08A1757C;
    return;
L_08A1757C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1758C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A175A0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A175A0u) goto L_08A175A0;
    return;
L_08A175A0:
    aot_gpr[31] = (0x08A175A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A175A8u) goto L_08A175A8;
    return;
L_08A175A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A175B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A175B4u) goto L_08A175B4;
    return;
L_08A175B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A175C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A175D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A175D8u) goto L_08A175D8;
    return;
L_08A175D8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15472));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A175F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1760Cu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1760Cu) goto L_08A1760C;
    return;
L_08A1760C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A17618u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17618u) goto L_08A17618;
    return;
L_08A17618:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A17628u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1572));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17628u) goto L_08A17628;
    return;
L_08A17628:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1763C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A17668u);
    aot_gpr[4] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17668u) goto L_08A17668;
    return;
L_08A17668:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A17680;
      }
      goto L_08A17674;
    }
L_08A17674:
    aot_gpr[31] = (0x08A1767Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0545_entry, 545u, 122u, 0x08A25974u>(ctx, &aot_mem) && ctx.pc == 0x08A1767Cu) goto L_08A1767C;
    return;
L_08A1767C:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A17680;
L_08A17680:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A176A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A176F0;
      }
      goto L_08A176BC;
    }
L_08A176BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15544));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18016), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A176DCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A176DCu) goto L_08A176DC;
    return;
L_08A176DC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A176F0;
      }
      goto L_08A176E8;
    }
L_08A176E8:
    aot_gpr[31] = (0x08A176F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A177B8;
L_08A176F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17704:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18016)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1774C;
      }
      goto L_08A17728;
    }
L_08A17728:
    aot_gpr[31] = (0x08A17730u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A17770;
L_08A17730:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18016), aot_gpr[17]);
        goto L_08A1774C;
    }
    goto L_08A1773C;
L_08A1773C:
    aot_gpr[31] = (0x08A17744u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A177F0;
L_08A17744:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18016), aot_gpr[17]);
    goto L_08A1774C;
L_08A1774C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18016)));
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
L_08A17768:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17770:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17784u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A17784u) goto L_08A17784;
    return;
L_08A17784:
    aot_gpr[31] = (0x08A1778Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1778Cu) goto L_08A1778C;
    return;
L_08A1778C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A177A8u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1552));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A177A8u) goto L_08A177A8;
    return;
L_08A177A8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A177B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A177CCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A177CCu) goto L_08A177CC;
    return;
L_08A177CC:
    aot_gpr[31] = (0x08A177D4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A177D4u) goto L_08A177D4;
    return;
L_08A177D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A177E0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A177E0u) goto L_08A177E0;
    return;
L_08A177E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A177F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17804u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A17804u) goto L_08A17804;
    return;
L_08A17804:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15544));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17824:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17838u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A17838u) goto L_08A17838;
    return;
L_08A17838:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A17844u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17844u) goto L_08A17844;
    return;
L_08A17844:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A17854u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1516));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17854u) goto L_08A17854;
    return;
L_08A17854:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17868:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A17894u);
    aot_gpr[4] = (0u | 340u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17894u) goto L_08A17894;
    return;
L_08A17894:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A178AC;
      }
      goto L_08A178A0;
    }
L_08A178A0:
    aot_gpr[31] = (0x08A178A8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A178CC;
L_08A178A8:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A178AC;
L_08A178AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A178CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A178ECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A178ECu) goto L_08A178EC;
    return;
L_08A178EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15616));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A17900u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A17B28;
L_08A17900:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A17914u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-1488));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A17914u) goto L_08A17914;
    return;
L_08A17914:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A17928u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17928u) goto L_08A17928;
    return;
L_08A17928:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A1793Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-1476));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1793Cu) goto L_08A1793C;
    return;
L_08A1793C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A17950u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17950u) goto L_08A17950;
    return;
L_08A17950:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A17964u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1460));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17964u) goto L_08A17964;
    return;
L_08A17964:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(336));
    aot_gpr[31] = (0x08A17974u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A17B78;
L_08A17974:
    aot_gpr[31] = (0x08A1797Cu);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1797Cu) goto L_08A1797C;
    return;
L_08A1797C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A17988u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17988u) goto L_08A17988;
    return;
L_08A17988:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A179B8;
      }
      goto L_08A17990;
    }
L_08A17990:
    aot_gpr[31] = (0x08A17998u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A17998u) goto L_08A17998;
    return;
L_08A17998:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A179A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A179A4u) goto L_08A179A4;
    return;
L_08A179A4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A179B8;
      }
      goto L_08A179B0;
    }
L_08A179B0:
    aot_gpr[31] = (0x08A179B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A179B8u) goto L_08A179B8;
    return;
L_08A179B8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A179D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A17A20;
      }
      goto L_08A179F4;
    }
L_08A179F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A17A0Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A17A0Cu) goto L_08A17A0C;
    return;
L_08A17A0C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17A20;
      }
      goto L_08A17A18;
    }
L_08A17A18:
    aot_gpr[31] = (0x08A17A20u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A17A20u) goto L_08A17A20;
    return;
L_08A17A20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17A34:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17A3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A17B08;
      }
      goto L_08A17A60;
    }
L_08A17A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A17A78u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17A78u) goto L_08A17A78;
    return;
L_08A17A78:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
      if (branch_taken) {
          goto L_08A17A88;
      }
      goto L_08A17A80;
    }
L_08A17A80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_08A17A8C;
      }
      goto L_08A17A88;
    }
L_08A17A88:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    goto L_08A17A8C;
L_08A17A8C:
    aot_gpr[31] = (0x08A17A94u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A17A94u) goto L_08A17A94;
    return;
L_08A17A94:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_08A17ACC;
      }
      goto L_08A17AB4;
    }
L_08A17AB4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A17AC0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem) && ctx.pc == 0x08A17AC0u) goto L_08A17AC0;
    return;
L_08A17AC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
    goto L_08A17ACC;
L_08A17ACC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[10] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x08A17B08u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17B08u) goto L_08A17B08;
    return;
L_08A17B08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17B20:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17B28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17B4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1452));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A17B4Cu) goto L_08A17B4C;
    return;
L_08A17B4C:
    aot_gpr[4] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17B78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A17BA4u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-1440));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A17BA4u) goto L_08A17BA4;
    return;
L_08A17BA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A17BB4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17BB4u) goto L_08A17BB4;
    return;
L_08A17BB4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A17BEC;
      }
      goto L_08A17BC0;
    }
L_08A17BC0:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-18008));
    goto L_08A17BC8;
L_08A17BC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A17BD4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08A17BD4u) goto L_08A17BD4;
    return;
L_08A17BD4:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_08A17C0C;
    }
    goto L_08A17BDC;
L_08A17BDC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A17BC8;
      }
      goto L_08A17BEC;
    }
L_08A17BEC:
    aot_gpr[2] = (0u | 0u);
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
L_08A17C0C:
    aot_gpr[2] = (0u | 1u);
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
L_08A17C2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A17C7C;
      }
      goto L_08A17C48;
    }
L_08A17C48:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15752));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18000), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A17C68u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17C68u) goto L_08A17C68;
    return;
L_08A17C68:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17C7C;
      }
      goto L_08A17C74;
    }
L_08A17C74:
    aot_gpr[31] = (0x08A17C7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A17D44;
L_08A17C7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17C90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18000)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A17CD8;
      }
      goto L_08A17CB4;
    }
L_08A17CB4:
    aot_gpr[31] = (0x08A17CBCu);
    aot_gpr[4] = (0u | 8u);
    goto L_08A17CFC;
L_08A17CBC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18000), aot_gpr[17]);
        goto L_08A17CD8;
    }
    goto L_08A17CC8;
L_08A17CC8:
    aot_gpr[31] = (0x08A17CD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A17D7C;
L_08A17CD0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18000), aot_gpr[17]);
    goto L_08A17CD8;
L_08A17CD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18000)));
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
L_08A17CF4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17CFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17D10u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A17D10u) goto L_08A17D10;
    return;
L_08A17D10:
    aot_gpr[31] = (0x08A17D18u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17D18u) goto L_08A17D18;
    return;
L_08A17D18:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 14u);
    aot_gpr[31] = (0x08A17D34u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1432));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A17D34u) goto L_08A17D34;
    return;
L_08A17D34:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17D44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17D58u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A17D58u) goto L_08A17D58;
    return;
L_08A17D58:
    aot_gpr[31] = (0x08A17D60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17D60u) goto L_08A17D60;
    return;
L_08A17D60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A17D6Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A17D6Cu) goto L_08A17D6C;
    return;
L_08A17D6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17D7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17D90u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A17D90u) goto L_08A17D90;
    return;
L_08A17D90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15752));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17DB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17DC4u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A17DC4u) goto L_08A17DC4;
    return;
L_08A17DC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A17DD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17DD0u) goto L_08A17DD0;
    return;
L_08A17DD0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A17DE0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1392));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17DE0u) goto L_08A17DE0;
    return;
L_08A17DE0:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17DF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A17E20u);
    aot_gpr[4] = (0u | 304u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17E20u) goto L_08A17E20;
    return;
L_08A17E20:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A17E38;
      }
      goto L_08A17E2C;
    }
L_08A17E2C:
    aot_gpr[31] = (0x08A17E34u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 47u, 0x08A263D0u>(ctx, &aot_mem) && ctx.pc == 0x08A17E34u) goto L_08A17E34;
    return;
L_08A17E34:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A17E38;
L_08A17E38:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A17E58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17E6Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 53u, 0x08A032C0u>(ctx, &aot_mem) && ctx.pc == 0x08A17E6Cu) goto L_08A17E6C;
    return;
L_08A17E6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15824));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17E90:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17E98:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17EA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A17F00;
      }
      goto L_08A17EC0;
    }
L_08A17EC0:
    aot_gpr[31] = (0x08A17EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A17EC8u) goto L_08A17EC8;
    return;
L_08A17EC8:
    aot_gpr[31] = (0x08A17ED0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 11u, 0x089FF0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A17ED0u) goto L_08A17ED0;
    return;
L_08A17ED0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17EF8;
      }
      goto L_08A17EDC;
    }
L_08A17EDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08A17EE8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17EE8u) goto L_08A17EE8;
    return;
L_08A17EE8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A17EF8;
      }
      goto L_08A17EF0;
    }
L_08A17EF0:
    aot_gpr[31] = (0x08A17EF8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0532_entry, 532u, 97u, 0x08A18678u>(ctx, &aot_mem) && ctx.pc == 0x08A17EF8u) goto L_08A17EF8;
    return;
L_08A17EF8:
    aot_gpr[31] = (0x08A17F00u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0533_entry, 533u, 61u, 0x08A19604u>(ctx, &aot_mem) && ctx.pc == 0x08A17F00u) goto L_08A17F00;
    return;
L_08A17F00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17F14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A17F30u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0532_entry, 532u, 8u, 0x08A18068u>(ctx, &aot_mem) && ctx.pc == 0x08A17F30u) goto L_08A17F30;
    return;
L_08A17F30:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A17FC0;
      }
      goto L_08A17F38;
    }
L_08A17F38:
    aot_gpr[31] = (0x08A17F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A17F40u) goto L_08A17F40;
    return;
L_08A17F40:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1376));
    aot_gpr[31] = (0x08A17F58u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1360));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 16u, 0x089FE14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17F58u) goto L_08A17F58;
    return;
L_08A17F58:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17FA8;
      }
      goto L_08A17F64;
    }
L_08A17F64:
    aot_gpr[31] = (0x08A17F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A17F6Cu) goto L_08A17F6C;
    return;
L_08A17F6C:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A17F80u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1340));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 16u, 0x089FE14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17F80u) goto L_08A17F80;
    return;
L_08A17F80:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A17FA8;
      }
      goto L_08A17F8C;
    }
L_08A17F8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A17FA8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A17FA8u) goto L_08A17FA8;
    return;
L_08A17FA8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17FC0:
    aot_gpr[31] = (0x08A17FC8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0532_entry, 532u, 93u, 0x08A18630u>(ctx, &aot_mem) && ctx.pc == 0x08A17FC8u) goto L_08A17FC8;
    return;
L_08A17FC8:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A17FE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A17FF4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A17FF4u) goto L_08A17FF4;
    return;
L_08A17FF4:
    aot_gpr[31] = (0x08A17FFCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A17FFCu) goto L_08A17FFC;
    return;
L_08A17FFC:
    aot_gpr[8] = (2215u << 16u);
    ctx.pc = 0x08A18000u; return;
}

void recomp_unit_0531(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0531_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_531(Runtime &runtime) {
    runtime.register_generated_unit(531u, 0x08A17000u, 4096u, &recomp_unit_0531, &recomp_unit_0531_entry);
    runtime.register_function(0x08A17000u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17010u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17024u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1702Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17038u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17048u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1705Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1707Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17090u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1709Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A170ACu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A170C0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A170ECu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A170F8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17100u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17104u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17124u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17140u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17160u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1716Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17174u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17188u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A171ACu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A171B4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A171C0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A171C8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A171D0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A171ECu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A171F4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17208u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17210u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1722Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1723Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17250u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17258u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17264u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17274u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17288u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A172A8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A172BCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A172C8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A172D8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A172ECu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17320u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1732Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17338u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1733Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17360u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17384u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173A8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173ACu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173B4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173C0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173C8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173D4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173DCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173E4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173F0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A173F8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17418u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17434u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1744Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17458u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17460u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17474u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17490u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A174B0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A174BCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A174C4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A174D8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A174FCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17504u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17510u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17518u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17520u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1753Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17544u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17558u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17560u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1757Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1758Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A175A0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A175A8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A175B4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A175C4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A175D8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A175F8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1760Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17618u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17628u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1763Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17668u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17674u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1767Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17680u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A176A0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A176BCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A176DCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A176E8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A176F0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17704u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17728u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17730u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1773Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17744u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1774Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17768u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17770u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17784u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1778Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A177A8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A177B8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A177CCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A177D4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A177E0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A177F0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17804u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17824u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17838u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17844u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17854u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17868u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17894u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A178A0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A178A8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A178ACu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A178CCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A178ECu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17900u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17914u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17928u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1793Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17950u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17964u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17974u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A1797Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17988u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17990u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17998u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A179A4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A179B0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A179B8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A179D8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A179F4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A0Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A18u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A20u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A34u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A3Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A60u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A78u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A80u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A88u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A8Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17A94u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17AB4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17AC0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17ACCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17B08u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17B20u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17B28u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17B4Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17B78u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17BA4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17BB4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17BC0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17BC8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17BD4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17BDCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17BECu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17C0Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17C2Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17C48u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17C68u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17C74u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17C7Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17C90u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17CB4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17CBCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17CC8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17CD0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17CD8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17CF4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17CFCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D10u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D18u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D34u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D44u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D58u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D60u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D6Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D7Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17D90u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17DB0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17DC4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17DD0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17DE0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17DF4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17E20u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17E2Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17E34u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17E38u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17E58u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17E6Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17E90u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17E98u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17EA0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17EC0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17EC8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17ED0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17EDCu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17EE8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17EF0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17EF8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F00u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F14u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F30u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F38u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F40u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F58u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F64u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F6Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F80u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17F8Cu, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17FA8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17FC0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17FC8u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17FE0u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17FF4u, &recomp_unit_0531, "recomp_unit_0531");
    runtime.register_function(0x08A17FFCu, &recomp_unit_0531, "recomp_unit_0531");
}
} // namespace psprecomp
