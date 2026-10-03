#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0117[1019] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68,
    0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0,
    78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 83, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88,
    0, 89, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0,
    0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 104, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0,
    0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 141, 0, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 161, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0,
    0, 0, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 172,
    0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 187, 0, 188, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0,
    0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206,
};
void recomp_unit_0117_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08879004u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0117[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08879004;
    case 2u: goto L_08879010;
    case 3u: goto L_08879030;
    case 4u: goto L_0887903C;
    case 5u: goto L_08879058;
    case 6u: goto L_08879088;
    case 7u: goto L_08879090;
    case 8u: goto L_088790A0;
    case 9u: goto L_088790A8;
    case 10u: goto L_088790D4;
    case 11u: goto L_088790DC;
    case 12u: goto L_088790FC;
    case 13u: goto L_08879104;
    case 14u: goto L_08879114;
    case 15u: goto L_0887911C;
    case 16u: goto L_08879134;
    case 17u: goto L_0887913C;
    case 18u: goto L_08879158;
    case 19u: goto L_08879164;
    case 20u: goto L_0887918C;
    case 21u: goto L_08879194;
    case 22u: goto L_0887919C;
    case 23u: goto L_088791B8;
    case 24u: goto L_088791D8;
    case 25u: goto L_088791F8;
    case 26u: goto L_0887923C;
    case 27u: goto L_0887925C;
    case 28u: goto L_08879268;
    case 29u: goto L_088792D0;
    case 30u: goto L_088792DC;
    case 31u: goto L_088792E8;
    case 32u: goto L_08879300;
    case 33u: goto L_08879314;
    case 34u: goto L_08879320;
    case 35u: goto L_08879358;
    case 36u: goto L_08879378;
    case 37u: goto L_088793C0;
    case 38u: goto L_088793D8;
    case 39u: goto L_088793F4;
    case 40u: goto L_08879418;
    case 41u: goto L_08879420;
    case 42u: goto L_08879434;
    case 43u: goto L_08879450;
    case 44u: goto L_08879460;
    case 45u: goto L_08879468;
    case 46u: goto L_08879474;
    case 47u: goto L_088794B0;
    case 48u: goto L_088794CC;
    case 49u: goto L_088794DC;
    case 50u: goto L_0887950C;
    case 51u: goto L_08879518;
    case 52u: goto L_08879528;
    case 53u: goto L_08879534;
    case 54u: goto L_08879540;
    case 55u: goto L_08879548;
    case 56u: goto L_088795AC;
    case 57u: goto L_088795B8;
    case 58u: goto L_088795C4;
    case 59u: goto L_088795DC;
    case 60u: goto L_088795E4;
    case 61u: goto L_088795F0;
    case 62u: goto L_088795FC;
    case 63u: goto L_08879624;
    case 64u: goto L_08879644;
    case 65u: goto L_08879650;
    case 66u: goto L_08879658;
    case 67u: goto L_08879668;
    case 68u: goto L_08879680;
    case 69u: goto L_0887968C;
    case 70u: goto L_08879694;
    case 71u: goto L_088796A0;
    case 72u: goto L_088796B4;
    case 73u: goto L_088796C0;
    case 74u: goto L_088796C8;
    case 75u: goto L_088796D8;
    case 76u: goto L_088796EC;
    case 77u: goto L_088796F4;
    case 78u: goto L_08879704;
    case 79u: goto L_08879718;
    case 80u: goto L_08879720;
    case 81u: goto L_08879730;
    case 82u: goto L_08879744;
    case 83u: goto L_08879748;
    case 84u: goto L_08879750;
    case 85u: goto L_08879758;
    case 86u: goto L_08879764;
    case 87u: goto L_0887976C;
    case 88u: goto L_08879780;
    case 89u: goto L_08879788;
    case 90u: goto L_08879794;
    case 91u: goto L_0887979C;
    case 92u: goto L_088797A4;
    case 93u: goto L_088797B0;
    case 94u: goto L_088797B8;
    case 95u: goto L_088797C8;
    case 96u: goto L_088797D0;
    case 97u: goto L_088797E4;
    case 98u: goto L_088797EC;
    case 99u: goto L_088797F4;
    case 100u: goto L_0887980C;
    case 101u: goto L_08879818;
    case 102u: goto L_08879820;
    case 103u: goto L_08879828;
    case 104u: goto L_08879834;
    case 105u: goto L_08879838;
    case 106u: goto L_08879840;
    case 107u: goto L_08879850;
    case 108u: goto L_08879880;
    case 109u: goto L_088798A0;
    case 110u: goto L_088798BC;
    case 111u: goto L_088798CC;
    case 112u: goto L_088798E0;
    case 113u: goto L_088798EC;
    case 114u: goto L_088798F8;
    case 115u: goto L_08879908;
    case 116u: goto L_08879914;
    case 117u: goto L_08879920;
    case 118u: goto L_08879954;
    case 119u: goto L_08879974;
    case 120u: goto L_08879984;
    case 121u: goto L_08879990;
    case 122u: goto L_08879998;
    case 123u: goto L_088799BC;
    case 124u: goto L_088799E0;
    case 125u: goto L_08879A30;
    case 126u: goto L_08879A5C;
    case 127u: goto L_08879A88;
    case 128u: goto L_08879A9C;
    case 129u: goto L_08879AC4;
    case 130u: goto L_08879ACC;
    case 131u: goto L_08879AD4;
    case 132u: goto L_08879AD8;
    case 133u: goto L_08879AE0;
    case 134u: goto L_08879AE8;
    case 135u: goto L_08879B0C;
    case 136u: goto L_08879B28;
    case 137u: goto L_08879B3C;
    case 138u: goto L_08879B54;
    case 139u: goto L_08879B5C;
    case 140u: goto L_08879B64;
    case 141u: goto L_08879B68;
    case 142u: goto L_08879B74;
    case 143u: goto L_08879B98;
    case 144u: goto L_08879B9C;
    case 145u: goto L_08879BAC;
    case 146u: goto L_08879BF0;
    case 147u: goto L_08879C14;
    case 148u: goto L_08879C1C;
    case 149u: goto L_08879C2C;
    case 150u: goto L_08879C40;
    case 151u: goto L_08879C48;
    case 152u: goto L_08879C50;
    case 153u: goto L_08879C60;
    case 154u: goto L_08879C78;
    case 155u: goto L_08879C98;
    case 156u: goto L_08879CA0;
    case 157u: goto L_08879CAC;
    case 158u: goto L_08879CB8;
    case 159u: goto L_08879CC4;
    case 160u: goto L_08879CCC;
    case 161u: goto L_08879CD0;
    case 162u: goto L_08879CD8;
    case 163u: goto L_08879CE0;
    case 164u: goto L_08879CF4;
    case 165u: goto L_08879CFC;
    case 166u: goto L_08879D10;
    case 167u: goto L_08879D14;
    case 168u: goto L_08879D3C;
    case 169u: goto L_08879D5C;
    case 170u: goto L_08879D68;
    case 171u: goto L_08879D70;
    case 172u: goto L_08879D80;
    case 173u: goto L_08879D8C;
    case 174u: goto L_08879D94;
    case 175u: goto L_08879D9C;
    case 176u: goto L_08879DC4;
    case 177u: goto L_08879DDC;
    case 178u: goto L_08879DF8;
    case 179u: goto L_08879E08;
    case 180u: goto L_08879E10;
    case 181u: goto L_08879E20;
    case 182u: goto L_08879E28;
    case 183u: goto L_08879E40;
    case 184u: goto L_08879E4C;
    case 185u: goto L_08879E58;
    case 186u: goto L_08879E60;
    case 187u: goto L_08879E64;
    case 188u: goto L_08879E6C;
    case 189u: goto L_08879E74;
    case 190u: goto L_08879EA0;
    case 191u: goto L_08879EB8;
    case 192u: goto L_08879ED4;
    case 193u: goto L_08879EE8;
    case 194u: goto L_08879F10;
    case 195u: goto L_08879F28;
    case 196u: goto L_08879F44;
    case 197u: goto L_08879F4C;
    case 198u: goto L_08879F68;
    case 199u: goto L_08879F70;
    case 200u: goto L_08879F88;
    case 201u: goto L_08879F90;
    case 202u: goto L_08879FA4;
    case 203u: goto L_08879FAC;
    case 204u: goto L_08879FC4;
    case 205u: goto L_08879FCC;
    case 206u: goto L_08879FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08879004:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08879010u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08879010u) goto L_08879010;
    return;
