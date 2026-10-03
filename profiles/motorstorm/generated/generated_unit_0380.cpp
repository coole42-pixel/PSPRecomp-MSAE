#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0380[1024] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0,
    0, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0,
    35, 0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0,
    58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71,
    0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0,
    93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102,
    0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0,
    0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 118, 0,
    0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128,
    0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0,
    151, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 162,
    163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0,
    171, 0, 172, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0,
    179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0,
    0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205,
    0, 206, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0,
    0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 231, 0,
    232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0,
    244, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252,
};
void recomp_unit_0380_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08980000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0380[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08980000;
    case 2u: goto L_08980018;
    case 3u: goto L_08980020;
    case 4u: goto L_08980028;
    case 5u: goto L_08980034;
    case 6u: goto L_0898003C;
    case 7u: goto L_08980040;
    case 8u: goto L_08980068;
    case 9u: goto L_08980070;
    case 10u: goto L_08980078;
    case 11u: goto L_0898009C;
    case 12u: goto L_089800A8;
    case 13u: goto L_089800CC;
    case 14u: goto L_089800D8;
    case 15u: goto L_089800EC;
    case 16u: goto L_089800F8;
    case 17u: goto L_08980108;
    case 18u: goto L_08980118;
    case 19u: goto L_08980120;
    case 20u: goto L_08980138;
    case 21u: goto L_0898013C;
    case 22u: goto L_0898016C;
    case 23u: goto L_08980188;
    case 24u: goto L_08980194;
    case 25u: goto L_0898024C;
    case 26u: goto L_08980268;
    case 27u: goto L_08980280;
    case 28u: goto L_0898028C;
    case 29u: goto L_08980294;
    case 30u: goto L_089802A8;
    case 31u: goto L_089802B0;
    case 32u: goto L_089802CC;
    case 33u: goto L_089802F0;
    case 34u: goto L_089802F8;
    case 35u: goto L_08980300;
    case 36u: goto L_08980308;
    case 37u: goto L_08980314;
    case 38u: goto L_0898031C;
    case 39u: goto L_08980324;
    case 40u: goto L_0898032C;
    case 41u: goto L_08980334;
    case 42u: goto L_08980340;
    case 43u: goto L_08980354;
    case 44u: goto L_0898035C;
    case 45u: goto L_08980364;
    case 46u: goto L_089803A8;
    case 47u: goto L_089803B0;
    case 48u: goto L_089803CC;
    case 49u: goto L_089803D8;
    case 50u: goto L_089803FC;
    case 51u: goto L_08980408;
    case 52u: goto L_08980428;
    case 53u: goto L_08980430;
    case 54u: goto L_08980448;
    case 55u: goto L_08980450;
    case 56u: goto L_08980468;
    case 57u: goto L_08980470;
    case 58u: goto L_08980480;
    case 59u: goto L_08980488;
    case 60u: goto L_0898049C;
    case 61u: goto L_089804CC;
    case 62u: goto L_089804E8;
    case 63u: goto L_08980500;
    case 64u: goto L_0898050C;
    case 65u: goto L_08980514;
    case 66u: goto L_08980528;
    case 67u: goto L_08980540;
    case 68u: goto L_0898054C;
    case 69u: goto L_08980558;
    case 70u: goto L_08980560;
    case 71u: goto L_089805FC;
    case 72u: goto L_08980604;
    case 73u: goto L_0898060C;
    case 74u: goto L_08980614;
    case 75u: goto L_0898061C;
    case 76u: goto L_08980624;
    case 77u: goto L_08980638;
    case 78u: goto L_08980640;
    case 79u: goto L_08980648;
    case 80u: goto L_08980658;
    case 81u: goto L_08980660;
    case 82u: goto L_08980668;
    case 83u: goto L_08980670;
    case 84u: goto L_08980678;
    case 85u: goto L_08980688;
    case 86u: goto L_089806AC;
    case 87u: goto L_089806B8;
    case 88u: goto L_089806C4;
    case 89u: goto L_089806D0;
    case 90u: goto L_089806DC;
    case 91u: goto L_089806E8;
    case 92u: goto L_089806F4;
    case 93u: goto L_08980700;
    case 94u: goto L_0898070C;
    case 95u: goto L_08980718;
    case 96u: goto L_08980734;
    case 97u: goto L_08980748;
    case 98u: goto L_0898074C;
    case 99u: goto L_08980758;
    case 100u: goto L_08980764;
    case 101u: goto L_08980770;
    case 102u: goto L_0898077C;
    case 103u: goto L_08980788;
    case 104u: goto L_08980798;
    case 105u: goto L_089807A4;
    case 106u: goto L_089807B0;
    case 107u: goto L_089807BC;
    case 108u: goto L_089807D0;
    case 109u: goto L_089807E4;
    case 110u: goto L_089807F0;
    case 111u: goto L_08980804;
    case 112u: goto L_08980810;
    case 113u: goto L_08980820;
    case 114u: goto L_08980838;
    case 115u: goto L_0898084C;
    case 116u: goto L_08980858;
    case 117u: goto L_0898086C;
    case 118u: goto L_08980878;
    case 119u: goto L_08980888;
    case 120u: goto L_0898089C;
    case 121u: goto L_089808A4;
    case 122u: goto L_089808B0;
    case 123u: goto L_089808BC;
    case 124u: goto L_089808C8;
    case 125u: goto L_089808D4;
    case 126u: goto L_089808E4;
    case 127u: goto L_089808F0;
    case 128u: goto L_089808FC;
    case 129u: goto L_08980908;
    case 130u: goto L_0898091C;
    case 131u: goto L_08980930;
    case 132u: goto L_0898093C;
    case 133u: goto L_08980950;
    case 134u: goto L_0898095C;
    case 135u: goto L_0898096C;
    case 136u: goto L_08980984;
    case 137u: goto L_08980998;
    case 138u: goto L_089809A4;
    case 139u: goto L_089809B8;
    case 140u: goto L_089809C4;
    case 141u: goto L_089809D4;
    case 142u: goto L_089809E8;
    case 143u: goto L_089809F0;
    case 144u: goto L_08980A28;
    case 145u: goto L_08980A30;
    case 146u: goto L_08980A38;
    case 147u: goto L_08980A58;
    case 148u: goto L_08980A60;
    case 149u: goto L_08980A68;
    case 150u: goto L_08980A74;
    case 151u: goto L_08980A80;
    case 152u: goto L_08980A88;
    case 153u: goto L_08980A90;
    case 154u: goto L_08980A9C;
    case 155u: goto L_08980AA4;
    case 156u: goto L_08980AB8;
    case 157u: goto L_08980AC8;
    case 158u: goto L_08980AD0;
    case 159u: goto L_08980AE0;
    case 160u: goto L_08980AF0;
    case 161u: goto L_08980AF8;
    case 162u: goto L_08980AFC;
    case 163u: goto L_08980B00;
    case 164u: goto L_08980B10;
    case 165u: goto L_08980B38;
    case 166u: goto L_08980B40;
    case 167u: goto L_08980B48;
    case 168u: goto L_08980B5C;
    case 169u: goto L_08980B64;
    case 170u: goto L_08980B6C;
    case 171u: goto L_08980B80;
    case 172u: goto L_08980B88;
    case 173u: goto L_08980B8C;
    case 174u: goto L_08980BA4;
    case 175u: goto L_08980BC8;
    case 176u: goto L_08980BD4;
    case 177u: goto L_08980BF0;
    case 178u: goto L_08980BF8;
    case 179u: goto L_08980C00;
    case 180u: goto L_08980C0C;
    case 181u: goto L_08980C14;
    case 182u: goto L_08980C1C;
    case 183u: goto L_08980C28;
    case 184u: goto L_08980C34;
    case 185u: goto L_08980C40;
    case 186u: goto L_08980C50;
    case 187u: goto L_08980C64;
    case 188u: goto L_08980C6C;
    case 189u: goto L_08980C74;
    case 190u: goto L_08980C90;
    case 191u: goto L_08980CAC;
    case 192u: goto L_08980CC0;
    case 193u: goto L_08980CCC;
    case 194u: goto L_08980CD8;
    case 195u: goto L_08980CE4;
    case 196u: goto L_08980CF0;
    case 197u: goto L_08980CF8;
    case 198u: goto L_08980D0C;
    case 199u: goto L_08980D18;
    case 200u: goto L_08980D34;
    case 201u: goto L_08980D3C;
    case 202u: goto L_08980D4C;
    case 203u: goto L_08980D68;
    case 204u: goto L_08980D74;
    case 205u: goto L_08980D7C;
    case 206u: goto L_08980D84;
    case 207u: goto L_08980D8C;
    case 208u: goto L_08980D94;
    case 209u: goto L_08980DA4;
    case 210u: goto L_08980DBC;
    case 211u: goto L_08980DC8;
    case 212u: goto L_08980DD0;
    case 213u: goto L_08980DD8;
    case 214u: goto L_08980DE0;
    case 215u: goto L_08980DE8;
    case 216u: goto L_08980DF0;
    case 217u: goto L_08980DF8;
    case 218u: goto L_08980E08;
    case 219u: goto L_08980E18;
    case 220u: goto L_08980E28;
    case 221u: goto L_08980E98;
    case 222u: goto L_08980EA0;
    case 223u: goto L_08980EC0;
    case 224u: goto L_08980EC4;
    case 225u: goto L_08980ECC;
    case 226u: goto L_08980ED4;
    case 227u: goto L_08980EDC;
    case 228u: goto L_08980EE4;
    case 229u: goto L_08980EEC;
    case 230u: goto L_08980EF4;
    case 231u: goto L_08980EF8;
    case 232u: goto L_08980F00;
    case 233u: goto L_08980F08;
    case 234u: goto L_08980F10;
    case 235u: goto L_08980F18;
    case 236u: goto L_08980F20;
    case 237u: goto L_08980F30;
    case 238u: goto L_08980F38;
    case 239u: goto L_08980F48;
    case 240u: goto L_08980F58;
    case 241u: goto L_08980F60;
    case 242u: goto L_08980F68;
    case 243u: goto L_08980F78;
    case 244u: goto L_08980F80;
    case 245u: goto L_08980F8C;
    case 246u: goto L_08980F94;
    case 247u: goto L_08980F9C;
    case 248u: goto L_08980FAC;
    case 249u: goto L_08980FC0;
    case 250u: goto L_08980FD4;
    case 251u: goto L_08980FEC;
    case 252u: goto L_08980FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08980000:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (aot_gpr[10] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[7] = (0u | 0u);
    if (aot_gpr[8] == aot_gpr[30]) {
    aot_gpr[7] = (aot_gpr[9] | 0u);
        goto L_08980018;
    }
    goto L_08980018;
L_08980018:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980028;
      }
      goto L_08980020;
    }
