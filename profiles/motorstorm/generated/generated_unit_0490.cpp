#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0490[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 22, 0, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 52,
    0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0,
    60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 69, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0,
    0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    103, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116,
    0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122,
    0, 0, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 129, 130, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0,
    136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 171, 0,
    172, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178,
    0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
};
void recomp_unit_0490_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089EE000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0490[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089EE000;
    case 2u: goto L_089EE010;
    case 3u: goto L_089EE024;
    case 4u: goto L_089EE048;
    case 5u: goto L_089EE05C;
    case 6u: goto L_089EE084;
    case 7u: goto L_089EE094;
    case 8u: goto L_089EE09C;
    case 9u: goto L_089EE0A4;
    case 10u: goto L_089EE0AC;
    case 11u: goto L_089EE0B8;
    case 12u: goto L_089EE0C0;
    case 13u: goto L_089EE0C8;
    case 14u: goto L_089EE0D0;
    case 15u: goto L_089EE0DC;
    case 16u: goto L_089EE0E4;
    case 17u: goto L_089EE114;
    case 18u: goto L_089EE128;
    case 19u: goto L_089EE12C;
    case 20u: goto L_089EE130;
    case 21u: goto L_089EE160;
    case 22u: goto L_089EE194;
    case 23u: goto L_089EE1A0;
    case 24u: goto L_089EE1A4;
    case 25u: goto L_089EE1D4;
    case 26u: goto L_089EE1D8;
    case 27u: goto L_089EE1E4;
    case 28u: goto L_089EE204;
    case 29u: goto L_089EE20C;
    case 30u: goto L_089EE214;
    case 31u: goto L_089EE224;
    case 32u: goto L_089EE230;
    case 33u: goto L_089EE238;
    case 34u: goto L_089EE23C;
    case 35u: goto L_089EE244;
    case 36u: goto L_089EE26C;
    case 37u: goto L_089EE284;
    case 38u: goto L_089EE290;
    case 39u: goto L_089EE2B0;
    case 40u: goto L_089EE2B8;
    case 41u: goto L_089EE2C4;
    case 42u: goto L_089EE2C8;
    case 43u: goto L_089EE2D8;
    case 44u: goto L_089EE2E0;
    case 45u: goto L_089EE314;
    case 46u: goto L_089EE318;
    case 47u: goto L_089EE324;
    case 48u: goto L_089EE33C;
    case 49u: goto L_089EE348;
    case 50u: goto L_089EE368;
    case 51u: goto L_089EE36C;
    case 52u: goto L_089EE37C;
    case 53u: goto L_089EE388;
    case 54u: goto L_089EE390;
    case 55u: goto L_089EE39C;
    case 56u: goto L_089EE3A8;
    case 57u: goto L_089EE3C8;
    case 58u: goto L_089EE3E4;
    case 59u: goto L_089EE3EC;
    case 60u: goto L_089EE400;
    case 61u: goto L_089EE40C;
    case 62u: goto L_089EE478;
    case 63u: goto L_089EE488;
    case 64u: goto L_089EE49C;
    case 65u: goto L_089EE4A4;
    case 66u: goto L_089EE4D8;
    case 67u: goto L_089EE4E0;
    case 68u: goto L_089EE4E8;
    case 69u: goto L_089EE4F8;
    case 70u: goto L_089EE500;
    case 71u: goto L_089EE638;
    case 72u: goto L_089EE644;
    case 73u: goto L_089EE674;
    case 74u: goto L_089EE67C;
    case 75u: goto L_089EE6B4;
    case 76u: goto L_089EE6BC;
    case 77u: goto L_089EE6C8;
    case 78u: goto L_089EE6E8;
    case 79u: goto L_089EE6F0;
    case 80u: goto L_089EE708;
    case 81u: goto L_089EE710;
    case 82u: goto L_089EE718;
    case 83u: goto L_089EE720;
    case 84u: goto L_089EE72C;
    case 85u: goto L_089EE74C;
    case 86u: goto L_089EE770;
    case 87u: goto L_089EE778;
    case 88u: goto L_089EE7A0;
    case 89u: goto L_089EE7A8;
    case 90u: goto L_089EE7B0;
    case 91u: goto L_089EE7BC;
    case 92u: goto L_089EE7DC;
    case 93u: goto L_089EE7E4;
    case 94u: goto L_089EE808;
    case 95u: goto L_089EE838;
    case 96u: goto L_089EE87C;
    case 97u: goto L_089EE884;
    case 98u: goto L_089EE8A4;
    case 99u: goto L_089EE8AC;
    case 100u: goto L_089EE8C4;
    case 101u: goto L_089EE8CC;
    case 102u: goto L_089EE8F8;
    case 103u: goto L_089EE900;
    case 104u: goto L_089EE904;
    case 105u: goto L_089EE90C;
    case 106u: goto L_089EE914;
    case 107u: goto L_089EE91C;
    case 108u: goto L_089EE924;
    case 109u: goto L_089EE948;
    case 110u: goto L_089EE950;
    case 111u: goto L_089EE95C;
    case 112u: goto L_089EE984;
    case 113u: goto L_089EE98C;
    case 114u: goto L_089EE9B8;
    case 115u: goto L_089EE9F4;
    case 116u: goto L_089EE9FC;
    case 117u: goto L_089EEA18;
    case 118u: goto L_089EEA20;
    case 119u: goto L_089EEA28;
    case 120u: goto L_089EEA4C;
    case 121u: goto L_089EEA68;
    case 122u: goto L_089EEA7C;
    case 123u: goto L_089EEA88;
    case 124u: goto L_089EEA90;
    case 125u: goto L_089EEAA4;
    case 126u: goto L_089EEACC;
    case 127u: goto L_089EEAE8;
    case 128u: goto L_089EEB04;
    case 129u: goto L_089EEB10;
    case 130u: goto L_089EEB14;
    case 131u: goto L_089EEB18;
    case 132u: goto L_089EEB3C;
    case 133u: goto L_089EEB5C;
    case 134u: goto L_089EEB64;
    case 135u: goto L_089EEB78;
    case 136u: goto L_089EEB80;
    case 137u: goto L_089EEB88;
    case 138u: goto L_089EEB90;
    case 139u: goto L_089EEB98;
    case 140u: goto L_089EEBAC;
    case 141u: goto L_089EEBB4;
    case 142u: goto L_089EEBC0;
    case 143u: goto L_089EEBDC;
    case 144u: goto L_089EEBF4;
    case 145u: goto L_089EEC10;
    case 146u: goto L_089EEC18;
    case 147u: goto L_089EEC24;
    case 148u: goto L_089EEC2C;
    case 149u: goto L_089EEC40;
    case 150u: goto L_089EEC54;
    case 151u: goto L_089EEC68;
    case 152u: goto L_089EECAC;
    case 153u: goto L_089EECB8;
    case 154u: goto L_089EECC0;
    case 155u: goto L_089EECCC;
    case 156u: goto L_089EECD8;
    case 157u: goto L_089EECE0;
    case 158u: goto L_089EECEC;
    case 159u: goto L_089EECF8;
    case 160u: goto L_089EED08;
    case 161u: goto L_089EED24;
    case 162u: goto L_089EED34;
    case 163u: goto L_089EED48;
    case 164u: goto L_089EED4C;
    case 165u: goto L_089EED58;
    case 166u: goto L_089EED88;
    case 167u: goto L_089EEDB8;
    case 168u: goto L_089EEDD8;
    case 169u: goto L_089EEDE4;
    case 170u: goto L_089EEDF0;
    case 171u: goto L_089EEDF8;
    case 172u: goto L_089EEE00;
    case 173u: goto L_089EEE10;
    case 174u: goto L_089EEE18;
    case 175u: goto L_089EEE24;
    case 176u: goto L_089EEE40;
    case 177u: goto L_089EEE70;
    case 178u: goto L_089EEE7C;
    case 179u: goto L_089EEE88;
    case 180u: goto L_089EEE98;
    case 181u: goto L_089EEEAC;
    case 182u: goto L_089EEEB4;
    case 183u: goto L_089EEEC0;
    case 184u: goto L_089EEEDC;
    case 185u: goto L_089EEF24;
    case 186u: goto L_089EEF2C;
    case 187u: goto L_089EEF4C;
    case 188u: goto L_089EEF60;
    case 189u: goto L_089EEF74;
    case 190u: goto L_089EEF84;
    case 191u: goto L_089EEFA4;
    case 192u: goto L_089EEFAC;
    case 193u: goto L_089EEFB4;
    case 194u: goto L_089EEFBC;
    case 195u: goto L_089EEFC8;
    case 196u: goto L_089EEFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089EE000:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE010:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(18));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089EE024u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE024u) goto L_089EE024;
    return;
