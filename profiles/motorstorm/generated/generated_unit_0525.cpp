#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0525[1021] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0,
    0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0,
    74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 107,
    0, 108, 0, 109, 0, 110, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136,
    0, 137, 0, 138, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 151, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0,
    161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0,
    169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0,
    177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195,
    0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210,
};
void recomp_unit_0525_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A11000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0525[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A11000;
    case 2u: goto L_08A11010;
    case 3u: goto L_08A1101C;
    case 4u: goto L_08A11044;
    case 5u: goto L_08A1104C;
    case 6u: goto L_08A11054;
    case 7u: goto L_08A1105C;
    case 8u: goto L_08A11074;
    case 9u: goto L_08A11080;
    case 10u: goto L_08A1109C;
    case 11u: goto L_08A110A8;
    case 12u: goto L_08A110B4;
    case 13u: goto L_08A110BC;
    case 14u: goto L_08A110E4;
    case 15u: goto L_08A110E8;
    case 16u: goto L_08A11104;
    case 17u: goto L_08A11128;
    case 18u: goto L_08A11178;
    case 19u: goto L_08A111A0;
    case 20u: goto L_08A111D4;
    case 21u: goto L_08A111F0;
    case 22u: goto L_08A11204;
    case 23u: goto L_08A11234;
    case 24u: goto L_08A1125C;
    case 25u: goto L_08A11264;
    case 26u: goto L_08A11278;
    case 27u: goto L_08A1128C;
    case 28u: goto L_08A1129C;
    case 29u: goto L_08A112B0;
    case 30u: goto L_08A112BC;
    case 31u: goto L_08A112CC;
    case 32u: goto L_08A112E0;
    case 33u: goto L_08A112F0;
    case 34u: goto L_08A11304;
    case 35u: goto L_08A11314;
    case 36u: goto L_08A11328;
    case 37u: goto L_08A11338;
    case 38u: goto L_08A1134C;
    case 39u: goto L_08A1135C;
    case 40u: goto L_08A11370;
    case 41u: goto L_08A11388;
    case 42u: goto L_08A11390;
    case 43u: goto L_08A113A8;
    case 44u: goto L_08A113AC;
    case 45u: goto L_08A113B4;
    case 46u: goto L_08A113CC;
    case 47u: goto L_08A113E0;
    case 48u: goto L_08A113E8;
    case 49u: goto L_08A113F0;
    case 50u: goto L_08A11410;
    case 51u: goto L_08A11420;
    case 52u: goto L_08A11430;
    case 53u: goto L_08A11444;
    case 54u: goto L_08A11450;
    case 55u: goto L_08A11460;
    case 56u: goto L_08A1146C;
    case 57u: goto L_08A11484;
    case 58u: goto L_08A114CC;
    case 59u: goto L_08A114D4;
    case 60u: goto L_08A114F4;
    case 61u: goto L_08A1151C;
    case 62u: goto L_08A11538;
    case 63u: goto L_08A11558;
    case 64u: goto L_08A11564;
    case 65u: goto L_08A1156C;
    case 66u: goto L_08A11580;
    case 67u: goto L_08A115A4;
    case 68u: goto L_08A115AC;
    case 69u: goto L_08A115B8;
    case 70u: goto L_08A115C0;
    case 71u: goto L_08A115C8;
    case 72u: goto L_08A115E4;
    case 73u: goto L_08A115EC;
    case 74u: goto L_08A11600;
    case 75u: goto L_08A11608;
    case 76u: goto L_08A11624;
    case 77u: goto L_08A11634;
    case 78u: goto L_08A11648;
    case 79u: goto L_08A11650;
    case 80u: goto L_08A1165C;
    case 81u: goto L_08A1166C;
    case 82u: goto L_08A11680;
    case 83u: goto L_08A116A0;
    case 84u: goto L_08A116B4;
    case 85u: goto L_08A116C0;
    case 86u: goto L_08A116D0;
    case 87u: goto L_08A116E4;
    case 88u: goto L_08A11710;
    case 89u: goto L_08A1171C;
    case 90u: goto L_08A11724;
    case 91u: goto L_08A11728;
    case 92u: goto L_08A11748;
    case 93u: goto L_08A11768;
    case 94u: goto L_08A11780;
    case 95u: goto L_08A11788;
    case 96u: goto L_08A11794;
    case 97u: goto L_08A117A8;
    case 98u: goto L_08A117B4;
    case 99u: goto L_08A117C8;
    case 100u: goto L_08A117D4;
    case 101u: goto L_08A117E4;
    case 102u: goto L_08A11804;
    case 103u: goto L_08A1183C;
    case 104u: goto L_08A11844;
    case 105u: goto L_08A1185C;
    case 106u: goto L_08A11864;
    case 107u: goto L_08A1187C;
    case 108u: goto L_08A11884;
    case 109u: goto L_08A1188C;
    case 110u: goto L_08A11894;
    case 111u: goto L_08A11898;
    case 112u: goto L_08A118AC;
    case 113u: goto L_08A118B4;
    case 114u: goto L_08A118C0;
    case 115u: goto L_08A118C8;
    case 116u: goto L_08A118D0;
    case 117u: goto L_08A118F0;
    case 118u: goto L_08A11904;
    case 119u: goto L_08A11910;
    case 120u: goto L_08A11934;
    case 121u: goto L_08A1193C;
    case 122u: goto L_08A11960;
    case 123u: goto L_08A11980;
    case 124u: goto L_08A1198C;
    case 125u: goto L_08A11994;
    case 126u: goto L_08A119A4;
    case 127u: goto L_08A119AC;
    case 128u: goto L_08A119BC;
    case 129u: goto L_08A119C4;
    case 130u: goto L_08A119C8;
    case 131u: goto L_08A119D8;
    case 132u: goto L_08A119F8;
    case 133u: goto L_08A11A78;
    case 134u: goto L_08A11AAC;
    case 135u: goto L_08A11AE4;
    case 136u: goto L_08A11AFC;
    case 137u: goto L_08A11B04;
    case 138u: goto L_08A11B0C;
    case 139u: goto L_08A11B10;
    case 140u: goto L_08A11B24;
    case 141u: goto L_08A11B34;
    case 142u: goto L_08A11B40;
    case 143u: goto L_08A11B50;
    case 144u: goto L_08A11B5C;
    case 145u: goto L_08A11B6C;
    case 146u: goto L_08A11B78;
    case 147u: goto L_08A11B98;
    case 148u: goto L_08A11BA0;
    case 149u: goto L_08A11BA8;
    case 150u: goto L_08A11BB4;
    case 151u: goto L_08A11BB8;
    case 152u: goto L_08A11BC0;
    case 153u: goto L_08A11BD0;
    case 154u: goto L_08A11BDC;
    case 155u: goto L_08A11BF0;
    case 156u: goto L_08A11C14;
    case 157u: goto L_08A11C30;
    case 158u: goto L_08A11C4C;
    case 159u: goto L_08A11C6C;
    case 160u: goto L_08A11C78;
    case 161u: goto L_08A11C80;
    case 162u: goto L_08A11C94;
    case 163u: goto L_08A11CB8;
    case 164u: goto L_08A11CC0;
    case 165u: goto L_08A11CCC;
    case 166u: goto L_08A11CD4;
    case 167u: goto L_08A11CDC;
    case 168u: goto L_08A11CF8;
    case 169u: goto L_08A11D00;
    case 170u: goto L_08A11D14;
    case 171u: goto L_08A11D1C;
    case 172u: goto L_08A11D38;
    case 173u: goto L_08A11D48;
    case 174u: goto L_08A11D5C;
    case 175u: goto L_08A11D64;
    case 176u: goto L_08A11D70;
    case 177u: goto L_08A11D80;
    case 178u: goto L_08A11D94;
    case 179u: goto L_08A11DB4;
    case 180u: goto L_08A11DC8;
    case 181u: goto L_08A11DD4;
    case 182u: goto L_08A11DE4;
    case 183u: goto L_08A11DF8;
    case 184u: goto L_08A11E2C;
    case 185u: goto L_08A11E38;
    case 186u: goto L_08A11E44;
    case 187u: goto L_08A11E48;
    case 188u: goto L_08A11E6C;
    case 189u: goto L_08A11E88;
    case 190u: goto L_08A11EA8;
    case 191u: goto L_08A11EB4;
    case 192u: goto L_08A11EBC;
    case 193u: goto L_08A11ED0;
    case 194u: goto L_08A11EF4;
    case 195u: goto L_08A11EFC;
    case 196u: goto L_08A11F08;
    case 197u: goto L_08A11F10;
    case 198u: goto L_08A11F18;
    case 199u: goto L_08A11F34;
    case 200u: goto L_08A11F3C;
    case 201u: goto L_08A11F50;
    case 202u: goto L_08A11F58;
    case 203u: goto L_08A11F74;
    case 204u: goto L_08A11F84;
    case 205u: goto L_08A11F98;
    case 206u: goto L_08A11FA0;
    case 207u: goto L_08A11FAC;
    case 208u: goto L_08A11FBC;
    case 209u: goto L_08A11FD0;
    case 210u: goto L_08A11FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A11000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A11010u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(344));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 99u, 0x08A465DCu>(ctx, &aot_mem) && ctx.pc == 0x08A11010u) goto L_08A11010;
    return;
