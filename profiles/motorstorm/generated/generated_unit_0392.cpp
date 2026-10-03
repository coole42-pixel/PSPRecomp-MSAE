#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0392[1019] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 9, 10, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 18, 0, 0, 19, 20, 0,
    21, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0,
    0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0,
    0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0,
    76, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0,
    83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0,
    90, 91, 0, 0, 92, 93, 0, 0, 0, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 100, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 116, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 159, 0, 160,
    0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168,
    0, 0, 0, 0, 0, 169, 0, 170, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 193, 0, 194,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223,
};
void recomp_unit_0392_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0898C000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0392[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898C000;
    case 2u: goto L_0898C024;
    case 3u: goto L_0898C02C;
    case 4u: goto L_0898C04C;
    case 5u: goto L_0898C088;
    case 6u: goto L_0898C0A8;
    case 7u: goto L_0898C0D4;
    case 8u: goto L_0898C0E0;
    case 9u: goto L_0898C0E4;
    case 10u: goto L_0898C0E8;
    case 11u: goto L_0898C108;
    case 12u: goto L_0898C110;
    case 13u: goto L_0898C11C;
    case 14u: goto L_0898C128;
    case 15u: goto L_0898C134;
    case 16u: goto L_0898C154;
    case 17u: goto L_0898C164;
    case 18u: goto L_0898C168;
    case 19u: goto L_0898C174;
    case 20u: goto L_0898C178;
    case 21u: goto L_0898C180;
    case 22u: goto L_0898C18C;
    case 23u: goto L_0898C194;
    case 24u: goto L_0898C19C;
    case 25u: goto L_0898C1A4;
    case 26u: goto L_0898C1B0;
    case 27u: goto L_0898C1BC;
    case 28u: goto L_0898C1C8;
    case 29u: goto L_0898C1E4;
    case 30u: goto L_0898C1EC;
    case 31u: goto L_0898C204;
    case 32u: goto L_0898C20C;
    case 33u: goto L_0898C224;
    case 34u: goto L_0898C22C;
    case 35u: goto L_0898C23C;
    case 36u: goto L_0898C27C;
    case 37u: goto L_0898C290;
    case 38u: goto L_0898C29C;
    case 39u: goto L_0898C2B4;
    case 40u: goto L_0898C2D8;
    case 41u: goto L_0898C318;
    case 42u: goto L_0898C320;
    case 43u: goto L_0898C32C;
    case 44u: goto L_0898C334;
    case 45u: goto L_0898C364;
    case 46u: goto L_0898C378;
    case 47u: goto L_0898C384;
    case 48u: goto L_0898C390;
    case 49u: goto L_0898C39C;
    case 50u: goto L_0898C3B8;
    case 51u: goto L_0898C3CC;
    case 52u: goto L_0898C3F0;
    case 53u: goto L_0898C408;
    case 54u: goto L_0898C420;
    case 55u: goto L_0898C438;
    case 56u: goto L_0898C450;
    case 57u: goto L_0898C468;
    case 58u: goto L_0898C47C;
    case 59u: goto L_0898C490;
    case 60u: goto L_0898C4A4;
    case 61u: goto L_0898C4BC;
    case 62u: goto L_0898C4C8;
    case 63u: goto L_0898C4D8;
    case 64u: goto L_0898C4F0;
    case 65u: goto L_0898C504;
    case 66u: goto L_0898C518;
    case 67u: goto L_0898C530;
    case 68u: goto L_0898C548;
    case 69u: goto L_0898C560;
    case 70u: goto L_0898C578;
    case 71u: goto L_0898C590;
    case 72u: goto L_0898C5A8;
    case 73u: goto L_0898C5C0;
    case 74u: goto L_0898C5D8;
    case 75u: goto L_0898C5F0;
    case 76u: goto L_0898C600;
    case 77u: goto L_0898C60C;
    case 78u: goto L_0898C610;
    case 79u: goto L_0898C62C;
    case 80u: goto L_0898C63C;
    case 81u: goto L_0898C670;
    case 82u: goto L_0898C678;
    case 83u: goto L_0898C680;
    case 84u: goto L_0898C69C;
    case 85u: goto L_0898C6B4;
    case 86u: goto L_0898C6BC;
    case 87u: goto L_0898C6C4;
    case 88u: goto L_0898C6E8;
    case 89u: goto L_0898C6F4;
    case 90u: goto L_0898C700;
    case 91u: goto L_0898C704;
    case 92u: goto L_0898C710;
    case 93u: goto L_0898C714;
    case 94u: goto L_0898C728;
    case 95u: goto L_0898C72C;
    case 96u: goto L_0898C770;
    case 97u: goto L_0898C780;
    case 98u: goto L_0898C798;
    case 99u: goto L_0898C7A4;
    case 100u: goto L_0898C7A8;
    case 101u: goto L_0898C7AC;
    case 102u: goto L_0898C7BC;
    case 103u: goto L_0898C7DC;
    case 104u: goto L_0898C7E8;
    case 105u: goto L_0898C7F0;
    case 106u: goto L_0898C80C;
    case 107u: goto L_0898C834;
    case 108u: goto L_0898C83C;
    case 109u: goto L_0898C850;
    case 110u: goto L_0898C880;
    case 111u: goto L_0898C884;
    case 112u: goto L_0898C898;
    case 113u: goto L_0898C8C0;
    case 114u: goto L_0898C8C8;
    case 115u: goto L_0898C8DC;
    case 116u: goto L_0898C910;
    case 117u: goto L_0898C914;
    case 118u: goto L_0898C928;
    case 119u: goto L_0898C94C;
    case 120u: goto L_0898C954;
    case 121u: goto L_0898C970;
    case 122u: goto L_0898C984;
    case 123u: goto L_0898C99C;
    case 124u: goto L_0898C9A8;
    case 125u: goto L_0898C9B0;
    case 126u: goto L_0898C9B8;
    case 127u: goto L_0898C9C0;
    case 128u: goto L_0898C9F0;
    case 129u: goto L_0898C9FC;
    case 130u: goto L_0898CA04;
    case 131u: goto L_0898CA28;
    case 132u: goto L_0898CA40;
    case 133u: goto L_0898CA44;
    case 134u: goto L_0898CA4C;
    case 135u: goto L_0898CA54;
    case 136u: goto L_0898CA78;
    case 137u: goto L_0898CA8C;
    case 138u: goto L_0898CA98;
    case 139u: goto L_0898CAA4;
    case 140u: goto L_0898CAAC;
    case 141u: goto L_0898CAB8;
    case 142u: goto L_0898CAC8;
    case 143u: goto L_0898CAD0;
    case 144u: goto L_0898CAF8;
    case 145u: goto L_0898CB04;
    case 146u: goto L_0898CB10;
    case 147u: goto L_0898CB4C;
    case 148u: goto L_0898CB64;
    case 149u: goto L_0898CB68;
    case 150u: goto L_0898CB9C;
    case 151u: goto L_0898CBA4;
    case 152u: goto L_0898CBAC;
    case 153u: goto L_0898CBB4;
    case 154u: goto L_0898CBC8;
    case 155u: goto L_0898CBD0;
    case 156u: goto L_0898CBD8;
    case 157u: goto L_0898CBE4;
    case 158u: goto L_0898CBF0;
    case 159u: goto L_0898CBF4;
    case 160u: goto L_0898CBFC;
    case 161u: goto L_0898CC04;
    case 162u: goto L_0898CC0C;
    case 163u: goto L_0898CC44;
    case 164u: goto L_0898CC54;
    case 165u: goto L_0898CC5C;
    case 166u: goto L_0898CC68;
    case 167u: goto L_0898CC70;
    case 168u: goto L_0898CC7C;
    case 169u: goto L_0898CC94;
    case 170u: goto L_0898CC9C;
    case 171u: goto L_0898CCA0;
    case 172u: goto L_0898CCA8;
    case 173u: goto L_0898CCB0;
    case 174u: goto L_0898CCB8;
    case 175u: goto L_0898CCD8;
    case 176u: goto L_0898CCEC;
    case 177u: goto L_0898CCF8;
    case 178u: goto L_0898CD0C;
    case 179u: goto L_0898CD34;
    case 180u: goto L_0898CD3C;
    case 181u: goto L_0898CD44;
    case 182u: goto L_0898CD54;
    case 183u: goto L_0898CD5C;
    case 184u: goto L_0898CD88;
    case 185u: goto L_0898CD8C;
    case 186u: goto L_0898CDA4;
    case 187u: goto L_0898CDAC;
    case 188u: goto L_0898CDB4;
    case 189u: goto L_0898CDBC;
    case 190u: goto L_0898CDD8;
    case 191u: goto L_0898CDE4;
    case 192u: goto L_0898CDF0;
    case 193u: goto L_0898CDF4;
    case 194u: goto L_0898CDFC;
    case 195u: goto L_0898CE00;
    case 196u: goto L_0898CE2C;
    case 197u: goto L_0898CE34;
    case 198u: goto L_0898CE44;
    case 199u: goto L_0898CE48;
    case 200u: goto L_0898CE58;
    case 201u: goto L_0898CE64;
    case 202u: goto L_0898CE78;
    case 203u: goto L_0898CE88;
    case 204u: goto L_0898CEA0;
    case 205u: goto L_0898CEAC;
    case 206u: goto L_0898CEC0;
    case 207u: goto L_0898CECC;
    case 208u: goto L_0898CED8;
    case 209u: goto L_0898CEE0;
    case 210u: goto L_0898CEF0;
    case 211u: goto L_0898CEFC;
    case 212u: goto L_0898CF18;
    case 213u: goto L_0898CF20;
    case 214u: goto L_0898CF28;
    case 215u: goto L_0898CF3C;
    case 216u: goto L_0898CF5C;
    case 217u: goto L_0898CF70;
    case 218u: goto L_0898CF78;
    case 219u: goto L_0898CF94;
    case 220u: goto L_0898CFB0;
    case 221u: goto L_0898CFC8;
    case 222u: goto L_0898CFD8;
    case 223u: goto L_0898CFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898C000:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(180), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C024:
    aot_gpr[31] = (0x0898C02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 84u, 0x08986594u>(ctx, &aot_mem) && ctx.pc == 0x0898C02Cu) goto L_0898C02C;
    return;
L_0898C02C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x0898C04Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C04Cu) goto L_0898C04C;
    return;