L_08980020:
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898003C;
      }
      goto L_08980028;
    }
L_08980028:
    aot_gpr[4] = (aot_gpr[8] | aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898003C;
      }
      goto L_08980034;
    }
L_08980034:
    aot_gpr[19] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[19] = (aot_gpr[19] < aot_gpr[10] ? 1u : 0u);
    goto L_0898003C;
L_0898003C:
    aot_gpr[4] = (2216u << 16u);
    goto L_08980040;
L_08980040:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26216)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26216), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(272));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08980068u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980068u) goto L_08980068;
    return;
L_08980068:
    aot_gpr[31] = (0x08980070u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 181u, 0x0897ED78u>(ctx, &aot_mem) && ctx.pc == 0x08980070u) goto L_08980070;
    return;
L_08980070:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980120;
      }
      goto L_08980078;
    }
L_08980078:
    aot_gpr[4] = (2216u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26208)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[6] = (20224u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26208), aot_gpr[5]);
      if (branch_taken) {
          goto L_089800A8;
      }
      goto L_0898009C;
    }
L_0898009C:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_089800A8;
L_089800A8:
    aot_gpr[4] = (18351u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 51200u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26204)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_089800D8;
      }
      goto L_089800CC;
    }
L_089800CC:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    goto L_089800D8;
L_089800D8:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
        goto L_089800F8;
    }
    goto L_089800EC;
