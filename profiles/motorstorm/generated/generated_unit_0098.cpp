#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0098[1022] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0,
    0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 25,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0,
    57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 63, 64, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 69, 70, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 95, 0, 0,
    0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 102, 103, 0, 0, 104, 0, 0, 0,
    0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0,
    0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    128, 0, 129, 130, 0, 0, 131, 0, 0, 0, 132, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 138, 0, 0, 139,
    0, 140, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148,
    149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0,
    173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 191, 192, 0, 0, 0, 193,
    0, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 209, 0, 210, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219,
};
void recomp_unit_0098_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08866000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0098[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08866000;
    case 2u: goto L_08866008;
    case 3u: goto L_08866020;
    case 4u: goto L_08866044;
    case 5u: goto L_08866050;
    case 6u: goto L_088660B0;
    case 7u: goto L_088660D0;
    case 8u: goto L_0886612C;
    case 9u: goto L_0886613C;
    case 10u: goto L_08866148;
    case 11u: goto L_08866174;
    case 12u: goto L_08866180;
    case 13u: goto L_088661A0;
    case 14u: goto L_088661C4;
    case 15u: goto L_088661CC;
    case 16u: goto L_088661EC;
    case 17u: goto L_088661F8;
    case 18u: goto L_08866208;
    case 19u: goto L_0886621C;
    case 20u: goto L_0886622C;
    case 21u: goto L_08866238;
    case 22u: goto L_0886624C;
    case 23u: goto L_08866270;
    case 24u: goto L_08866278;
    case 25u: goto L_0886627C;
    case 26u: goto L_08866288;
    case 27u: goto L_088662A8;
    case 28u: goto L_088662B0;
    case 29u: goto L_088662BC;
    case 30u: goto L_088662C8;
    case 31u: goto L_088662D8;
    case 32u: goto L_08866314;
    case 33u: goto L_08866338;
    case 34u: goto L_08866344;
    case 35u: goto L_08866350;
    case 36u: goto L_0886635C;
    case 37u: goto L_08866368;
    case 38u: goto L_08866390;
    case 39u: goto L_08866398;
    case 40u: goto L_088663B4;
    case 41u: goto L_088663D8;
    case 42u: goto L_088663E0;
    case 43u: goto L_088663FC;
    case 44u: goto L_08866414;
    case 45u: goto L_0886641C;
    case 46u: goto L_08866428;
    case 47u: goto L_08866440;
    case 48u: goto L_08866448;
    case 49u: goto L_08866450;
    case 50u: goto L_0886645C;
    case 51u: goto L_08866460;
    case 52u: goto L_0886647C;
    case 53u: goto L_088664C8;
    case 54u: goto L_088664DC;
    case 55u: goto L_088664E8;
    case 56u: goto L_088664F8;
    case 57u: goto L_08866500;
    case 58u: goto L_08866510;
    case 59u: goto L_08866520;
    case 60u: goto L_08866528;
    case 61u: goto L_08866538;
    case 62u: goto L_08866540;
    case 63u: goto L_0886654C;
    case 64u: goto L_08866550;
    case 65u: goto L_08866558;
    case 66u: goto L_08866564;
    case 67u: goto L_08866574;
    case 68u: goto L_0886658C;
    case 69u: goto L_088665A0;
    case 70u: goto L_088665A4;
    case 71u: goto L_088665A8;
    case 72u: goto L_088665B4;
    case 73u: goto L_088665CC;
    case 74u: goto L_088665D8;
    case 75u: goto L_088665E4;
    case 76u: goto L_088665F4;
    case 77u: goto L_08866610;
    case 78u: goto L_08866614;
    case 79u: goto L_08866634;
    case 80u: goto L_08866640;
    case 81u: goto L_08866644;
    case 82u: goto L_08866664;
    case 83u: goto L_088666A0;
    case 84u: goto L_088666C8;
    case 85u: goto L_088666D4;
    case 86u: goto L_088666E0;
    case 87u: goto L_088666E8;
    case 88u: goto L_08866710;
    case 89u: goto L_0886671C;
    case 90u: goto L_08866734;
    case 91u: goto L_08866744;
    case 92u: goto L_08866750;
    case 93u: goto L_0886675C;
    case 94u: goto L_08866770;
    case 95u: goto L_08866774;
    case 96u: goto L_08866784;
    case 97u: goto L_08866790;
    case 98u: goto L_088667A0;
    case 99u: goto L_088667B0;
    case 100u: goto L_088667C8;
    case 101u: goto L_088667DC;
    case 102u: goto L_088667E0;
    case 103u: goto L_088667E4;
    case 104u: goto L_088667F0;
    case 105u: goto L_08866808;
    case 106u: goto L_08866814;
    case 107u: goto L_08866820;
    case 108u: goto L_08866838;
    case 109u: goto L_0886683C;
    case 110u: goto L_0886685C;
    case 111u: goto L_08866860;
    case 112u: goto L_08866884;
    case 113u: goto L_088668A0;
    case 114u: goto L_088668AC;
    case 115u: goto L_088668B4;
    case 116u: goto L_088668BC;
    case 117u: goto L_088668C8;
    case 118u: goto L_088668D4;
    case 119u: goto L_088668E0;
    case 120u: goto L_088668EC;
    case 121u: goto L_088668F8;
    case 122u: goto L_08866904;
    case 123u: goto L_0886690C;
    case 124u: goto L_08866918;
    case 125u: goto L_08866948;
    case 126u: goto L_08866958;
    case 127u: goto L_08866978;
    case 128u: goto L_08866980;
    case 129u: goto L_08866988;
    case 130u: goto L_0886698C;
    case 131u: goto L_08866998;
    case 132u: goto L_088669A8;
    case 133u: goto L_088669AC;
    case 134u: goto L_088669BC;
    case 135u: goto L_088669DC;
    case 136u: goto L_088669E4;
    case 137u: goto L_088669EC;
    case 138u: goto L_088669F0;
    case 139u: goto L_088669FC;
    case 140u: goto L_08866A04;
    case 141u: goto L_08866A08;
    case 142u: goto L_08866A24;
    case 143u: goto L_08866A3C;
    case 144u: goto L_08866A40;
    case 145u: goto L_08866A4C;
    case 146u: goto L_08866A6C;
    case 147u: goto L_08866A74;
    case 148u: goto L_08866A7C;
    case 149u: goto L_08866A80;
    case 150u: goto L_08866A8C;
    case 151u: goto L_08866AA4;
    case 152u: goto L_08866AA8;
    case 153u: goto L_08866ACC;
    case 154u: goto L_08866AD8;
    case 155u: goto L_08866AF0;
    case 156u: goto L_08866AFC;
    case 157u: goto L_08866B28;
    case 158u: goto L_08866B34;
    case 159u: goto L_08866B5C;
    case 160u: goto L_08866B84;
    case 161u: goto L_08866BA0;
    case 162u: goto L_08866BA8;
    case 163u: goto L_08866BC0;
    case 164u: goto L_08866BE0;
    case 165u: goto L_08866C08;
    case 166u: goto L_08866C1C;
    case 167u: goto L_08866C28;
    case 168u: goto L_08866C4C;
    case 169u: goto L_08866C58;
    case 170u: goto L_08866C60;
    case 171u: goto L_08866C6C;
    case 172u: goto L_08866C74;
    case 173u: goto L_08866C80;
    case 174u: goto L_08866C88;
    case 175u: goto L_08866C94;
    case 176u: goto L_08866C9C;
    case 177u: goto L_08866CA8;
    case 178u: goto L_08866CB0;
    case 179u: goto L_08866CBC;
    case 180u: goto L_08866CC4;
    case 181u: goto L_08866CD4;
    case 182u: goto L_08866CE0;
    case 183u: goto L_08866CF0;
    case 184u: goto L_08866D0C;
    case 185u: goto L_08866D1C;
    case 186u: goto L_08866D30;
    case 187u: goto L_08866D3C;
    case 188u: goto L_08866D44;
    case 189u: goto L_08866D50;
    case 190u: goto L_08866D58;
    case 191u: goto L_08866D68;
    case 192u: goto L_08866D6C;
    case 193u: goto L_08866D7C;
    case 194u: goto L_08866D8C;
    case 195u: goto L_08866D94;
    case 196u: goto L_08866DA4;
    case 197u: goto L_08866DBC;
    case 198u: goto L_08866DF4;
    case 199u: goto L_08866E00;
    case 200u: goto L_08866E10;
    case 201u: goto L_08866E30;
    case 202u: goto L_08866E3C;
    case 203u: goto L_08866E50;
    case 204u: goto L_08866E60;
    case 205u: goto L_08866E90;
    case 206u: goto L_08866EA0;
    case 207u: goto L_08866EBC;
    case 208u: goto L_08866EF0;
    case 209u: goto L_08866F0C;
    case 210u: goto L_08866F14;
    case 211u: goto L_08866F18;
    case 212u: goto L_08866F2C;
    case 213u: goto L_08866F54;
    case 214u: goto L_08866F5C;
    case 215u: goto L_08866F84;
    case 216u: goto L_08866FB4;
    case 217u: goto L_08866FC8;
    case 218u: goto L_08866FD4;
    case 219u: goto L_08866FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08866000:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24920)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08866044;
      }
      goto L_08866020;
    }