L_089EE024:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21555));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089EE048;
L_089EE048:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
      if (branch_taken) {
          goto L_089EE048;
      }
      goto L_089EE05C;
    }
L_089EE05C:
    aot_gpr[2] = (aot_gpr[3] & 65535u);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 16u));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 16u));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[3] = (~(0u | aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089EE084;
L_089EE084:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[31] = (0x089EE094u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08A5A8BCu;
    return;
L_089EE094:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EE0C0;
      }
      goto L_089EE09C;
    }
L_089EE09C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 232u, 0x089EDF98u>(ctx, &aot_mem); return;
      }
      goto L_089EE0A4;
    }
L_089EE0A4:
    aot_gpr[18] = (0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 232u, 0x089EDF98u>(ctx, &aot_mem); return;
L_089EE0AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EE0B8u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = 0x08A5A904u;
    return;
L_089EE0B8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089EE09C;
      }
      goto L_089EE0C0;
    }
L_089EE0C0:
    aot_gpr[31] = (0x089EE0C8u);
    aot_gpr[18] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 114u, 0x089ED844u>(ctx, &aot_mem) && ctx.pc == 0x089EE0C8u) goto L_089EE0C8;
    return;
L_089EE0C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 232u, 0x089EDF98u>(ctx, &aot_mem); return;
L_089EE0D0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EE0DCu);
    aot_gpr[21] = (0u + 0u);
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EE0DC:
    aot_gpr[2] = (aot_gpr[21] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 242u, 0x089EDFECu>(ctx, &aot_mem); return;
L_089EE0E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[17]);
    aot_gpr[31] = (0x089EE114u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089EE114u) goto L_089EE114;
    return;