L_089800EC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08980108;
      }
      goto L_089800F8;
    }
L_089800F8:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_08980108;
L_08980108:
    aot_gpr[5] = (0u | 32000u);
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(32000) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[4] | 0u);
        goto L_08980118;
    }
    goto L_08980118;
L_08980118:
    aot_gpr[31] = (0x08980120u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08980120:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(192));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08980138u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980138u) goto L_08980138;
    return;
L_08980138:
    aot_gpr[2] = (0u | 0u);
    goto L_0898013C;
L_0898013C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898016C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08980188;
    }
    goto L_08980188;
L_08980188:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08980194u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 131u, 0x0897F7F4u>(ctx, &aot_mem) && ctx.pc == 0x08980194u) goto L_08980194;
    return;
L_08980194:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9048));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1408), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1416), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1420), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1428), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1432), 0u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1436), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1448), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19648)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19644)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1464), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1476), aot_gpr[5]);
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1472), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1480), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1484), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1488), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1500), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1496), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1504), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1508), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1592), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1596), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1600), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1604), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1608), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1612), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1616), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1620), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1624), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1628), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1632), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1636), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1640), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1644), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898024C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08980294;
      }
      goto L_08980268;
    }
L_08980268:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9048));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08980280u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 137u, 0x0897F8B4u>(ctx, &aot_mem) && ctx.pc == 0x08980280u) goto L_08980280;
    return;
L_08980280:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980294;
      }
      goto L_0898028C;
    }
L_0898028C:
    aot_gpr[31] = (0x08980294u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08980294u) goto L_08980294;
    return;
L_08980294:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089802A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089802B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0898032C;
      }
      goto L_089802CC;
    }
L_089802CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(640), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(636), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089802F0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089802F0u) goto L_089802F0;
    return;
L_089802F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980324;
      }
      goto L_089802F8;
    }
