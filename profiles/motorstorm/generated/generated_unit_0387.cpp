#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0387[1020] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 26, 27, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0,
    33, 0, 34, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41,
    0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71,
    0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 79, 0, 80, 0, 0,
    0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0,
    92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 99, 100, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109,
    0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 0, 115, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135,
    136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 191, 0, 0, 192, 0, 193,
    0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 222, 223,
};
void recomp_unit_0387_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08987000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0387[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08987000;
    case 2u: goto L_08987020;
    case 3u: goto L_08987028;
    case 4u: goto L_08987034;
    case 5u: goto L_08987044;
    case 6u: goto L_08987058;
    case 7u: goto L_08987088;
    case 8u: goto L_08987090;
    case 9u: goto L_089870A4;
    case 10u: goto L_089870AC;
    case 11u: goto L_089870C0;
    case 12u: goto L_089870F4;
    case 13u: goto L_08987100;
    case 14u: goto L_08987108;
    case 15u: goto L_08987148;
    case 16u: goto L_08987184;
    case 17u: goto L_08987188;
    case 18u: goto L_08987194;
    case 19u: goto L_089871B4;
    case 20u: goto L_089871BC;
    case 21u: goto L_089871C4;
    case 22u: goto L_08987210;
    case 23u: goto L_08987218;
    case 24u: goto L_08987224;
    case 25u: goto L_08987230;
    case 26u: goto L_08987238;
    case 27u: goto L_0898723C;
    case 28u: goto L_08987248;
    case 29u: goto L_08987250;
    case 30u: goto L_0898725C;
    case 31u: goto L_08987268;
    case 32u: goto L_08987278;
    case 33u: goto L_08987280;
    case 34u: goto L_08987288;
    case 35u: goto L_08987294;
    case 36u: goto L_08987298;
    case 37u: goto L_089872C0;
    case 38u: goto L_089872C8;
    case 39u: goto L_089872CC;
    case 40u: goto L_089872F4;
    case 41u: goto L_089872FC;
    case 42u: goto L_08987304;
    case 43u: goto L_08987310;
    case 44u: goto L_08987318;
    case 45u: goto L_08987328;
    case 46u: goto L_08987330;
    case 47u: goto L_08987354;
    case 48u: goto L_08987364;
    case 49u: goto L_089873A4;
    case 50u: goto L_089873B4;
    case 51u: goto L_089873C4;
    case 52u: goto L_089873D0;
    case 53u: goto L_089873D8;
    case 54u: goto L_089873E8;
    case 55u: goto L_089873F0;
    case 56u: goto L_089873F8;
    case 57u: goto L_089873FC;
    case 58u: goto L_08987428;
    case 59u: goto L_0898742C;
    case 60u: goto L_08987460;
    case 61u: goto L_08987498;
    case 62u: goto L_089874D0;
    case 63u: goto L_089874D4;
    case 64u: goto L_08987500;
    case 65u: goto L_08987508;
    case 66u: goto L_08987518;
    case 67u: goto L_08987524;
    case 68u: goto L_0898753C;
    case 69u: goto L_08987558;
    case 70u: goto L_08987560;
    case 71u: goto L_0898757C;
    case 72u: goto L_08987584;
    case 73u: goto L_08987594;
    case 74u: goto L_089875C0;
    case 75u: goto L_089875C8;
    case 76u: goto L_089875D4;
    case 77u: goto L_089875E0;
    case 78u: goto L_089875E8;
    case 79u: goto L_089875EC;
    case 80u: goto L_089875F4;
    case 81u: goto L_08987608;
    case 82u: goto L_08987610;
    case 83u: goto L_08987618;
    case 84u: goto L_08987620;
    case 85u: goto L_0898762C;
    case 86u: goto L_08987638;
    case 87u: goto L_08987640;
    case 88u: goto L_08987648;
    case 89u: goto L_08987654;
    case 90u: goto L_08987664;
    case 91u: goto L_08987678;
    case 92u: goto L_08987680;
    case 93u: goto L_08987688;
    case 94u: goto L_08987694;
    case 95u: goto L_089876A4;
    case 96u: goto L_089876B0;
    case 97u: goto L_089876E4;
    case 98u: goto L_089876F0;
    case 99u: goto L_089876F4;
    case 100u: goto L_089876F8;
    case 101u: goto L_08987714;
    case 102u: goto L_08987724;
    case 103u: goto L_0898772C;
    case 104u: goto L_08987734;
    case 105u: goto L_08987738;
    case 106u: goto L_08987758;
    case 107u: goto L_08987764;
    case 108u: goto L_08987770;
    case 109u: goto L_0898777C;
    case 110u: goto L_08987788;
    case 111u: goto L_08987794;
    case 112u: goto L_089877A4;
    case 113u: goto L_089877D8;
    case 114u: goto L_089877DC;
    case 115u: goto L_089877E4;
    case 116u: goto L_089877EC;
    case 117u: goto L_08987810;
    case 118u: goto L_08987820;
    case 119u: goto L_08987830;
    case 120u: goto L_0898783C;
    case 121u: goto L_08987850;
    case 122u: goto L_0898786C;
    case 123u: goto L_08987874;
    case 124u: goto L_089878AC;
    case 125u: goto L_089878B4;
    case 126u: goto L_089878C0;
    case 127u: goto L_089878D0;
    case 128u: goto L_089878D4;
    case 129u: goto L_089878F4;
    case 130u: goto L_0898790C;
    case 131u: goto L_08987924;
    case 132u: goto L_08987948;
    case 133u: goto L_0898795C;
    case 134u: goto L_08987964;
    case 135u: goto L_089879FC;
    case 136u: goto L_08987A00;
    case 137u: goto L_08987A1C;
    case 138u: goto L_08987A24;
    case 139u: goto L_08987A2C;
    case 140u: goto L_08987A34;
    case 141u: goto L_08987A4C;
    case 142u: goto L_08987A54;
    case 143u: goto L_08987A88;
    case 144u: goto L_08987A98;
    case 145u: goto L_08987AA4;
    case 146u: goto L_08987AB0;
    case 147u: goto L_08987ABC;
    case 148u: goto L_08987AC4;
    case 149u: goto L_08987ACC;
    case 150u: goto L_08987AE4;
    case 151u: goto L_08987AEC;
    case 152u: goto L_08987AF4;
    case 153u: goto L_08987AF8;
    case 154u: goto L_08987B20;
    case 155u: goto L_08987B24;
    case 156u: goto L_08987B4C;
    case 157u: goto L_08987B5C;
    case 158u: goto L_08987B90;
    case 159u: goto L_08987BA4;
    case 160u: goto L_08987BB0;
    case 161u: goto L_08987BC0;
    case 162u: goto L_08987BC8;
    case 163u: goto L_08987BD4;
    case 164u: goto L_08987BDC;
    case 165u: goto L_08987BE8;
    case 166u: goto L_08987BF0;
    case 167u: goto L_08987BFC;
    case 168u: goto L_08987C00;
    case 169u: goto L_08987C38;
    case 170u: goto L_08987C84;
    case 171u: goto L_08987CA4;
    case 172u: goto L_08987CAC;
    case 173u: goto L_08987CC0;
    case 174u: goto L_08987CC8;
    case 175u: goto L_08987CD0;
    case 176u: goto L_08987CE8;
    case 177u: goto L_08987CF8;
    case 178u: goto L_08987D30;
    case 179u: goto L_08987D38;
    case 180u: goto L_08987D40;
    case 181u: goto L_08987D4C;
    case 182u: goto L_08987D58;
    case 183u: goto L_08987D6C;
    case 184u: goto L_08987D88;
    case 185u: goto L_08987D94;
    case 186u: goto L_08987DA0;
    case 187u: goto L_08987DAC;
    case 188u: goto L_08987DB4;
    case 189u: goto L_08987DC8;
    case 190u: goto L_08987DE4;
    case 191u: goto L_08987DE8;
    case 192u: goto L_08987DF4;
    case 193u: goto L_08987DFC;
    case 194u: goto L_08987E04;
    case 195u: goto L_08987E0C;
    case 196u: goto L_08987E18;
    case 197u: goto L_08987E28;
    case 198u: goto L_08987E34;
    case 199u: goto L_08987E3C;
    case 200u: goto L_08987E78;
    case 201u: goto L_08987E80;
    case 202u: goto L_08987EAC;
    case 203u: goto L_08987EC0;
    case 204u: goto L_08987EC8;
    case 205u: goto L_08987ED4;
    case 206u: goto L_08987EDC;
    case 207u: goto L_08987EE4;
    case 208u: goto L_08987EEC;
    case 209u: goto L_08987F04;
    case 210u: goto L_08987F30;
    case 211u: goto L_08987F38;
    case 212u: goto L_08987F40;
    case 213u: goto L_08987F48;
    case 214u: goto L_08987F54;
    case 215u: goto L_08987F5C;
    case 216u: goto L_08987F64;
    case 217u: goto L_08987F6C;
    case 218u: goto L_08987F74;
    case 219u: goto L_08987FC8;
    case 220u: goto L_08987FD8;
    case 221u: goto L_08987FE4;
    case 222u: goto L_08987FE8;
    case 223u: goto L_08987FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08987000:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(72)));
    aot_gpr[9] = (2200u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(27824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08987020u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 223u, 0x08991ECCu>(ctx, &aot_mem) && ctx.pc == 0x08987020u) goto L_08987020;
    return;
L_08987020:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08987090;
      }
      goto L_08987028;
    }