L_08866020:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5568)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[31] = (0x08866044u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 180u, 0x08929D24u>(ctx, &aot_mem) && ctx.pc == 0x08866044u) goto L_08866044;
    return;
L_08866044:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866050:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16672u << 16u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] / aot_fpr[14];
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[10] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(2268), static_cast<std::uint8_t>(aot_gpr[10]));
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[9] = (2218u << 16u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(5564), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[8] = (2218u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[16] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[16])));
    aot_fpr[14] = aot_fpr[16] / aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(5552), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[12] = aot_fpr[15] / aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(5556), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(5560), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088660B0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24912), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088660D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(5392)));
    aot_gpr[5] = (aot_gpr[6] << 7u);
    aot_gpr[8] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[8] | 52429u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[7] = (17159u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] & 2u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886613C;
      }
      goto L_0886612C;
    }
L_0886612C:
    aot_gpr[6] = (16672u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08866148;
      }
      goto L_0886613C;
    }
L_0886613C:
    aot_gpr[6] = (16704u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08866148;
L_08866148:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (17096u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17154u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08866174u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 173u, 0x0892AD98u>(ctx, &aot_mem) && ctx.pc == 0x08866174u) goto L_08866174;
    return;
L_08866174:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866180:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08866238;
      }
      goto L_088661A0;
    }