L_089EE114:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-2064));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089EE160;
      }
      goto L_089EE128;
    }
L_089EE128:
    aot_gpr[21] = (0u + 0u);
    goto L_089EE12C;
L_089EE12C:
    aot_gpr[29] = (aot_gpr[20] + 0u);
    goto L_089EE130;
L_089EE130:
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE160:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(72), 0u);
    aot_gpr[31] = (0x089EE194u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EE194:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089EE1D8;
      }
      goto L_089EE1A0;
    }
L_089EE1A0:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    goto L_089EE1A4;
L_089EE1A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 5u));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[30]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[7] << (aot_gpr[4] & 31u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) > static_cast<std::int32_t>(aot_gpr[4]) ? aot_gpr[6] : aot_gpr[4]);
      if (branch_taken) {
          goto L_089EE1A4;
      }
      goto L_089EE1D4;
    }
L_089EE1D4:
    aot_gpr[16] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089EE1D8;
L_089EE1D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EE1E4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EE1E4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089EE204u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(8), 0u);
    ctx.pc = 0x08A5A8FCu;
    return;
L_089EE204:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EE4D8;
      }
      goto L_089EE20C;
    }
L_089EE20C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (0u + 0u);
      if (branch_taken) {
          goto L_089EE12C;
      }
      goto L_089EE214;
    }