L_0898C04C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[31] = (0x0898C088u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C088u) goto L_0898C088;
    return;
L_0898C088:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C0A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
      if (branch_taken) {
          goto L_0898C0E0;
      }
      goto L_0898C0D4;
    }
L_0898C0D4:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C108;
      }
      goto L_0898C0E0;
    }
L_0898C0E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    goto L_0898C0E4;
L_0898C0E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_0898C0E8;
L_0898C0E8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C108:
    aot_gpr[31] = (0x0898C110u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C110u) goto L_0898C110;
    return;
L_0898C110:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0898C0E4;
      }
      goto L_0898C11C;
    }
L_0898C11C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0898C0E4;
      }
      goto L_0898C128;
    }
L_0898C128:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_0898C0E8;
      }
      goto L_0898C134;
    }
L_0898C134:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(2)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[3]);
      if (branch_taken) {
          goto L_0898C1EC;
      }
      goto L_0898C154;
    }
L_0898C154:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1200)));
        goto L_0898C178;
    }
    goto L_0898C164;
L_0898C164:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_0898C168;
L_0898C168:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
        goto L_0898C320;
    }
    goto L_0898C174;
L_0898C174:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1200)));
    goto L_0898C178;
L_0898C178:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_0898C18C;
      }
      goto L_0898C180;
    }