L_08879010:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7908)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08879030u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8240));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879030u) goto L_08879030;
    return;
L_08879030:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0887903Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x0887903Cu) goto L_0887903C;
    return;
L_0887903C:
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
L_08879058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8152));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08879088u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08879088u) goto L_08879088;
    return;
L_08879088:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08879104;
      }
      goto L_08879090;
    }
L_08879090:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088790A0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8172));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088790A0u) goto L_088790A0;
    return;
L_088790A0:
    aot_gpr[31] = (0x088790A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088790A8u) goto L_088790A8;
    return;
L_088790A8:
    aot_gpr[18] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(7919), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088790D4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8188));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088790D4u) goto L_088790D4;
    return;
L_088790D4:
    aot_gpr[31] = (0x088790DCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088790DCu) goto L_088790DC;
    return;
L_088790DC:
    aot_gpr[5] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(7918), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088790FCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 169u, 0x08881EA4u>(ctx, &aot_mem) && ctx.pc == 0x088790FCu) goto L_088790FC;
    return;
L_088790FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887919C;
      }
      goto L_08879104;
    }
L_08879104:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8204));
    aot_gpr[31] = (0x08879114u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08879114u) goto L_08879114;
    return;
L_08879114:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887919C;
      }
      goto L_0887911C;
    }