L_08A11010:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1101C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A11044u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A11044u) goto L_08A11044;
    return;
L_08A11044:
    aot_gpr[31] = (0x08A1104Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A1104Cu) goto L_08A1104C;
    return;
L_08A1104C:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A110BC;
      }
      goto L_08A11054;
    }
L_08A11054:
    aot_gpr[31] = (0x08A1105Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 114u, 0x08A1083Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1105Cu) goto L_08A1105C;
    return;
L_08A1105C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A11074u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11074u) goto L_08A11074;
    return;
L_08A11074:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A110E8;
      }
      goto L_08A11080;
    }
L_08A11080:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(248));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1109Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1109Cu) goto L_08A1109C;
    return;
L_08A1109C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A110E8;
      }
      goto L_08A110A8;
    }
L_08A110A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A110B4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A11178;
L_08A110B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A110E8;
      }
      goto L_08A110BC;
    }
L_08A110BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(232));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A110E4u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A110E4u) goto L_08A110E4;
    return;
L_08A110E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), aot_gpr[2]);
    goto L_08A110E8;
L_08A110E8:
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
L_08A11104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11128u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3412));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A11128u) goto L_08A11128;
    return;
L_08A11128:
    aot_gpr[4] = (0u | 1u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(312), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(316), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x08A111A0u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A111A0u) goto L_08A111A0;
    return;