L_08987028:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089870A4;
      }
      goto L_08987034;
    }
L_08987034:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987044:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987058:
    aot_gpr[4] = (aot_gpr[10] + 0u);
    aot_gpr[10] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(72)));
    aot_gpr[9] = (2200u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(27824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08987088u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 223u, 0x08991ECCu>(ctx, &aot_mem) && ctx.pc == 0x08987088u) goto L_08987088;
    return;
L_08987088:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08987028;
      }
      goto L_08987090;
    }
L_08987090:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089870A4:
    aot_gpr[31] = (0x089870ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089870ACu) goto L_089870AC;
    return;
L_089870AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089870C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[18] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_08987194;
      }
      goto L_089870F4;
    }
L_089870F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08987194;
      }
      goto L_08987100;
    }
L_08987100:
    aot_gpr[31] = (0x08987108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x08987108u) goto L_08987108;
    return;
L_08987108:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1088)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08987148u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08987148u) goto L_08987148;
    return;
L_08987148:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1084)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(22));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
      if (branch_taken) {
          goto L_089871B4;
      }
      goto L_08987184;
    }
L_08987184:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_08987188;
L_08987188:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08987194u);
    aot_gpr[6] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08987194u) goto L_08987194;
    return;
L_08987194:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
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
L_089871B4:
    aot_gpr[31] = (0x089871BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 38u, 0x08985364u>(ctx, &aot_mem) && ctx.pc == 0x089871BCu) goto L_089871BC;
    return;