L_0887911C:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08879134u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8224));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879134u) goto L_08879134;
    return;
L_08879134:
    aot_gpr[31] = (0x0887913Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0887913Cu) goto L_0887913C;
    return;
L_0887913C:
    aot_gpr[16] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7912), aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_08879164;
      }
      goto L_08879158;
    }
L_08879158:
    aot_gpr[5] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_08879164;
L_08879164:
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (2218u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x0887918Cu);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(8240));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887918Cu) goto L_0887918C;
    return;
L_0887918C:
    aot_gpr[31] = (0x08879194u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08879194u) goto L_08879194;
    return;
L_08879194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(7908), aot_gpr[2]);
    goto L_0887919C;
L_0887919C:
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
L_088791B8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25584), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088791D8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25592), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088791F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[19] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(8272));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x0887923Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8288));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0887923Cu) goto L_0887923C;
    return;
L_0887923C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0887925Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5596));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 171u, 0x08873AD8u>(ctx, &aot_mem) && ctx.pc == 0x0887925Cu) goto L_0887925C;
    return;
L_0887925C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08879268u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25748)));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 108u, 0x0887F92Cu>(ctx, &aot_mem) && ctx.pc == 0x08879268u) goto L_08879268;
    return;
L_08879268:
    aot_gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 1000u);
    aot_gpr[7] = (0u | 60000u);
    aot_gpr[5] = (0u | 100u);
    aot_gpr[6] = (0u | 60u);
    aot_gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[8]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_gpr[17] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088792DC;
      }
      goto L_088792D0;
    }
L_088792D0:
    aot_gpr[18] = (0u | 99u);
    aot_gpr[17] = (0u | 59u);
    aot_gpr[16] = (aot_gpr[18] | 0u);
    goto L_088792DC;
L_088792DC:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088792E8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088792E8u) goto L_088792E8;
    return;
L_088792E8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08879300u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08879300u) goto L_08879300;
    return;