L_08A111A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08A111F0;
      }
      goto L_08A111D4;
    }
L_08A111D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A111F0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A111F0u) goto L_08A111F0;
    return;
L_08A111F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11204:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    aot_gpr[31] = (0x08A11234u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A11234u) goto L_08A11234;
    return;
L_08A11234:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(13888));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14032));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(296), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(296));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(344));
    aot_gpr[31] = (0x08A1125Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 75u, 0x08A46458u>(ctx, &aot_mem) && ctx.pc == 0x08A1125Cu) goto L_08A1125C;
    return;
L_08A1125C:
    aot_gpr[31] = (0x08A11264u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A11104;
L_08A11264:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(340), aot_gpr[16]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(308));
    aot_gpr[31] = (0x08A11278u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-3400));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A11278u) goto L_08A11278;
    return;
L_08A11278:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1128Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1128Cu) goto L_08A1128C;
    return;
L_08A1128C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08A1129Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-3396));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1129Cu) goto L_08A1129C;
    return;
L_08A1129C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A112B0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A112B0u) goto L_08A112B0;
    return;
L_08A112B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A112BCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 217u, 0x08A10FACu>(ctx, &aot_mem) && ctx.pc == 0x08A112BCu) goto L_08A112BC;
    return;
L_08A112BC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(312));
    aot_gpr[31] = (0x08A112CCu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-3388));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A112CCu) goto L_08A112CC;
    return;
L_08A112CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A112E0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A112E0u) goto L_08A112E0;
    return;
L_08A112E0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(316));
    aot_gpr[31] = (0x08A112F0u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-3384));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A112F0u) goto L_08A112F0;
    return;
L_08A112F0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A11304u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11304u) goto L_08A11304;
    return;
L_08A11304:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A11314u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-3380));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A11314u) goto L_08A11314;
    return;
L_08A11314:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A11328u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11328u) goto L_08A11328;
    return;
L_08A11328:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A11338u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-3376));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A11338u) goto L_08A11338;
    return;
L_08A11338:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1134Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1134Cu) goto L_08A1134C;
    return;
