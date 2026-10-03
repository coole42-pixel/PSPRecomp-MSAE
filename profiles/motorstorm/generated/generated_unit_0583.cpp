#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0583[1020] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 14, 0, 15, 0, 16,
    0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0,
    0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0,
    34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70,
    0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0,
    0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 0, 123,
    0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150,
    0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178,
    0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183,
    0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188,
    0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 200, 0, 0, 0, 201, 0, 0, 202, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0,
    208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 219, 0, 220, 0, 0, 0, 0, 221,
};
void recomp_unit_0583_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A4B000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0583[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4B000;
    case 2u: goto L_08A4B008;
    case 3u: goto L_08A4B010;
    case 4u: goto L_08A4B020;
    case 5u: goto L_08A4B02C;
    case 6u: goto L_08A4B038;
    case 7u: goto L_08A4B044;
    case 8u: goto L_08A4B064;
    case 9u: goto L_08A4B070;
    case 10u: goto L_08A4B0A0;
    case 11u: goto L_08A4B0B8;
    case 12u: goto L_08A4B0C0;
    case 13u: goto L_08A4B0E8;
    case 14u: goto L_08A4B0EC;
    case 15u: goto L_08A4B0F4;
    case 16u: goto L_08A4B0FC;
    case 17u: goto L_08A4B10C;
    case 18u: goto L_08A4B11C;
    case 19u: goto L_08A4B140;
    case 20u: goto L_08A4B14C;
    case 21u: goto L_08A4B154;
    case 22u: goto L_08A4B15C;
    case 23u: goto L_08A4B164;
    case 24u: goto L_08A4B174;
    case 25u: goto L_08A4B184;
    case 26u: goto L_08A4B190;
    case 27u: goto L_08A4B19C;
    case 28u: goto L_08A4B1BC;
    case 29u: goto L_08A4B1C8;
    case 30u: goto L_08A4B1D0;
    case 31u: goto L_08A4B1D8;
    case 32u: goto L_08A4B1E8;
    case 33u: goto L_08A4B1F4;
    case 34u: goto L_08A4B200;
    case 35u: goto L_08A4B20C;
    case 36u: goto L_08A4B22C;
    case 37u: goto L_08A4B238;
    case 38u: goto L_08A4B268;
    case 39u: goto L_08A4B274;
    case 40u: goto L_08A4B2A0;
    case 41u: goto L_08A4B2AC;
    case 42u: goto L_08A4B2B4;
    case 43u: goto L_08A4B2C4;
    case 44u: goto L_08A4B2D0;
    case 45u: goto L_08A4B2DC;
    case 46u: goto L_08A4B2E8;
    case 47u: goto L_08A4B308;
    case 48u: goto L_08A4B314;
    case 49u: goto L_08A4B324;
    case 50u: goto L_08A4B330;
    case 51u: goto L_08A4B340;
    case 52u: goto L_08A4B34C;
    case 53u: goto L_08A4B358;
    case 54u: goto L_08A4B378;
    case 55u: goto L_08A4B384;
    case 56u: goto L_08A4B38C;
    case 57u: goto L_08A4B394;
    case 58u: goto L_08A4B39C;
    case 59u: goto L_08A4B3A4;
    case 60u: goto L_08A4B3AC;
    case 61u: goto L_08A4B3B4;
    case 62u: goto L_08A4B3BC;
    case 63u: goto L_08A4B3C4;
    case 64u: goto L_08A4B3CC;
    case 65u: goto L_08A4B3D4;
    case 66u: goto L_08A4B3DC;
    case 67u: goto L_08A4B3E4;
    case 68u: goto L_08A4B3EC;
    case 69u: goto L_08A4B3F4;
    case 70u: goto L_08A4B3FC;
    case 71u: goto L_08A4B404;
    case 72u: goto L_08A4B40C;
    case 73u: goto L_08A4B414;
    case 74u: goto L_08A4B41C;
    case 75u: goto L_08A4B424;
    case 76u: goto L_08A4B42C;
    case 77u: goto L_08A4B434;
    case 78u: goto L_08A4B43C;
    case 79u: goto L_08A4B444;
    case 80u: goto L_08A4B44C;
    case 81u: goto L_08A4B468;
    case 82u: goto L_08A4B480;
    case 83u: goto L_08A4B48C;
    case 84u: goto L_08A4B498;
    case 85u: goto L_08A4B4B8;
    case 86u: goto L_08A4B4CC;
    case 87u: goto L_08A4B4F4;
    case 88u: goto L_08A4B50C;
    case 89u: goto L_08A4B514;
    case 90u: goto L_08A4B53C;
    case 91u: goto L_08A4B540;
    case 92u: goto L_08A4B548;
    case 93u: goto L_08A4B594;
    case 94u: goto L_08A4B5A8;
    case 95u: goto L_08A4B5B0;
    case 96u: goto L_08A4B5B4;
    case 97u: goto L_08A4B5E4;
    case 98u: goto L_08A4B5EC;
    case 99u: goto L_08A4B608;
    case 100u: goto L_08A4B630;
    case 101u: goto L_08A4B638;
    case 102u: goto L_08A4B648;
    case 103u: goto L_08A4B650;
    case 104u: goto L_08A4B680;
    case 105u: goto L_08A4B6AC;
    case 106u: goto L_08A4B6EC;
    case 107u: goto L_08A4B710;
    case 108u: goto L_08A4B728;
    case 109u: goto L_08A4B730;
    case 110u: goto L_08A4B73C;
    case 111u: goto L_08A4B75C;
    case 112u: goto L_08A4B798;
    case 113u: goto L_08A4B7A4;
    case 114u: goto L_08A4B7E4;
    case 115u: goto L_08A4B7F4;
    case 116u: goto L_08A4B804;
    case 117u: goto L_08A4B810;
    case 118u: goto L_08A4B818;
    case 119u: goto L_08A4B838;
    case 120u: goto L_08A4B848;
    case 121u: goto L_08A4B868;
    case 122u: goto L_08A4B86C;
    case 123u: goto L_08A4B87C;
    case 124u: goto L_08A4B89C;
    case 125u: goto L_08A4B8C0;
    case 126u: goto L_08A4B8D4;
    case 127u: goto L_08A4B8E0;
    case 128u: goto L_08A4B910;
    case 129u: goto L_08A4B918;
    case 130u: goto L_08A4B920;
    case 131u: goto L_08A4B92C;
    case 132u: goto L_08A4B934;
    case 133u: goto L_08A4B940;
    case 134u: goto L_08A4B948;
    case 135u: goto L_08A4B958;
    case 136u: goto L_08A4B964;
    case 137u: goto L_08A4B984;
    case 138u: goto L_08A4B9A8;
    case 139u: goto L_08A4B9F4;
    case 140u: goto L_08A4B9FC;
    case 141u: goto L_08A4BA24;
    case 142u: goto L_08A4BA2C;
    case 143u: goto L_08A4BA34;
    case 144u: goto L_08A4BA48;
    case 145u: goto L_08A4BA50;
    case 146u: goto L_08A4BA5C;
    case 147u: goto L_08A4BA64;
    case 148u: goto L_08A4BA6C;
    case 149u: goto L_08A4BA74;
    case 150u: goto L_08A4BA7C;
    case 151u: goto L_08A4BA84;
    case 152u: goto L_08A4BA8C;
    case 153u: goto L_08A4BA94;
    case 154u: goto L_08A4BA9C;
    case 155u: goto L_08A4BAA4;
    case 156u: goto L_08A4BAAC;
    case 157u: goto L_08A4BAB4;
    case 158u: goto L_08A4BABC;
    case 159u: goto L_08A4BAD0;
    case 160u: goto L_08A4BAEC;
    case 161u: goto L_08A4BB10;
    case 162u: goto L_08A4BB34;
    case 163u: goto L_08A4BB68;
    case 164u: goto L_08A4BB74;
    case 165u: goto L_08A4BB7C;
    case 166u: goto L_08A4BB98;
    case 167u: goto L_08A4BBBC;
    case 168u: goto L_08A4BBF8;
    case 169u: goto L_08A4BC00;
    case 170u: goto L_08A4BC0C;
    case 171u: goto L_08A4BC18;
    case 172u: goto L_08A4BC28;
    case 173u: goto L_08A4BC30;
    case 174u: goto L_08A4BC44;
    case 175u: goto L_08A4BC54;
    case 176u: goto L_08A4BC64;
    case 177u: goto L_08A4BC6C;
    case 178u: goto L_08A4BC7C;
    case 179u: goto L_08A4BC88;
    case 180u: goto L_08A4BC94;
    case 181u: goto L_08A4BCC4;
    case 182u: goto L_08A4BCEC;
    case 183u: goto L_08A4BCFC;
    case 184u: goto L_08A4BD08;
    case 185u: goto L_08A4BD20;
    case 186u: goto L_08A4BD58;
    case 187u: goto L_08A4BD68;
    case 188u: goto L_08A4BD7C;
    case 189u: goto L_08A4BD84;
    case 190u: goto L_08A4BD90;
    case 191u: goto L_08A4BDA8;
    case 192u: goto L_08A4BDCC;
    case 193u: goto L_08A4BDEC;
    case 194u: goto L_08A4BDF8;
    case 195u: goto L_08A4BE10;
    case 196u: goto L_08A4BE20;
    case 197u: goto L_08A4BE38;
    case 198u: goto L_08A4BE54;
    case 199u: goto L_08A4BE80;
    case 200u: goto L_08A4BE88;
    case 201u: goto L_08A4BE98;
    case 202u: goto L_08A4BEA4;
    case 203u: goto L_08A4BEA8;
    case 204u: goto L_08A4BEB0;
    case 205u: goto L_08A4BED0;
    case 206u: goto L_08A4BEE4;
    case 207u: goto L_08A4BEF4;
    case 208u: goto L_08A4BF00;
    case 209u: goto L_08A4BF10;
    case 210u: goto L_08A4BF1C;
    case 211u: goto L_08A4BF28;
    case 212u: goto L_08A4BF48;
    case 213u: goto L_08A4BF54;
    case 214u: goto L_08A4BF5C;
    case 215u: goto L_08A4BF84;
    case 216u: goto L_08A4BF9C;
    case 217u: goto L_08A4BFA4;
    case 218u: goto L_08A4BFCC;
    case 219u: goto L_08A4BFD0;
    case 220u: goto L_08A4BFD8;
    case 221u: goto L_08A4BFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4B000:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B008:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B064;
      }
      goto L_08A4B020;
    }
