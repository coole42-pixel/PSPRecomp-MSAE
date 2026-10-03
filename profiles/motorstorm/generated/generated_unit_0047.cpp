#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0047[1020] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0,
    46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0,
    0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63,
    0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0,
    0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 90,
    0, 91, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0,
    0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 143, 0, 144, 0,
    145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188,
};
void recomp_unit_0047_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08833000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0047[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08833000;
    case 2u: goto L_08833010;
    case 3u: goto L_0883302C;
    case 4u: goto L_08833038;
    case 5u: goto L_08833064;
    case 6u: goto L_08833084;
    case 7u: goto L_08833094;
    case 8u: goto L_088330E4;
    case 9u: goto L_08833108;
    case 10u: goto L_0883311C;
    case 11u: goto L_08833128;
    case 12u: goto L_08833138;
    case 13u: goto L_08833144;
    case 14u: goto L_08833154;
    case 15u: goto L_08833178;
    case 16u: goto L_088331B0;
    case 17u: goto L_088331CC;
    case 18u: goto L_088331F4;
    case 19u: goto L_08833200;
    case 20u: goto L_0883321C;
    case 21u: goto L_08833224;
    case 22u: goto L_0883323C;
    case 23u: goto L_0883326C;
    case 24u: goto L_08833278;
    case 25u: goto L_08833290;
    case 26u: goto L_088332A0;
    case 27u: goto L_088332A8;
    case 28u: goto L_088332B0;
    case 29u: goto L_088332B4;
    case 30u: goto L_088332BC;
    case 31u: goto L_08833310;
    case 32u: goto L_08833328;
    case 33u: goto L_0883333C;
    case 34u: goto L_08833348;
    case 35u: goto L_08833354;
    case 36u: goto L_08833368;
    case 37u: goto L_08833388;
    case 38u: goto L_08833390;
    case 39u: goto L_0883339C;
    case 40u: goto L_088333A4;
    case 41u: goto L_088333B0;
    case 42u: goto L_088333B8;
    case 43u: goto L_088333DC;
    case 44u: goto L_088333E4;
    case 45u: goto L_088333F0;
    case 46u: goto L_08833400;
    case 47u: goto L_08833408;
    case 48u: goto L_08833410;
    case 49u: goto L_0883341C;
    case 50u: goto L_0883342C;
    case 51u: goto L_08833434;
    case 52u: goto L_08833440;
    case 53u: goto L_08833448;
    case 54u: goto L_08833454;
    case 55u: goto L_08833468;
    case 56u: goto L_08833474;
    case 57u: goto L_08833488;
    case 58u: goto L_08833494;
    case 59u: goto L_0883349C;
    case 60u: goto L_088334BC;
    case 61u: goto L_088334C8;
    case 62u: goto L_088334F4;
    case 63u: goto L_088334FC;
    case 64u: goto L_08833508;
    case 65u: goto L_08833514;
    case 66u: goto L_08833528;
    case 67u: goto L_08833538;
    case 68u: goto L_08833540;
    case 69u: goto L_0883354C;
    case 70u: goto L_0883356C;
    case 71u: goto L_08833590;
    case 72u: goto L_088335B0;
    case 73u: goto L_088335C0;
    case 74u: goto L_088335D4;
    case 75u: goto L_088335E8;
    case 76u: goto L_08833604;
    case 77u: goto L_08833610;
    case 78u: goto L_0883362C;
    case 79u: goto L_08833638;
    case 80u: goto L_08833644;
    case 81u: goto L_0883365C;
    case 82u: goto L_08833664;
    case 83u: goto L_08833670;
    case 84u: goto L_08833688;
    case 85u: goto L_08833694;
    case 86u: goto L_088336AC;
    case 87u: goto L_088336E0;
    case 88u: goto L_088336E8;
    case 89u: goto L_088336F0;
    case 90u: goto L_088336FC;
    case 91u: goto L_08833704;
    case 92u: goto L_08833708;
    case 93u: goto L_08833710;
    case 94u: goto L_08833730;
    case 95u: goto L_0883374C;
    case 96u: goto L_08833758;
    case 97u: goto L_08833788;
    case 98u: goto L_08833794;
    case 99u: goto L_088337B0;
    case 100u: goto L_088337C0;
    case 101u: goto L_088337D4;
    case 102u: goto L_088337F4;
    case 103u: goto L_0883382C;
    case 104u: goto L_08833844;
    case 105u: goto L_0883385C;
    case 106u: goto L_08833874;
    case 107u: goto L_08833880;
    case 108u: goto L_088338B4;
    case 109u: goto L_088338E8;
    case 110u: goto L_08833908;
    case 111u: goto L_08833954;
    case 112u: goto L_0883396C;
    case 113u: goto L_08833984;
    case 114u: goto L_0883399C;
    case 115u: goto L_088339A8;
    case 116u: goto L_088339B8;
    case 117u: goto L_088339F4;
    case 118u: goto L_08833A04;
    case 119u: goto L_08833A38;
    case 120u: goto L_08833A5C;
    case 121u: goto L_08833AA0;
    case 122u: goto L_08833AB4;
    case 123u: goto L_08833ABC;
    case 124u: goto L_08833ADC;
    case 125u: goto L_08833B00;
    case 126u: goto L_08833B24;
    case 127u: goto L_08833B40;
    case 128u: goto L_08833B54;
    case 129u: goto L_08833B60;
    case 130u: goto L_08833B74;
    case 131u: goto L_08833B84;
    case 132u: goto L_08833B8C;
    case 133u: goto L_08833BAC;
    case 134u: goto L_08833BD0;
    case 135u: goto L_08833BF0;
    case 136u: goto L_08833C14;
    case 137u: goto L_08833C30;
    case 138u: goto L_08833C44;
    case 139u: goto L_08833C50;
    case 140u: goto L_08833C58;
    case 141u: goto L_08833C64;
    case 142u: goto L_08833C6C;
    case 143u: goto L_08833C70;
    case 144u: goto L_08833C78;
    case 145u: goto L_08833C80;
    case 146u: goto L_08833C88;
    case 147u: goto L_08833CA8;
    case 148u: goto L_08833CCC;
    case 149u: goto L_08833CF0;
    case 150u: goto L_08833D0C;
    case 151u: goto L_08833D20;
    case 152u: goto L_08833D2C;
    case 153u: goto L_08833D40;
    case 154u: goto L_08833D50;
    case 155u: goto L_08833D58;
    case 156u: goto L_08833D64;
    case 157u: goto L_08833D84;
    case 158u: goto L_08833DA8;
    case 159u: goto L_08833DC8;
    case 160u: goto L_08833DEC;
    case 161u: goto L_08833E08;
    case 162u: goto L_08833E1C;
    case 163u: goto L_08833E28;
    case 164u: goto L_08833E30;
    case 165u: goto L_08833E34;
    case 166u: goto L_08833E3C;
    case 167u: goto L_08833E7C;
    case 168u: goto L_08833E90;
    case 169u: goto L_08833EA0;
    case 170u: goto L_08833EB4;
    case 171u: goto L_08833EBC;
    case 172u: goto L_08833ECC;
    case 173u: goto L_08833EE8;
    case 174u: goto L_08833F04;
    case 175u: goto L_08833F20;
    case 176u: goto L_08833F30;
    case 177u: goto L_08833F38;
    case 178u: goto L_08833F40;
    case 179u: goto L_08833F48;
    case 180u: goto L_08833F54;
    case 181u: goto L_08833F70;
    case 182u: goto L_08833F84;
    case 183u: goto L_08833F98;
    case 184u: goto L_08833FA4;
    case 185u: goto L_08833FB4;
    case 186u: goto L_08833FD0;
    case 187u: goto L_08833FE0;
    case 188u: goto L_08833FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08833000:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(29))))));
    aot_gpr[31] = (0x08833010u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08833010u) goto L_08833010;
    return;