L_0898C180:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_0898C22C;
      }
      goto L_0898C18C;
    }
L_0898C18C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0898C0E4;
      }
      goto L_0898C194;
    }
L_0898C194:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_0898C19C;
L_0898C19C:
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
        goto L_0898C1A4;
    }
    goto L_0898C1A4;
L_0898C1A4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_0898C20C;
      }
      goto L_0898C1B0;
    }
L_0898C1B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0898C0E4;
      }
      goto L_0898C1BC;
    }
L_0898C1BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
        goto L_0898C0E4;
    }
    goto L_0898C1C8;
L_0898C1C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(1)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(164)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(2)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898C1E4u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C1E4u) goto L_0898C1E4;
    return;
L_0898C1E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    goto L_0898C0E4;
L_0898C1EC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(6)));
    aot_gpr[21] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_0898C168;
    }
    goto L_0898C204;
L_0898C204:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1200)));
    goto L_0898C178;
L_0898C20C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(1)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(2)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898C224u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C224u) goto L_0898C224;
    return;
L_0898C224:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    goto L_0898C0E4;
L_0898C22C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898C23Cu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x0898C23Cu) goto L_0898C23C;
    return;
L_0898C23C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0898C27Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C27Cu) goto L_0898C27C;
    return;
L_0898C27C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898C0E0;
      }
      goto L_0898C290;
    }
L_0898C290:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_0898C19C;
    }
    goto L_0898C29C;
L_0898C29C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1028)));
    aot_gpr[31] = (0x0898C2B4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x0898C2B4u) goto L_0898C2B4;
    return;
L_0898C2B4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0898C2D8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C2D8u) goto L_0898C2D8;
    return;
L_0898C2D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(1)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1084)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(6));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[3]);
    aot_gpr[31] = (0x0898C318u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C318u) goto L_0898C318;
    return;
L_0898C318:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    goto L_0898C0E4;
L_0898C320:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(1)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898C32Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C32Cu) goto L_0898C32C;
    return;
L_0898C32C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(1200)));
    goto L_0898C178;
L_0898C334:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0898C364u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x0898C364u) goto L_0898C364;
    return;