L_089871BC:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    goto L_08987188;
L_089871C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[22]);
    aot_gpr[3] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    aot_gpr[22] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987210;
    }
L_08987210:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2217u << 16u);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987218;
    }
L_08987218:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[18] + 0u);
        goto L_0898723C;
    }
    goto L_08987224;
L_08987224:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987230u) goto L_08987230;
    return;
L_08987230:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_089873D8;
      }
      goto L_08987238;
    }
L_08987238:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_0898723C;
L_0898723C:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08987248u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 69u, 0x08986470u>(ctx, &aot_mem) && ctx.pc == 0x08987248u) goto L_08987248;
    return;
L_08987248:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08987294;
      }
      goto L_08987250;
    }
L_08987250:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
        goto L_089874D4;
    }
    goto L_0898725C;
L_0898725C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1080)));
        goto L_089872C0;
    }
    goto L_08987268;
L_08987268:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1092)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089873F8;
      }
      goto L_08987278;
    }
L_08987278:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089873F8;
      }
      goto L_08987280;
    }
L_08987280:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089873F8;
      }
      goto L_08987288;
    }
L_08987288:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x08987294u);
    aot_gpr[6] = (0u + 0u);
    goto L_089870C0;
L_08987294:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_08987298;
L_08987298:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089872C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08987500;
      }
      goto L_089872C8;
    }