L_08833010:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2208)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883302Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10552));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883302Cu) goto L_0883302C;
    return;
L_0883302C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08833038u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08833038u) goto L_08833038;
    return;
L_08833038:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833064u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 36u, 0x0883B2BCu>(ctx, &aot_mem) && ctx.pc == 0x08833064u) goto L_08833064;
    return;
L_08833064:
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
L_08833084:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(1454), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833094:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10540));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x088330E4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10508));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088330E4u) goto L_088330E4;
    return;
L_088330E4:
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-10624));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-10604));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08833108u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833108u) goto L_08833108;
    return;
L_08833108:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0883311Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10492));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883311Cu) goto L_0883311C;
    return;
L_0883311C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08833128u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08833128u) goto L_08833128;
    return;
L_08833128:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-10480));
      if (branch_taken) {
          goto L_08833144;
      }
      goto L_08833138;
    }
L_08833138:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08833154;
      }
      goto L_08833144;
    }
L_08833144:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2216)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2216));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08833154;
L_08833154:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2224), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2172)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1))))));
    aot_gpr[31] = (0x08833178u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 136u, 0x0885B988u>(ctx, &aot_mem) && ctx.pc == 0x08833178u) goto L_08833178;
    return;
L_08833178:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_fpr[12] = aot_fpr[22] + aot_fpr[12];
    aot_fpr[13] = aot_fpr[20] + aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[13]));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088331B0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 61u, 0x0888C31Cu>(ctx, &aot_mem) && ctx.pc == 0x088331B0u) goto L_088331B0;
    return;