L_08A4B020:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13920));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4B038;
      }
      goto L_08A4B02C;
    }
L_08A4B02C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    goto L_08A4B038;
L_08A4B038:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B064;
      }
      goto L_08A4B044;
    }
L_08A4B044:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4B064u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B064u) goto L_08A4B064;
    return;
L_08A4B064:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B070:
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B0E8;
      }
      goto L_08A4B0A0;
    }
L_08A4B0A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4B0C0;
    }
    goto L_08A4B0B8;
L_08A4B0B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4B0C0;
L_08A4B0C0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A4B0EC;
      }
      goto L_08A4B0E8;
    }
L_08A4B0E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4B0EC;
L_08A4B0EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B0F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B0FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B140;
      }
      goto L_08A4B10C;
    }
L_08A4B10C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24664));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4B140;
      }
      goto L_08A4B11C;
    }
L_08A4B11C:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4B140u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B140u) goto L_08A4B140;
    return;
L_08A4B140:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B14C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B154:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B15C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B1BC;
      }
      goto L_08A4B174;
    }
L_08A4B174:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24704));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4B190;
      }
      goto L_08A4B184;
    }
L_08A4B184:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24664));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    goto L_08A4B190;
L_08A4B190:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B1BC;
      }
      goto L_08A4B19C;
    }