L_08A1134C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A1135Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-3372));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1135Cu) goto L_08A1135C;
    return;
L_08A1135C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A11370u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11370u) goto L_08A11370;
    return;
L_08A11370:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(328)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
        goto L_08A11390;
    }
    goto L_08A11388;
L_08A11388:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08A113AC;
      }
      goto L_08A11390;
    }
L_08A11390:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A113AC;
      }
      goto L_08A113A8;
    }
L_08A113A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08A113AC;
L_08A113AC:
    aot_gpr[31] = (0x08A113B4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0524_entry, 524u, 219u, 0x08A10FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A113B4u) goto L_08A113B4;
    return;
L_08A113B4:
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(332));
    aot_gpr[31] = (0x08A113CCu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-3364));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A113CCu) goto L_08A113CC;
    return;
L_08A113CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A113E0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A113E0u) goto L_08A113E0;
    return;
L_08A113E0:
    aot_gpr[31] = (0x08A113E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A113E8u) goto L_08A113E8;
    return;
L_08A113E8:
    aot_gpr[31] = (0x08A113F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 222u, 0x089FEE14u>(ctx, &aot_mem) && ctx.pc == 0x08A113F0u) goto L_08A113F0;
    return;
L_08A113F0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(248));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A11410u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11410u) goto L_08A11410;
    return;
L_08A11410:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(336), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A114D4;
      }
      goto L_08A11420;
    }
L_08A11420:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08A11430u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-3360));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A11430u) goto L_08A11430;
    return;
L_08A11430:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A11444u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11444u) goto L_08A11444;
    return;
L_08A11444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A11460;
      }
      goto L_08A11450;
    }
L_08A11450:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3348));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    goto L_08A11460;
L_08A11460:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A1146Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3340));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1146Cu) goto L_08A1146C;
    return;
L_08A1146C:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[19] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A11484u);
    aot_gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11484u) goto L_08A11484;
    return;
L_08A11484:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A114CCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A114CCu) goto L_08A114CC;
    return;
L_08A114CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A114F4;
      }
      goto L_08A114D4;
    }
L_08A114D4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(240));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A114F4u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A114F4u) goto L_08A114F4;
    return;
L_08A114F4:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1151C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1156C;
      }
      goto L_08A11538;
    }
L_08A11538:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14056));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18152), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A11558u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11558u) goto L_08A11558;
    return;
L_08A11558:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1156C;
      }
      goto L_08A11564;
    }
L_08A11564:
    aot_gpr[31] = (0x08A1156Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A11634;
L_08A1156C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11580:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18152)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A115C8;
      }
      goto L_08A115A4;
    }
L_08A115A4:
    aot_gpr[31] = (0x08A115ACu);
    aot_gpr[4] = (0u | 8u);
    goto L_08A115EC;
L_08A115AC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18152), aot_gpr[17]);
        goto L_08A115C8;
    }
    goto L_08A115B8;
L_08A115B8:
    aot_gpr[31] = (0x08A115C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1166C;
L_08A115C0:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18152), aot_gpr[17]);
    goto L_08A115C8;
L_08A115C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18152)));
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
L_08A115E4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A115EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11600u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A11600u) goto L_08A11600;
    return;
L_08A11600:
    aot_gpr[31] = (0x08A11608u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11608u) goto L_08A11608;
    return;
L_08A11608:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 18u);
    aot_gpr[31] = (0x08A11624u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3336));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A11624u) goto L_08A11624;
    return;
L_08A11624:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11648u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A11648u) goto L_08A11648;
    return;
L_08A11648:
    aot_gpr[31] = (0x08A11650u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11650u) goto L_08A11650;
    return;
L_08A11650:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1165Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1165Cu) goto L_08A1165C;
    return;
L_08A1165C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1166C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11680u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A11680u) goto L_08A11680;
    return;
L_08A11680:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14056));
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
L_08A116A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A116B4u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A116B4u) goto L_08A116B4;
    return;
L_08A116B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A116C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A116C0u) goto L_08A116C0;
    return;
L_08A116C0:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A116D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3296));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A116D0u) goto L_08A116D0;
    return;
L_08A116D0:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A116E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A11710u);
    aot_gpr[4] = (0u | 332u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11710u) goto L_08A11710;
    return;
L_08A11710:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A11728;
      }
      goto L_08A1171C;
    }