L_089EE214:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EE224u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EE224:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[21] = (0u + 0u);
      if (branch_taken) {
          goto L_089EE244;
      }
      goto L_089EE230;
    }
L_089EE230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089EE49C;
L_089EE238:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_089EE23C;
L_089EE23C:
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089EE49C;
    }
    goto L_089EE244;
L_089EE244:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 5u));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (aot_gpr[3] << (aot_gpr[5] & 31u));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[3]);
    if (aot_gpr[4] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089EE23C;
    }
    goto L_089EE26C;
L_089EE26C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2176) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_089EE23C;
    }
    goto L_089EE284;
L_089EE284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EE290u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EE290:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_089EE36C;
    }
    goto L_089EE2B0;
L_089EE2B0:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089EE3A8;
      }
      goto L_089EE2B8;
    }
L_089EE2B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089EE3A8;
      }
      goto L_089EE2C4;
    }
L_089EE2C4:
    aot_gpr[17] = (0u + 0u);
    goto L_089EE2C8;
L_089EE2C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EE2D8u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EE2D8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(22)));
      if (branch_taken) {
          goto L_089EE238;
      }
      goto L_089EE2E0;
    }
L_089EE2E0:
    aot_gpr[2] = (aot_gpr[30] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(116), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(120), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(172), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(112), aot_gpr[4]);
      if (branch_taken) {
          goto L_089EE318;
      }
      goto L_089EE314;
    }
L_089EE314:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_089EE318;
L_089EE318:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[31] = (0x089EE324u);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089EE324u) goto L_089EE324;
    return;
L_089EE324:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(2176) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EE238;
      }
      goto L_089EE33C;
    }
L_089EE33C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EE348u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EE348:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089EE2B0;
      }
      goto L_089EE368;
    }
L_089EE368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089EE36C;
L_089EE36C:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[31] = (0x089EE37Cu);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = 0x08A5A934u;
    return;
L_089EE37C:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089EE3E4;
      }
      goto L_089EE388;
    }
L_089EE388:
    aot_gpr[31] = (0x089EE390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 114u, 0x089ED844u>(ctx, &aot_mem) && ctx.pc == 0x089EE390u) goto L_089EE390;
    return;
L_089EE390:
    aot_gpr[3] = (0u | 53006u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EE2C4;
      }
      goto L_089EE39C;
    }
L_089EE39C:
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_089EE2C8;
L_089EE3A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2048));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u + 0u);
    aot_gpr[8] = (aot_gpr[30] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x089EE3C8u);
    aot_gpr[9] = (aot_gpr[30] + 0u);
    ctx.pc = 0x08A5A92Cu;
    return;
L_089EE3C8:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(30)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (((aot_gpr[2] & 0x00FF00FFu) << 8u) | ((aot_gpr[2] & 0xFF00FF00u) >> 8u));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089EE388;
      }
      goto L_089EE3E4;
    }
L_089EE3E4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089EE2C8;
      }
      goto L_089EE3EC;
    }
L_089EE3EC:
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EE2C8;
      }
      goto L_089EE400;
    }
L_089EE400:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(52));
    if (aot_gpr[4] != aot_gpr[2]) {
    aot_gpr[17] = (0u + 0u);
        goto L_089EE2C8;
    }
    goto L_089EE40C;
L_089EE40C:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[10]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[10]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[7]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(76), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(80), aot_gpr[9]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(84), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(96), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(104), aot_gpr[7]);
      if (branch_taken) {
          goto L_089EE2C4;
      }
      goto L_089EE478;
    }
L_089EE478:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (0u | 43981u);
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[17] = (0u + 0u);
        goto L_089EE2C8;
    }
    goto L_089EE488;
L_089EE488:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(82)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089EE2C8;
L_089EE49C:
    aot_gpr[31] = (0x089EE4A4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EE4A4:
    aot_gpr[29] = (aot_gpr[20] + 0u);
    aot_gpr[29] = (aot_gpr[30] + 0u);
    aot_gpr[2] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(236)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(232)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE4D8:
    aot_gpr[31] = (0x089EE4E0u);
    aot_gpr[21] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 114u, 0x089ED844u>(ctx, &aot_mem) && ctx.pc == 0x089EE4E0u) goto L_089EE4E0;
    return;