L_0898C364:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[2] & 65535u);
      if (branch_taken) {
          goto L_0898C39C;
      }
      goto L_0898C378;
    }
L_0898C378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898C39C;
      }
      goto L_0898C384;
    }
L_0898C384:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898C39C;
      }
      goto L_0898C390;
    }
L_0898C390:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(168)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898C39Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C39Cu) goto L_0898C39C;
    return;
L_0898C39C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C3B8:
    aot_gpr[8] = (aot_gpr[6] + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 116u, 0x089916E8u>(ctx, &aot_mem); return;
L_0898C3CC:
    aot_gpr[5] = (2201u << 16u);
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16756));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17452));
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0898C3F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_0898C3B8;
L_0898C3F0:
    aot_gpr[5] = (2201u << 16u);
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16680));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17980));
    aot_gpr[31] = (0x0898C408u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    goto L_0898C3B8;
L_0898C408:
    aot_gpr[5] = (2201u << 16u);
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16940));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(18064));
    aot_gpr[31] = (0x0898C420u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(16));
    goto L_0898C3B8;
L_0898C420:
    aot_gpr[5] = (2201u << 16u);
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16696));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17464));
    aot_gpr[31] = (0x0898C438u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(19));
    goto L_0898C3B8;
L_0898C438:
    aot_gpr[5] = (2201u << 16u);
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16688));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17472));
    aot_gpr[31] = (0x0898C450u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(20));
    goto L_0898C3B8;
L_0898C450:
    aot_gpr[5] = (2201u << 16u);
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-16216));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(18208));
    aot_gpr[31] = (0x0898C468u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(22));
    goto L_0898C3B8;
L_0898C468:
    aot_gpr[5] = (2200u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20040));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(25));
    aot_gpr[31] = (0x0898C47Cu);
    aot_gpr[6] = (0u + 0u);
    goto L_0898C3B8;
L_0898C47C:
    aot_gpr[5] = (2200u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17904));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(26));
    aot_gpr[31] = (0x0898C490u);
    aot_gpr[6] = (0u + 0u);
    goto L_0898C3B8;
L_0898C490:
    aot_gpr[5] = (2201u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-876));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(33));
    aot_gpr[31] = (0x0898C4A4u);
    aot_gpr[6] = (0u + 0u);
    goto L_0898C3B8;
L_0898C4A4:
    aot_gpr[5] = (2201u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1152));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(34));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x0898C4BCu);
    aot_gpr[16] = (2217u << 16u);
    goto L_0898C3B8;
L_0898C4BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (2201u << 16u);
      if (branch_taken) {
          goto L_0898C5F0;
      }
      goto L_0898C4C8;
    }
L_0898C4C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(228)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(18328));
    aot_gpr[31] = (0x0898C4D8u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(15));
    goto L_0898C3B8;
L_0898C4D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17720));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(224)));
    aot_gpr[31] = (0x0898C4F0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(18));
    goto L_0898C3B8;
L_0898C4F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x0898C504u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(168)));
    goto L_0898C3B8;
L_0898C504:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[31] = (0x0898C518u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(172)));
    goto L_0898C3B8;
L_0898C518:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17728));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(176)));
    aot_gpr[31] = (0x0898C530u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5));
    goto L_0898C3B8;
L_0898C530:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17652));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(180)));
    aot_gpr[31] = (0x0898C548u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(9));
    goto L_0898C3B8;
L_0898C548:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17712));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(184)));
    aot_gpr[31] = (0x0898C560u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(10));
    goto L_0898C3B8;
L_0898C560:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(18492));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(188)));
    aot_gpr[31] = (0x0898C578u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(11));
    goto L_0898C3B8;
L_0898C578:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(18564));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(192)));
    aot_gpr[31] = (0x0898C590u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(12));
    goto L_0898C3B8;
L_0898C590:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(18672));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (0x0898C5A8u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(13));
    goto L_0898C3B8;
L_0898C5A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17736));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(200)));
    aot_gpr[31] = (0x0898C5C0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(14));
    goto L_0898C3B8;
L_0898C5C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(17896));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(204)));
    aot_gpr[31] = (0x0898C5D8u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(21));
    goto L_0898C3B8;
L_0898C5D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(18744));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(208)));
    aot_gpr[31] = (0x0898C5F0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(23));
    goto L_0898C3B8;
L_0898C5F0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2808)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (2201u << 16u);
      if (branch_taken) {
          goto L_0898C610;
      }
      goto L_0898C600;
    }
L_0898C600:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898C60Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C60Cu) goto L_0898C60C;
    return;
L_0898C60C:
    aot_gpr[5] = (2201u << 16u);
    goto L_0898C610;