L_08A1171C:
    aot_gpr[31] = (0x08A11724u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A11748;
L_08A11724:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A11728;
L_08A11728:
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
L_08A11748:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A11768u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A11768u) goto L_08A11768;
    return;
L_08A11768:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14128));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A11780u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 75u, 0x08A46458u>(ctx, &aot_mem) && ctx.pc == 0x08A11780u) goto L_08A11780;
    return;
L_08A11780:
    aot_gpr[31] = (0x08A11788u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A11BF0;
L_08A11788:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A11794u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3280));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A11794u) goto L_08A11794;
    return;
L_08A11794:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A117A8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A117A8u) goto L_08A117A8;
    return;
L_08A117A8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A117B4u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-3272));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A117B4u) goto L_08A117B4;
    return;
L_08A117B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A117C8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A117C8u) goto L_08A117C8;
    return;
L_08A117C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A117D4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A11B78;
L_08A117D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A117E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(316), aot_gpr[5]);
    goto L_08A11B5C;
L_08A117E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A11804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A1183Cu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1183Cu) goto L_08A1183C;
    return;
L_08A1183C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A11898;
    }
    goto L_08A11844;
L_08A11844:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1185Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1185Cu) goto L_08A1185C;
    return;
L_08A1185C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A11898;
    }
    goto L_08A11864;
L_08A11864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1187Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1187Cu) goto L_08A1187C;
    return;
L_08A1187C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
        goto L_08A11898;
    }
    goto L_08A11884;
L_08A11884:
    aot_gpr[31] = (0x08A1188Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A11B5C;
L_08A1188C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A118F0;
    }
    goto L_08A11894;
L_08A11894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    goto L_08A11898;
L_08A11898:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A118ACu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A118ACu) goto L_08A118AC;
    return;
L_08A118AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A118D0;
      }
      goto L_08A118B4;
    }
L_08A118B4:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A118C0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A118C0u) goto L_08A118C0;
    return;
L_08A118C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A119C8;
      }
      goto L_08A118C8;
    }
L_08A118C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A11980;
      }
      goto L_08A118D0;
    }
L_08A118D0:
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
L_08A118F0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A11904u);
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[5]);
    goto L_08A11B24;
L_08A11904:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A11910u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08A11B40;
L_08A11910:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A11934u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11934u) goto L_08A11934;
    return;
L_08A11934:
    aot_gpr[31] = (0x08A1193Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1193Cu) goto L_08A1193C;
    return;
L_08A1193C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3264));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A11960u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11960u) goto L_08A11960;
    return;
L_08A11960:
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
L_08A11980:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1198Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1198Cu) goto L_08A1198C;
    return;
L_08A1198C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A119C8;
      }
      goto L_08A11994;
    }
L_08A11994:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A119A4u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A119A4u) goto L_08A119A4;
    return;
L_08A119A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A119C8;
      }
      goto L_08A119AC;
    }
L_08A119AC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A119BCu);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A119BCu) goto L_08A119BC;
    return;
L_08A119BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A118D0;
      }
      goto L_08A119C4;
    }
L_08A119C4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A119C8;
L_08A119C8:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A119D8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A119D8u) goto L_08A119D8;
    return;
L_08A119D8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08A119F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(224));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + aot_gpr[4]);
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    aot_gpr[17] = (0u | 255u);
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A11A78u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11A78u) goto L_08A11A78;
    return;
L_08A11A78:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[10] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_fpr[15] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A11AACu);
    aot_gpr[9] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11AACu) goto L_08A11AAC;
    return;
L_08A11AAC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11AE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A11B10;
      }
      goto L_08A11AFC;
    }
L_08A11AFC:
    aot_gpr[31] = (0x08A11B04u);
    // nop
    goto L_08A11B24;
L_08A11B04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11B10;
      }
      goto L_08A11B0C;
    }
L_08A11B0C:
    aot_gpr[16] = (0u | 1u);
    goto L_08A11B10;
L_08A11B10:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A11B34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 97u, 0x08A465CCu>(ctx, &aot_mem) && ctx.pc == 0x08A11B34u) goto L_08A11B34;
    return;
L_08A11B34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11B40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A11B50u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 98u, 0x08A465D4u>(ctx, &aot_mem) && ctx.pc == 0x08A11B50u) goto L_08A11B50;
    return;