L_089EE4E0:
    aot_gpr[29] = (aot_gpr[20] + 0u);
    goto L_089EE130;
L_089EE4E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089EE4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 63u, 0x089EB3C0u>(ctx, &aot_mem) && ctx.pc == 0x089EE4F8u) goto L_089EE4F8;
    return;
L_089EE4F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EE638;
      }
      goto L_089EE500;
    }
L_089EE500:
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-7964));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13964));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13900));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13848));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13796));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13504));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13360));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13280));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-13260));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13188));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-6588));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-13060));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-12780));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12340));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-6088));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11972));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-8944));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11964));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-11700));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-11268));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-10904));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-9220));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-10736));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-10500));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[2] = (2207u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-10216));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    aot_gpr[3] = (2207u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-8568));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    goto L_089EE638;
L_089EE638:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE644:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x089EE674u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    ctx.pc = 0x08A5A90Cu;
    return;
L_089EE674:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EE7DC;
      }
      goto L_089EE67C;
    }
L_089EE67C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[3] = (((aot_gpr[3] & 0x00FF00FFu) << 8u) | ((aot_gpr[3] & 0xFF00FF00u) >> 8u));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (0x089EE6B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.pc = 0x08A5A8D4u;
    return;
L_089EE6B4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EE7A8;
      }
      goto L_089EE6BC;
    }
L_089EE6BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089EE74C;
      }
      goto L_089EE6C8;
    }
L_089EE6C8:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4105));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EE6E8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    ctx.pc = 0x08A5A8E4u;
    return;
L_089EE6E8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EE7A8;
      }
      goto L_089EE6F0;
    }
L_089EE6F0:
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EE708u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    ctx.pc = 0x08A5A8E4u;
    return;
L_089EE708:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EE7A8;
      }
      goto L_089EE710;
    }
L_089EE710:
    aot_gpr[31] = (0x089EE718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 110u, 0x089EB6ACu>(ctx, &aot_mem) && ctx.pc == 0x089EE718u) goto L_089EE718;
    return;
L_089EE718:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EE808;
      }
      goto L_089EE720;
    }
L_089EE720:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089EE72Cu);
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(3));
    ctx.pc = 0x08A5A914u;
    return;
L_089EE72C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE74C:
    aot_gpr[5] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[31] = (0x089EE770u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.pc = 0x08A5A8C4u;
    return;
L_089EE770:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
      if (branch_taken) {
          goto L_089EE7A8;
      }
      goto L_089EE778;
    }
L_089EE778:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[2] = (((aot_gpr[2] & 0x00FF00FFu) << 8u) | ((aot_gpr[2] & 0xFF00FF00u) >> 8u));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4105));
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EE7A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    ctx.pc = 0x08A5A8E4u;
    return;
L_089EE7A0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089EE6F0;
      }
      goto L_089EE7A8;
    }
L_089EE7A8:
    aot_gpr[31] = (0x089EE7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 114u, 0x089ED844u>(ctx, &aot_mem) && ctx.pc == 0x089EE7B0u) goto L_089EE7B0;
    return;
L_089EE7B0:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089EE7BCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = 0x08A5A914u;
    return;
L_089EE7BC:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE7DC:
    aot_gpr[31] = (0x089EE7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 114u, 0x089ED844u>(ctx, &aot_mem) && ctx.pc == 0x089EE7E4u) goto L_089EE7E4;
    return;
L_089EE7E4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE808:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] & 65535u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089EE87Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5A90Cu;
    return;
L_089EE87C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[16] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EE984;
      }
      goto L_089EE884;
    }
L_089EE884:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4105));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EE8A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    ctx.pc = 0x08A5A8E4u;
    return;