L_0898C610:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-15564));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0898C3B8;
L_0898C62C:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(13036), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C63C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 65535u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898C670u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C670u) goto L_0898C670;
    return;
L_0898C670:
    aot_gpr[31] = (0x0898C678u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898C678u) goto L_0898C678;
    return;
L_0898C678:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898C69C;
      }
      goto L_0898C680;
    }
L_0898C680:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C69C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898C6B4u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C6B4u) goto L_0898C6B4;
    return;
L_0898C6B4:
    aot_gpr[31] = (0x0898C6BCu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898C6BCu) goto L_0898C6BC;
    return;
L_0898C6BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898C680;
      }
      goto L_0898C6C4;
    }
L_0898C6C4:
    aot_gpr[7] = (2217u << 16u);
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(12948));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12948)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_0898C7A4;
      }
      goto L_0898C6E8;
    }
L_0898C6E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6500));
      if (branch_taken) {
          goto L_0898C7A8;
      }
      goto L_0898C6F4;
    }
L_0898C6F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[4] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0898C704;
      }
      goto L_0898C700;
    }
L_0898C700:
    rt.unsupported(0x0898C700u, 0x000001CDu, "special? not lowered yet"); return;
L_0898C704:
    aot_gpr[2] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
      if (branch_taken) {
          goto L_0898C7F0;
      }
      goto L_0898C710;
    }
L_0898C710:
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    goto L_0898C714;
L_0898C714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12456)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_0898C72C;
      }
      goto L_0898C728;
    }
L_0898C728:
    rt.unsupported(0x0898C728u, 0x000001CDu, "special? not lowered yet"); return;
L_0898C72C:
    aot_gpr[2] = (2215u << 16u);
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[2] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[2] = fs * ft; }
    aot_fpr[3] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12460)));
    aot_gpr[3] = (aot_gpr[7] + static_cast<std::uint32_t>(12948));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (ctx.lo);
    aot_fpr[4] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[4])));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[2] = aot_fpr[2] - aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[2] < aot_fpr[3]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_0898C7DC;
      }
      goto L_0898C770;
    }
L_0898C770:
    ctx.set_fpu_condition((aot_fpr[3] < aot_fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898C7E8;
      }
      goto L_0898C780;
    }
L_0898C780:
    aot_gpr[2] = (2215u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12464)));
    ctx.set_fpu_condition((aot_fpr[2] < aot_fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898C7E8;
      }
      goto L_0898C798;
    }
L_0898C798:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0898C7AC;
L_0898C7A4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6500));
    goto L_0898C7A8;
L_0898C7A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_0898C7AC;
L_0898C7AC:
    aot_gpr[2] = (aot_gpr[7] + static_cast<std::uint32_t>(12948));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0898C7BCu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C7BCu) goto L_0898C7BC;
    return;
L_0898C7BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C7DC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0898C7AC;
L_0898C7E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0898C7AC;
L_0898C7F0:
    aot_gpr[3] = (aot_gpr[2] >> 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_fpr[4] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[4])));
    aot_fpr[2] = aot_fpr[2] + aot_fpr[2];
    goto L_0898C714;
L_0898C80C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(144)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898C834u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C834u) goto L_0898C834;
    return;
L_0898C834:
    aot_gpr[31] = (0x0898C83Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898C83Cu) goto L_0898C83C;
    return;
L_0898C83C:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(12948));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898C884;
      }
      goto L_0898C850;
    }
L_0898C850:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12948)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0898C880u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C880u) goto L_0898C880;
    return;
L_0898C880:
    aot_gpr[3] = (0u + 0u);
    goto L_0898C884;
L_0898C884:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C898:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] & 65535u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(148)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898C8C0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C8C0u) goto L_0898C8C0;
    return;
L_0898C8C0:
    aot_gpr[31] = (0x0898C8C8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898C8C8u) goto L_0898C8C8;
    return;
L_0898C8C8:
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(12948));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898C914;
      }
      goto L_0898C8DC;
    }
L_0898C8DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12948)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0898C910u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C910u) goto L_0898C910;
    return;
L_0898C910:
    aot_gpr[3] = (0u + 0u);
    goto L_0898C914;
L_0898C914:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_0898C970;
      }
      goto L_0898C94C;
    }
L_0898C94C:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0898C954;
L_0898C954:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C970:
    aot_gpr[19] = (aot_gpr[6] & 65535u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12948)));
    goto L_0898C984;
L_0898C984:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1100)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898C99Cu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C99Cu) goto L_0898C99C;
    return;
L_0898C99C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x0898C9A8u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898C9A8u) goto L_0898C9A8;
    return;