L_088331B0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x088331CCu);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 76u, 0x08834694u>(ctx, &aot_mem) && ctx.pc == 0x088331CCu) goto L_088331CC;
    return;
L_088331CC:
    aot_gpr[4] = (16784u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x088331F4u);
    aot_gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 85u, 0x088347A4u>(ctx, &aot_mem) && ctx.pc == 0x088331F4u) goto L_088331F4;
    return;
L_088331F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833224;
      }
      goto L_08833200;
    }
L_08833200:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(29))))));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0883321Cu);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 96u, 0x08835650u>(ctx, &aot_mem) && ctx.pc == 0x0883321Cu) goto L_0883321C;
    return;
L_0883321C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883323C;
      }
      goto L_08833224;
    }
L_08833224:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0883323Cu);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 96u, 0x08835650u>(ctx, &aot_mem) && ctx.pc == 0x0883323Cu) goto L_0883323C;
    return;
L_0883323C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883326C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    goto L_08833278;
L_08833278:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(32))))));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(1460))))));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088332A8;
      }
      goto L_08833290;
    }
L_08833290:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833278;
      }
      goto L_088332A0;
    }
L_088332A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088332B0;
      }
      goto L_088332A8;
    }
L_088332A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088332B4;
      }
      goto L_088332B0;
    }
L_088332B0:
    aot_gpr[2] = (0u | 0u);
    goto L_088332B4;
L_088332B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088332BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    aot_gpr[30] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-10624));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[30] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08833310u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10604));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833310u) goto L_08833310;
    return;
L_08833310:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08833328u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10580));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833328u) goto L_08833328;
    return;
L_08833328:
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2228)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088333A4;
      }
      goto L_0883333C;
    }
L_0883333C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(158)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088333A4;
      }
      goto L_08833348;
    }
L_08833348:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08833354u);
    aot_gpr[5] = (0u | 0u);
    goto L_08833094;
L_08833354:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08833368u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 25u, 0x088DA1D8u>(ctx, &aot_mem) && ctx.pc == 0x08833368u) goto L_08833368;
    return;
L_08833368:
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08833388u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x08833388u) goto L_08833388;
    return;
L_08833388:
    aot_gpr[31] = (0x08833390u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08833390u) goto L_08833390;
    return;
L_08833390:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(28))))));
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
        goto L_088333B8;
    }
    goto L_0883339C;
L_0883339C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088334F4;
      }
      goto L_088333A4;
    }