L_08879300:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08879314u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8296));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879314u) goto L_08879314;
    return;
L_08879314:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08879320u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 209u, 0x0888CF00u>(ctx, &aot_mem) && ctx.pc == 0x08879320u) goto L_08879320;
    return;
L_08879320:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8808), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5272)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
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
L_08879358:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8808), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5272)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879378:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-432));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(380), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879850;
      }
      goto L_088793C0;
    }
L_088793C0:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(8344)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088793D8:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8272));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088793F4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8312));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088793F4u) goto L_088793F4;
    return;
L_088793F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    aot_gpr[19] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879420;
      }
      goto L_08879418;
    }
L_08879418:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08879420;
L_08879420:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08879434u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8316));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879434u) goto L_08879434;
    return;
L_08879434:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879460;
      }
      goto L_08879450;
    }
L_08879450:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x08879460u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x08879460u) goto L_08879460;
    return;
L_08879460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879850;
      }
      goto L_08879468;
    }
L_08879468:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08879474u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25748)));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 109u, 0x0887F934u>(ctx, &aot_mem) && ctx.pc == 0x08879474u) goto L_08879474;
    return;
L_08879474:
    aot_gpr[4] = (21327u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18503));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (18754u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11860));
    aot_gpr[5] = (0u | 78u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26)));
    aot_gpr[31] = (0x088794B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 59u, 0x088C647Cu>(ctx, &aot_mem) && ctx.pc == 0x088794B0u) goto L_088794B0;
    return;
L_088794B0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (0u | 87u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088794CCu);
    aot_gpr[16] = (aot_gpr[6] + static_cast<std::uint32_t>(8320));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088794CCu) goto L_088794CC;
    return;
L_088794CC:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088794DCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088794DCu) goto L_088794DC;
    return;
L_088794DC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2432));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5040));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_08879528;
      }
      goto L_0887950C;
    }
L_0887950C:
    aot_gpr[4] = (0u | 93u);
    aot_gpr[31] = (0x08879518u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08879518u) goto L_08879518;
    return;
L_08879518:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08879540;
      }
      goto L_08879528;
    }
L_08879528:
    aot_gpr[4] = (0u | 92u);
    aot_gpr[31] = (0x08879534u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08879534u) goto L_08879534;
    return;
L_08879534:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08879540;
L_08879540:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_088795E4;
      }
      goto L_08879548;
    }
L_08879548:
    { const std::uint32_t dividend = aot_gpr[16]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 1000u);
    aot_gpr[7] = (0u | 60000u);
    aot_gpr[5] = (0u | 100u);
    aot_gpr[6] = (0u | 60u);
    aot_gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[16]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[16]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[16] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[8]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[18] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_gpr[17] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088795B8;
      }
      goto L_088795AC;
    }
L_088795AC:
    aot_gpr[18] = (0u | 99u);
    aot_gpr[17] = (0u | 59u);
    aot_gpr[16] = (aot_gpr[18] | 0u);
    goto L_088795B8;
L_088795B8:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x088795C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088795C4u) goto L_088795C4;
    return;
L_088795C4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088795DCu);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088795DCu) goto L_088795DC;
    return;
L_088795DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088795FC;
      }
      goto L_088795E4;
    }
L_088795E4:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x088795F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088795F0u) goto L_088795F0;
    return;
L_088795F0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088795FCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088795FCu) goto L_088795FC;
    return;
L_088795FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[8] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08879624u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8324));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08879624u) goto L_08879624;
    return;
L_08879624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08879644u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 124u, 0x08888C78u>(ctx, &aot_mem) && ctx.pc == 0x08879644u) goto L_08879644;
    return;
L_08879644:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879850;
      }
      goto L_08879650;
    }
L_08879650:
    aot_gpr[31] = (0x08879658u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x08879658u) goto L_08879658;
    return;
L_08879658:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(-3));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879720;
      }
      goto L_08879668;
    }