L_089EE8A4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089EE948;
      }
      goto L_089EE8AC;
    }
L_089EE8AC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EE8C4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    ctx.pc = 0x08A5A8E4u;
    return;
L_089EE8C4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (((aot_gpr[19] & 0x00FF00FFu) << 8u) | ((aot_gpr[19] & 0xFF00FF00u) >> 8u));
      if (branch_taken) {
          goto L_089EE948;
      }
      goto L_089EE8CC;
    }
L_089EE8CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[20]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[31] = (0x089EE8F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.pc = 0x08A5A8ECu;
    return;
L_089EE8F8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EE9F4;
      }
      goto L_089EE900;
    }
L_089EE900:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_089EE904;
L_089EE904:
    aot_gpr[31] = (0x089EE90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 110u, 0x089EB6ACu>(ctx, &aot_mem) && ctx.pc == 0x089EE90Cu) goto L_089EE90C;
    return;
L_089EE90C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EE9B8;
      }
      goto L_089EE914;
    }
L_089EE914:
    aot_gpr[31] = (0x089EE91Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = 0x08A5A914u;
    return;
L_089EE91C:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089EE924;
L_089EE924:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE948:
    aot_gpr[31] = (0x089EE950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 114u, 0x089ED844u>(ctx, &aot_mem) && ctx.pc == 0x089EE950u) goto L_089EE950;
    return;
L_089EE950:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089EE95Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = 0x08A5A914u;
    return;
L_089EE95C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE984:
    aot_gpr[31] = (0x089EE98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 114u, 0x089ED844u>(ctx, &aot_mem) && ctx.pc == 0x089EE98Cu) goto L_089EE98C;
    return;
L_089EE98C:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE9B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE9F4:
    aot_gpr[31] = (0x089EE9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0489_entry, 489u, 114u, 0x089ED844u>(ctx, &aot_mem) && ctx.pc == 0x089EE9FCu) goto L_089EE9FC;
    return;
L_089EE9FC:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (65535u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 12530u);
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE904;
      }
      goto L_089EEA18;
    }
L_089EEA18:
    aot_gpr[31] = (0x089EEA20u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = 0x08A5A914u;
    return;
L_089EEA20:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_089EE924;
L_089EEA28:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9768));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEA4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089EEA90;
      }
      goto L_089EEA68;
    }
L_089EEA68:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9768));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x089EEA7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089EEB98;
L_089EEA7C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA90;
      }
      goto L_089EEA88;
    }
L_089EEA88:
    aot_gpr[31] = (0x089EEA90u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089EEA90u) goto L_089EEA90;
    return;
L_089EEA90:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEAA4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089EEACCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EEACCu) goto L_089EEACC;
    return;
L_089EEACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEAE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_089EEB14;
      }
      goto L_089EEB04;
    }
L_089EEB04:
    aot_gpr[7] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089EEB18;
      }
      goto L_089EEB10;
    }
L_089EEB10:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_089EEB14;
L_089EEB14:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_089EEB18;
L_089EEB18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089EEB3Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EEB3Cu) goto L_089EEB3C;
    return;
L_089EEB3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEB64;
      }
      goto L_089EEB5C;
    }
L_089EEB5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089EEB64;
      }
      goto L_089EEB64;
    }
L_089EEB64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEB78:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEB80:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEB88:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEB90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEB98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_089EEBB4;
      }
      goto L_089EEBAC;
    }
L_089EEBAC:
    aot_gpr[31] = (0x089EEBB4u);
    aot_gpr[5] = (0u | 1u);
    goto L_089EEB88;
L_089EEBB4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEBC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089EEBDCu);
    aot_gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EEBDCu) goto L_089EEBDC;
    return;
L_089EEBDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1024), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEBF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089EEC2C;
      }
      goto L_089EEC10;
    }
L_089EEC10:
    aot_gpr[31] = (0x089EEC18u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 10u, 0x089EF094u>(ctx, &aot_mem) && ctx.pc == 0x089EEC18u) goto L_089EEC18;
    return;