L_088333A4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088333B0u);
    aot_gpr[5] = (0u | 0u);
    goto L_08833094;
L_088333B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088336AC;
      }
      goto L_088333B8;
    }
L_088333B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(240))))));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(242))))));
    aot_gpr[21] = (aot_gpr[5] << 24u);
    aot_gpr[17] = (aot_gpr[4] << 24u);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[21]) >> 24u));
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 24u));
    aot_gpr[31] = (0x088333DCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088333DCu) goto L_088333DC;
    return;
L_088333DC:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08833400;
      }
      goto L_088333E4;
    }
L_088333E4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08833400;
      }
      goto L_088333F0;
    }
L_088333F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2228)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x08833400u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 57u, 0x08816878u>(ctx, &aot_mem) && ctx.pc == 0x08833400u) goto L_08833400;
    return;
L_08833400:
    aot_gpr[31] = (0x08833408u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08833408u) goto L_08833408;
    return;
L_08833408:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0883342C;
      }
      goto L_08833410;
    }
L_08833410:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_0883342C;
      }
      goto L_0883341C;
    }
L_0883341C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(2228)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[31] = (0x0883342Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 57u, 0x08816878u>(ctx, &aot_mem) && ctx.pc == 0x0883342Cu) goto L_0883342C;
    return;
L_0883342C:
    aot_gpr[31] = (0x08833434u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08833434u) goto L_08833434;
    return;
L_08833434:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08833440u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 157u, 0x08832DCCu>(ctx, &aot_mem) && ctx.pc == 0x08833440u) goto L_08833440;
    return;
L_08833440:
    aot_gpr[31] = (0x08833448u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08833448u) goto L_08833448;
    return;
L_08833448:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08833454u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 160u, 0x08832E40u>(ctx, &aot_mem) && ctx.pc == 0x08833454u) goto L_08833454;
    return;
L_08833454:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08833468u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x088D9290u>(ctx, &aot_mem) && ctx.pc == 0x08833468u) goto L_08833468;
    return;
L_08833468:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08833474u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08833474u) goto L_08833474;
    return;
L_08833474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(31));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08833488u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 174u, 0x088D7EC0u>(ctx, &aot_mem) && ctx.pc == 0x08833488u) goto L_08833488;
    return;
L_08833488:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08833494u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08833494u) goto L_08833494;
    return;
L_08833494:
    aot_gpr[31] = (0x0883349Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0883349Cu) goto L_0883349C;
    return;
L_0883349C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(2208)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088334BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10552));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088334BCu) goto L_088334BC;
    return;
L_088334BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088334C8u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088334C8u) goto L_088334C8;
    return;
L_088334C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088334F4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 36u, 0x0883B2BCu>(ctx, &aot_mem) && ctx.pc == 0x088334F4u) goto L_088334F4;
    return;
L_088334F4:
    aot_gpr[31] = (0x088334FCu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088334FCu) goto L_088334FC;
    return;
L_088334FC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x08833508u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08833508u) goto L_08833508;
    return;
L_08833508:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(29))))));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883356C;
      }
      goto L_08833514;
    }
L_08833514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08833528u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08833528u) goto L_08833528;
    return;
L_08833528:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833538u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 183u, 0x088D7FA0u>(ctx, &aot_mem) && ctx.pc == 0x08833538u) goto L_08833538;
    return;
L_08833538:
    aot_gpr[31] = (0x08833540u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08833540u) goto L_08833540;
    return;
L_08833540:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x0883354Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x0883354Cu) goto L_0883354C;
    return;
L_0883354C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(29))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[4] ^ aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0883356C;
L_0883356C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[18] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_088335B0;
      }
      goto L_08833590;
    }
L_08833590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088335D4;
      }
      goto L_088335B0;
    }
L_088335B0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088335C0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10540));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088335C0u) goto L_088335C0;
    return;
L_088335C0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7028)));
    goto L_088335D4;
L_088335D4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x088335E8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10524));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088335E8u) goto L_088335E8;
    return;
