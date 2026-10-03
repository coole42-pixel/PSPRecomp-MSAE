#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0530[1018] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0,
    7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34,
    35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 53,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 56, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0,
    68, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0,
    79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87,
    0, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 101, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 116,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 0, 130, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0,
    0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152,
    0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0,
    158, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0,
    0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0,
    188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0,
    195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0,
    207, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 215,
};
void recomp_unit_0530_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A16000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0530[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A16000;
    case 2u: goto L_08A16030;
    case 3u: goto L_08A1605C;
    case 4u: goto L_08A16068;
    case 5u: goto L_08A16070;
    case 6u: goto L_08A16078;
    case 7u: goto L_08A16080;
    case 8u: goto L_08A16090;
    case 9u: goto L_08A16098;
    case 10u: goto L_08A160B0;
    case 11u: goto L_08A160B8;
    case 12u: goto L_08A160BC;
    case 13u: goto L_08A160C4;
    case 14u: goto L_08A160DC;
    case 15u: goto L_08A160F0;
    case 16u: goto L_08A16100;
    case 17u: goto L_08A1610C;
    case 18u: goto L_08A1612C;
    case 19u: goto L_08A16134;
    case 20u: goto L_08A1614C;
    case 21u: goto L_08A16160;
    case 22u: goto L_08A16170;
    case 23u: goto L_08A16190;
    case 24u: goto L_08A16198;
    case 25u: goto L_08A161B0;
    case 26u: goto L_08A161BC;
    case 27u: goto L_08A161D8;
    case 28u: goto L_08A161F0;
    case 29u: goto L_08A1620C;
    case 30u: goto L_08A16220;
    case 31u: goto L_08A16238;
    case 32u: goto L_08A1624C;
    case 33u: goto L_08A16270;
    case 34u: goto L_08A1627C;
    case 35u: goto L_08A16280;
    case 36u: goto L_08A16288;
    case 37u: goto L_08A16294;
    case 38u: goto L_08A162AC;
    case 39u: goto L_08A162C0;
    case 40u: goto L_08A162D0;
    case 41u: goto L_08A162DC;
    case 42u: goto L_08A16300;
    case 43u: goto L_08A1630C;
    case 44u: goto L_08A16314;
    case 45u: goto L_08A16320;
    case 46u: goto L_08A16330;
    case 47u: goto L_08A16348;
    case 48u: goto L_08A16358;
    case 49u: goto L_08A16360;
    case 50u: goto L_08A16368;
    case 51u: goto L_08A16370;
    case 52u: goto L_08A16378;
    case 53u: goto L_08A1637C;
    case 54u: goto L_08A16384;
    case 55u: goto L_08A163B0;
    case 56u: goto L_08A163B4;
    case 57u: goto L_08A163C0;
    case 58u: goto L_08A163C8;
    case 59u: goto L_08A163D0;
    case 60u: goto L_08A163EC;
    case 61u: goto L_08A16400;
    case 62u: goto L_08A1640C;
    case 63u: goto L_08A16428;
    case 64u: goto L_08A16464;
    case 65u: goto L_08A16488;
    case 66u: goto L_08A164EC;
    case 67u: goto L_08A164F8;
    case 68u: goto L_08A16500;
    case 69u: goto L_08A16504;
    case 70u: goto L_08A16510;
    case 71u: goto L_08A165E4;
    case 72u: goto L_08A16600;
    case 73u: goto L_08A16620;
    case 74u: goto L_08A1662C;
    case 75u: goto L_08A16634;
    case 76u: goto L_08A16648;
    case 77u: goto L_08A1666C;
    case 78u: goto L_08A16674;
    case 79u: goto L_08A16680;
    case 80u: goto L_08A16688;
    case 81u: goto L_08A16690;
    case 82u: goto L_08A166AC;
    case 83u: goto L_08A166B4;
    case 84u: goto L_08A166C8;
    case 85u: goto L_08A166D0;
    case 86u: goto L_08A166EC;
    case 87u: goto L_08A166FC;
    case 88u: goto L_08A16710;
    case 89u: goto L_08A16718;
    case 90u: goto L_08A16724;
    case 91u: goto L_08A16734;
    case 92u: goto L_08A16748;
    case 93u: goto L_08A16768;
    case 94u: goto L_08A1677C;
    case 95u: goto L_08A16788;
    case 96u: goto L_08A16798;
    case 97u: goto L_08A167AC;
    case 98u: goto L_08A167D8;
    case 99u: goto L_08A167E4;
    case 100u: goto L_08A167EC;
    case 101u: goto L_08A167F0;
    case 102u: goto L_08A16810;
    case 103u: goto L_08A1682C;
    case 104u: goto L_08A1684C;
    case 105u: goto L_08A16858;
    case 106u: goto L_08A16860;
    case 107u: goto L_08A16874;
    case 108u: goto L_08A16898;
    case 109u: goto L_08A168A0;
    case 110u: goto L_08A168AC;
    case 111u: goto L_08A168B4;
    case 112u: goto L_08A168BC;
    case 113u: goto L_08A168D8;
    case 114u: goto L_08A168E0;
    case 115u: goto L_08A168F4;
    case 116u: goto L_08A168FC;
    case 117u: goto L_08A16918;
    case 118u: goto L_08A16928;
    case 119u: goto L_08A1693C;
    case 120u: goto L_08A16944;
    case 121u: goto L_08A16950;
    case 122u: goto L_08A16960;
    case 123u: goto L_08A16974;
    case 124u: goto L_08A16994;
    case 125u: goto L_08A169A8;
    case 126u: goto L_08A169B4;
    case 127u: goto L_08A169C4;
    case 128u: goto L_08A169D8;
    case 129u: goto L_08A16A04;
    case 130u: goto L_08A16A10;
    case 131u: goto L_08A16A18;
    case 132u: goto L_08A16A1C;
    case 133u: goto L_08A16A3C;
    case 134u: goto L_08A16A58;
    case 135u: goto L_08A16A78;
    case 136u: goto L_08A16A84;
    case 137u: goto L_08A16A8C;
    case 138u: goto L_08A16AA0;
    case 139u: goto L_08A16AC4;
    case 140u: goto L_08A16ACC;
    case 141u: goto L_08A16AD8;
    case 142u: goto L_08A16AE0;
    case 143u: goto L_08A16AE8;
    case 144u: goto L_08A16B04;
    case 145u: goto L_08A16B0C;
    case 146u: goto L_08A16B20;
    case 147u: goto L_08A16B28;
    case 148u: goto L_08A16B44;
    case 149u: goto L_08A16B54;
    case 150u: goto L_08A16B68;
    case 151u: goto L_08A16B70;
    case 152u: goto L_08A16B7C;
    case 153u: goto L_08A16B8C;
    case 154u: goto L_08A16BA0;
    case 155u: goto L_08A16BC0;
    case 156u: goto L_08A16BE4;
    case 157u: goto L_08A16BF4;
    case 158u: goto L_08A16C00;
    case 159u: goto L_08A16C0C;
    case 160u: goto L_08A16C1C;
    case 161u: goto L_08A16C24;
    case 162u: goto L_08A16C30;
    case 163u: goto L_08A16C38;
    case 164u: goto L_08A16C3C;
    case 165u: goto L_08A16C58;
    case 166u: goto L_08A16C8C;
    case 167u: goto L_08A16C98;
    case 168u: goto L_08A16CA4;
    case 169u: goto L_08A16CA8;
    case 170u: goto L_08A16CCC;
    case 171u: goto L_08A16CE8;
    case 172u: goto L_08A16D08;
    case 173u: goto L_08A16D14;
    case 174u: goto L_08A16D1C;
    case 175u: goto L_08A16D30;
    case 176u: goto L_08A16D54;
    case 177u: goto L_08A16D5C;
    case 178u: goto L_08A16D68;
    case 179u: goto L_08A16D70;
    case 180u: goto L_08A16D78;
    case 181u: goto L_08A16D94;
    case 182u: goto L_08A16D9C;
    case 183u: goto L_08A16DB0;
    case 184u: goto L_08A16DB8;
    case 185u: goto L_08A16DD4;
    case 186u: goto L_08A16DE4;
    case 187u: goto L_08A16DF8;
    case 188u: goto L_08A16E00;
    case 189u: goto L_08A16E0C;
    case 190u: goto L_08A16E1C;
    case 191u: goto L_08A16E30;
    case 192u: goto L_08A16E50;
    case 193u: goto L_08A16E64;
    case 194u: goto L_08A16E70;
    case 195u: goto L_08A16E80;
    case 196u: goto L_08A16E94;
    case 197u: goto L_08A16EC0;
    case 198u: goto L_08A16ECC;
    case 199u: goto L_08A16ED4;
    case 200u: goto L_08A16ED8;
    case 201u: goto L_08A16EF8;
    case 202u: goto L_08A16F14;
    case 203u: goto L_08A16F34;
    case 204u: goto L_08A16F40;
    case 205u: goto L_08A16F48;
    case 206u: goto L_08A16F5C;
    case 207u: goto L_08A16F80;
    case 208u: goto L_08A16F88;
    case 209u: goto L_08A16F94;
    case 210u: goto L_08A16F9C;
    case 211u: goto L_08A16FA4;
    case 212u: goto L_08A16FC0;
    case 213u: goto L_08A16FC8;
    case 214u: goto L_08A16FDC;
    case 215u: goto L_08A16FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A16000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16030:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A16314;
      }
      goto L_08A1605C;
    }