L_089802F8:
    aot_gpr[31] = (0x08980300u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 93u, 0x089754F4u>(ctx, &aot_mem) && ctx.pc == 0x08980300u) goto L_08980300;
    return;
L_08980300:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898031C;
      }
      goto L_08980308;
    }
L_08980308:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980334;
      }
      goto L_08980314;
    }
L_08980314:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_08980340;
      }
      goto L_0898031C;
    }
L_0898031C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_08980340;
      }
      goto L_08980324;
    }
L_08980324:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08980340;
      }
      goto L_0898032C;
    }
L_0898032C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08980340;
      }
      goto L_08980334;
    }
L_08980334:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08980340u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 82u, 0x0897F504u>(ctx, &aot_mem) && ctx.pc == 0x08980340u) goto L_08980340;
    return;
L_08980340:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980354:
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08980364;
    }
    goto L_0898035C;
L_0898035C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 50u);
      if (branch_taken) {
          goto L_089803A8;
      }
      goto L_08980364;
    }
L_08980364:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1408));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[2] = (0u | 0u);
    goto L_089803A8;
L_089803A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089803B0:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_089803CC;
    }
    goto L_089803CC;
L_089803CC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1440), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089803D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(636)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089803FCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x089803FCu) goto L_089803FC;
    return;
L_089803FC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980448;
      }
      goto L_08980408;
    }
L_08980408:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(640)));
    aot_gpr[5] = (0u | 8192u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08980428u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980428u) goto L_08980428;
    return;
L_08980428:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980448;
      }
      goto L_08980430;
    }
L_08980430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08980448u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08980448u) goto L_08980448;
    return;
L_08980448:
    aot_gpr[31] = (0x08980450u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 88u, 0x0897F578u>(ctx, &aot_mem) && ctx.pc == 0x08980450u) goto L_08980450;
    return;
L_08980450:
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
L_08980468:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980470:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 65u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980480:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 65u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980488:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0898049Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 131u, 0x0897F7F4u>(ctx, &aot_mem) && ctx.pc == 0x0898049Cu) goto L_0898049C;
    return;
L_0898049C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9328));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1444), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1440), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089804CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08980514;
      }
      goto L_089804E8;
    }
L_089804E8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9328));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08980500u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 137u, 0x0897F8B4u>(ctx, &aot_mem) && ctx.pc == 0x08980500u) goto L_08980500;
    return;
L_08980500:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980514;
      }
      goto L_0898050C;
    }
L_0898050C:
    aot_gpr[31] = (0x08980514u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08980514u) goto L_08980514;
    return;
L_08980514:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980528:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08980604;
      }
      goto L_08980540;
    }
L_08980540:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1592)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980558;
      }
      goto L_0898054C;
    }
L_0898054C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1596)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980604;
      }
      goto L_08980558;
    }
L_08980558:
    aot_gpr[31] = (0x08980560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 53u, 0x08975314u>(ctx, &aot_mem) && ctx.pc == 0x08980560u) goto L_08980560;
    return;
L_08980560:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(368));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19476)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19480)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19468)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19472)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1412), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[11]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[8] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[10]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1416), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[11]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1616)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1620)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1624)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1628)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1600)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1604)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1608)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1612)));
      if (branch_taken) {
          goto L_0898060C;
      }
      goto L_089805FC;
    }
L_089805FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980648;
      }
      goto L_08980604;
    }
L_08980604:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 64u);
      if (branch_taken) {
          goto L_08980B00;
      }
      goto L_0898060C;
    }
L_0898060C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980648;
      }
      goto L_08980614;
    }
L_08980614:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980648;
      }
      goto L_0898061C;
    }
L_0898061C:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980648;
      }
      goto L_08980624;
    }
L_08980624:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1412)));
    aot_gpr[6] = (0u | 1080u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1428), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
      if (branch_taken) {
          goto L_08980640;
      }
      goto L_08980638;
    }
L_08980638:
    aot_gpr[5] = (0u | 1088u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1428), aot_gpr[5]);
    goto L_08980640;
L_08980640:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1420), aot_gpr[4]);
      if (branch_taken) {
          goto L_08980658;
      }
      goto L_08980648;
    }
L_08980648:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1420), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1428), aot_gpr[5]);
    goto L_08980658;
L_08980658:
    { const bool branch_taken = aot_gpr[8] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), aot_gpr[4]);
      if (branch_taken) {
          goto L_08980AA4;
      }
      goto L_08980660;
    }
L_08980660:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980AA4;
      }
      goto L_08980668;
    }
L_08980668:
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980AA4;
      }
      goto L_08980670;
    }
L_08980670:
    { const bool branch_taken = aot_gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980AA4;
      }
      goto L_08980678;
    }
L_08980678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1448)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08980A30;
      }
      goto L_08980688;
    }