L_088335E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088336AC;
      }
      goto L_08833604;
    }
L_08833604:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08833610u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08833610u) goto L_08833610;
    return;
L_08833610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0883362Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0883326C;
L_0883362C:
    aot_gpr[4] = (16256u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08833664;
      }
      goto L_08833638;
    }
L_08833638:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08833644u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08833644u) goto L_08833644;
    return;
L_08833644:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x0883365Cu);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x0883365Cu) goto L_0883365C;
    return;
L_0883365C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088336AC;
      }
      goto L_08833664;
    }
L_08833664:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08833670u);
    aot_gpr[5] = (0u | 58u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08833670u) goto L_08833670;
    return;
L_08833670:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[31] = (0x08833688u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x08833688u) goto L_08833688;
    return;
L_08833688:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x08833694u);
    aot_gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 98u, 0x08863678u>(ctx, &aot_mem) && ctx.pc == 0x08833694u) goto L_08833694;
    return;
L_08833694:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x088336ACu);
    aot_gpr[7] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x088637DCu>(ctx, &aot_mem) && ctx.pc == 0x088336ACu) goto L_088336AC;
    return;
L_088336AC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088336E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088336E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088336F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833704;
      }
      goto L_088336FC;
    }
L_088336FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08833708;
      }
      goto L_08833704;
    }
L_08833704:
    aot_gpr[2] = (0u | 0u);
    goto L_08833708;
L_08833708:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833710:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23640), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833730:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0883374Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10456));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x0883374Cu) goto L_0883374C;
    return;
L_0883374C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08833758:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-10456));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08833788u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10440));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833788u) goto L_08833788;
    return;
L_08833788:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08833794u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08833794u) goto L_08833794;
    return;
L_08833794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088337C0;
      }
      goto L_088337B0;
    }
L_088337B0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088337C0;
L_088337C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088337D4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23648), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088337F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] & 255u);
    aot_gpr[16] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0883382Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883382Cu) goto L_0883382C;
    return;
L_0883382C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08833844u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9872));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833844u) goto L_08833844;
    return;
L_08833844:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0883385Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883385Cu) goto L_0883385C;
    return;
L_0883385C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08833874u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9816));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833874u) goto L_08833874;
    return;
L_08833874:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088338B4;
      }
      goto L_08833880;
    }
L_08833880:
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088338E8;
      }
      goto L_088338B4;
    }
L_088338B4:
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088338E8;
L_088338E8:
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
L_08833908:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[21] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08833954u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9968));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833954u) goto L_08833954;
    return;
L_08833954:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0883396Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9944));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883396Cu) goto L_0883396C;
    return;
L_0883396C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08833984u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9920));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833984u) goto L_08833984;
    return;
L_08833984:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0883399Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9896));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883399Cu) goto L_0883399C;
    return;
L_0883399C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088339F4;
      }
      goto L_088339A8;
    }
L_088339A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088339B8u);
    aot_gpr[6] = (0u | 0u);
    goto L_088337F4;
L_088339B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08833A38;
      }
      goto L_088339F4;
    }
L_088339F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08833A04u);
    aot_gpr[6] = (0u | 1u);
    goto L_088337F4;
L_08833A04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08833A38;
L_08833A38:
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
L_08833A5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08833AA0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 54u, 0x088DA348u>(ctx, &aot_mem) && ctx.pc == 0x08833AA0u) goto L_08833AA0;
    return;
L_08833AA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08833C78;
      }
      goto L_08833AB4;
    }
L_08833AB4:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08833B84;
      }
      goto L_08833ABC;
    }
L_08833ABC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833ADCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10016));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833ADCu) goto L_08833ADC;
    return;
L_08833ADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833B00u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10008));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833B00u) goto L_08833B00;
    return;
L_08833B00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(-9992));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833B24u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833B24u) goto L_08833B24;
    return;
L_08833B24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08833B40u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08833B40u) goto L_08833B40;
    return;
L_08833B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833B54u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08833B54u) goto L_08833B54;
    return;