L_08A4B19C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4B1BCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B1BCu) goto L_08A4B1BC;
    return;
L_08A4B1BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B1C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B1D0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B1D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B22C;
      }
      goto L_08A4B1E8;
    }
L_08A4B1E8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13792));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4B200;
      }
      goto L_08A4B1F4;
    }
L_08A4B1F4:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    goto L_08A4B200;
L_08A4B200:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B22C;
      }
      goto L_08A4B20C;
    }
L_08A4B20C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4B22Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B22Cu) goto L_08A4B22C;
    return;
L_08A4B22C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B238:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4B268u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B268u) goto L_08A4B268;
    return;
L_08A4B268:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4B2A0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B2A0u) goto L_08A4B2A0;
    return;
L_08A4B2A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B2AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B2B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B308;
      }
      goto L_08A4B2C4;
    }
L_08A4B2C4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13528));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4B2DC;
      }
      goto L_08A4B2D0;
    }
L_08A4B2D0:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    goto L_08A4B2DC;
L_08A4B2DC:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B308;
      }
      goto L_08A4B2E8;
    }
L_08A4B2E8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4B308u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B308u) goto L_08A4B308;
    return;
L_08A4B308:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B314:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B378;
      }
      goto L_08A4B324;
    }
L_08A4B324:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13464));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4B34C;
      }
      goto L_08A4B330;
    }
