#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0034[1023] = {
    1, 0, 0, 2, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0,
    17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0,
    0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 119, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132,
    0, 133, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 140, 141, 0, 142, 0, 0, 0, 0, 0, 143,
    0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0,
    0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0,
    0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186,
};
void recomp_unit_0034_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08826000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0034[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08826000;
    case 2u: goto L_0882600C;
    case 3u: goto L_0882601C;
    case 4u: goto L_08826020;
    case 5u: goto L_0882603C;
    case 6u: goto L_08826058;
    case 7u: goto L_08826070;
    case 8u: goto L_0882608C;
    case 9u: goto L_08826094;
    case 10u: goto L_088260A4;
    case 11u: goto L_088260AC;
    case 12u: goto L_088260CC;
    case 13u: goto L_088260E0;
    case 14u: goto L_088260E8;
    case 15u: goto L_088260F0;
    case 16u: goto L_088260F8;
    case 17u: goto L_08826100;
    case 18u: goto L_08826108;
    case 19u: goto L_08826128;
    case 20u: goto L_08826160;
    case 21u: goto L_0882617C;
    case 22u: goto L_08826194;
    case 23u: goto L_088261A4;
    case 24u: goto L_088261AC;
    case 25u: goto L_088261C0;
    case 26u: goto L_088261E4;
    case 27u: goto L_08826200;
    case 28u: goto L_0882621C;
    case 29u: goto L_08826228;
    case 30u: goto L_08826234;
    case 31u: goto L_08826254;
    case 32u: goto L_08826268;
    case 33u: goto L_08826290;
    case 34u: goto L_088262A0;
    case 35u: goto L_088262B0;
    case 36u: goto L_088262B4;
    case 37u: goto L_088262DC;
    case 38u: goto L_088262EC;
    case 39u: goto L_0882630C;
    case 40u: goto L_0882633C;
    case 41u: goto L_08826348;
    case 42u: goto L_08826354;
    case 43u: goto L_08826368;
    case 44u: goto L_08826378;
    case 45u: goto L_08826394;
    case 46u: goto L_088263B4;
    case 47u: goto L_088263CC;
    case 48u: goto L_088263E0;
    case 49u: goto L_088263F4;
    case 50u: goto L_08826404;
    case 51u: goto L_0882641C;
    case 52u: goto L_08826458;
    case 53u: goto L_08826464;
    case 54u: goto L_08826474;
    case 55u: goto L_08826490;
    case 56u: goto L_088264C4;
    case 57u: goto L_088264DC;
    case 58u: goto L_088264F8;
    case 59u: goto L_08826518;
    case 60u: goto L_08826528;
    case 61u: goto L_08826534;
    case 62u: goto L_08826554;
    case 63u: goto L_08826564;
    case 64u: goto L_0882659C;
    case 65u: goto L_088265A8;
    case 66u: goto L_088265D0;
    case 67u: goto L_088265E8;
    case 68u: goto L_08826600;
    case 69u: goto L_08826610;
    case 70u: goto L_08826650;
    case 71u: goto L_08826658;
    case 72u: goto L_08826678;
    case 73u: goto L_08826690;
    case 74u: goto L_088266B0;
    case 75u: goto L_088266C0;
    case 76u: goto L_088266EC;
    case 77u: goto L_088266F4;
    case 78u: goto L_08826708;
    case 79u: goto L_08826710;
    case 80u: goto L_08826728;
    case 81u: goto L_08826740;
    case 82u: goto L_0882674C;
    case 83u: goto L_08826754;
    case 84u: goto L_08826764;
    case 85u: goto L_08826778;
    case 86u: goto L_088267AC;
    case 87u: goto L_088267EC;
    case 88u: goto L_088267F8;
    case 89u: goto L_08826808;
    case 90u: goto L_0882682C;
    case 91u: goto L_08826844;
    case 92u: goto L_08826864;
    case 93u: goto L_08826898;
    case 94u: goto L_088268A4;
    case 95u: goto L_088268B0;
    case 96u: goto L_088268C0;
    case 97u: goto L_088268CC;
    case 98u: goto L_088268E0;
    case 99u: goto L_088268E8;
    case 100u: goto L_088268F8;
    case 101u: goto L_08826900;
    case 102u: goto L_08826930;
    case 103u: goto L_08826938;
    case 104u: goto L_08826944;
    case 105u: goto L_08826948;
    case 106u: goto L_0882695C;
    case 107u: goto L_08826978;
    case 108u: goto L_088269B0;
    case 109u: goto L_088269C4;
    case 110u: goto L_088269D4;
    case 111u: goto L_088269DC;
    case 112u: goto L_088269E4;
    case 113u: goto L_08826A20;
    case 114u: goto L_08826A24;
    case 115u: goto L_08826A40;
    case 116u: goto L_08826A58;
    case 117u: goto L_08826A68;
    case 118u: goto L_08826A70;
    case 119u: goto L_08826A74;
    case 120u: goto L_08826A7C;
    case 121u: goto L_08826A9C;
    case 122u: goto L_08826AB4;
    case 123u: goto L_08826AC8;
    case 124u: goto L_08826AE8;
    case 125u: goto L_08826B10;
    case 126u: goto L_08826B1C;
    case 127u: goto L_08826B3C;
    case 128u: goto L_08826B44;
    case 129u: goto L_08826B4C;
    case 130u: goto L_08826B6C;
    case 131u: goto L_08826B74;
    case 132u: goto L_08826B7C;
    case 133u: goto L_08826B84;
    case 134u: goto L_08826B8C;
    case 135u: goto L_08826B94;
    case 136u: goto L_08826BA4;
    case 137u: goto L_08826BB4;
    case 138u: goto L_08826BBC;
    case 139u: goto L_08826BC4;
    case 140u: goto L_08826BD8;
    case 141u: goto L_08826BDC;
    case 142u: goto L_08826BE4;
    case 143u: goto L_08826BFC;
    case 144u: goto L_08826C04;
    case 145u: goto L_08826C14;
    case 146u: goto L_08826C1C;
    case 147u: goto L_08826C38;
    case 148u: goto L_08826C58;
    case 149u: goto L_08826C74;
    case 150u: goto L_08826C8C;
    case 151u: goto L_08826C94;
    case 152u: goto L_08826CA0;
    case 153u: goto L_08826CCC;
    case 154u: goto L_08826CD8;
    case 155u: goto L_08826CFC;
    case 156u: goto L_08826D08;
    case 157u: goto L_08826D2C;
    case 158u: goto L_08826D34;
    case 159u: goto L_08826D40;
    case 160u: goto L_08826D58;
    case 161u: goto L_08826D64;
    case 162u: goto L_08826D74;
    case 163u: goto L_08826D8C;
    case 164u: goto L_08826DC8;
    case 165u: goto L_08826DD8;
    case 166u: goto L_08826DE4;
    case 167u: goto L_08826DF8;
    case 168u: goto L_08826E0C;
    case 169u: goto L_08826E1C;
    case 170u: goto L_08826E2C;
    case 171u: goto L_08826E40;
    case 172u: goto L_08826E54;
    case 173u: goto L_08826E80;
    case 174u: goto L_08826EAC;
    case 175u: goto L_08826EE0;
    case 176u: goto L_08826F10;
    case 177u: goto L_08826F50;
    case 178u: goto L_08826F58;
    case 179u: goto L_08826F70;
    case 180u: goto L_08826F88;
    case 181u: goto L_08826FA0;
    case 182u: goto L_08826FB8;
    case 183u: goto L_08826FC8;
    case 184u: goto L_08826FD8;
    case 185u: goto L_08826FE8;
    case 186u: goto L_08826FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08826000:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08826020;
      }
      goto L_0882600C;
    }