L_08879668:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(8376)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879680:
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879748;
      }
      goto L_0887968C;
    }
L_0887968C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879748;
      }
      goto L_08879694;
    }
L_08879694:
    aot_gpr[4] = (0u | 100u);
    aot_gpr[31] = (0x088796A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088796A0u) goto L_088796A0;
    return;
L_088796A0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088796B4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088796B4u) goto L_088796B4;
    return;
L_088796B4:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879748;
      }
      goto L_088796C0;
    }
L_088796C0:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08879748;
      }
      goto L_088796C8;
    }
L_088796C8:
    aot_gpr[16] = (0u | 5u);
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x088796D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088796D8u) goto L_088796D8;
    return;
L_088796D8:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088796ECu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088796ECu) goto L_088796EC;
    return;
L_088796EC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[16]);
      if (branch_taken) {
          goto L_08879748;
      }
      goto L_088796F4;
    }
L_088796F4:
    aot_gpr[16] = (0u | 5u);
    aot_gpr[4] = (0u | 38u);
    aot_gpr[31] = (0x08879704u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08879704u) goto L_08879704;
    return;
L_08879704:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08879718u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08879718u) goto L_08879718;
    return;
L_08879718:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[16]);
      if (branch_taken) {
          goto L_08879748;
      }
      goto L_08879720;
    }
L_08879720:
    aot_gpr[16] = (0u | 5u);
    aot_gpr[4] = (0u | 35u);
    aot_gpr[31] = (0x08879730u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08879730u) goto L_08879730;
    return;
L_08879730:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08879744u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08879744u) goto L_08879744;
    return;
L_08879744:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    goto L_08879748;
L_08879748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879850;
      }
      goto L_08879750;
    }
L_08879750:
    aot_gpr[31] = (0x08879758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08879758u) goto L_08879758;
    return;
L_08879758:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08879780;
    }
    goto L_08879764;
L_08879764:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08879794;
      }
      goto L_0887976C;
    }
L_0887976C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879794;
      }
      goto L_08879780;
    }
L_08879780:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879794;
      }
      goto L_08879788;
    }
L_08879788:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), 0u);
    goto L_08879794;
L_08879794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879850;
      }
      goto L_0887979C;
    }
L_0887979C:
    aot_gpr[31] = (0x088797A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x088797A4u) goto L_088797A4;
    return;
L_088797A4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_088797C8;
    }
    goto L_088797B0;
L_088797B0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088797EC;
      }
      goto L_088797B8;
    }
L_088797B8:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088797EC;
      }
      goto L_088797C8;
    }
L_088797C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088797EC;
      }
      goto L_088797D0;
    }
L_088797D0:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088797E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 2u, 0x0888900Cu>(ctx, &aot_mem) && ctx.pc == 0x088797E4u) goto L_088797E4;
    return;
L_088797E4:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_088797EC;
L_088797EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879850;
      }
      goto L_088797F4;
    }
L_088797F4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 13 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
        goto L_08879820;
    }
    goto L_0887980C;
L_0887980C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879838;
      }
      goto L_08879818;
    }
L_08879818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879834;
      }
      goto L_08879820;
    }
L_08879820:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879838;
      }
      goto L_08879828;
    }
L_08879828:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879838;
      }
      goto L_08879834;
    }
L_08879834:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), 0u);
    goto L_08879838;
L_08879838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879850;
      }
      goto L_08879840;
    }
L_08879840:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24760));
    aot_gpr[31] = (0x08879850u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 103u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x08879850u) goto L_08879850;
    return;
L_08879850:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(380)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879880:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25600), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088798A0:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25612), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25613), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25614), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088798BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088798CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 120u, 0x08888C48u>(ctx, &aot_mem) && ctx.pc == 0x088798CCu) goto L_088798CC;
    return;
L_088798CC:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(25613), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25613)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088798F8;
      }
      goto L_088798E0;
    }