L_088661A0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5268)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088661C4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088661C4u) goto L_088661C4;
    return;
L_088661C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866238;
      }
      goto L_088661CC;
    }
L_088661CC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(47))))));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(24868), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x088661ECu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088661ECu) goto L_088661EC;
    return;
L_088661EC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866238;
      }
      goto L_088661F8;
    }
L_088661F8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08866208u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08866208u) goto L_08866208;
    return;
L_08866208:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(128)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    aot_gpr[31] = (0x0886621Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886621Cu) goto L_0886621C;
    return;
L_0886621C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0886622Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4800));
    if (rt.invoke_chained_direct<&recomp_unit_0567_entry, 567u, 276u, 0x08A3BFC0u>(ctx, &aot_mem) && ctx.pc == 0x0886622Cu) goto L_0886622C;
    return;
L_0886622C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08866238u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 67u, 0x08863480u>(ctx, &aot_mem) && ctx.pc == 0x08866238u) goto L_08866238;
    return;
L_08866238:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886624C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08866278;
      }
      goto L_08866270;
    }
L_08866270:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0886627C;
      }
      goto L_08866278;
    }
L_08866278:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_0886627C;
L_0886627C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    aot_gpr[18] = (2218u << 16u);
      if (branch_taken) {
          goto L_08866440;
      }
      goto L_08866288;
    }
L_08866288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5268)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088662A8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088662A8u) goto L_088662A8;
    return;