L_0882600C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0882601Cu);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 171u, 0x08825BC4u>(ctx, &aot_mem) && ctx.pc == 0x0882601Cu) goto L_0882601C;
    return;
L_0882601C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08826020;
L_08826020:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882603C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088260CC;
      }
      goto L_08826058;
    }
L_08826058:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12288));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882608C;
      }
      goto L_08826070;
    }
L_08826070:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0882608Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882608Cu) goto L_0882608C;
    return;
L_0882608C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_088260A4;
      }
      goto L_08826094;
    }
L_08826094:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24568));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_088260A4;
L_088260A4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088260CC;
      }
      goto L_088260AC;
    }
L_088260AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088260CCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088260CCu) goto L_088260CC;
    return;
L_088260CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088260E0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088260E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088260F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088260F8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826100:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826108:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22912), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826128:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08826160u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08826160u) goto L_08826160;
    return;
L_08826160:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12208));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0882617Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 213u, 0x08A4BF54u>(ctx, &aot_mem) && ctx.pc == 0x0882617Cu) goto L_0882617C;
    return;
L_0882617C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088261C0;
      }
      goto L_08826194;
    }
L_08826194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_088261AC;
      }
      goto L_088261A4;
    }
L_088261A4:
    aot_gpr[31] = (0x088261ACu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08826A9C;
L_088261AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08826194;
      }
      goto L_088261C0;
    }