L_089EEC18:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEC2C;
      }
      goto L_089EEC24;
    }
L_089EEC24:
    aot_gpr[31] = (0x089EEC2Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089EEC2Cu) goto L_089EEC2C;
    return;
L_089EEC2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEC40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089EEC54u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 23u, 0x089EF128u>(ctx, &aot_mem) && ctx.pc == 0x089EEC54u) goto L_089EEC54;
    return;
L_089EEC54:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEC68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089EECACu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EECACu) goto L_089EECAC;
    return;
L_089EECAC:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (0u | 38u);
    aot_gpr[18] = (0u | 61u);
    goto L_089EECB8;
L_089EECB8:
    aot_gpr[31] = (0x089EECC0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089EECC0u) goto L_089EECC0;
    return;
L_089EECC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
        goto L_089EED4C;
    }
    goto L_089EECCC;
L_089EECCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
        goto L_089EED4C;
    }
    goto L_089EECD8;
L_089EECD8:
    { const bool branch_taken = aot_gpr[22] == aot_gpr[17];
    aot_gpr[4] = (aot_gpr[22] - aot_gpr[17]);
      if (branch_taken) {
          goto L_089EECEC;
      }
      goto L_089EECE0;
    }
L_089EECE0:
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] - aot_gpr[17]);
    goto L_089EECEC;
L_089EECEC:
    aot_gpr[23] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[31] = (0x089EECF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089EECF8u) goto L_089EECF8;
    return;
L_089EECF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089EED08u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 56u, 0x089EF30Cu>(ctx, &aot_mem) && ctx.pc == 0x089EED08u) goto L_089EED08;
    return;
L_089EED08:
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[22] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] - aot_gpr[17]);
    aot_gpr[23] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[31] = (0x089EED24u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089EED24u) goto L_089EED24;
    return;
L_089EED24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089EED34u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 56u, 0x089EF30Cu>(ctx, &aot_mem) && ctx.pc == 0x089EED34u) goto L_089EED34;
    return;
L_089EED34:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[22] - aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EED88;
      }
      goto L_089EED48;
    }
L_089EED48:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089EED4C;
L_089EED4C:
    aot_gpr[4] = (aot_gpr[21] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EECB8;
      }
      goto L_089EED58;
    }
L_089EED58:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EED88:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEDB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_089EEDD8;
L_089EEDD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089EEE18;
    }
    goto L_089EEDE4;
L_089EEDE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_089EEE18;
    }
    goto L_089EEDF0;
L_089EEDF0:
    if (aot_gpr[18] != 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089EEDF8;
    }
    goto L_089EEDF8;
L_089EEDF8:
    aot_gpr[31] = (0x089EEE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 95u, 0x089EF52Cu>(ctx, &aot_mem) && ctx.pc == 0x089EEE00u) goto L_089EEE00;
    return;
L_089EEE00:
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EEE10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 95u, 0x089EF52Cu>(ctx, &aot_mem) && ctx.pc == 0x089EEE10u) goto L_089EEE10;
    return;
L_089EEE10:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089EEE18;
L_089EEE18:
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EEDD8;
      }
      goto L_089EEE24;
    }
L_089EEE24:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_089EEE40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_089EEE70;
L_089EEE70:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
        goto L_089EEEB4;
    }
    goto L_089EEE7C;
L_089EEE7C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EEEB4;
      }
      goto L_089EEE88;
    }
L_089EEE88:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089EEE98u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089EEE98u) goto L_089EEE98;
    return;
L_089EEE98:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089EEEACu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x089EEEACu) goto L_089EEEAC;
    return;
L_089EEEAC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EEEC0;
      }
      goto L_089EEEB4;
    }
L_089EEEB4:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EEE70;
      }
      goto L_089EEEC0;
    }
L_089EEEC0:
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
L_089EEEDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    aot_gpr[19] = (aot_gpr[9] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x089EEF24u);
    aot_gpr[21] = (aot_gpr[19] + aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089EEF24u) goto L_089EEF24;
    return;