L_088798E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25612)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088798F8;
      }
      goto L_088798EC;
    }
L_088798EC:
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(25614), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_088798F8;
L_088798F8:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25612), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879908:
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25614)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879914:
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(25614), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879920:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8808), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5272)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879954:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7480)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8808), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(5272)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(aot_gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08879984u);
    // nop
    goto L_08879954;
L_08879984:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879990:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(292), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879998:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25748)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088799BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 110u, 0x0887F93Cu>(ctx, &aot_mem) && ctx.pc == 0x088799BCu) goto L_088799BC;
    return;
L_088799BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[31] = (0x088799E0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 111u, 0x088C6A28u>(ctx, &aot_mem) && ctx.pc == 0x088799E0u) goto L_088799E0;
    return;
L_088799E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(312)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879AE0;
      }
      goto L_08879A5C;
    }
L_08879A5C:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[6] = (2188u << 16u);
    aot_gpr[8] = (2213u << 16u);
    aot_gpr[4] = (0u | 8u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(26120));
    aot_gpr[31] = (0x08879A88u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10084));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 75u, 0x08A2D4CCu>(ctx, &aot_mem) && ctx.pc == 0x08879A88u) goto L_08879A88;
    return;
L_08879A88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08879ACC;
      }
      goto L_08879A9C;
    }
L_08879A9C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08879AC4u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08879AC4u) goto L_08879AC4;
    return;
L_08879AC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08879AD8;
      }
      goto L_08879ACC;
    }
L_08879ACC:
    aot_gpr[31] = (0x08879AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x08879AD4u) goto L_08879AD4;
    return;
L_08879AD4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08879AD8;
L_08879AD8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879AE8;
      }
      goto L_08879AE0;
    }
L_08879AE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_08879AE8;
L_08879AE8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(312), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879B0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879B68;
      }
      goto L_08879B28;
    }
L_08879B28:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879B5C;
      }
      goto L_08879B3C;
    }
L_08879B3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08879B54u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08879B54u) goto L_08879B54;
    return;
L_08879B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879B64;
      }
      goto L_08879B5C;
    }
L_08879B5C:
    aot_gpr[31] = (0x08879B64u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08879B64u) goto L_08879B64;
    return;
L_08879B64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_08879B68;
L_08879B68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879B9C;
      }
      goto L_08879B74;
    }
L_08879B74:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[7] = (2188u << 16u);
    aot_gpr[8] = (2213u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(26160));
    aot_gpr[31] = (0x08879B98u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-10024));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 107u, 0x08A2D844u>(ctx, &aot_mem) && ctx.pc == 0x08879B98u) goto L_08879B98;
    return;
L_08879B98:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    goto L_08879B9C;
L_08879B9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879BAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-272));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(240), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(248), aot_gpr[20]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(232), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(236), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(244), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(252), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(256), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[31]);
    aot_gpr[31] = (0x08879BF0u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    goto L_08879908;
L_08879BF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[23] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(8416));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(8432));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_08879C40;
      }
      goto L_08879C14;
    }
L_08879C14:
    aot_gpr[31] = (0x08879C1Cu);
    // nop
    goto L_08879914;
L_08879C1C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08879C40;
      }
      goto L_08879C2C;
    }
L_08879C2C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(300), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(308), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(312), aot_gpr[4]);
    goto L_08879C40;
L_08879C40:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08879C50;
      }
      goto L_08879C48;
    }
L_08879C48:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08879C50;
L_08879C50:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 105u, 0x0887A880u>(ctx, &aot_mem); return;
      }
      goto L_08879C60;
    }
L_08879C60:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(8784)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879C78:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[22] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08879C98u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879C98u) goto L_08879C98;
    return;
L_08879C98:
    aot_gpr[31] = (0x08879CA0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08879CA0u) goto L_08879CA0;
    return;
L_08879CA0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08879CB8;
      }
      goto L_08879CAC;
    }
L_08879CAC:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879CD8;
      }
      goto L_08879CB8;
    }