L_089872C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    goto L_089872CC;
L_089872CC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1092)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08987428;
      }
      goto L_089872F4;
    }
L_089872F4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08987428;
      }
      goto L_089872FC;
    }
L_089872FC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0898742C;
      }
      goto L_08987304;
    }
L_08987304:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1072)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_089873FC;
      }
      goto L_08987310;
    }
L_08987310:
    aot_gpr[31] = (0x08987318u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1028)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 16u, 0x08986158u>(ctx, &aot_mem) && ctx.pc == 0x08987318u) goto L_08987318;
    return;
L_08987318:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08987328u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x08987328u) goto L_08987328;
    return;
L_08987328:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987330;
    }
L_08987330:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(108));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(172));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[31] = (0x08987354u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 141u, 0x0898F8CCu>(ctx, &aot_mem) && ctx.pc == 0x08987354u) goto L_08987354;
    return;
L_08987354:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08987364u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08987364u) goto L_08987364;
    return;
L_08987364:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[18]);
    aot_gpr[31] = (0x089873A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x089873A4u) goto L_089873A4;
    return;
L_089873A4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089873B4u);
    aot_gpr[6] = (0u + 0u);
    goto L_089870C0;
L_089873B4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089873F8;
      }
      goto L_089873C4;
    }
L_089873C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089873D0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089873D0u) goto L_089873D0;
    return;
L_089873D0:
    aot_gpr[17] = (0u + 0u);
    goto L_08987294;
L_089873D8:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089873E8u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089873E8u) goto L_089873E8;
    return;
L_089873E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08987238;
      }
      goto L_089873F0;
    }
L_089873F0:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    goto L_08987298;
L_089873F8:
    aot_gpr[17] = (0u + 0u);
    goto L_089873FC;
L_089873FC:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987428:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0898742C;
L_0898742C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[17] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[31] = (0x08987460u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x08987460u) goto L_08987460;
    return;
L_08987460:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1204)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987498u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987498u) goto L_08987498;
    return;
L_08987498:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089874D0:
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
    goto L_089874D4;
L_089874D4:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987500:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1080), aot_gpr[2]);
      if (branch_taken) {
          goto L_089872C8;
      }
      goto L_08987508;
    }
L_08987508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[4] & 1u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_089872CC;
    }
    goto L_08987518;
L_08987518:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1176)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[20]);
        goto L_089872CC;
    }
    goto L_08987524;
L_08987524:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1216)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1176), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1068), aot_gpr[4]);
      if (branch_taken) {
          goto L_089872C8;
      }
      goto L_0898753C;
    }
L_0898753C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08987558u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987558u) goto L_08987558;
    return;
L_08987558:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089872C8;
L_08987560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0898757Cu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 157u, 0x08991A20u>(ctx, &aot_mem) && ctx.pc == 0x0898757Cu) goto L_0898757C;
    return;
L_0898757C:
    if (aot_gpr[16] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1180), aot_gpr[2]);
        goto L_08987584;
    }
    goto L_08987584;
L_08987584:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
      if (branch_taken) {
          goto L_089877EC;
      }
      goto L_089875C0;
    }
L_089875C0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2217u << 16u);
      if (branch_taken) {
          goto L_089877EC;
      }
      goto L_089875C8;
    }
L_089875C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2808)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (aot_gpr[17] + 0u);
        goto L_089875EC;
    }
    goto L_089875D4;
L_089875D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089875E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089875E0u) goto L_089875E0;
    return;
L_089875E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2808)));
      if (branch_taken) {
          goto L_08987714;
      }
      goto L_089875E8;
    }
L_089875E8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089875EC;
L_089875EC:
    aot_gpr[31] = (0x089875F4u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 65u, 0x0898644Cu>(ctx, &aot_mem) && ctx.pc == 0x089875F4u) goto L_089875F4;
    return;
L_089875F4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1092)));
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08987680;
      }
      goto L_08987608;
    }
L_08987608:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08987680;
      }
      goto L_08987610;
    }
L_08987610:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08987680;
      }
      goto L_08987618;
    }
L_08987618:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1024)));
      if (branch_taken) {
          goto L_0898762C;
      }
      goto L_08987620;
    }