L_08980688:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1592)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1596)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1412)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_089806B8;
      }
      goto L_089806AC;
    }
L_089806AC:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_089806B8;
L_089806B8:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_089806D0;
      }
      goto L_089806C4;
    }
L_089806C4:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_089806D0;
L_089806D0:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
      if (branch_taken) {
          goto L_089806E8;
      }
      goto L_089806DC;
    }
L_089806DC:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    goto L_089806E8;
L_089806E8:
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[15] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[15])));
      if (branch_taken) {
          goto L_08980700;
      }
      goto L_089806F4;
    }
L_089806F4:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = aot_fpr[15] + aot_fpr[17];
    goto L_08980700;
L_08980700:
    aot_gpr[9] = (aot_gpr[5] < static_cast<std::uint32_t>(600) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08980718;
      }
      goto L_0898070C;
    }
L_0898070C:
    aot_gpr[9] = (aot_gpr[6] < static_cast<std::uint32_t>(400) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898074C;
      }
      goto L_08980718;
    }
L_08980718:
    aot_fpr[14] = aot_fpr[12] / aot_fpr[14];
    aot_gpr[9] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_0898074C;
    }
    goto L_08980734;
L_08980734:
    aot_fpr[13] = aot_fpr[13] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898074C;
      }
      goto L_08980748;
    }
L_08980748:
    aot_gpr[4] = (0u | 1u);
    goto L_0898074C;
L_0898074C:
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089808A4;
      }
      goto L_08980758;
    }
L_08980758:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08980770;
      }
      goto L_08980764;
    }
L_08980764:
    aot_gpr[9] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08980770;
L_08980770:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08980788;
      }
      goto L_0898077C;
    }
L_0898077C:
    aot_gpr[9] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_08980788;
L_08980788:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_089807A4;
      }
      goto L_08980798;
    }
L_08980798:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_089807A4;
L_089807A4:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
      if (branch_taken) {
          goto L_089807BC;
      }
      goto L_089807B0;
    }
L_089807B0:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    goto L_089807BC;
L_089807BC:
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08980838;
      }
      goto L_089807D0;
    }
L_089807D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1640), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1644), aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_089807F0;
      }
      goto L_089807E4;
    }
L_089807E4:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_089807F0;
L_089807F0:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[16];
        goto L_08980810;
    }
    goto L_08980804;
L_08980804:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08980820;
      }
      goto L_08980810;
    }
L_08980810:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_08980820;
L_08980820:
    aot_gpr[6] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] >> 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1632), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1636), aot_gpr[5]);
      if (branch_taken) {
          goto L_0898089C;
      }
      goto L_08980838;
    }
L_08980838:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1632), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1636), aot_gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08980858;
      }
      goto L_0898084C;
    }
L_0898084C:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_08980858;
L_08980858:
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[16];
        goto L_08980878;
    }
    goto L_0898086C;
L_0898086C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08980888;
      }
      goto L_08980878;
    }
L_08980878:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_08980888;
L_08980888:
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] >> 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1640), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1644), aot_gpr[5]);
    goto L_0898089C;
L_0898089C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089809E8;
      }
      goto L_089808A4;
    }
L_089808A4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_089808BC;
      }
      goto L_089808B0;
    }
L_089808B0:
    aot_gpr[9] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_089808BC;
L_089808BC:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_089808D4;
      }
      goto L_089808C8;
    }
L_089808C8:
    aot_gpr[9] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_089808D4;
L_089808D4:
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_089808F0;
      }
      goto L_089808E4;
    }
L_089808E4:
    aot_gpr[6] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_089808F0;
L_089808F0:
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    aot_fpr[14] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[14])));
      if (branch_taken) {
          goto L_08980908;
      }
      goto L_089808FC;
    }
L_089808FC:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    goto L_08980908;
L_08980908:
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08980984;
      }
      goto L_0898091C;
    }
L_0898091C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1632), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1636), aot_gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_0898093C;
      }
      goto L_08980930;
    }
L_08980930:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_0898093C;
L_0898093C:
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[16];
        goto L_0898095C;
    }
    goto L_08980950;
L_08980950:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0898096C;
      }
      goto L_0898095C;
    }
L_0898095C:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_0898096C;
L_0898096C:
    aot_gpr[6] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] >> 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1640), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1644), aot_gpr[5]);
      if (branch_taken) {
          goto L_089809E8;
      }
      goto L_08980984;
    }
L_08980984:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1640), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1644), aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_089809A4;
      }
      goto L_08980998;
    }
L_08980998:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_089809A4;
L_089809A4:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[16];
        goto L_089809C4;
    }
    goto L_089809B8;
L_089809B8:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_089809D4;
      }
      goto L_089809C4;
    }