L_08A4B330:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13792));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4B34C;
      }
      goto L_08A4B340;
    }
L_08A4B340:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-13720));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    goto L_08A4B34C;
L_08A4B34C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B378;
      }
      goto L_08A4B358;
    }
L_08A4B358:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4B378u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B378u) goto L_08A4B378;
    return;
L_08A4B378:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B384:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B38C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B394:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B39C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3D4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3DC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3EC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3F4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B3FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B404:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B40C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B414:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B41C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B424:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B42C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B434:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B43C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B444:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B44C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4B4B8;
      }
      goto L_08A4B468;
    }
L_08A4B468:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24744));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(492));
    aot_gpr[31] = (0x08A4B480u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 147u, 0x08824C28u>(ctx, &aot_mem) && ctx.pc == 0x08A4B480u) goto L_08A4B480;
    return;
L_08A4B480:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4B48Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08A4B48Cu) goto L_08A4B48C;
    return;
L_08A4B48C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4B4B8;
      }
      goto L_08A4B498;
    }
L_08A4B498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4B4B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B4B8u) goto L_08A4B4B8;
    return;
L_08A4B4B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B4CC:
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B53C;
      }
      goto L_08A4B4F4;
    }
L_08A4B4F4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4B514;
    }
    goto L_08A4B50C;
L_08A4B50C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4B514;
L_08A4B514:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A4B540;
      }
      goto L_08A4B53C;
    }
L_08A4B53C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4B540;
L_08A4B540:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B548:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4B5E4;
      }
      goto L_08A4B594;
    }
L_08A4B594:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A4B5A8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B5A8u) goto L_08A4B5A8;
    return;
L_08A4B5A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B5B4;
      }
      goto L_08A4B5B0;
    }
L_08A4B5B0:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A4B5B4;
L_08A4B5B4:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B594;
      }
      goto L_08A4B5E4;
    }
L_08A4B5E4:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A4B608;
      }
      goto L_08A4B5EC;
    }
L_08A4B5EC:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A4B608;
L_08A4B608:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08A4B630;
L_08A4B630:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A4B680;
      }
      goto L_08A4B638;
    }