L_08833B54:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08833B60u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08833B60u) goto L_08833B60;
    return;
L_08833B60:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833B74u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9980));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833B74u) goto L_08833B74;
    return;
L_08833B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08833E34;
      }
      goto L_08833B84;
    }
L_08833B84:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08833C58;
      }
      goto L_08833B8C;
    }
L_08833B8C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833BACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10016));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833BACu) goto L_08833BAC;
    return;
L_08833BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833BD0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10008));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833BD0u) goto L_08833BD0;
    return;
L_08833BD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833BF0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9992));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833BF0u) goto L_08833BF0;
    return;
L_08833BF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-9980));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833C14u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833C14u) goto L_08833C14;
    return;
L_08833C14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08833C30u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08833C30u) goto L_08833C30;
    return;
L_08833C30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833C44u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08833C44u) goto L_08833C44;
    return;
L_08833C44:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08833C50u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08833C50u) goto L_08833C50;
    return;
L_08833C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833E34;
      }
      goto L_08833C58;
    }
L_08833C58:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08833C6C;
      }
      goto L_08833C64;
    }
L_08833C64:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08833C70;
      }
      goto L_08833C6C;
    }
L_08833C6C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-2));
    goto L_08833C70;
L_08833C70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08833E34;
      }
      goto L_08833C78;
    }
L_08833C78:
    aot_gpr[31] = (0x08833C80u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 180u, 0x088D8C24u>(ctx, &aot_mem) && ctx.pc == 0x08833C80u) goto L_08833C80;
    return;
L_08833C80:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08833D50;
      }
      goto L_08833C88;
    }
L_08833C88:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833CA8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10016));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833CA8u) goto L_08833CA8;
    return;
L_08833CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833CCCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10008));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833CCCu) goto L_08833CCC;
    return;
L_08833CCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(-9992));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833CF0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833CF0u) goto L_08833CF0;
    return;
L_08833CF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08833D0Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08833D0Cu) goto L_08833D0C;
    return;
L_08833D0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833D20u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08833D20u) goto L_08833D20;
    return;
L_08833D20:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08833D2Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08833D2Cu) goto L_08833D2C;
    return;
L_08833D2C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833D40u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9980));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833D40u) goto L_08833D40;
    return;
L_08833D40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08833E34;
      }
      goto L_08833D50;
    }
L_08833D50:
    aot_gpr[31] = (0x08833D58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 180u, 0x088D8C24u>(ctx, &aot_mem) && ctx.pc == 0x08833D58u) goto L_08833D58;
    return;
L_08833D58:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08833E30;
      }
      goto L_08833D64;
    }
L_08833D64:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-10424));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833D84u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10016));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833D84u) goto L_08833D84;
    return;
L_08833D84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833DA8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10008));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833DA8u) goto L_08833DA8;
    return;
L_08833DA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833DC8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-9992));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833DC8u) goto L_08833DC8;
    return;
L_08833DC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-9980));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833DECu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833DECu) goto L_08833DEC;
    return;
L_08833DEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08833E08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08833E08u) goto L_08833E08;
    return;
L_08833E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08833E1Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08833E1Cu) goto L_08833E1C;
    return;
L_08833E1C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08833E28u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08833E28u) goto L_08833E28;
    return;
L_08833E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08833E34;
      }
      goto L_08833E30;
    }
L_08833E30:
    aot_gpr[16] = (0u | 1u);
    goto L_08833E34;
L_08833E34:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 7u, 0x08834074u>(ctx, &aot_mem); return;
      }
      goto L_08833E3C;
    }
L_08833E3C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(156)));
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[22] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-10424));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-10016));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10008));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-9992));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-9980));
    aot_gpr[16] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (4096u << 16u);
      if (branch_taken) {
          goto L_08833EBC;
      }
      goto L_08833E7C;
    }
L_08833E7C:
    aot_gpr[23] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x08833E90u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 57u, 0x088DA390u>(ctx, &aot_mem) && ctx.pc == 0x08833E90u) goto L_08833E90;
    return;