L_088261C0:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_088261E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08826254;
      }
      goto L_08826200;
    }
L_08826200:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12208));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0882621Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0882621Cu) goto L_0882621C;
    return;
L_0882621C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08826228u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08826228u) goto L_08826228;
    return;
L_08826228:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08826254;
      }
      goto L_08826234;
    }
L_08826234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08826254u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08826254u) goto L_08826254;
    return;
L_08826254:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826268:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08826290u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x08826290u) goto L_08826290;
    return;
L_08826290:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088262B4;
      }
      goto L_088262A0;
    }
L_088262A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088262B0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0582_entry, 582u, 181u, 0x08A4AD70u>(ctx, &aot_mem) && ctx.pc == 0x088262B0u) goto L_088262B0;
    return;
L_088262B0:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088262B4;
L_088262B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088262DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[5] << 3u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088262EC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22920), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882630C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[31]);
    aot_gpr[31] = (0x0882633Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13584));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0882633Cu) goto L_0882633C;
    return;
L_0882633C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08826348u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 142u, 0x088779A8u>(ctx, &aot_mem) && ctx.pc == 0x08826348u) goto L_08826348;
    return;
L_08826348:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826378;
      }
      goto L_08826354;
    }
L_08826354:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08826368u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13560));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08826368u) goto L_08826368;
    return;
L_08826368:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08826378u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08826268;
L_08826378:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826394:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[31]);
    aot_gpr[31] = (0x088263B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7512)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 253u, 0x088BEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x088263B4u) goto L_088263B4;
    return;
L_088263B4:
    aot_gpr[6] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x088263CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13536));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088263CCu) goto L_088263CC;
    return;
L_088263CC:
    aot_gpr[17] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088263E0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_0882630C;
L_088263E0:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088263F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13508));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088263F4u) goto L_088263F4;
    return;
L_088263F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08826404u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_0882630C;
L_08826404:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882641C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088264DC;
      }
      goto L_08826458;
    }
L_08826458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08826464u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_088262DC;
L_08826464:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-6936)));
      if (branch_taken) {
          goto L_088264C4;
      }
      goto L_08826474;
    }
L_08826474:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088264C4;
      }
      goto L_08826490;
    }
L_08826490:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22936), aot_gpr[5]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22940), aot_gpr[16]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(22932), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16))))));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_088264DC;
      }
      goto L_088264C4;
    }
L_088264C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08826458;
      }
      goto L_088264DC;
    }
L_088264DC:
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
L_088264F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[6] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x08826518u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 11u, 0x0891814Cu>(ctx, &aot_mem) && ctx.pc == 0x08826518u) goto L_08826518;
    return;
L_08826518:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08826528u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 41u, 0x08913490u>(ctx, &aot_mem) && ctx.pc == 0x08826528u) goto L_08826528;
    return;
L_08826528:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[6] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x08826554u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 11u, 0x0891814Cu>(ctx, &aot_mem) && ctx.pc == 0x08826554u) goto L_08826554;
    return;
L_08826554:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08826564u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 41u, 0x08913490u>(ctx, &aot_mem) && ctx.pc == 0x08826564u) goto L_08826564;
    return;