L_08A4B638:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A4B648u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B648u) goto L_08A4B648;
    return;
L_08A4B648:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A4B680;
      }
      goto L_08A4B650;
    }
L_08A4B650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A4B630;
      }
      goto L_08A4B680;
    }
L_08A4B680:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A4B6AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4B73C;
      }
      goto L_08A4B6EC;
    }
L_08A4B6EC:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A4B710;
L_08A4B710:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4B728u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4B548;
L_08A4B728:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A4B73C;
      }
      goto L_08A4B730;
    }
L_08A4B730:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4B710;
      }
      goto L_08A4B73C;
    }
L_08A4B73C:
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
L_08A4B75C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] >> 30u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4B798u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A4B548;
L_08A4B798:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B7A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4B7E4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4B6AC;
L_08A4B7E4:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A4B848;
      }
      goto L_08A4B7F4;
    }
L_08A4B7F4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    goto L_08A4B804;
L_08A4B804:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4B810u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B810u) goto L_08A4B810;
    return;
L_08A4B810:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B838;
      }
      goto L_08A4B818;
    }
L_08A4B818:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4B838u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4B548;
L_08A4B838:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B804;
      }
      goto L_08A4B848;
    }
L_08A4B848:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B89C;
      }
      goto L_08A4B868;
    }
L_08A4B868:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A4B86C;
L_08A4B86C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4B87Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4B75C;
L_08A4B87C:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4B86C;
      }
      goto L_08A4B89C;
    }
L_08A4B89C:
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
L_08A4B8C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4B8D4u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A4B7A4;
L_08A4B8D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4B8E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A4B910;
L_08A4B910:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4B918u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B918u) goto L_08A4B918;
    return;
L_08A4B918:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B92C;
      }
      goto L_08A4B920;
    }
L_08A4B920:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4B910;
      }
      goto L_08A4B92C;
    }
L_08A4B92C:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A4B934;
L_08A4B934:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4B940u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4B940u) goto L_08A4B940;
    return;
L_08A4B940:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B958;
      }
      goto L_08A4B948;
    }
L_08A4B948:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4B934;
      }
      goto L_08A4B958;
    }
L_08A4B958:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B984;
      }
      goto L_08A4B964;
    }
L_08A4B964:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A4B910;
      }
      goto L_08A4B984;
    }
L_08A4B984:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A4B9A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[19] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4BB10;
      }
      goto L_08A4B9F4;
    }
L_08A4B9F4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
      if (branch_taken) {
          goto L_08A4BA34;
      }
      goto L_08A4B9FC;
    }
L_08A4B9FC:
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4BA24u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BA24u) goto L_08A4BA24;
    return;
L_08A4BA24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4BA50;
      }
      goto L_08A4BA2C;
    }
L_08A4BA2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4BA8C;
      }
      goto L_08A4BA34;
    }
L_08A4BA34:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4BA48u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A4B8C0;
L_08A4BA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BB10;
      }
      goto L_08A4BA50;
    }
L_08A4BA50:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4BA5Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BA5Cu) goto L_08A4BA5C;
    return;
L_08A4BA5C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A4BA6C;
    }
    goto L_08A4BA64;
L_08A4BA64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4BABC;
      }
      goto L_08A4BA6C;
    }
L_08A4BA6C:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4BA74u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BA74u) goto L_08A4BA74;
    return;
L_08A4BA74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA84;
      }
      goto L_08A4BA7C;
    }
L_08A4BA7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4BABC;
      }
      goto L_08A4BA84;
    }
L_08A4BA84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4BABC;
      }
      goto L_08A4BA8C;
    }
L_08A4BA8C:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4BA94u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BA94u) goto L_08A4BA94;
    return;
L_08A4BA94:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A4BAA4;
    }
    goto L_08A4BA9C;
L_08A4BA9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4BABC;
      }
      goto L_08A4BAA4;
    }