L_08833E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08833EA0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 61u, 0x088DA3C4u>(ctx, &aot_mem) && ctx.pc == 0x08833EA0u) goto L_08833EA0;
    return;
L_08833EA0:
    aot_gpr[23] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08833F48;
      }
      goto L_08833EB4;
    }
L_08833EB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_08833F30;
      }
      goto L_08833EBC;
    }
L_08833EBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08833ECCu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833ECCu) goto L_08833ECC;
    return;
L_08833ECC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08833EE8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833EE8u) goto L_08833EE8;
    return;
L_08833EE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08833F04u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833F04u) goto L_08833F04;
    return;
L_08833F04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08833F20u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833F20u) goto L_08833F20;
    return;
L_08833F20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 7u, 0x08834074u>(ctx, &aot_mem); return;
      }
      goto L_08833F30;
    }
L_08833F30:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[6];
    aot_gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_08833F48;
      }
      goto L_08833F38;
    }
L_08833F38:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08833F48;
      }
      goto L_08833F40;
    }
L_08833F40:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08833FE0;
      }
      goto L_08833F48;
    }
L_08833F48:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08833F54u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833F54u) goto L_08833F54;
    return;
L_08833F54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08833F70u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833F70u) goto L_08833F70;
    return;
L_08833F70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08833F84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08833F84u) goto L_08833F84;
    return;
L_08833F84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08833F98u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08833F98u) goto L_08833F98;
    return;
L_08833F98:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08833FA4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08833FA4u) goto L_08833FA4;
    return;
L_08833FA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08833FB4u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833FB4u) goto L_08833FB4;
    return;
L_08833FB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08833FD0u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833FD0u) goto L_08833FD0;
    return;
L_08833FD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 7u, 0x08834074u>(ctx, &aot_mem); return;
      }
      goto L_08833FE0;
    }
L_08833FE0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08833FECu);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08833FECu) goto L_08833FEC;
    return;
L_08833FEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08834000u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    (void)rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0047(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0047_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_47(Runtime &runtime) {
    runtime.register_generated_unit(47u, 0x08833000u, 4096u, &recomp_unit_0047, &recomp_unit_0047_entry);
    runtime.register_function(0x08833000u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833010u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883302Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833038u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833064u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833084u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833094u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088330E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833108u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883311Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833128u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833138u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833144u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833154u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833178u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088331B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088331CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088331F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833200u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883321Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833224u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883323Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883326Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833278u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833290u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088332A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088332A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088332B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088332B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088332BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833310u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833328u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883333Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833348u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833354u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833368u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833388u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833390u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883339Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088333A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088333B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088333B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088333DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088333E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088333F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833400u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833408u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833410u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883341Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883342Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833434u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833440u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833448u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833454u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833468u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833474u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833488u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833494u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883349Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088334BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088334C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088334F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088334FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833508u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833514u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833528u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833538u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833540u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883354Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883356Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833590u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088335B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088335C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088335D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088335E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833604u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833610u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883362Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833638u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833644u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883365Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833664u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833670u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833688u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833694u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088336ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088336E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088336E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088336F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088336FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833704u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833708u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833710u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833730u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883374Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833758u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833788u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833794u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088337B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088337C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088337D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088337F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883382Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833844u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883385Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833874u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833880u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088338B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088338E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833908u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833954u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883396Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833984u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x0883399Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088339A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088339B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088339F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833A04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833A38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833A5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833AA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833AB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833ABCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833ADCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833B00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833B24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833B40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833B54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833B60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833B74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833B84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833B8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833BACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833BD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833BF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833C88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833CA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833CCCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833CF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833D0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833D20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833D2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833D40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833D50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833D58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833D64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833D84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833DA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833DC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833DECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833E08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833E1Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833E28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833E30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833E34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833E3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833E7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833E90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833EA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833EB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833EBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833ECCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833EE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833F98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833FA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833FB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833FD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833FE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x08833FECu, &recomp_unit_0047, "recomp_unit_0047");
}
} // namespace psprecomp