L_08826564:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3020)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0882659Cu);
    aot_gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882659Cu) goto L_0882659C;
    return;
L_0882659C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088265A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2178u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7476)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13448));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088265D0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25628));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 23u, 0x08810188u>(ctx, &aot_mem) && ctx.pc == 0x088265D0u) goto L_088265D0;
    return;
L_088265D0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2178u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7476)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13432));
    aot_gpr[31] = (0x088265E8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25848));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 23u, 0x08810188u>(ctx, &aot_mem) && ctx.pc == 0x088265E8u) goto L_088265E8;
    return;
L_088265E8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2178u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7476)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13420));
    aot_gpr[31] = (0x08826600u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25908));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 23u, 0x08810188u>(ctx, &aot_mem) && ctx.pc == 0x08826600u) goto L_08826600;
    return;
L_08826600:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08826690;
      }
      goto L_08826650;
    }
L_08826650:
    aot_gpr[31] = (0x08826658u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_088262DC;
L_08826658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x08826678u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 16u, 0x08918224u>(ctx, &aot_mem) && ctx.pc == 0x08826678u) goto L_08826678;
    return;
L_08826678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08826650;
      }
      goto L_08826690;
    }
L_08826690:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088266B0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(22932)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2215u << 16u);
      if (branch_taken) {
          goto L_088266EC;
      }
      goto L_088266C0;
    }
L_088266C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(22936)));
    aot_gpr[7] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(22940)));
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(16))))));
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(22932), static_cast<std::uint8_t>(0u));
    goto L_088266EC;
L_088266EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088266F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08826708u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08826394;
L_08826708:
    aot_gpr[31] = (0x08826710u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088265A8;
L_08826710:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22932), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826728:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08826740;
L_08826740:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826754;
      }
      goto L_0882674C;
    }
L_0882674C:
    aot_gpr[31] = (0x08826754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x08826754u) goto L_08826754;
    return;
L_08826754:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08826740;
      }
      goto L_08826764;
    }
L_08826764:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] & 255u);
    aot_gpr[18] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x088267ACu);
    aot_gpr[17] = (aot_gpr[8] & 255u);
    goto L_08826AE8;
L_088267AC:
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[18] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826844;
      }
      goto L_088267EC;
    }
L_088267EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088267F8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088262DC;
L_088267F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882682C;
      }
      goto L_08826808;
    }
L_08826808:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08826844;
      }
      goto L_0882682C;
    }
L_0882682C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088267EC;
      }
      goto L_08826844;
    }
L_08826844:
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
L_08826864:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[14] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088268C0;
      }
      goto L_08826898;
    }
L_08826898:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088268B0;
      }
      goto L_088268A4;
    }
L_088268A4:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088268C0;
      }
      goto L_088268B0;
    }
L_088268B0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088268C0;
L_088268C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088268E0;
      }
      goto L_088268CC;
    }
L_088268CC:
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[31] = (0x088268E0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_08826610;
L_088268E0:
    aot_gpr[31] = (0x088268E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088266B0;
L_088268E8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088268F8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(17)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826900:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882695C;
      }
      goto L_08826930;
    }
L_08826930:
    aot_gpr[31] = (0x08826938u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088262DC;
L_08826938:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08826948;
      }
      goto L_08826944;
    }
L_08826944:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08826948;
L_08826948:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826930;
      }
      goto L_0882695C;
    }
L_0882695C:
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
L_08826978:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08826A40;
      }
      goto L_088269B0;
    }
L_088269B0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088269C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088262DC;
L_088269C4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (2218u << 16u);
        goto L_08826A24;
    }
    goto L_088269D4;
L_088269D4:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[18];
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_088269E4;
      }
      goto L_088269DC;
    }
L_088269DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08826A20;
      }
      goto L_088269E4;
    }
L_088269E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[6] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(22936), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22940), aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(22932), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08826A40;
      }
      goto L_08826A20;
    }
L_08826A20:
    aot_gpr[4] = (2218u << 16u);
    goto L_08826A24;