L_08A1605C:
    aot_gpr[17] = (0u | 1u);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[17];
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A161D8;
      }
      goto L_08A16068;
    }
L_08A16068:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[19];
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A16080;
      }
      goto L_08A16070;
    }
L_08A16070:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A16078;
    }
L_08A16078:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A16314;
      }
      goto L_08A16080;
    }
L_08A16080:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(516)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
      if (branch_taken) {
          goto L_08A160B8;
      }
      goto L_08A16090;
    }
L_08A16090:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[19];
    aot_gpr[18] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A160BC;
      }
      goto L_08A16098;
    }
L_08A16098:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[31] = (0x08A160B0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 126u, 0x08A136D4u>(ctx, &aot_mem) && ctx.pc == 0x08A160B0u) goto L_08A160B0;
    return;
L_08A160B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[7]);
    goto L_08A160B8;
L_08A160B8:
    aot_gpr[18] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08A160BC;
L_08A160BC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
      if (branch_taken) {
          goto L_08A16134;
      }
      goto L_08A160C4;
    }
L_08A160C4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    goto L_08A160DC;
L_08A160DC:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[8] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
        goto L_08A1612C;
    }
    goto L_08A160F0;
L_08A160F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A1610C;
      }
      goto L_08A16100;
    }
L_08A16100:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1610Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 126u, 0x08A136D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1610Cu) goto L_08A1610C;
    return;