L_08879CB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879CD0;
      }
      goto L_08879CC4;
    }
L_08879CC4:
    aot_gpr[31] = (0x08879CCCu);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF94u;
    return;
L_08879CCC:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(aot_gpr[16]));
    goto L_08879CD0;
L_08879CD0:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08879CD8;
L_08879CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 105u, 0x0887A880u>(ctx, &aot_mem); return;
      }
      goto L_08879CE0;
    }
L_08879CE0:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08879CF4u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879CF4u) goto L_08879CF4;
    return;
L_08879CF4:
    aot_gpr[31] = (0x08879CFCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08879CFCu) goto L_08879CFC;
    return;
L_08879CFC:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8460));
      if (branch_taken) {
          goto L_08879D14;
      }
      goto L_08879D10;
    }
L_08879D10:
    aot_gpr[16] = (0u | 1u);
    goto L_08879D14;
L_08879D14:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(25345)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25328)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08879D3Cu);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 59u, 0x088C647Cu>(ctx, &aot_mem) && ctx.pc == 0x08879D3Cu) goto L_08879D3C;
    return;
L_08879D3C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8448));
    aot_gpr[31] = (0x08879D5Cu);
    aot_gpr[9] = (1u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 124u, 0x08888C78u>(ctx, &aot_mem) && ctx.pc == 0x08879D5Cu) goto L_08879D5C;
    return;
L_08879D5C:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 105u, 0x0887A880u>(ctx, &aot_mem); return;
      }
      goto L_08879D68;
    }
L_08879D68:
    aot_gpr[31] = (0x08879D70u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x08879D70u) goto L_08879D70;
    return;
L_08879D70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08879D94;
      }
      goto L_08879D80;
    }
L_08879D80:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879DF8;
      }
      goto L_08879D8C;
    }
L_08879D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E20;
      }
      goto L_08879D94;
    }
L_08879D94:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879DF8;
      }
      goto L_08879D9C;
    }
L_08879D9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[31] = (0x08879DC4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 113u, 0x088C6AA4u>(ctx, &aot_mem) && ctx.pc == 0x08879DC4u) goto L_08879DC4;
    return;
L_08879DC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[31] = (0x08879DDCu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 89u, 0x088C6784u>(ctx, &aot_mem) && ctx.pc == 0x08879DDCu) goto L_08879DDC;
    return;
L_08879DDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879E20;
      }
      goto L_08879DF8;
    }
L_08879DF8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08879E10;
      }
      goto L_08879E08;
    }
L_08879E08:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_08879E10;
L_08879E10:
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08879E20;
L_08879E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 105u, 0x0887A880u>(ctx, &aot_mem); return;
      }
      goto L_08879E28;
    }
L_08879E28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E4C;
      }
      goto L_08879E40;
    }
L_08879E40:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08879E6C;
      }
      goto L_08879E4C;
    }
L_08879E4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08879E64;
      }
      goto L_08879E58;
    }
L_08879E58:
    aot_gpr[31] = (0x08879E60u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AF7Cu;
    return;
L_08879E60:
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(0u));
    goto L_08879E64;
L_08879E64:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08879E6C;
L_08879E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 105u, 0x0887A880u>(ctx, &aot_mem); return;
      }
      goto L_08879E74;
    }
L_08879E74:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25345)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25356)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08879EA0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x088C64A8u>(ctx, &aot_mem) && ctx.pc == 0x08879EA0u) goto L_08879EA0;
    return;
L_08879EA0:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08879EB8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8464));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08879EB8u) goto L_08879EB8;
    return;
L_08879EB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (1u << 16u);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08879ED4u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-7288)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08879ED4u) goto L_08879ED4;
    return;
L_08879ED4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08879EE8u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 40u, 0x08878338u>(ctx, &aot_mem) && ctx.pc == 0x08879EE8u) goto L_08879EE8;
    return;