L_08826A24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6936)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088269B0;
      }
      goto L_08826A40;
    }
L_08826A40:
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
L_08826A58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08826A70;
      }
      goto L_08826A68;
    }
L_08826A68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08826A74;
      }
      goto L_08826A70;
    }
L_08826A70:
    aot_gpr[2] = (0u | 1u);
    goto L_08826A74;
L_08826A74:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826A7C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22928), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826A9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08826AB4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x08826AB4u) goto L_08826AB4;
    return;
L_08826AB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826AC8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22944), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826AE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826B10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826B1C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22952), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826B3C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826B44:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826B4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08826C1C;
      }
      goto L_08826B6C;
    }
L_08826B6C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08826B84;
      }
      goto L_08826B74;
    }
L_08826B74:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08826C1C;
      }
      goto L_08826B7C;
    }
L_08826B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826B94;
      }
      goto L_08826B84;
    }
L_08826B84:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826BE4;
      }
      goto L_08826B8C;
    }
L_08826B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826C1C;
      }
      goto L_08826B94;
    }
L_08826B94:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08826BDC;
      }
      goto L_08826BA4;
    }
L_08826BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826BDC;
      }
      goto L_08826BB4;
    }
L_08826BB4:
    aot_gpr[31] = (0x08826BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 54u, 0x0886D35Cu>(ctx, &aot_mem) && ctx.pc == 0x08826BBCu) goto L_08826BBC;
    return;
L_08826BBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826BDC;
      }
      goto L_08826BC4;
    }
L_08826BC4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[17] = (0u | 1u);
    aot_gpr[31] = (0x08826BD8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x08826BD8u) goto L_08826BD8;
    return;
L_08826BD8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_08826BDC;
L_08826BDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08826C1C;
      }
      goto L_08826BE4;
    }
L_08826BE4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26012)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08826C14;
      }
      goto L_08826BFC;
    }
L_08826BFC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826C14;
      }
      goto L_08826C04;
    }
L_08826C04:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08826C14;
      }
      goto L_08826C14;
    }
L_08826C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08826C1C;
      }
      goto L_08826C1C;
    }
L_08826C1C:
    aot_gpr[2] = (aot_gpr[4] ^ 1u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826C38:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22960), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826C58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08826C74u);
    // nop
    goto L_08826B3C;
L_08826C74:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-13400));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08826C8Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08826C8Cu) goto L_08826C8C;
    return;
L_08826C8C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826D74;
      }
      goto L_08826C94;
    }
L_08826C94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08826CA0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08826CA0u) goto L_08826CA0;
    return;
L_08826CA0:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ 7u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-13384));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-13376));
      if (branch_taken) {
          goto L_08826CFC;
      }
      goto L_08826CCC;
    }
L_08826CCC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08826CD8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08826CD8u) goto L_08826CD8;
    return;
L_08826CD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[17] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] & 255u);
      if (branch_taken) {
          goto L_08826D2C;
      }
      goto L_08826CFC;
    }
L_08826CFC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08826D08u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08826D08u) goto L_08826D08;
    return;
L_08826D08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[17] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[17] & 255u);
    goto L_08826D2C;
L_08826D2C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826D58;
      }
      goto L_08826D34;
    }
L_08826D34:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08826D40u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08826D40u) goto L_08826D40;
    return;
L_08826D40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08826D74;
      }
      goto L_08826D58;
    }
L_08826D58:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08826D64u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08826D64u) goto L_08826D64;
    return;
L_08826D64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08826D74;
L_08826D74:
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
L_08826D8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-13328));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x08826DC8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13276));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08826DC8u) goto L_08826DC8;
    return;
L_08826DC8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08826DD8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08826DD8u) goto L_08826DD8;
    return;
L_08826DD8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08826DE4u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08826DE4u) goto L_08826DE4;
    return;
L_08826DE4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08826DF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13260));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08826DF8u) goto L_08826DF8;
    return;
L_08826DF8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08826E0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13244));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08826E0Cu) goto L_08826E0C;
    return;
L_08826E0C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08826E1Cu);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08826E1Cu) goto L_08826E1C;
    return;