L_08A1610C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[18]);
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
L_08A1612C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A160DC;
      }
      goto L_08A16134;
    }
L_08A16134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(516)));
        goto L_08A16190;
    }
    goto L_08A1614C;
L_08A1614C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), aot_gpr[17]);
      if (branch_taken) {
          goto L_08A16170;
      }
      goto L_08A16160;
    }
L_08A16160:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A16170u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 126u, 0x08A136D4u>(ctx, &aot_mem) && ctx.pc == 0x08A16170u) goto L_08A16170;
    return;
L_08A16170:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[19]);
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
L_08A16190:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A16198;
    }
L_08A16198:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[31] = (0x08A161B0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 126u, 0x08A136D4u>(ctx, &aot_mem) && ctx.pc == 0x08A161B0u) goto L_08A161B0;
    return;
L_08A161B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[4]);
    goto L_08A161BC;
L_08A161BC:
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
L_08A161D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(516)));
        goto L_08A16280;
    }
    goto L_08A161F0;
L_08A161F0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[17] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    goto L_08A1620C;
L_08A1620C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[8] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A16270;
    }
    goto L_08A16220;
L_08A16220:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[17] - aot_gpr[5]);
      if (branch_taken) {
          goto L_08A1624C;
      }
      goto L_08A16238;
    }