L_0898C9A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0898C954;
      }
      goto L_0898C9B0;
    }
L_0898C9B0:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12948)));
      if (branch_taken) {
          goto L_0898C984;
      }
      goto L_0898C9B8;
    }
L_0898C9B8:
    aot_gpr[2] = (0u + 0u);
    goto L_0898C954;
L_0898C9C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898CA78;
      }
      goto L_0898C9F0;
    }
L_0898C9F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[5]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CAD0;
      }
      goto L_0898C9FC;
    }
L_0898C9FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898CA28;
      }
      goto L_0898CA04;
    }
L_0898CA04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CA28:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1096)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898CA40u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898CA40u) goto L_0898CA40;
    return;
L_0898CA40:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    goto L_0898CA44;
L_0898CA44:
    aot_gpr[31] = (0x0898CA4Cu);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898CA4Cu) goto L_0898CA4C;
    return;
L_0898CA4C:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[4] = (aot_gpr[2]);
    goto L_0898CA54;
L_0898CA54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CA78:
    aot_gpr[19] = (0u + 0u);
    aot_gpr[16] = (0u + 0u);
    aot_gpr[20] = (2217u << 16u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(256));
    goto L_0898CA98;
L_0898CA8C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0898CA44;
      }
      goto L_0898CA98;
    }
L_0898CA98:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898CAA4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CAA4u) goto L_0898CAA4;
    return;
L_0898CAA4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898CA8C;
      }
      goto L_0898CAAC;
    }
L_0898CAAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898CA8C;
      }
      goto L_0898CAB8;
    }
L_0898CAB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2812)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898CAC8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898CAC8u) goto L_0898CAC8;
    return;
L_0898CAC8:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    goto L_0898CA8C;
L_0898CAD0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1096)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0898CAF8u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898CAF8u) goto L_0898CAF8;
    return;
L_0898CAF8:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x0898CB04u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898CB04u) goto L_0898CB04;
    return;
L_0898CB04:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (aot_gpr[2] != 0u) aot_gpr[4] = (aot_gpr[2]);
    goto L_0898CA54;
L_0898CB10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_0898CC0C;
      }
      goto L_0898CB4C;
    }
L_0898CB4C:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12948)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[18] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898CB9C;
      }
      goto L_0898CB64;
    }
L_0898CB64:
    aot_gpr[3] = (0u + 0u);
    goto L_0898CB68;
L_0898CB68:
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
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CB9C:
    aot_gpr[31] = (0x0898CBA4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 34u, 0x0898627Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CBA4u) goto L_0898CBA4;
    return;
L_0898CBA4:
    aot_gpr[31] = (0x0898CBACu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898CBACu) goto L_0898CBAC;
    return;
L_0898CBAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CBB4;
    }
L_0898CBB4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12948));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_0898CC44;
      }
      goto L_0898CBC8;
    }
L_0898CBC8:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[6]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CCB8;
      }
      goto L_0898CBD0;
    }
L_0898CBD0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12948)));
      if (branch_taken) {
          goto L_0898CC0C;
      }
      goto L_0898CBD8;
    }
L_0898CBD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_0898CBF4;
      }
      goto L_0898CBE4;
    }
L_0898CBE4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x0898CBF0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    goto L_0898C928;
L_0898CBF0:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_0898CBF4;
L_0898CBF4:
    aot_gpr[31] = (0x0898CBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898CBFCu) goto L_0898CBFC;
    return;
L_0898CBFC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CC04;
    }
L_0898CC04:
    aot_gpr[3] = (0u + 0u);
    goto L_0898CB68;
L_0898CC0C:
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
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CC44:
    aot_gpr[21] = (0u + 0u);
    aot_gpr[16] = (0u + 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(256));
    goto L_0898CC5C;
L_0898CC54:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[20];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0898CB68;
      }
      goto L_0898CC5C;
    }
L_0898CC5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12948)));
    aot_gpr[31] = (0x0898CC68u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CC68u) goto L_0898CC68;
    return;
L_0898CC68:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0898CC54;
    }
    goto L_0898CC70;
L_0898CC70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0898CC54;
    }
    goto L_0898CC7C;
L_0898CC7C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12948)));
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_0898CCA0;
      }
      goto L_0898CC94;
    }
L_0898CC94:
    aot_gpr[31] = (0x0898CC9Cu);
    // nop
    goto L_0898C928;
L_0898CC9C:
    aot_gpr[21] = (aot_gpr[2] + 0u);
    goto L_0898CCA0;
L_0898CCA0:
    aot_gpr[31] = (0x0898CCA8u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898CCA8u) goto L_0898CCA8;
    return;
L_0898CCA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898CC54;
      }
      goto L_0898CCB0;
    }