L_088662A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886641C;
      }
      goto L_088662B0;
    }
L_088662B0:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[31] = (0x088662BCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088662BCu) goto L_088662BC;
    return;
L_088662BC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866414;
      }
      goto L_088662C8;
    }
L_088662C8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088662D8u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088662D8u) goto L_088662D8;
    return;
L_088662D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (0u | 32768u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    aot_gpr[4] = (24948u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08866314u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x08866314u) goto L_08866314;
    return;
L_08866314:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5268)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08866338u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08866338u) goto L_08866338;
    return;
L_08866338:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5268)));
    aot_gpr[31] = (0x08866344u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08866344u) goto L_08866344;
    return;
L_08866344:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08866414;
      }
      goto L_08866350;
    }
L_08866350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866414;
      }
      goto L_0886635C;
    }
L_0886635C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x08866368u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 84u, 0x08A4D690u>(ctx, &aot_mem) && ctx.pc == 0x08866368u) goto L_08866368;
    return;
L_08866368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(240), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2218u << 16u);
      if (branch_taken) {
          goto L_08866414;
      }
      goto L_08866390;
    }
L_08866390:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5320));
    goto L_08866398;
L_08866398:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[7] != 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
        goto L_088663D8;
    }
    goto L_088663B4;
L_088663B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(792)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (aot_gpr[7] << 4u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_088663FC;
      }
      goto L_088663D8;
    }
L_088663D8:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_088663FC;
      }
      goto L_088663E0;
    }
L_088663E0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(792)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[9] = (aot_gpr[7] << 4u);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(2))))));
    goto L_088663FC;
L_088663FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[17] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(824));
      if (branch_taken) {
          goto L_08866398;
      }
      goto L_08866414;
    }
L_08866414:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08866448;
      }
      goto L_0886641C;
    }
L_0886641C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(5268)));
    aot_gpr[31] = (0x08866428u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x08866428u) goto L_08866428;
    return;
L_08866428:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
      if (branch_taken) {
          goto L_08866448;
      }
      goto L_08866440;
    }
L_08866440:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_08866448;
L_08866448:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866460;
      }
      goto L_08866450;
    }
L_08866450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866460;
      }
      goto L_0886645C;
    }
L_0886645C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08866460;
L_08866460:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886647C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[4] & 32u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_08866500;
      }
      goto L_088664C8;
    }
L_088664C8:
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866500;
      }
      goto L_088664DC;
    }
L_088664DC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088664E8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_088660D0;
L_088664E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08866520;
      }
      goto L_088664F8;
    }
L_088664F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866538;
      }
      goto L_08866500;
    }
L_08866500:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08866510u);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08866510u) goto L_08866510;
    return;
L_08866510:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08866644;
      }
      goto L_08866520;
    }
L_08866520:
    aot_gpr[31] = (0x08866528u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 80u, 0x08A4D670u>(ctx, &aot_mem) && ctx.pc == 0x08866528u) goto L_08866528;
    return;
L_08866528:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    goto L_08866538;
L_08866538:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866550;
      }
      goto L_08866540;
    }
L_08866540:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0886654Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 81u, 0x08A4D678u>(ctx, &aot_mem) && ctx.pc == 0x0886654Cu) goto L_0886654C;
    return;
L_0886654C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_08866550;
L_08866550:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866574;
      }
      goto L_08866558;
    }
L_08866558:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08866564u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 82u, 0x08A4D680u>(ctx, &aot_mem) && ctx.pc == 0x08866564u) goto L_08866564;
    return;
L_08866564:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    goto L_08866574;
L_08866574:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[4] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088665A4;
      }
      goto L_0886658C;
    }
L_0886658C:
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(44))))));
        goto L_088665A8;
    }
    goto L_088665A0;
L_088665A0:
    aot_gpr[20] = (0u | 1u);
    goto L_088665A4;
L_088665A4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(44))))));
    goto L_088665A8;
L_088665A8:
    aot_gpr[5] = (aot_gpr[20] & 255u);
    aot_gpr[31] = (0x088665B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08866180;
L_088665B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[31] = (0x088665CCu);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_0886624C;
L_088665CC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866640;
      }
      goto L_088665D8;
    }