L_08A16238:
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1624Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 126u, 0x08A136D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1624Cu) goto L_08A1624C;
    return;
L_08A1624C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), 0u);
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
L_08A16270:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A1620C;
      }
      goto L_08A1627C;
    }
L_08A1627C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(516)));
    goto L_08A16280;
L_08A16280:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A16288;
    }
L_08A16288:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A16294;
    }
L_08A16294:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[6] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    goto L_08A162AC;
L_08A162AC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A16300;
    }
    goto L_08A162C0;
L_08A162C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[17]);
      if (branch_taken) {
          goto L_08A162DC;
      }
      goto L_08A162D0;
    }
L_08A162D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A162DCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 126u, 0x08A136D4u>(ctx, &aot_mem) && ctx.pc == 0x08A162DCu) goto L_08A162DC;
    return;
L_08A162DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), 0u);
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
L_08A16300:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A162AC;
      }
      goto L_08A1630C;
    }
L_08A1630C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A16314;
    }
L_08A16314:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    if (aot_gpr[6] == 0u) {
    aot_gpr[6] = (0u | 1u);
        goto L_08A16320;
    }
    goto L_08A16320;
L_08A16320:
    aot_gpr[11] = (0u | 1u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A16330;
    }
L_08A16330:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(512)));
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[2]);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    goto L_08A16348;
L_08A16348:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[12] = (ctx.hi);
    if (aot_gpr[13] != 0u) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
        goto L_08A1637C;
    }
    goto L_08A16358;
L_08A16358:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[8];
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[12]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A16368;
      }
      goto L_08A16360;
    }
L_08A16360:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A16368;
    }
L_08A16368:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[12]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A16378;
      }
      goto L_08A16370;
    }
L_08A16370:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A16378;
    }
L_08A16378:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(372)));
    goto L_08A1637C;
L_08A1637C:
    if (aot_gpr[9] == aot_gpr[7]) {
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
        goto L_08A163EC;
    }
    goto L_08A16384;
L_08A16384:
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[9] = (aot_gpr[14] + aot_gpr[9]);
    aot_gpr[14] = (aot_gpr[12] << 3u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (aot_gpr[14] + aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[14] + aot_gpr[15]);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[14]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[9] != 0u) {
    aot_gpr[4] = (aot_gpr[16] | 0u);
        goto L_08A163C8;
    }
    goto L_08A163B0;
L_08A163B0:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    goto L_08A163B4;
L_08A163B4:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A16348;
      }
      goto L_08A163C0;
    }
L_08A163C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A161BC;
      }
      goto L_08A163C8;
    }
L_08A163C8:
    aot_gpr[31] = (0x08A163D0u);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 185u, 0x08A14C78u>(ctx, &aot_mem) && ctx.pc == 0x08A163D0u) goto L_08A163D0;
    return;
L_08A163D0:
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
L_08A163EC:
    aot_gpr[14] = (aot_gpr[12] << 5u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[14]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A163B4;
      }
      goto L_08A16400;
    }
L_08A16400:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1640Cu);
    aot_gpr[5] = (aot_gpr[12] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 185u, 0x08A14C78u>(ctx, &aot_mem) && ctx.pc == 0x08A1640Cu) goto L_08A1640C;
    return;
L_08A1640C:
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
L_08A16428:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A16464u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1932));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A16464u) goto L_08A16464;
    return;
L_08A16464:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(344), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A16488u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 185u, 0x08A00C48u>(ctx, &aot_mem) && ctx.pc == 0x08A16488u) goto L_08A16488;
    return;