L_08A4BAA4:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4BAACu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BAACu) goto L_08A4BAAC;
    return;
L_08A4BAAC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A4BABC;
    }
    goto L_08A4BAB4;
L_08A4BAB4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4BABC;
      }
      goto L_08A4BABC;
    }
L_08A4BABC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4BAD0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A4B8E0;
L_08A4BAD0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4BAECu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_08A4B9A8;
L_08A4BAEC:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B9F4;
      }
      goto L_08A4BB10;
    }
L_08A4BB10:
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
L_08A4BB34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A4BB68;
L_08A4BB68:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4BB74u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BB74u) goto L_08A4BB74;
    return;
L_08A4BB74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BB98;
      }
      goto L_08A4BB7C;
    }
L_08A4BB7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4BB68;
      }
      goto L_08A4BB98;
    }
L_08A4BB98:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
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
L_08A4BBBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4BC00;
      }
      goto L_08A4BBF8;
    }
L_08A4BBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC94;
      }
      goto L_08A4BC00;
    }
L_08A4BC00:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4BC94;
      }
      goto L_08A4BC0C;
    }
L_08A4BC0C:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08A4BC18;
L_08A4BC18:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A4BC28u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BC28u) goto L_08A4BC28;
    return;
L_08A4BC28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A4BC6C;
      }
      goto L_08A4BC30;
    }
L_08A4BC30:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A4BC44u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 47u, 0x088243F4u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC44u) goto L_08A4BC44;
    return;
L_08A4BC44:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A4BC64;
      }
      goto L_08A4BC54;
    }
L_08A4BC54:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4BC64u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A4BC64u) goto L_08A4BC64;
    return;
L_08A4BC64:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A4BC7C;
      }
      goto L_08A4BC6C;
    }
L_08A4BC6C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4BC7Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A4BB34;
L_08A4BC7C:
    aot_gpr[19] = (aot_gpr[30] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4BC18;
      }
      goto L_08A4BC88;
    }
L_08A4BC88:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A4BC94;
L_08A4BC94:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4BCC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4BD08;
      }
      goto L_08A4BCEC;
    }
L_08A4BCEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4BCFCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4BB34;
L_08A4BCFC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A4BCEC;
      }
      goto L_08A4BD08;
    }
L_08A4BD08:
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
L_08A4BD20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4BD84;
      }
      goto L_08A4BD58;
    }
L_08A4BD58:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4BD68u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4BBBC;
L_08A4BD68:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4BD7Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A4BCC4;
L_08A4BD7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD90;
      }
      goto L_08A4BD84;
    }
L_08A4BD84:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4BD90u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4BBBC;
L_08A4BD90:
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
L_08A4BDA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4BE20;
      }
      goto L_08A4BDCC;
    }
L_08A4BDCC:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4BDF8;
      }
      goto L_08A4BDEC;
    }
L_08A4BDEC:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4BDEC;
      }
      goto L_08A4BDF8;
    }
L_08A4BDF8:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A4BE10u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4B9A8;
L_08A4BE10:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4BE20u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4BD20;
L_08A4BE20:
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
L_08A4BE38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4BED0;
      }
      goto L_08A4BE54;
    }
L_08A4BE54:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-13392));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (2192u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 19440u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x08A4BE80u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1380));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4BE80u) goto L_08A4BE80;
    return;
L_08A4BE80:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A4BEA8;
      }
      goto L_08A4BE88;
    }
L_08A4BE88:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4BEA4;
      }
      goto L_08A4BE98;
    }
L_08A4BE98:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A4BEA4;
L_08A4BEA4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A4BEA8;
L_08A4BEA8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4BED0;
      }
      goto L_08A4BEB0;
    }
L_08A4BEB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4BED0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BED0u) goto L_08A4BED0;
    return;
L_08A4BED0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4BEE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4BF48;
      }
      goto L_08A4BEF4;
    }