L_088665D8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088665E4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 83u, 0x08A4D688u>(ctx, &aot_mem) && ctx.pc == 0x088665E4u) goto L_088665E4;
    return;
L_088665E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08866614;
      }
      goto L_088665F4;
    }
L_088665F4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08866610u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 57u, 0x08869354u>(ctx, &aot_mem) && ctx.pc == 0x08866610u) goto L_08866610;
    return;
L_08866610:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08866614;
L_08866614:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(46))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[31] = (0x08866634u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 63u, 0x088694BCu>(ctx, &aot_mem) && ctx.pc == 0x08866634u) goto L_08866634;
    return;
L_08866634:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    goto L_08866640;
L_08866640:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08866644;
L_08866644:
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
L_08866664:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088666A0u);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088666A0u) goto L_088666A0;
    return;
L_088666A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088666E8;
      }
      goto L_088666C8;
    }
L_088666C8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088666D4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_088660D0;
L_088666D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866710;
      }
      goto L_088666E0;
    }
L_088666E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866744;
      }
      goto L_088666E8;
    }
L_088666E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08866860;
      }
      goto L_08866710;
    }
L_08866710:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08866734;
      }
      goto L_0886671C;
    }
L_0886671C:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08866734;
L_08866734:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08866744;
L_08866744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866784;
      }
      goto L_08866750;
    }
L_08866750:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08866774;
      }
      goto L_0886675C;
    }
L_0886675C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 160u);
    aot_gpr[31] = (0x08866770u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5584));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08866770u) goto L_08866770;
    return;
L_08866770:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_08866774;
L_08866774:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08866784;
L_08866784:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088667B0;
      }
      goto L_08866790;
    }
L_08866790:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (aot_gpr[4] | 0u);
        goto L_088667A0;
    }
    goto L_088667A0;
L_088667A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_088667B0;
L_088667B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[4] & 2u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088667E0;
      }
      goto L_088667C8;
    }
L_088667C8:
    aot_gpr[4] = (aot_gpr[4] & 32u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(44))))));
        goto L_088667E4;
    }
    goto L_088667DC;
L_088667DC:
    aot_gpr[5] = (0u | 1u);
    goto L_088667E0;
L_088667E0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(44))))));
    goto L_088667E4;
L_088667E4:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[31] = (0x088667F0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08866180;
L_088667F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[31] = (0x08866808u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_0886624C;
L_08866808:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886685C;
      }
      goto L_08866814;
    }
L_08866814:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886683C;
      }
      goto L_08866820;
    }
L_08866820:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08866838u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 58u, 0x08869364u>(ctx, &aot_mem) && ctx.pc == 0x08866838u) goto L_08866838;
    return;
L_08866838:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_0886683C;
L_0886683C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(46))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] ^ 1u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[31] = (0x0886685Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 63u, 0x088694BCu>(ctx, &aot_mem) && ctx.pc == 0x0886685Cu) goto L_0886685C;
    return;
L_0886685C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08866860;
L_08866860:
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
L_08866884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & 32u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_088668B4;
      }
      goto L_088668A0;
    }
L_088668A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088668BC;
      }
      goto L_088668AC;
    }
L_088668AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088668C8;
      }
      goto L_088668B4;
    }
L_088668B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886690C;
      }
      goto L_088668BC;
    }
L_088668BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_088668C8;
L_088668C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088668E0;
      }
      goto L_088668D4;
    }
L_088668D4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_088668E0;
L_088668E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088668F8;
      }
      goto L_088668EC;
    }
L_088668EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_088668F8;
L_088668F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886690C;
      }
      goto L_08866904;
    }
L_08866904:
    aot_gpr[31] = (0x0886690Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 60u, 0x088693C8u>(ctx, &aot_mem) && ctx.pc == 0x0886690Cu) goto L_0886690C;
    return;
L_0886690C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866918:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08866ACC;
      }
      goto L_08866948;
    }