L_08A16488:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(464), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(468), 0u);
    aot_gpr[22] = (65280u << 16u);
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(472), aot_gpr[22]);
    aot_gpr[20] = (65281u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), aot_gpr[21]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-256));
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(488), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(492), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(480), 0u);
    aot_gpr[4] = (0u | 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08A164ECu);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 10u, 0x08A46078u>(ctx, &aot_mem) && ctx.pc == 0x08A164ECu) goto L_08A164EC;
    return;
L_08A164EC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A16504;
      }
      goto L_08A164F8;
    }
L_08A164F8:
    aot_gpr[31] = (0x08A16500u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 3u, 0x08A46010u>(ctx, &aot_mem) && ctx.pc == 0x08A16500u) goto L_08A16500;
    return;
L_08A16500:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_08A16504;
L_08A16504:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), aot_gpr[18]);
    aot_gpr[31] = (0x08A16510u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A16510u) goto L_08A16510;
    return;
L_08A16510:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(440), aot_gpr[21]);
    aot_gpr[4] = (65407u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(444), aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32639));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[4]);
    aot_gpr[5] = (65535u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(460), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), 0u);
    aot_gpr[6] = (16736u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(424), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(416), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), aot_gpr[5]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(428), aot_gpr[19]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), aot_gpr[20]);
    aot_gpr[5] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), aot_gpr[5]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18080), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18076), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16752u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(520), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(524), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A165E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A16634;
      }
      goto L_08A16600;
    }
L_08A16600:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14944));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18072), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A16620u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16620u) goto L_08A16620;
    return;
L_08A16620:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16634;
      }
      goto L_08A1662C;
    }
L_08A1662C:
    aot_gpr[31] = (0x08A16634u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A166FC;
L_08A16634:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16648:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18072)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A16690;
      }
      goto L_08A1666C;
    }
L_08A1666C:
    aot_gpr[31] = (0x08A16674u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A166B4;
L_08A16674:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18072), aot_gpr[17]);
        goto L_08A16690;
    }
    goto L_08A16680;
L_08A16680:
    aot_gpr[31] = (0x08A16688u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A16734;
L_08A16688:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18072), aot_gpr[17]);
    goto L_08A16690;
L_08A16690:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18072)));
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
L_08A166AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A166B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A166C8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A166C8u) goto L_08A166C8;
    return;
L_08A166C8:
    aot_gpr[31] = (0x08A166D0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A166D0u) goto L_08A166D0;
    return;
L_08A166D0:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A166ECu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1920));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A166ECu) goto L_08A166EC;
    return;
L_08A166EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A166FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16710u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A16710u) goto L_08A16710;
    return;
L_08A16710:
    aot_gpr[31] = (0x08A16718u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16718u) goto L_08A16718;
    return;
L_08A16718:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A16724u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A16724u) goto L_08A16724;
    return;
L_08A16724:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16734:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16748u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A16748u) goto L_08A16748;
    return;
L_08A16748:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14944));
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
L_08A16768:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1677Cu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1677Cu) goto L_08A1677C;
    return;
L_08A1677C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A16788u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A16788u) goto L_08A16788;
    return;
L_08A16788:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A16798u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1888));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16798u) goto L_08A16798;
    return;
L_08A16798:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A167AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A167D8u);
    aot_gpr[4] = (0u | 532u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A167D8u) goto L_08A167D8;
    return;
L_08A167D8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A167F0;
      }
      goto L_08A167E4;
    }
L_08A167E4:
    aot_gpr[31] = (0x08A167ECu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 223u, 0x08A14ED0u>(ctx, &aot_mem) && ctx.pc == 0x08A167ECu) goto L_08A167EC;
    return;
L_08A167EC:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A167F0;
L_08A167F0:
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
L_08A16810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A16860;
      }
      goto L_08A1682C;
    }
L_08A1682C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15016));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18064), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1684Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1684Cu) goto L_08A1684C;
    return;
L_08A1684C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16860;
      }
      goto L_08A16858;
    }
L_08A16858:
    aot_gpr[31] = (0x08A16860u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A16928;
L_08A16860:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18064)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A168BC;
      }
      goto L_08A16898;
    }