L_08A11B50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11B5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A11B6Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 99u, 0x08A465DCu>(ctx, &aot_mem) && ctx.pc == 0x08A11B6Cu) goto L_08A11B6C;
    return;
L_08A11B6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11B78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A11BB8;
      }
      goto L_08A11B98;
    }
L_08A11B98:
    aot_gpr[31] = (0x08A11BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A11BA0u) goto L_08A11BA0;
    return;
L_08A11BA0:
    aot_gpr[31] = (0x08A11BA8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11BA8u) goto L_08A11BA8;
    return;
L_08A11BA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[31] = (0x08A11BB4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A11BB4u) goto L_08A11BB4;
    return;
L_08A11BB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), 0u);
    goto L_08A11BB8;
L_08A11BB8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A11BDC;
      }
      goto L_08A11BC0;
    }
L_08A11BC0:
    aot_gpr[5] = (0u | 70u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A11BD0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3260));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A11BD0u) goto L_08A11BD0;
    return;
L_08A11BD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[2]);
    aot_gpr[31] = (0x08A11BDCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A11BDCu) goto L_08A11BDC;
    return;
L_08A11BDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11BF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11C14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3228));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A11C14u) goto L_08A11C14;
    return;
L_08A11C14:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(316), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11C30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A11C80;
      }
      goto L_08A11C4C;
    }
L_08A11C4C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14264));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18144), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A11C6Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11C6Cu) goto L_08A11C6C;
    return;
L_08A11C6C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11C80;
      }
      goto L_08A11C78;
    }
L_08A11C78:
    aot_gpr[31] = (0x08A11C80u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A11D48;
L_08A11C80:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11C94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A11CDC;
      }
      goto L_08A11CB8;
    }
L_08A11CB8:
    aot_gpr[31] = (0x08A11CC0u);
    aot_gpr[4] = (0u | 8u);
    goto L_08A11D00;
L_08A11CC0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18144), aot_gpr[17]);
        goto L_08A11CDC;
    }
    goto L_08A11CCC;
L_08A11CCC:
    aot_gpr[31] = (0x08A11CD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A11D80;
L_08A11CD4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18144), aot_gpr[17]);
    goto L_08A11CDC;
L_08A11CDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18144)));
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
L_08A11CF8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11D00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11D14u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A11D14u) goto L_08A11D14;
    return;
L_08A11D14:
    aot_gpr[31] = (0x08A11D1Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11D1Cu) goto L_08A11D1C;
    return;
L_08A11D1C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A11D38u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3208));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A11D38u) goto L_08A11D38;
    return;
L_08A11D38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11D48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11D5Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A11D5Cu) goto L_08A11D5C;
    return;
L_08A11D5C:
    aot_gpr[31] = (0x08A11D64u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11D64u) goto L_08A11D64;
    return;
L_08A11D64:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A11D70u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A11D70u) goto L_08A11D70;
    return;
L_08A11D70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11D80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11D94u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A11D94u) goto L_08A11D94;
    return;
L_08A11D94:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14264));
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
L_08A11DB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11DC8u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A11DC8u) goto L_08A11DC8;
    return;
L_08A11DC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A11DD4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A11DD4u) goto L_08A11DD4;
    return;
L_08A11DD4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A11DE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-3172));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11DE4u) goto L_08A11DE4;
    return;
L_08A11DE4:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11DF8:
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
    aot_gpr[31] = (0x08A11E2Cu);
    aot_gpr[4] = (0u | 528u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11E2Cu) goto L_08A11E2C;
    return;
L_08A11E2C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A11E48;
      }
      goto L_08A11E38;
    }
L_08A11E38:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A11E44u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 48u, 0x08A1F3F4u>(ctx, &aot_mem) && ctx.pc == 0x08A11E44u) goto L_08A11E44;
    return;
L_08A11E44:
    aot_gpr[20] = (aot_gpr[19] | 0u);
    goto L_08A11E48;
L_08A11E48:
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
L_08A11E6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A11EBC;
      }
      goto L_08A11E88;
    }
L_08A11E88:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14328));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18136), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A11EA8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11EA8u) goto L_08A11EA8;
    return;
L_08A11EA8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A11EBC;
      }
      goto L_08A11EB4;
    }