L_08866948:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08866980;
      }
      goto L_08866958;
    }
L_08866958:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08866978u);
    aot_gpr[6] = (0u | 136u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08866978u) goto L_08866978;
    return;
L_08866978:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866980;
    }
L_08866980:
    aot_gpr[31] = (0x08866988u);
    aot_gpr[4] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08866988u) goto L_08866988;
    return;
L_08866988:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_0886698C;
L_0886698C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088669AC;
      }
      goto L_08866998;
    }
L_08866998:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x088669A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 94u, 0x08867860u>(ctx, &aot_mem) && ctx.pc == 0x088669A8u) goto L_088669A8;
    return;
L_088669A8:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_088669AC;
L_088669AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088669E4;
      }
      goto L_088669BC;
    }
L_088669BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088669DCu);
    aot_gpr[6] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088669DCu) goto L_088669DC;
    return;
L_088669DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088669F0;
      }
      goto L_088669E4;
    }
L_088669E4:
    aot_gpr[31] = (0x088669ECu);
    aot_gpr[4] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088669ECu) goto L_088669EC;
    return;
L_088669EC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_088669F0;
L_088669F0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866A08;
      }
      goto L_088669FC;
    }
L_088669FC:
    aot_gpr[31] = (0x08866A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 91u, 0x0886A600u>(ctx, &aot_mem) && ctx.pc == 0x08866A04u) goto L_08866A04;
    return;
L_08866A04:
    aot_gpr[18] = (aot_gpr[19] | 0u);
    goto L_08866A08;
L_08866A08:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[31] = (0x08866A24u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08866A24u) goto L_08866A24;
    return;
L_08866A24:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08866ACC;
      }
      goto L_08866A3C;
    }
L_08866A3C:
    aot_gpr[22] = (0u | 0u);
    goto L_08866A40;
L_08866A40:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08866A74;
      }
      goto L_08866A4C;
    }
L_08866A4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08866A6Cu);
    aot_gpr[6] = (0u | 52u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08866A6Cu) goto L_08866A6C;
    return;
L_08866A6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08866A80;
      }
      goto L_08866A74;
    }
L_08866A74:
    aot_gpr[31] = (0x08866A7Cu);
    aot_gpr[4] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08866A7Cu) goto L_08866A7C;
    return;
L_08866A7C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_08866A80;
L_08866A80:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866AA8;
      }
      goto L_08866A8C;
    }
L_08866A8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[31] = (0x08866AA4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 101u, 0x08868718u>(ctx, &aot_mem) && ctx.pc == 0x08866AA4u) goto L_08866AA4;
    return;
L_08866AA4:
    aot_gpr[19] = (aot_gpr[20] | 0u);
    goto L_08866AA8;
L_08866AA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(824));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08866A40;
      }
      goto L_08866ACC;
    }
L_08866ACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866AF0;
      }
      goto L_08866AD8;
    }
L_08866AD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[31] = (0x08866AF0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 160u, 0x0886BC54u>(ctx, &aot_mem) && ctx.pc == 0x08866AF0u) goto L_08866AF0;
    return;
L_08866AF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866B28;
      }
      goto L_08866AFC;
    }
L_08866AFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(5320));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[7] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[31] = (0x08866B28u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 209u, 0x0886AE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08866B28u) goto L_08866B28;
    return;
L_08866B28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866B5C;
      }
      goto L_08866B34;
    }
L_08866B34:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(5320));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] & 2u);
    aot_gpr[6] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[31] = (0x08866B5Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 117u, 0x0886B8B8u>(ctx, &aot_mem) && ctx.pc == 0x08866B5Cu) goto L_08866B5C;
    return;
L_08866B5C:
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
L_08866B84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08866C1C;
      }
      goto L_08866BA0;
    }
L_08866BA0:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (2218u << 16u);
    goto L_08866BA8;
L_08866BA8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[10] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08866C08;
      }
      goto L_08866BC0;
    }
L_08866BC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[6] << 6u);
    aot_gpr[31] = (0x08866BE0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 43u, 0x0892A384u>(ctx, &aot_mem) && ctx.pc == 0x08866BE0u) goto L_08866BE0;
    return;