L_08879EE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[31] = (0x08879F10u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 113u, 0x088C6AA4u>(ctx, &aot_mem) && ctx.pc == 0x08879F10u) goto L_08879F10;
    return;
L_08879F10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(28)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    aot_gpr[31] = (0x08879F28u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 89u, 0x088C6784u>(ctx, &aot_mem) && ctx.pc == 0x08879F28u) goto L_08879F28;
    return;
L_08879F28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 105u, 0x0887A880u>(ctx, &aot_mem); return;
      }
      goto L_08879F44;
    }
L_08879F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 105u, 0x0887A880u>(ctx, &aot_mem); return;
      }
      goto L_08879F4C;
    }
L_08879F4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u | 8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 5u);
        goto L_08879F68;
    }
    goto L_08879F68;
L_08879F68:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 105u, 0x0887A880u>(ctx, &aot_mem); return;
      }
      goto L_08879F70;
    }
L_08879F70:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(8484));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08879F88u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879F88u) goto L_08879F88;
    return;
L_08879F88:
    aot_gpr[31] = (0x08879F90u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08879F90u) goto L_08879F90;
    return;
L_08879F90:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08879FA4u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879FA4u) goto L_08879FA4;
    return;
L_08879FA4:
    aot_gpr[31] = (0x08879FACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08879FACu) goto L_08879FAC;
    return;
L_08879FAC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8460));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 10u, 0x0887A10Cu>(ctx, &aot_mem); return;
      }
      goto L_08879FC4;
    }
L_08879FC4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 32u, 0x0887A3A0u>(ctx, &aot_mem); return;
      }
      goto L_08879FCC;
    }
L_08879FCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[23]);
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08879FECu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8496));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08879FECu) goto L_08879FEC;
    return;
L_08879FEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    ctx.pc = 0x0887A000u; return;
}

void recomp_unit_0117(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0117_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_117(Runtime &runtime) {
    runtime.register_generated_unit(117u, 0x08879000u, 4096u, &recomp_unit_0117, &recomp_unit_0117_entry);
    runtime.register_function(0x08879004u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879010u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879030u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887903Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879058u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879088u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879090u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088790A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088790A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088790D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088790DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088790FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879104u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879114u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887911Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879134u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887913Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879158u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879164u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887918Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879194u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887919Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088791B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088791D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088791F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887923Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887925Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879268u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088792D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088792DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088792E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879300u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879314u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879320u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879358u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879378u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088793C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088793D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088793F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879418u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879420u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879434u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879450u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879460u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879468u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879474u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088794B0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088794CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088794DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887950Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879518u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879528u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879534u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879540u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879548u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088795ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088795B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088795C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088795DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088795E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088795F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088795FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879624u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879644u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879650u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879658u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879668u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879680u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887968Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879694u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088796A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088796B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088796C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088796C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088796D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088796ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088796F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879704u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879718u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879720u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879730u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879744u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879748u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879750u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879758u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879764u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887976Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879780u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879788u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879794u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887979Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088797A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088797B0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088797B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088797C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088797D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088797E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088797ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088797F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x0887980Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879818u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879820u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879828u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879834u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879838u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879840u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879850u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879880u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088798A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088798BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088798CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088798E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088798ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088798F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879908u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879914u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879920u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879954u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879974u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879984u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879990u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879998u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088799BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x088799E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879A30u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879A5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879A88u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879A9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879AC4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879ACCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879AD4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879AD8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879AE0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879AE8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B64u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B98u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879B9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879BACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879BF0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C1Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C2Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C50u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C78u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879C98u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CB8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CC4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CCCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CD0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CD8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CE0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CF4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879CFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D8Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879D9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879DC4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879DDCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879DF8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E08u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E20u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E58u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E64u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879E74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879EA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879EB8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879ED4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879EE8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879F10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879F28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879F44u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879F4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879F68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879F70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879F88u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879F90u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879FA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879FACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879FC4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879FCCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x08879FECu, &recomp_unit_0117, "recomp_unit_0117");
}
} // namespace psprecomp