L_08A11EB4:
    aot_gpr[31] = (0x08A11EBCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A11F84;
L_08A11EBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11ED0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A11F18;
      }
      goto L_08A11EF4;
    }
L_08A11EF4:
    aot_gpr[31] = (0x08A11EFCu);
    aot_gpr[4] = (0u | 8u);
    goto L_08A11F3C;
L_08A11EFC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18136), aot_gpr[17]);
        goto L_08A11F18;
    }
    goto L_08A11F08;
L_08A11F08:
    aot_gpr[31] = (0x08A11F10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A11FBC;
L_08A11F10:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18136), aot_gpr[17]);
    goto L_08A11F18;
L_08A11F18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18136)));
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
L_08A11F34:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11F3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11F50u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A11F50u) goto L_08A11F50;
    return;
L_08A11F50:
    aot_gpr[31] = (0x08A11F58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11F58u) goto L_08A11F58;
    return;
L_08A11F58:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 16u);
    aot_gpr[31] = (0x08A11F74u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-3160));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A11F74u) goto L_08A11F74;
    return;
L_08A11F74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11F84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11F98u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A11F98u) goto L_08A11F98;
    return;
L_08A11F98:
    aot_gpr[31] = (0x08A11FA0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A11FA0u) goto L_08A11FA0;
    return;
L_08A11FA0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A11FACu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A11FACu) goto L_08A11FAC;
    return;
L_08A11FAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A11FBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A11FD0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A11FD0u) goto L_08A11FD0;
    return;
L_08A11FD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14328));
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
L_08A11FF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    ctx.pc = 0x08A12000u; return;
}

void recomp_unit_0525(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0525_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_525(Runtime &runtime) {
    runtime.register_generated_unit(525u, 0x08A11000u, 4096u, &recomp_unit_0525, &recomp_unit_0525_entry);
    runtime.register_function(0x08A11000u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11010u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1101Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11044u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1104Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11054u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1105Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11074u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11080u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1109Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A110A8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A110B4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A110BCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A110E4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A110E8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11104u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11128u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11178u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A111A0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A111D4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A111F0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11204u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11234u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1125Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11264u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11278u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1128Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1129Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A112B0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A112BCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A112CCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A112E0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A112F0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11304u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11314u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11328u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11338u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1134Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1135Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11370u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11388u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11390u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A113A8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A113ACu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A113B4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A113CCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A113E0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A113E8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A113F0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11410u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11420u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11430u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11444u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11450u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11460u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1146Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11484u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A114CCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A114D4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A114F4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1151Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11538u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11558u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11564u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1156Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11580u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A115A4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A115ACu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A115B8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A115C0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A115C8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A115E4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A115ECu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11600u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11608u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11624u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11634u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11648u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11650u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1165Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1166Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11680u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A116A0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A116B4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A116C0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A116D0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A116E4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11710u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1171Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11724u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11728u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11748u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11768u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11780u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11788u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11794u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A117A8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A117B4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A117C8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A117D4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A117E4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11804u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1183Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11844u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1185Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11864u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1187Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11884u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1188Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11894u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11898u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A118ACu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A118B4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A118C0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A118C8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A118D0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A118F0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11904u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11910u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11934u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1193Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11960u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11980u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A1198Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11994u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A119A4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A119ACu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A119BCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A119C4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A119C8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A119D8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A119F8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11A78u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11AACu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11AE4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11AFCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B04u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B0Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B10u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B24u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B34u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B40u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B50u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B5Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B6Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B78u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11B98u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11BA0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11BA8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11BB4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11BB8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11BC0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11BD0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11BDCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11BF0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11C14u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11C30u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11C4Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11C6Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11C78u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11C80u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11C94u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11CB8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11CC0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11CCCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11CD4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11CDCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11CF8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D00u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D14u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D1Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D38u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D48u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D5Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D64u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D70u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D80u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11D94u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11DB4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11DC8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11DD4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11DE4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11DF8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11E2Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11E38u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11E44u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11E48u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11E6Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11E88u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11EA8u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11EB4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11EBCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11ED0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11EF4u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11EFCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F08u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F10u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F18u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F34u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F3Cu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F50u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F58u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F74u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F84u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11F98u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11FA0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11FACu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11FBCu, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11FD0u, &recomp_unit_0525, "recomp_unit_0525");
    runtime.register_function(0x08A11FF0u, &recomp_unit_0525, "recomp_unit_0525");
}
} // namespace psprecomp