L_08987620:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08987758;
      }
      goto L_0898762C;
    }
L_0898762C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1080)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08987640;
      }
      goto L_08987638;
    }
L_08987638:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1080), aot_gpr[2]);
      if (branch_taken) {
          goto L_08987810;
      }
      goto L_08987640;
    }
L_08987640:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08987734;
      }
      goto L_08987648;
    }
L_08987648:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08987738;
      }
      goto L_08987654;
    }
L_08987654:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08987738;
      }
      goto L_08987664;
    }
L_08987664:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(144)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987678u);
    aot_gpr[7] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987678u) goto L_08987678;
    return;
L_08987678:
    aot_gpr[2] = (0u + 0u);
    goto L_089876F4;
L_08987680:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08987738;
      }
      goto L_08987688;
    }
L_08987688:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08987738;
      }
      goto L_08987694;
    }
L_08987694:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1208)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089876E4;
      }
      goto L_089876A4;
    }
L_089876A4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089876B0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x089876B0u) goto L_089876B0;
    return;
L_089876B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1212)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089876E4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089876E4u) goto L_089876E4;
    return;
L_089876E4:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089876F0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 78u, 0x08986524u>(ctx, &aot_mem) && ctx.pc == 0x089876F0u) goto L_089876F0;
    return;
L_089876F0:
    aot_gpr[2] = (0u + 0u);
    goto L_089876F4;
L_089876F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089876F8;
L_089876F8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987714:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987724u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987724u) goto L_08987724;
    return;
L_08987724:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089875EC;
      }
      goto L_0898772C;
    }
L_0898772C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089876F8;
L_08987734:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08987738;
L_08987738:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987758:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08987770;
      }
      goto L_08987764;
    }
L_08987764:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987770u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987770u) goto L_08987770;
    return;
L_08987770:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[2]);
      if (branch_taken) {
          goto L_089877D8;
      }
      goto L_0898777C;
    }
L_0898777C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089877DC;
      }
      goto L_08987788;
    }
L_08987788:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1208)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089877DC;
      }
      goto L_08987794;
    }
L_08987794:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089877A4u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 110u, 0x0898F700u>(ctx, &aot_mem) && ctx.pc == 0x089877A4u) goto L_089877A4;
    return;
L_089877A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1212)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1208)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089877D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089877D8u) goto L_089877D8;
    return;
L_089877D8:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    goto L_089877DC;
L_089877DC:
    aot_gpr[31] = (0x089877E4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 78u, 0x08986524u>(ctx, &aot_mem) && ctx.pc == 0x089877E4u) goto L_089877E4;
    return;
L_089877E4:
    // nop
    goto L_08987640;
L_089877EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987810:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08987820u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 98u, 0x08986644u>(ctx, &aot_mem) && ctx.pc == 0x08987820u) goto L_08987820;
    return;
L_08987820:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1068)));
    aot_gpr[2] = (aot_gpr[3] & 1u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987640;
      }
      goto L_08987830;
    }
L_08987830:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[3] | 1u);
      if (branch_taken) {
          goto L_08987640;
      }
      goto L_0898783C;
    }
L_0898783C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1216)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1176), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1068), aot_gpr[3]);
      if (branch_taken) {
          goto L_08987640;
      }
      goto L_08987850;
    }
L_08987850:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1220)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0898786Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898786Cu) goto L_0898786C;
    return;
L_0898786C:
    // nop
    goto L_08987640;
L_08987874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089878ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089878ACu) goto L_089878AC;
    return;
L_089878AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089878F4;
      }
      goto L_089878B4;
    }
L_089878B4:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[6] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_0898790C;
      }
      goto L_089878C0;
    }
L_089878C0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          goto L_089878D4;
      }
      goto L_089878D0;
    }
L_089878D0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(252)));
    goto L_089878D4;
L_089878D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1080)));
    aot_gpr[3] = (2216u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1080), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x089878F4u);
    if (aot_gpr[7] == 0u) aot_gpr[7] = (aot_gpr[8]);
    goto L_089871C4;
L_089878F4:
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
L_0898790C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08987594;
L_08987924:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2820)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
      if (branch_taken) {
          goto L_08987A34;
      }
      goto L_08987948;
    }