L_08A16898:
    aot_gpr[31] = (0x08A168A0u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A168E0;
L_08A168A0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18064), aot_gpr[17]);
        goto L_08A168BC;
    }
    goto L_08A168AC;
L_08A168AC:
    aot_gpr[31] = (0x08A168B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A16960;
L_08A168B4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18064), aot_gpr[17]);
    goto L_08A168BC;
L_08A168BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18064)));
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
L_08A168D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A168E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A168F4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A168F4u) goto L_08A168F4;
    return;
L_08A168F4:
    aot_gpr[31] = (0x08A168FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A168FCu) goto L_08A168FC;
    return;
L_08A168FC:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A16918u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1880));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A16918u) goto L_08A16918;
    return;
L_08A16918:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1693Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1693Cu) goto L_08A1693C;
    return;
L_08A1693C:
    aot_gpr[31] = (0x08A16944u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16944u) goto L_08A16944;
    return;
L_08A16944:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A16950u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A16950u) goto L_08A16950;
    return;
L_08A16950:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16974u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A16974u) goto L_08A16974;
    return;
L_08A16974:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15016));
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
L_08A16994:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A169A8u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A169A8u) goto L_08A169A8;
    return;
L_08A169A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A169B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A169B4u) goto L_08A169B4;
    return;
L_08A169B4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A169C4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1848));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A169C4u) goto L_08A169C4;
    return;
L_08A169C4:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A169D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A16A04u);
    aot_gpr[4] = (0u | 324u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16A04u) goto L_08A16A04;
    return;
L_08A16A04:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A16A1C;
      }
      goto L_08A16A10;
    }
L_08A16A10:
    aot_gpr[31] = (0x08A16A18u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0544_entry, 544u, 89u, 0x08A24610u>(ctx, &aot_mem) && ctx.pc == 0x08A16A18u) goto L_08A16A18;
    return;
L_08A16A18:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A16A1C;
L_08A16A1C:
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
L_08A16A3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A16A8C;
      }
      goto L_08A16A58;
    }
L_08A16A58:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15080));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18056), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A16A78u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16A78u) goto L_08A16A78;
    return;
L_08A16A78:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16A8C;
      }
      goto L_08A16A84;
    }
L_08A16A84:
    aot_gpr[31] = (0x08A16A8Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A16B54;
L_08A16A8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16AA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18056)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A16AE8;
      }
      goto L_08A16AC4;
    }
L_08A16AC4:
    aot_gpr[31] = (0x08A16ACCu);
    aot_gpr[4] = (0u | 8u);
    goto L_08A16B0C;
L_08A16ACC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18056), aot_gpr[17]);
        goto L_08A16AE8;
    }
    goto L_08A16AD8;
L_08A16AD8:
    aot_gpr[31] = (0x08A16AE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A16B8C;
L_08A16AE0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18056), aot_gpr[17]);
    goto L_08A16AE8;
L_08A16AE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18056)));
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
L_08A16B04:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16B0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16B20u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A16B20u) goto L_08A16B20;
    return;
L_08A16B20:
    aot_gpr[31] = (0x08A16B28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16B28u) goto L_08A16B28;
    return;
L_08A16B28:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A16B44u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1840));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A16B44u) goto L_08A16B44;
    return;
L_08A16B44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16B54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16B68u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A16B68u) goto L_08A16B68;
    return;
L_08A16B68:
    aot_gpr[31] = (0x08A16B70u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16B70u) goto L_08A16B70;
    return;
L_08A16B70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A16B7Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A16B7Cu) goto L_08A16B7C;
    return;
L_08A16B7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16B8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16BA0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A16BA0u) goto L_08A16BA0;
    return;
L_08A16BA0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15080));
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
L_08A16BC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A16BE4u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-1800));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A16BE4u) goto L_08A16BE4;
    return;
L_08A16BE4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A16BF4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A16BF4u) goto L_08A16BF4;
    return;
L_08A16BF4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A16C00u);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A16C00u) goto L_08A16C00;
    return;