L_089EEF24:
    aot_gpr[31] = (0x089EEF2Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089EEF2Cu) goto L_089EEF2C;
    return;
L_089EEF2C:
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 270u);
    aot_gpr[31] = (0x089EEF4Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-11176));
    goto L_089EEAE8;
L_089EEF4C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089EEF60u);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089EEF60u) goto L_089EEF60;
    return;
L_089EEF60:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089EEF74u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 111u, 0x089EF67Cu>(ctx, &aot_mem) && ctx.pc == 0x089EEF74u) goto L_089EEF74;
    return;
L_089EEF74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089EEFAC;
      }
      goto L_089EEF84;
    }
L_089EEF84:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089EEFA4u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    goto L_089EEE40;
L_089EEFA4:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1024), aot_gpr[18]);
    goto L_089EEFAC;
L_089EEFAC:
    aot_gpr[31] = (0x089EEFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x089EEFB4u) goto L_089EEFB4;
    return;
L_089EEFB4:
    aot_gpr[31] = (0x089EEFBCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x089EEFBCu) goto L_089EEFBC;
    return;
L_089EEFBC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089EEFC8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089EEAA4;
L_089EEFC8:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EEFF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    ctx.pc = 0x089EF000u; return;
}

void recomp_unit_0490(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0490_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_490(Runtime &runtime) {
    runtime.register_generated_unit(490u, 0x089EE000u, 4096u, &recomp_unit_0490, &recomp_unit_0490_entry);
    runtime.register_function(0x089EE000u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE010u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE024u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE048u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE05Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE084u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE094u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE09Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE0A4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE0ACu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE0B8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE0C0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE0C8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE0D0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE0DCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE0E4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE114u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE128u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE12Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE130u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE160u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE194u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE1A0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE1A4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE1D4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE1D8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE1E4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE204u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE20Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE214u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE224u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE230u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE238u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE23Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE244u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE26Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE284u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE290u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE2B0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE2B8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE2C4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE2C8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE2D8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE2E0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE314u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE318u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE324u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE33Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE348u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE368u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE36Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE37Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE388u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE390u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE39Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE3A8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE3C8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE3E4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE3ECu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE400u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE40Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE478u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE488u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE49Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE4A4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE4D8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE4E0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE4E8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE4F8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE500u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE638u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE644u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE674u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE67Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE6B4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE6BCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE6C8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE6E8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE6F0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE708u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE710u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE718u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE720u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE72Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE74Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE770u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE778u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE7A0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE7A8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE7B0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE7BCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE7DCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE7E4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE808u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE838u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE87Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE884u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE8A4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE8ACu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE8C4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE8CCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE8F8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE900u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE904u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE90Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE914u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE91Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE924u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE948u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE950u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE95Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE984u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE98Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE9B8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE9F4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EE9FCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEA18u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEA20u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEA28u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEA4Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEA68u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEA7Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEA88u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEA90u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEAA4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEACCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEAE8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB04u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB10u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB14u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB18u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB3Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB5Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB64u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB78u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB80u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB88u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB90u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEB98u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEBACu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEBB4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEBC0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEBDCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEBF4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEC10u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEC18u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEC24u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEC2Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEC40u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEC54u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEC68u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EECACu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EECB8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EECC0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EECCCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EECD8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EECE0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EECECu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EECF8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EED08u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EED24u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EED34u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EED48u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EED4Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EED58u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EED88u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEDB8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEDD8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEDE4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEDF0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEDF8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE00u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE10u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE18u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE24u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE40u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE70u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE7Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE88u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEE98u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEEACu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEEB4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEEC0u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEEDCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEF24u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEF2Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEF4Cu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEF60u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEF74u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEF84u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEFA4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEFACu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEFB4u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEFBCu, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEFC8u, &recomp_unit_0490, "recomp_unit_0490");
    runtime.register_function(0x089EEFF4u, &recomp_unit_0490, "recomp_unit_0490");
}
} // namespace psprecomp