L_08987948:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2792)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(84));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_08987A34;
      }
      goto L_0898795C;
    }
L_0898795C:
    aot_gpr[31] = (0x08987964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08987964u) goto L_08987964;
    return;
L_08987964:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(8192));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(256)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1402));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(30));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-18844));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[3] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    aot_gpr[3] = (2201u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[2] = (2201u << 16u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-18688));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(272)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[2]);
      if (branch_taken) {
          goto L_08987A4C;
      }
      goto L_089879FC;
    }
L_089879FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    goto L_08987A00;
L_08987A00:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987A1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987A1Cu) goto L_08987A1C;
    return;
L_08987A1C:
    aot_gpr[31] = (0x08987A24u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08987A24u) goto L_08987A24;
    return;
L_08987A24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08987A34;
      }
      goto L_08987A2C;
    }
L_08987A2C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(2820), aot_gpr[2]);
    goto L_08987A34;
L_08987A34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987A4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    goto L_08987A00;
L_08987A54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_08987AF4;
      }
      goto L_08987A88;
    }
L_08987A88:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08987B20;
      }
      goto L_08987A98;
    }
L_08987A98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B20;
      }
      goto L_08987AA4;
    }
L_08987AA4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08987B24;
      }
      goto L_08987AB0;
    }
L_08987AB0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B24;
      }
      goto L_08987ABC;
    }
L_08987ABC:
    aot_gpr[31] = (0x08987AC4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 118u, 0x089927E4u>(ctx, &aot_mem) && ctx.pc == 0x08987AC4u) goto L_08987AC4;
    return;
L_08987AC4:
    aot_gpr[31] = (0x08987ACCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 55u, 0x08990534u>(ctx, &aot_mem) && ctx.pc == 0x08987ACCu) goto L_08987ACC;
    return;
L_08987ACC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08987AE4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 173u, 0x08982B54u>(ctx, &aot_mem) && ctx.pc == 0x08987AE4u) goto L_08987AE4;
    return;
L_08987AE4:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08987B4C;
      }
      goto L_08987AEC;
    }
L_08987AEC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08987AF4;
L_08987AF4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08987AF8;
L_08987AF8:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B20:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08987B24;
L_08987B24:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B4C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(29));
      if (branch_taken) {
          goto L_08987B90;
      }
      goto L_08987B5C;
    }
L_08987B5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(29));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987B90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(33));
      if (branch_taken) {
          goto L_08987BB0;
      }
      goto L_08987BA4;
    }
L_08987BA4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(33));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08987AF4;
L_08987BB0:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BC0;
    }
L_08987BC0:
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(252)));
        goto L_08987BD4;
    }
    goto L_08987BC8;
L_08987BC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(256), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(252)));
    goto L_08987BD4;
L_08987BD4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1024));
        goto L_08987E18;
    }
    goto L_08987BDC;
L_08987BDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_08987E34;
      }
      goto L_08987BE8;
    }
L_08987BE8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[22] = (2216u << 16u);
      if (branch_taken) {
          goto L_08987C00;
      }
      goto L_08987BF0;
    }
L_08987BF0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3658));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(252), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    goto L_08987BFC;
L_08987BFC:
    aot_gpr[22] = (2216u << 16u);
    goto L_08987C00;
L_08987C00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[7] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(60));
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[18] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08987E80;
      }
      goto L_08987C38;
    }
L_08987C38:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08987C38;
      }
      goto L_08987C84;
    }
L_08987C84:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_08987CA4;
L_08987CA4:
    aot_gpr[31] = (0x08987CACu);
    aot_gpr[4] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 46u, 0x08986330u>(ctx, &aot_mem) && ctx.pc == 0x08987CACu) goto L_08987CAC;
    return;
L_08987CAC:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1273));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x08987CC0u);
    aot_gpr[7] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 118u, 0x089916FCu>(ctx, &aot_mem) && ctx.pc == 0x08987CC0u) goto L_08987CC0;
    return;
L_08987CC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987EC0;
      }
      goto L_08987CC8;
    }
L_08987CC8:
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(127));
    goto L_08987CD0;