L_089809C4:
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_089809D4;
L_089809D4:
    aot_gpr[6] = (aot_gpr[8] - aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] >> 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1632), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1636), aot_gpr[5]);
    goto L_089809E8;
L_089809E8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980A28;
      }
      goto L_089809F0;
    }
L_089809F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1636)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1632)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1644)));
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1640)));
    aot_gpr[5] = (aot_gpr[5] >> 2u);
    aot_gpr[7] = (aot_gpr[6] - aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1632), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] >> 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1636), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1640), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1644), aot_gpr[4]);
    goto L_08980A28;
L_08980A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980AFC;
      }
      goto L_08980A30;
    }
L_08980A30:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980AFC;
      }
      goto L_08980A38;
    }
L_08980A38:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1592)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1596)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1412)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[10] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08980A60;
      }
      goto L_08980A58;
    }
L_08980A58:
    aot_gpr[6] = (aot_gpr[10] - aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] >> 1u);
    goto L_08980A60;
L_08980A60:
    { const bool branch_taken = aot_gpr[7] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1632), aot_gpr[6]);
      if (branch_taken) {
          goto L_08980A74;
      }
      goto L_08980A68;
    }
L_08980A68:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1632)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08980A74;
      }
      goto L_08980A74;
    }
L_08980A74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1636), aot_gpr[10]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08980A88;
      }
      goto L_08980A80;
    }
L_08980A80:
    aot_gpr[10] = (aot_gpr[9] - aot_gpr[4]);
    aot_gpr[10] = (aot_gpr[10] >> 1u);
    goto L_08980A88;
L_08980A88:
    { const bool branch_taken = aot_gpr[8] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1640), aot_gpr[10]);
      if (branch_taken) {
          goto L_08980A9C;
      }
      goto L_08980A90;
    }
L_08980A90:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1640)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08980A9C;
      }
      goto L_08980A9C;
    }
L_08980A9C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1644), aot_gpr[9]);
      if (branch_taken) {
          goto L_08980AFC;
      }
      goto L_08980AA4;
    }
L_08980AA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1592)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1596)));
    if (aot_gpr[8] != 0u) {
    aot_gpr[6] = (aot_gpr[8] | 0u);
        goto L_08980AB8;
    }
    goto L_08980AB8;
L_08980AB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1632), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980AD0;
      }
      goto L_08980AC8;
    }
L_08980AC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08980AD0;
      }
      goto L_08980AD0;
    }
L_08980AD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1636), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[10] != 0u) {
    aot_gpr[4] = (aot_gpr[10] | 0u);
        goto L_08980AE0;
    }
    goto L_08980AE0;
L_08980AE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1640), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[11] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980AF8;
      }
      goto L_08980AF0;
    }
L_08980AF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_08980AF8;
      }
      goto L_08980AF8;
    }
L_08980AF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1644), aot_gpr[5]);
    goto L_08980AFC;
L_08980AFC:
    aot_gpr[2] = (0u | 0u);
    goto L_08980B00;
L_08980B00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980B10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 3u);
    aot_gpr[6] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08980B38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19304));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08980B38u) goto L_08980B38;
    return;
L_08980B38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980B48;
      }
      goto L_08980B40;
    }
L_08980B40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08980B8C;
      }
      goto L_08980B48;
    }
L_08980B48:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 6u);
    aot_gpr[31] = (0x08980B5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19336));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08980B5Cu) goto L_08980B5C;
    return;
L_08980B5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980B6C;
      }
      goto L_08980B64;
    }
L_08980B64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08980B8C;
      }
      goto L_08980B6C;
    }
L_08980B6C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[31] = (0x08980B80u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19296));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08980B80u) goto L_08980B80;
    return;
L_08980B80:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980B8C;
      }
      goto L_08980B88;
    }
L_08980B88:
    aot_gpr[17] = (0u | 2u);
    goto L_08980B8C;
L_08980B8C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980BA4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9560));
    aot_gpr[6] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980BC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980BD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08980C00;
      }
      goto L_08980BF0;
    }
L_08980BF0:
    aot_gpr[31] = (0x08980BF8u);
    // nop
    ctx.pc = 0x08A5B254u;
    return;
L_08980BF8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08980C14;
      }
      goto L_08980C00;
    }
L_08980C00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980C1C;
      }
      goto L_08980C0C;
    }
L_08980C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C34;
      }
      goto L_08980C14;
    }
L_08980C14:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 17u);
      if (branch_taken) {
          goto L_08980C40;
      }
      goto L_08980C1C;
    }
L_08980C1C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08980C28u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08980C28u) goto L_08980C28;
    return;
L_08980C28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08980C34u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08980C34u) goto L_08980C34;
    return;
L_08980C34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (0u | 0u);
    goto L_08980C40;