L_08866BE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    goto L_08866C08;
L_08866C08:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08866BA8;
      }
      goto L_08866C1C;
    }
L_08866C1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866C28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08866C4Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08866B84;
L_08866C4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866C60;
      }
      goto L_08866C58;
    }
L_08866C58:
    aot_gpr[31] = (0x08866C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 45u, 0x0886C2F0u>(ctx, &aot_mem) && ctx.pc == 0x08866C60u) goto L_08866C60;
    return;
L_08866C60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866C74;
      }
      goto L_08866C6C;
    }
L_08866C6C:
    aot_gpr[31] = (0x08866C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 225u, 0x0886AFACu>(ctx, &aot_mem) && ctx.pc == 0x08866C74u) goto L_08866C74;
    return;
L_08866C74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866C88;
      }
      goto L_08866C80;
    }
L_08866C80:
    aot_gpr[31] = (0x08866C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 121u, 0x0886B928u>(ctx, &aot_mem) && ctx.pc == 0x08866C88u) goto L_08866C88;
    return;
L_08866C88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866C9C;
      }
      goto L_08866C94;
    }
L_08866C94:
    aot_gpr[31] = (0x08866C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 155u, 0x08869B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08866C9Cu) goto L_08866C9C;
    return;
L_08866C9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866CA8;
    }
L_08866CA8:
    aot_gpr[31] = (0x08866CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 103u, 0x08867974u>(ctx, &aot_mem) && ctx.pc == 0x08866CB0u) goto L_08866CB0;
    return;
L_08866CB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866CC4;
      }
      goto L_08866CBC;
    }
L_08866CBC:
    aot_gpr[31] = (0x08866CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 100u, 0x0886A6B0u>(ctx, &aot_mem) && ctx.pc == 0x08866CC4u) goto L_08866CC4;
    return;
L_08866CC4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08866CE0;
      }
      goto L_08866CD4;
    }
L_08866CD4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08866CE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088660D0;
L_08866CE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866CF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08866D0Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08866C28;
L_08866D0C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08866D30;
      }
      goto L_08866D1C;
    }
L_08866D1C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[31] = (0x08866D30u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 42u, 0x0892A370u>(ctx, &aot_mem) && ctx.pc == 0x08866D30u) goto L_08866D30;
    return;
L_08866D30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866D44;
      }
      goto L_08866D3C;
    }
L_08866D3C:
    aot_gpr[31] = (0x08866D44u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 96u, 0x08867914u>(ctx, &aot_mem) && ctx.pc == 0x08866D44u) goto L_08866D44;
    return;
L_08866D44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866D58;
      }
      goto L_08866D50;
    }
L_08866D50:
    aot_gpr[31] = (0x08866D58u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 93u, 0x0886A650u>(ctx, &aot_mem) && ctx.pc == 0x08866D58u) goto L_08866D58;
    return;
L_08866D58:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08866D8C;
      }
      goto L_08866D68;
    }
L_08866D68:
    aot_gpr[17] = (aot_gpr[18] << 2u);
    goto L_08866D6C;
L_08866D6C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08866D7Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 169u, 0x08867F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08866D7Cu) goto L_08866D7C;
    return;
L_08866D7C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08866D6C;
      }
      goto L_08866D8C;
    }
L_08866D8C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866DA4;
      }
      goto L_08866D94;
    }
L_08866D94:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08866DA4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08866DA4u) goto L_08866DA4;
    return;
L_08866DA4:
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
L_08866DBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28636)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08866E00;
      }
      goto L_08866DF4;
    }
L_08866DF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08866EA0;
      }
      goto L_08866E00;
    }
L_08866E00:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08866E10u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08866E10u) goto L_08866E10;
    return;
L_08866E10:
    aot_gpr[4] = (15897u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08866E50;
      }
      goto L_08866E30;
    }
L_08866E30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x08866E3Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08866E3Cu) goto L_08866E3C;
    return;