L_0898CCB0:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_0898CB68;
L_0898CCB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] >> 5u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898CB64;
      }
      goto L_0898CCD8;
    }
L_0898CCD8:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[21] = (aot_gpr[2] + static_cast<std::uint32_t>(12956));
    aot_gpr[30] = (0u + 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(32));
    goto L_0898CCEC;
L_0898CCEC:
    aot_gpr[20] = (aot_gpr[30] << 5u);
    aot_gpr[16] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_0898CCF8;
L_0898CCF8:
    aot_gpr[2] = (aot_gpr[22] << (aot_gpr[16] & 31u));
    aot_gpr[6] = (aot_gpr[20] + aot_gpr[16]);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898CD3C;
      }
      goto L_0898CD0C;
    }
L_0898CD0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12948)));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(12948));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(1028)));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[7];
    aot_gpr[6] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_0898CD3C;
      }
      goto L_0898CD34;
    }
L_0898CD34:
    aot_gpr[31] = (0x0898CD3Cu);
    // nop
    goto L_0898C928;
L_0898CD3C:
    if (aot_gpr[16] != aot_gpr[23]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_0898CCF8;
    }
    goto L_0898CD44;
L_0898CD44:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[30];
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898CCEC;
      }
      goto L_0898CD54;
    }
L_0898CD54:
    aot_gpr[3] = (0u + 0u);
    goto L_0898CB68;
L_0898CD5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(12948));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0898CDA4;
      }
      goto L_0898CD88;
    }
L_0898CD88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0898CD8C;
L_0898CD8C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CDA4:
    aot_gpr[31] = (0x0898CDACu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 162u, 0x08992A80u>(ctx, &aot_mem) && ctx.pc == 0x0898CDACu) goto L_0898CDAC;
    return;
L_0898CDAC:
    aot_gpr[31] = (0x0898CDB4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898CDB4u) goto L_0898CDB4;
    return;
L_0898CDB4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898CD88;
      }
      goto L_0898CDBC;
    }
L_0898CDBC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12948)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(1092)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[3];
    aot_gpr[18] = (aot_gpr[2] - aot_gpr[4]);
      if (branch_taken) {
          goto L_0898CEF0;
      }
      goto L_0898CDD8;
    }
L_0898CDD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(12948));
        goto L_0898CE48;
    }
    goto L_0898CDE4;
L_0898CDE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
      if (branch_taken) {
          goto L_0898CF94;
      }
      goto L_0898CDF0;
    }
L_0898CDF0:
    aot_fpr[3] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    goto L_0898CDF4;
L_0898CDF4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[18]);
      if (branch_taken) {
          goto L_0898CF78;
      }
      goto L_0898CDFC;
    }
L_0898CDFC:
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    goto L_0898CE00;
L_0898CE00:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(12948));
    aot_fpr[1] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(76)));
    aot_gpr[3] = (2215u << 16u);
    aot_fpr[4] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12468)));
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[1])));
    { const float fs = aot_fpr[2]; const float ft = aot_fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    aot_fpr[0] = aot_fpr[3] + aot_fpr[0];
    ctx.set_fpu_condition((aot_fpr[4] <= aot_fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[0] = aot_fpr[0] - aot_fpr[4];
        goto L_0898CF28;
    }
    goto L_0898CE2C;
L_0898CE2C:
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_0898CE34;
L_0898CE34:
    aot_gpr[3] = (aot_gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(12948));
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(104), aot_gpr[4]);
      if (branch_taken) {
          goto L_0898CF5C;
      }
      goto L_0898CE44;
    }
L_0898CE44:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(12948));
    goto L_0898CE48;
L_0898CE48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[18] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_0898CD88;
    }
    goto L_0898CE58;
L_0898CE58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_0898CE78;
      }
      goto L_0898CE64;
    }
L_0898CE64:
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14788));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_0898CE78;
L_0898CE78:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12948));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898CEA0;
      }
      goto L_0898CE88;
    }
L_0898CE88:
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14324));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    goto L_0898CEA0;
L_0898CEA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898CECC;
      }
      goto L_0898CEAC;
    }
L_0898CEAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12948)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898CF3C;
      }
      goto L_0898CEC0;
    }
L_0898CEC0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12952));
    aot_gpr[31] = (0x0898CECCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    goto L_0898C9C0;
L_0898CECC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x0898CED8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_0898CB10;
L_0898CED8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898CD88;
      }
      goto L_0898CEE0;
    }
L_0898CEE0:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(12948));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(88), 0u);
    goto L_0898CD88;
L_0898CEF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_0898CE44;
      }
      goto L_0898CEFC;
    }