L_08A16C00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A16C0Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A16C0Cu) goto L_08A16C0C;
    return;
L_08A16C0C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A16C1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1792));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16C1Cu) goto L_08A16C1C;
    return;
L_08A16C1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A16C3C;
      }
      goto L_08A16C24;
    }
L_08A16C24:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A16C30u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1784));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16C30u) goto L_08A16C30;
    return;
L_08A16C30:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A16C3C;
      }
      goto L_08A16C38;
    }
L_08A16C38:
    aot_gpr[16] = (0u | 1u);
    goto L_08A16C3C;
L_08A16C3C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A16C58:
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
    aot_gpr[31] = (0x08A16C8Cu);
    aot_gpr[4] = (0u | 560u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16C8Cu) goto L_08A16C8C;
    return;
L_08A16C8C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A16CA8;
      }
      goto L_08A16C98;
    }
L_08A16C98:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A16CA4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0544_entry, 544u, 103u, 0x08A2477Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16CA4u) goto L_08A16CA4;
    return;
L_08A16CA4:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A16CA8;
L_08A16CA8:
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
L_08A16CCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A16D1C;
      }
      goto L_08A16CE8;
    }
L_08A16CE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15144));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18048), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A16D08u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16D08u) goto L_08A16D08;
    return;
L_08A16D08:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16D1C;
      }
      goto L_08A16D14;
    }
L_08A16D14:
    aot_gpr[31] = (0x08A16D1Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A16DE4;
L_08A16D1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16D30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18048)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A16D78;
      }
      goto L_08A16D54;
    }
L_08A16D54:
    aot_gpr[31] = (0x08A16D5Cu);
    aot_gpr[4] = (0u | 8u);
    goto L_08A16D9C;
L_08A16D5C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18048), aot_gpr[17]);
        goto L_08A16D78;
    }
    goto L_08A16D68;
L_08A16D68:
    aot_gpr[31] = (0x08A16D70u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A16E1C;
L_08A16D70:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18048), aot_gpr[17]);
    goto L_08A16D78;
L_08A16D78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18048)));
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
L_08A16D94:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16D9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16DB0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A16DB0u) goto L_08A16DB0;
    return;
L_08A16DB0:
    aot_gpr[31] = (0x08A16DB8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16DB8u) goto L_08A16DB8;
    return;
L_08A16DB8:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A16DD4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1776));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A16DD4u) goto L_08A16DD4;
    return;
L_08A16DD4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16DE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16DF8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A16DF8u) goto L_08A16DF8;
    return;
L_08A16DF8:
    aot_gpr[31] = (0x08A16E00u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16E00u) goto L_08A16E00;
    return;
L_08A16E00:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A16E0Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A16E0Cu) goto L_08A16E0C;
    return;
L_08A16E0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16E1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16E30u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A16E30u) goto L_08A16E30;
    return;
L_08A16E30:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15144));
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
L_08A16E50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16E64u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A16E64u) goto L_08A16E64;
    return;
L_08A16E64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A16E70u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A16E70u) goto L_08A16E70;
    return;
L_08A16E70:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A16E80u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1740));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16E80u) goto L_08A16E80;
    return;
L_08A16E80:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16E94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A16EC0u);
    aot_gpr[4] = (0u | 312u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16EC0u) goto L_08A16EC0;
    return;
L_08A16EC0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A16ED8;
      }
      goto L_08A16ECC;
    }
L_08A16ECC:
    aot_gpr[31] = (0x08A16ED4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0544_entry, 544u, 132u, 0x08A24964u>(ctx, &aot_mem) && ctx.pc == 0x08A16ED4u) goto L_08A16ED4;
    return;
L_08A16ED4:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A16ED8;
L_08A16ED8:
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
L_08A16EF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A16F48;
      }
      goto L_08A16F14;
    }
L_08A16F14:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15208));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18040), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A16F34u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16F34u) goto L_08A16F34;
    return;
L_08A16F34:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A16F48;
      }
      goto L_08A16F40;
    }