L_08987CD0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(180), 0u);
      if (branch_taken) {
          goto L_08987CD0;
      }
      goto L_08987CE8;
    }
L_08987CE8:
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987D38;
      }
      goto L_08987CF8;
    }
L_08987CF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(268), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(264), 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(276), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(272), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(280), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(232)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987D30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987D30u) goto L_08987D30;
    return;
L_08987D30:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08987AF4;
      }
      goto L_08987D38;
    }
L_08987D38:
    aot_gpr[31] = (0x08987D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0392_entry, 392u, 51u, 0x0898C3CCu>(ctx, &aot_mem) && ctx.pc == 0x08987D40u) goto L_08987D40;
    return;
L_08987D40:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (2216u << 16u);
      if (branch_taken) {
          goto L_08987D58;
      }
      goto L_08987D4C;
    }
L_08987D4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987D58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987D58u) goto L_08987D58;
    return;
L_08987D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(128));
    aot_gpr[31] = (0x08987D6Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(520));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08987D6Cu) goto L_08987D6C;
    return;
L_08987D6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08987F5C;
    }
    goto L_08987D88;
L_08987D88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08987F5C;
    }
    goto L_08987D94;
L_08987D94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(164)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08987F5C;
    }
    goto L_08987DA0;
L_08987DA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(160)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08987F5C;
    }
    goto L_08987DAC;
L_08987DAC:
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08987DB4u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987DB4u) goto L_08987DB4;
    return;
L_08987DB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(164)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987DC8u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26176)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987DC8u) goto L_08987DC8;
    return;
L_08987DC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26176)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(160)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(584));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987DE4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(520));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987DE4u) goto L_08987DE4;
    return;
L_08987DE4:
    aot_gpr[2] = (2217u << 16u);
    goto L_08987DE8;
L_08987DE8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2812)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          goto L_08987EEC;
      }
      goto L_08987DF4;
    }
L_08987DF4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08987EDC;
      }
      goto L_08987DFC;
    }
L_08987DFC:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987E04u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987E04u) goto L_08987E04;
    return;
L_08987E04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08987EEC;
      }
      goto L_08987E0C;
    }
L_08987E0C:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08987AF4;
L_08987E18:
    aot_gpr[3] = (0u | 64510u);
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08987E78;
      }
      goto L_08987E28;
    }
L_08987E28:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08987AF4;
L_08987E34:
    aot_gpr[31] = (0x08987E3Cu);
    aot_gpr[22] = (2216u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 56u, 0x0899053Cu>(ctx, &aot_mem) && ctx.pc == 0x08987E3Cu) goto L_08987E3C;
    return;
L_08987E3C:
    aot_gpr[4] = (4194u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 19923u);
    { const std::uint64_t product = static_cast<std::uint64_t>(aot_gpr[2]) * static_cast<std::uint64_t>(aot_gpr[4]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] >> 6u);
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[3] = (aot_gpr[4] << 7u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[5]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(6000));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(252), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    goto L_08987C00;
L_08987E78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    goto L_08987BFC;
L_08987E80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08987E80;
      }
      goto L_08987EAC;
    }
L_08987EAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08987CA4;
L_08987EC0:
    aot_gpr[31] = (0x08987EC8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08987EC8u) goto L_08987EC8;
    return;
L_08987EC8:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08987CC8;
      }
      goto L_08987ED4;
    }
L_08987ED4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08987AF8;
L_08987EDC:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987EE4u);
    aot_gpr[4] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987EE4u) goto L_08987EE4;
    return;
L_08987EE4:
    // nop
    goto L_08987E04;
L_08987EEC:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4748));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08987F04u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8192));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08987F04u) goto L_08987F04;
    return;
L_08987F04:
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2824), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(88)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4236), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4240), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987F40;
      }
      goto L_08987F30;
    }
L_08987F30:
    aot_gpr[31] = (0x08987F38u);
    // nop
    goto L_08987924;
L_08987F38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08987AF4;
      }
      goto L_08987F40;
    }
L_08987F40:
    aot_gpr[31] = (0x08987F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 119u, 0x089927ECu>(ctx, &aot_mem) && ctx.pc == 0x08987F48u) goto L_08987F48;
    return;