L_08980C40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980C50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08980C64u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08980BC8;
L_08980C64:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980C74;
      }
      goto L_08980C6C;
    }
L_08980C6C:
    aot_gpr[31] = (0x08980C74u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08980BD4;
L_08980C74:
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980C90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08980CF8;
      }
      goto L_08980CAC;
    }
L_08980CAC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9560));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[31] = (0x08980CC0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08980C50;
L_08980CC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980CE4;
      }
      goto L_08980CCC;
    }
L_08980CCC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08980CD8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08980CD8u) goto L_08980CD8;
    return;
L_08980CD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08980CE4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08980CE4u) goto L_08980CE4;
    return;
L_08980CE4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08980CF8;
      }
      goto L_08980CF0;
    }
L_08980CF0:
    aot_gpr[31] = (0x08980CF8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08980CF8u) goto L_08980CF8;
    return;
L_08980CF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980D0C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980D18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08980D34u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19336));
    ctx.pc = 0x08A5B2F4u;
    return;
L_08980D34:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08980D84;
      }
      goto L_08980D3C;
    }
L_08980D3C:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26200)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08980D7C;
      }
      goto L_08980D4C;
    }
L_08980D4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08980D68u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-19328));
    ctx.pc = 0x08A5AFC4u;
    return;
L_08980D68:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08980D8C;
      }
      goto L_08980D74;
    }
L_08980D74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 66u);
      if (branch_taken) {
          goto L_08980D94;
      }
      goto L_08980D7C;
    }
L_08980D7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08980D94;
      }
      goto L_08980D84;
    }
L_08980D84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 66u);
      if (branch_taken) {
          goto L_08980D94;
      }
      goto L_08980D8C;
    }
L_08980D8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26200), aot_gpr[4]);
    aot_gpr[2] = (0u | 0u);
    goto L_08980D94;
L_08980D94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980DA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08980DBCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08980B10;
L_08980DBC:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08980DE0;
      }
      goto L_08980DC8;
    }
L_08980DC8:
    aot_gpr[31] = (0x08980DD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08980D0C;
L_08980DD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08980DE8;
      }
      goto L_08980DD8;
    }
L_08980DD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08980DF8;
      }
      goto L_08980DE0;
    }
L_08980DE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_08980DF8;
      }
      goto L_08980DE8;
    }
L_08980DE8:
    aot_gpr[31] = (0x08980DF0u);
    // nop
    goto L_08980D18;
L_08980DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08980DF8;
      }
      goto L_08980DF8;
    }
L_08980DF8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] ^ 1u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980E18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] ^ 2u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980E28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[17] = (15u << 16u);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[20] = (32801u << 16u);
    aot_gpr[30] = (32801u << 16u);
    aot_gpr[23] = (32767u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(16960));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-19464));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-19416));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(3));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-9));
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    goto L_08980E98;
L_08980E98:
    aot_gpr[31] = (0x08980EA0u);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_08980EA0:
    aot_gpr[6] = (aot_gpr[2] & aot_gpr[20]);
    aot_gpr[6] = (aot_gpr[6] ^ aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[2] & 1u);
    aot_gpr[4] = (aot_gpr[2] & 32u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08980EEC;
      }
      goto L_08980EC0;
    }
L_08980EC0:
    aot_gpr[4] = (0u | 2u);
    goto L_08980EC4;
L_08980EC4:
    aot_gpr[31] = (0x08980ECCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5B2D4u;
    return;
L_08980ECC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08980F20;
      }
      goto L_08980ED4;
    }
L_08980ED4:
    aot_gpr[31] = (0x08980EDCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08980EDCu) goto L_08980EDC;
    return;
L_08980EDC:
    aot_gpr[31] = (0x08980EE4u);
    aot_gpr[4] = (0u | 100u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08980EE4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08980EC4;
      }
      goto L_08980EEC;
    }
L_08980EEC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08980F20;
      }
      goto L_08980EF4;
    }
L_08980EF4:
    aot_gpr[4] = (0u | 32u);
    goto L_08980EF8;
L_08980EF8:
    aot_gpr[31] = (0x08980F00u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5B2D4u;
    return;
L_08980F00:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08980F20;
      }
      goto L_08980F08;
    }
L_08980F08:
    aot_gpr[31] = (0x08980F10u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08980F10u) goto L_08980F10;
    return;
L_08980F10:
    aot_gpr[31] = (0x08980F18u);
    aot_gpr[4] = (0u | 100u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08980F18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08980EF8;
      }
      goto L_08980F20;
    }
L_08980F20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26200)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08980F30u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08980F30:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08980F94;
      }
      goto L_08980F38;
    }
L_08980F38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08980F48u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5B294u;
    return;