L_08866E3C:
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[22] = aot_fpr[22] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_08866E50;
L_08866E50:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[22]) || std::isnan(aot_fpr[20])) && aot_fpr[22] == aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866EA0;
      }
      goto L_08866E60;
    }
L_08866E60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08866EA0;
      }
      goto L_08866E90;
    }
L_08866E90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08866EA0;
L_08866EA0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866EBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (16250u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] | 57672u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(186)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08866F18;
    }
    goto L_08866EF0;
L_08866EF0:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(140)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08866F54;
      }
      goto L_08866F0C;
    }
L_08866F0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 255u);
      if (branch_taken) {
          goto L_08866F5C;
      }
      goto L_08866F14;
    }
L_08866F14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08866F18;
L_08866F18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(268)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08866F2Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 77u, 0x0886A474u>(ctx, &aot_mem) && ctx.pc == 0x08866F2Cu) goto L_08866F2C;
    return;
L_08866F2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 11u, 0x088670D0u>(ctx, &aot_mem); return;
      }
      goto L_08866F54;
    }
L_08866F54:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_08866F5C;
L_08866F5C:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(140)));
    aot_gpr[5] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[14]) || std::isnan(aot_fpr[13])) && aot_fpr[14] == aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (0u | 1u);
        goto L_08866F84;
    }
    goto L_08866F84;
L_08866F84:
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(149))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08866FC8;
      }
      goto L_08866FB4;
    }
L_08866FB4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 11u, 0x088670D0u>(ctx, &aot_mem); return;
      }
      goto L_08866FC8;
    }
L_08866FC8:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (16179u << 16u);
      if (branch_taken) {
          goto L_08866FF4;
      }
      goto L_08866FD4;
    }
L_08866FD4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (aot_gpr[5] | 13107u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = aot_fpr[14] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 11u, 0x088670D0u>(ctx, &aot_mem); return;
      }
      goto L_08866FF4;
    }
L_08866FF4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(186)));
    aot_gpr[7] = (16256u << 16u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08867000u; return;
}

void recomp_unit_0098(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0098_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_98(Runtime &runtime) {
    runtime.register_generated_unit(98u, 0x08866000u, 4096u, &recomp_unit_0098, &recomp_unit_0098_entry);
    runtime.register_function(0x08866000u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866008u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866020u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866044u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866050u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088660B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088660D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886612Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886613Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866148u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866174u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866180u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088661A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088661C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088661CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088661ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088661F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866208u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886621Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886622Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866238u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886624Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866270u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866278u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886627Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866288u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088662A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088662B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088662BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088662C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088662D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866314u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866338u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866350u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886635Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866368u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866390u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866398u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088663B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088663D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088663E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088663FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866414u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886641Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866428u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866440u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866448u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866450u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886645Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866460u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886647Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088664C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088664DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088664E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088664F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866500u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866510u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866520u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866528u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866538u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866540u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886654Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866550u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866558u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866564u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866574u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886658Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088665A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088665A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088665A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088665B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088665CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088665D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088665E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088665F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866610u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866614u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866634u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866640u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866644u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866664u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088666A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088666C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088666D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088666E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088666E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866710u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886671Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866734u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866744u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866750u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886675Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866770u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866774u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866784u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866790u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088667A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088667B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088667C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088667DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088667E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088667E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088667F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866808u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866814u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866820u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866838u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886683Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886685Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866860u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866884u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088668F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866904u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886690Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866918u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866948u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866958u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866978u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866980u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866988u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0886698Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866998u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088669A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088669ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088669BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088669DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088669E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088669ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088669F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x088669FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866A8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866AA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866AA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866ACCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866AD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866AF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866AFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866B28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866B34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866B5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866B84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866BA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866BA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866BC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866BE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866C9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866CA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866CB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866CBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866CC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866CD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866CE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866CF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866D94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866DA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866DBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866DF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866E00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866E10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866E30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866E3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866E50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866E60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866E90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866EA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866EBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866EF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866F0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866F14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866F18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866F2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866F54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866F5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866F84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866FB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866FC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866FD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x08866FF4u, &recomp_unit_0098, "recomp_unit_0098");
}
} // namespace psprecomp