L_08987F48:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[31] = (0x08987F54u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4228), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0392_entry, 392u, 79u, 0x0898C62Cu>(ctx, &aot_mem) && ctx.pc == 0x08987F54u) goto L_08987F54;
    return;
L_08987F54:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08987AF4;
L_08987F5C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (2217u << 16u);
        goto L_08987DE8;
    }
    goto L_08987F64;
L_08987F64:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08987F6Cu);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-26192)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08987F6Cu) goto L_08987F6C;
    return;
L_08987F6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08987DE4;
L_08987F74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[8]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 9u, 0x0898813Cu>(ctx, &aot_mem); return;
      }
      goto L_08987FC8;
    }
L_08987FC8:
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2796)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 10u, 0x08988140u>(ctx, &aot_mem); return;
      }
      goto L_08987FD8;
    }
L_08987FD8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 2u, 0x08988018u>(ctx, &aot_mem); return;
      }
      goto L_08987FE4;
    }
L_08987FE4:
    aot_gpr[2] = (0u + 0u);
    goto L_08987FE8;
L_08987FE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    goto L_08987FEC;
L_08987FEC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.pc = 0x08988000u; return;
}

void recomp_unit_0387(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0387_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_387(Runtime &runtime) {
    runtime.register_generated_unit(387u, 0x08987000u, 4096u, &recomp_unit_0387, &recomp_unit_0387_entry);
    runtime.register_function(0x08987000u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987020u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987028u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987034u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987044u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987058u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987088u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987090u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089870A4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089870ACu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089870C0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089870F4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987100u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987108u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987148u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987184u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987188u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987194u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089871B4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089871BCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089871C4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987210u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987218u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987224u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987230u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987238u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898723Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987248u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987250u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898725Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987268u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987278u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987280u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987288u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987294u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987298u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089872C0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089872C8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089872CCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089872F4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089872FCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987304u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987310u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987318u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987328u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987330u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987354u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987364u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873A4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873B4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873C4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873D0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873D8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873E8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873F0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873F8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089873FCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987428u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898742Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987460u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987498u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089874D0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089874D4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987500u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987508u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987518u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987524u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898753Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987558u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987560u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898757Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987584u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987594u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089875C0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089875C8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089875D4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089875E0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089875E8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089875ECu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089875F4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987608u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987610u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987618u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987620u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898762Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987638u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987640u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987648u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987654u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987664u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987678u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987680u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987688u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987694u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089876A4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089876B0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089876E4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089876F0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089876F4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089876F8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987714u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987724u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898772Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987734u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987738u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987758u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987764u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987770u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898777Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987788u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987794u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089877A4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089877D8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089877DCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089877E4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089877ECu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987810u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987820u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987830u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898783Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987850u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898786Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987874u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089878ACu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089878B4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089878C0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089878D0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089878D4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089878F4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898790Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987924u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987948u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x0898795Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987964u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x089879FCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A00u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A1Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A24u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A2Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A34u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A4Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A54u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A88u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987A98u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987AA4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987AB0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987ABCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987AC4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987ACCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987AE4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987AECu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987AF4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987AF8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987B20u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987B24u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987B4Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987B5Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987B90u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BA4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BB0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BC0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BC8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BD4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BDCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BE8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BF0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987BFCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987C00u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987C38u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987C84u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987CA4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987CACu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987CC0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987CC8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987CD0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987CE8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987CF8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987D30u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987D38u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987D40u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987D4Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987D58u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987D6Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987D88u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987D94u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987DA0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987DACu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987DB4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987DC8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987DE4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987DE8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987DF4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987DFCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987E04u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987E0Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987E18u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987E28u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987E34u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987E3Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987E78u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987E80u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987EACu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987EC0u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987EC8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987ED4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987EDCu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987EE4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987EECu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F04u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F30u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F38u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F40u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F48u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F54u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F5Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F64u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F6Cu, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987F74u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987FC8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987FD8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987FE4u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987FE8u, &recomp_unit_0387, "recomp_unit_0387");
    runtime.register_function(0x08987FECu, &recomp_unit_0387, "recomp_unit_0387");
}
} // namespace psprecomp