L_08980F48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26200)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08980F58u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08980F58:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08980F8C;
      }
      goto L_08980F60;
    }
L_08980F60:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_08980F80;
      }
      goto L_08980F68;
    }
L_08980F68:
    aot_gpr[4] = (32801u << 16u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08980F9C;
      }
      goto L_08980F78;
    }
L_08980F78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (32801u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 6u, 0x08981044u>(ctx, &aot_mem); return;
      }
      goto L_08980F80;
    }
L_08980F80:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 16u, 0x0898109Cu>(ctx, &aot_mem); return;
      }
      goto L_08980F8C;
    }
L_08980F8C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 132u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 16u, 0x0898109Cu>(ctx, &aot_mem); return;
      }
      goto L_08980F94;
    }
L_08980F94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 132u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 16u, 0x0898109Cu>(ctx, &aot_mem); return;
      }
      goto L_08980F9C;
    }
L_08980F9C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(91));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (32770u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 1u, 0x08981004u>(ctx, &aot_mem); return;
      }
      goto L_08980FAC;
    }
L_08980FAC:
    aot_gpr[4] = (32769u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (32769u << 16u);
      if (branch_taken) {
          goto L_08980FEC;
      }
      goto L_08980FC0;
    }
L_08980FC0:
    aot_gpr[4] = (32769u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[23]);
      if (branch_taken) {
          goto L_08980FFC;
      }
      goto L_08980FD4;
    }
L_08980FD4:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-19280)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08980FEC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(90));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 3u, 0x08981028u>(ctx, &aot_mem); return;
      }
      goto L_08980FFC;
    }
L_08980FFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 14u, 0x08981090u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 1u, 0x08981004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0380(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0380_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_380(Runtime &runtime) {
    runtime.register_generated_unit(380u, 0x08980000u, 4096u, &recomp_unit_0380, &recomp_unit_0380_entry);
    runtime.register_function(0x08980000u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980018u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980020u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980028u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980034u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898003Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980040u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980068u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980070u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980078u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898009Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089800A8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089800CCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089800D8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089800ECu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089800F8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980108u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980118u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980120u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980138u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898013Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898016Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980188u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980194u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898024Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980268u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980280u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898028Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980294u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089802A8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089802B0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089802CCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089802F0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089802F8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980300u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980308u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980314u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898031Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980324u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898032Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980334u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980340u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980354u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898035Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980364u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089803A8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089803B0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089803CCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089803D8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089803FCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980408u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980428u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980430u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980448u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980450u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980468u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980470u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980480u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980488u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898049Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089804CCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089804E8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980500u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898050Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980514u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980528u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980540u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898054Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980558u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980560u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089805FCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980604u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898060Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980614u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898061Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980624u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980638u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980640u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980648u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980658u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980660u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980668u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980670u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980678u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980688u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089806ACu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089806B8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089806C4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089806D0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089806DCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089806E8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089806F4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980700u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898070Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980718u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980734u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980748u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898074Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980758u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980764u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980770u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898077Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980788u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980798u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089807A4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089807B0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089807BCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089807D0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089807E4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089807F0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980804u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980810u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980820u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980838u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898084Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980858u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898086Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980878u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980888u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898089Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089808A4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089808B0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089808BCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089808C8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089808D4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089808E4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089808F0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089808FCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980908u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898091Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980930u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898093Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980950u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898095Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x0898096Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980984u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980998u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089809A4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089809B8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089809C4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089809D4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089809E8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x089809F0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A28u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A30u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A38u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A58u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A60u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A68u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A74u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A80u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A88u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A90u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980A9Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980AA4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980AB8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980AC8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980AD0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980AE0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980AF0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980AF8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980AFCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B00u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B10u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B38u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B40u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B48u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B5Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B64u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B6Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B80u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B88u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980B8Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980BA4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980BC8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980BD4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980BF0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980BF8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C00u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C0Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C14u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C1Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C28u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C34u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C40u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C50u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C64u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C6Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C74u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980C90u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980CACu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980CC0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980CCCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980CD8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980CE4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980CF0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980CF8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D0Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D18u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D34u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D3Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D4Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D68u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D74u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D7Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D84u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D8Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980D94u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DA4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DBCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DC8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DD0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DD8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DE0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DE8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DF0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980DF8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980E08u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980E18u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980E28u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980E98u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980EA0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980EC0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980EC4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980ECCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980ED4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980EDCu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980EE4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980EECu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980EF4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980EF8u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F00u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F08u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F10u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F18u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F20u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F30u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F38u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F48u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F58u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F60u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F68u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F78u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F80u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F8Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F94u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980F9Cu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980FACu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980FC0u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980FD4u, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980FECu, &recomp_unit_0380, "recomp_unit_0380");
    runtime.register_function(0x08980FFCu, &recomp_unit_0380, "recomp_unit_0380");
}
} // namespace psprecomp