L_08826E1C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08826E2Cu);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08826E2Cu) goto L_08826E2C;
    return;
L_08826E2C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08826E40u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13236));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08826E40u) goto L_08826E40;
    return;
L_08826E40:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08826E54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-13220));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08826E54u) goto L_08826E54;
    return;
L_08826E54:
    aot_gpr[4] = (17086u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17120u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[4] = (17220u << 16u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[4] = (8192u << 16u);
      if (branch_taken) {
          goto L_08826EAC;
      }
      goto L_08826E80;
    }
L_08826E80:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08826EE0;
      }
      goto L_08826EAC;
    }
L_08826EAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[16] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08826EE0;
L_08826EE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826F10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-13328));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08826F50u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13200));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08826F50u) goto L_08826F50;
    return;
L_08826F50:
    aot_gpr[31] = (0x08826F58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08826F58u) goto L_08826F58;
    return;
L_08826F58:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08826F70u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13184));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08826F70u) goto L_08826F70;
    return;
L_08826F70:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08826F88u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13176));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08826F88u) goto L_08826F88;
    return;
L_08826F88:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08826FA0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13168));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08826FA0u) goto L_08826FA0;
    return;
L_08826FA0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08826FB8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13156));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08826FB8u) goto L_08826FB8;
    return;
L_08826FB8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08826FC8u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08826FC8u) goto L_08826FC8;
    return;
L_08826FC8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08826FD8u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08826FD8u) goto L_08826FD8;
    return;
L_08826FD8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08826FE8u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08826FE8u) goto L_08826FE8;
    return;
L_08826FE8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08826FF8u);
    aot_gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08826FF8u) goto L_08826FF8;
    return;
L_08826FF8:
    aot_gpr[5] = (17086u << 16u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.pc = 0x08827000u; return;
}

void recomp_unit_0034(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0034_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_34(Runtime &runtime) {
    runtime.register_generated_unit(34u, 0x08826000u, 4096u, &recomp_unit_0034, &recomp_unit_0034_entry);
    runtime.register_function(0x08826000u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882600Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882601Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826020u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882603Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826058u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826070u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882608Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826094u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088260A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088260ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088260CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088260E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088260E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088260F0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088260F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826100u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826108u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826128u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826160u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882617Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826194u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088261A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088261ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088261C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088261E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826200u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882621Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826228u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826234u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826254u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826268u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826290u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088262A0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088262B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088262B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088262DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088262ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882630Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882633Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826348u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826354u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826368u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826378u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826394u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088263B4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088263CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088263E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088263F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826404u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882641Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826458u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826464u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826474u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826490u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088264C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088264DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088264F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826518u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826528u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826534u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826554u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826564u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882659Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088265A8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088265D0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088265E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826600u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826610u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826650u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826658u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826678u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826690u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088266B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088266C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088266ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088266F4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826708u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826710u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826728u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826740u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882674Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826754u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826764u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826778u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088267ACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088267ECu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088267F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826808u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882682Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826844u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826864u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826898u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088268A4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088268B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088268C0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088268CCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088268E0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088268E8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088268F8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826900u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826930u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826938u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826944u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826948u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x0882695Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826978u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088269B0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088269C4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088269D4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088269DCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x088269E4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A20u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A24u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A68u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A70u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826A9Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826AB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826AC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826AE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B3Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B44u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B4Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B6Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B7Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B84u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826B94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826BA4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826BB4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826BBCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826BC4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826BD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826BDCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826BE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826BFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826C04u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826C14u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826C1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826C38u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826C58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826C74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826C8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826C94u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826CA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826CCCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826CD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826CFCu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826D08u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826D2Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826D34u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826D40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826D58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826D64u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826D74u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826D8Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826DC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826DD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826DE4u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826DF8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826E0Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826E1Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826E2Cu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826E40u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826E54u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826E80u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826EACu, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826EE0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826F10u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826F50u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826F58u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826F70u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826F88u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826FA0u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826FB8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826FC8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826FD8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826FE8u, &recomp_unit_0034, "recomp_unit_0034");
    runtime.register_function(0x08826FF8u, &recomp_unit_0034, "recomp_unit_0034");
}
} // namespace psprecomp