L_08A16F40:
    aot_gpr[31] = (0x08A16F48u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 2u, 0x08A17010u>(ctx, &aot_mem) && ctx.pc == 0x08A16F48u) goto L_08A16F48;
    return;
L_08A16F48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16F5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A16FA4;
      }
      goto L_08A16F80;
    }
L_08A16F80:
    aot_gpr[31] = (0x08A16F88u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A16FC8;
L_08A16F88:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18040), aot_gpr[17]);
        goto L_08A16FA4;
    }
    goto L_08A16F94;
L_08A16F94:
    aot_gpr[31] = (0x08A16F9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0531_entry, 531u, 6u, 0x08A17048u>(ctx, &aot_mem) && ctx.pc == 0x08A16F9Cu) goto L_08A16F9C;
    return;
L_08A16F9C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18040), aot_gpr[17]);
    goto L_08A16FA4;
L_08A16FA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18040)));
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
L_08A16FC0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A16FC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A16FDCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A16FDCu) goto L_08A16FDC;
    return;
L_08A16FDC:
    aot_gpr[31] = (0x08A16FE4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A16FE4u) goto L_08A16FE4;
    return;
L_08A16FE4:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A17000u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1728));
    (void)rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0530(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0530_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_530(Runtime &runtime) {
    runtime.register_generated_unit(530u, 0x08A16000u, 4096u, &recomp_unit_0530, &recomp_unit_0530_entry);
    runtime.register_function(0x08A16000u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16030u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1605Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16068u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16070u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16078u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16080u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16090u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16098u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A160B0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A160B8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A160BCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A160C4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A160DCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A160F0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16100u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1610Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1612Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16134u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1614Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16160u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16170u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16190u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16198u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A161B0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A161BCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A161D8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A161F0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1620Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16220u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16238u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1624Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16270u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1627Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16280u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16288u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16294u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A162ACu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A162C0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A162D0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A162DCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16300u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1630Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16314u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16320u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16330u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16348u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16358u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16360u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16368u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16370u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16378u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1637Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16384u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A163B0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A163B4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A163C0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A163C8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A163D0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A163ECu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16400u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1640Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16428u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16464u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16488u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A164ECu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A164F8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16500u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16504u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16510u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A165E4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16600u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16620u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1662Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16634u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16648u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1666Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16674u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16680u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16688u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16690u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A166ACu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A166B4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A166C8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A166D0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A166ECu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A166FCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16710u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16718u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16724u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16734u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16748u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16768u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1677Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16788u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16798u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A167ACu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A167D8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A167E4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A167ECu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A167F0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16810u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1682Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1684Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16858u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16860u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16874u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16898u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A168A0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A168ACu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A168B4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A168BCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A168D8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A168E0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A168F4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A168FCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16918u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16928u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A1693Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16944u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16950u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16960u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16974u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16994u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A169A8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A169B4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A169C4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A169D8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A04u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A10u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A18u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A1Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A3Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A58u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A78u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A84u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16A8Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16AA0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16AC4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16ACCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16AD8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16AE0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16AE8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B04u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B0Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B20u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B28u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B44u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B54u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B68u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B70u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B7Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16B8Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16BA0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16BC0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16BE4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16BF4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C00u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C0Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C1Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C24u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C30u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C38u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C3Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C58u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C8Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16C98u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16CA4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16CA8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16CCCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16CE8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D08u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D14u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D1Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D30u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D54u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D5Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D68u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D70u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D78u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D94u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16D9Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16DB0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16DB8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16DD4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16DE4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16DF8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E00u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E0Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E1Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E30u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E50u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E64u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E70u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E80u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16E94u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16EC0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16ECCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16ED4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16ED8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16EF8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F14u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F34u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F40u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F48u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F5Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F80u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F88u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F94u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16F9Cu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16FA4u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16FC0u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16FC8u, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16FDCu, &recomp_unit_0530, "recomp_unit_0530");
    runtime.register_function(0x08A16FE4u, &recomp_unit_0530, "recomp_unit_0530");
}
} // namespace psprecomp