L_0898CEFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2796)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[31] = (0x0898CF18u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0898CB10;
L_0898CF18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0898CE44;
      }
      goto L_0898CF20;
    }
L_0898CF20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0898CD8C;
L_0898CF28:
    aot_gpr[2] = (32768u << 16u);
    aot_fpr[0] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[0]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    goto L_0898CE34;
L_0898CF3C:
    aot_gpr[3] = (aot_gpr[16] << 3u);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-14184));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    goto L_0898CECC;
L_0898CF5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12948)));
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(12952));
    aot_gpr[31] = (0x0898CF70u);
    aot_gpr[5] = (0u + 0u);
    goto L_0898C9C0;
L_0898CF70:
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(12948));
    goto L_0898CE48;
L_0898CF78:
    aot_gpr[2] = (aot_gpr[18] & 1u);
    aot_gpr[3] = (aot_gpr[18] >> 1u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[2] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[2] = aot_fpr[2] + aot_fpr[2];
    goto L_0898CE00;
L_0898CF94:
    aot_gpr[3] = (aot_gpr[2] >> 1u);
    aot_gpr[2] = (aot_gpr[2] & 1u);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    aot_fpr[0] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_fpr[3] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[0])));
    aot_fpr[3] = aot_fpr[3] + aot_fpr[3];
    goto L_0898CDF4;
L_0898CFB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[8] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
      if (branch_taken) {
          goto L_0898CFD8;
      }
      goto L_0898CFC8;
    }
L_0898CFC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CFD8:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    aot_gpr[9] = (aot_gpr[3] + static_cast<std::uint32_t>(12948));
      if (branch_taken) {
          goto L_0898CFC8;
      }
      goto L_0898CFE8;
    }
L_0898CFE8:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[5]));
    ctx.pc = 0x0898D000u; return;
}

void recomp_unit_0392(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0392_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_392(Runtime &runtime) {
    runtime.register_generated_unit(392u, 0x0898C000u, 4096u, &recomp_unit_0392, &recomp_unit_0392_entry);
    runtime.register_function(0x0898C000u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C024u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C02Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C04Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C088u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C0A8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C0D4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C0E0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C0E4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C0E8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C108u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C110u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C11Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C128u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C134u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C154u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C164u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C168u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C174u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C178u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C180u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C18Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C194u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C19Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C1A4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C1B0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C1BCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C1C8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C1E4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C1ECu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C204u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C20Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C224u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C22Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C23Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C27Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C290u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C29Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C2B4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C2D8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C318u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C320u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C32Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C334u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C364u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C378u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C384u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C390u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C39Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C3B8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C3CCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C3F0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C408u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C420u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C438u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C450u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C468u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C47Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C490u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C4A4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C4BCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C4C8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C4D8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C4F0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C504u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C518u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C530u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C548u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C560u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C578u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C590u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C5A8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C5C0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C5D8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C5F0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C600u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C60Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C610u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C62Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C63Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C670u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C678u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C680u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C69Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C6B4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C6BCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C6C4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C6E8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C6F4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C700u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C704u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C710u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C714u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C728u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C72Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C770u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C780u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C798u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C7A4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C7A8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C7ACu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C7BCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C7DCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C7E8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C7F0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C80Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C834u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C83Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C850u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C880u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C884u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C898u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C8C0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C8C8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C8DCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C910u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C914u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C928u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C94Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C954u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C970u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C984u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C99Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C9A8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C9B0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C9B8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C9C0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C9F0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898C9FCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA04u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA28u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA40u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA44u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA4Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA54u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA78u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA8Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CA98u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CAA4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CAACu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CAB8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CAC8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CAD0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CAF8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CB04u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CB10u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CB4Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CB64u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CB68u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CB9Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBA4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBACu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBB4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBC8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBD0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBD8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBE4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBF0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBF4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CBFCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC04u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC0Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC44u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC54u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC5Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC68u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC70u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC7Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC94u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CC9Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CCA0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CCA8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CCB0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CCB8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CCD8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CCECu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CCF8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CD0Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CD34u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CD3Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CD44u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CD54u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CD5Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CD88u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CD8Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDA4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDACu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDB4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDBCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDD8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDE4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDF0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDF4u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CDFCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE00u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE2Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE34u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE44u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE48u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE58u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE64u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE78u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CE88u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CEA0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CEACu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CEC0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CECCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CED8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CEE0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CEF0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CEFCu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CF18u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CF20u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CF28u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CF3Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CF5Cu, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CF70u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CF78u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CF94u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CFB0u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CFC8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CFD8u, &recomp_unit_0392, "recomp_unit_0392");
    runtime.register_function(0x0898CFE8u, &recomp_unit_0392, "recomp_unit_0392");
}
} // namespace psprecomp