L_08A4BEF4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-12424));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4BF1C;
      }
      goto L_08A4BF00;
    }
L_08A4BF00:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4BF1C;
      }
      goto L_08A4BF10;
    }
L_08A4BF10:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A4BF1C;
L_08A4BF1C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4BF48;
      }
      goto L_08A4BF28;
    }
L_08A4BF28:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A4BF48u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4BF48u) goto L_08A4BF48;
    return;
L_08A4BF48:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4BF54:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4BF5C:
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BFCC;
      }
      goto L_08A4BF84;
    }
L_08A4BF84:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A4BFA4;
    }
    goto L_08A4BF9C;
L_08A4BF9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A4BFA4;
L_08A4BFA4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A4BFD0;
      }
      goto L_08A4BFCC;
    }
L_08A4BFCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A4BFD0;
L_08A4BFD0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4BFD8:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (16784u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_fpr[0] = aot_fpr[0] - aot_fpr[12];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4BFEC:
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A4C000u; return;
}

void recomp_unit_0583(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0583_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_583(Runtime &runtime) {
    runtime.register_generated_unit(583u, 0x08A4B000u, 4096u, &recomp_unit_0583, &recomp_unit_0583_entry);
    runtime.register_function(0x08A4B000u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B008u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B010u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B020u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B02Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B038u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B044u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B064u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B070u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B0A0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B0B8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B0C0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B0E8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B0ECu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B0F4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B0FCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B10Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B11Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B140u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B14Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B154u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B15Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B164u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B174u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B184u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B190u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B19Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B1BCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B1C8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B1D0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B1D8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B1E8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B1F4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B200u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B20Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B22Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B238u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B268u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B274u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B2A0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B2ACu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B2B4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B2C4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B2D0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B2DCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B2E8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B308u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B314u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B324u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B330u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B340u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B34Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B358u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B378u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B384u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B38Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B394u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B39Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3A4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3ACu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3B4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3BCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3C4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3CCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3D4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3DCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3E4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3ECu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3F4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B3FCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B404u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B40Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B414u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B41Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B424u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B42Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B434u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B43Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B444u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B44Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B468u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B480u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B48Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B498u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B4B8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B4CCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B4F4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B50Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B514u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B53Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B540u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B548u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B594u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B5A8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B5B0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B5B4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B5E4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B5ECu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B608u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B630u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B638u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B648u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B650u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B680u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B6ACu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B6ECu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B710u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B728u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B730u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B73Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B75Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B798u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B7A4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B7E4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B7F4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B804u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B810u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B818u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B838u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B848u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B868u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B86Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B87Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B89Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B8C0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B8D4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B8E0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B910u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B918u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B920u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B92Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B934u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B940u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B948u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B958u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B964u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B984u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B9A8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B9F4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4B9FCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA24u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA2Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA34u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA48u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA50u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA5Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA64u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA6Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA74u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA7Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA84u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA8Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA94u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BA9Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BAA4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BAACu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BAB4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BABCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BAD0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BAECu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BB10u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BB34u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BB68u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BB74u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BB7Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BB98u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BBBCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BBF8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC00u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC0Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC18u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC28u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC30u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC44u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC54u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC64u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC6Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC7Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC88u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BC94u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BCC4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BCECu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BCFCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BD08u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BD20u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BD58u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BD68u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BD7Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BD84u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BD90u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BDA8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BDCCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BDECu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BDF8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BE10u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BE20u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BE38u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BE54u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BE80u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BE88u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BE98u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BEA4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BEA8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BEB0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BED0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BEE4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BEF4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF00u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF10u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF1Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF28u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF48u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF54u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF5Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF84u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BF9Cu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BFA4u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BFCCu, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BFD0u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BFD8u, &recomp_unit_0583, "recomp_unit_0583");
    runtime.register_function(0x08A4BFECu, &recomp_unit_0583, "recomp_unit_0583");
}
} // namespace psprecomp
