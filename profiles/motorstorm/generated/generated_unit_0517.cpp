#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0517[1023] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 8,
    0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0,
    19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24,
    0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 0, 0, 0, 36, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40,
    0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 0, 64, 65, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0,
    76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 80, 81, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0,
    108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0,
    116, 0, 117, 0, 0, 0, 118, 0, 119, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125,
    0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0,
    0, 134, 0, 135, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0,
    0, 171, 0, 172, 0, 0, 173, 0, 174, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0,
    179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0,
    189, 0, 190, 0, 0, 191, 192, 0, 193, 0, 194, 0, 195, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 205, 0, 206, 0, 207, 208, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 213, 0, 214, 0, 0, 215, 0, 216, 217, 0, 218, 0, 0, 0,
    219, 0, 220, 0, 0, 221, 0, 222, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0,
    0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233, 234, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 245, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249,
};
void recomp_unit_0517_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A09000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0517[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A09000;
    case 2u: goto L_08A09010;
    case 3u: goto L_08A09030;
    case 4u: goto L_08A09038;
    case 5u: goto L_08A09048;
    case 6u: goto L_08A09058;
    case 7u: goto L_08A09074;
    case 8u: goto L_08A0907C;
    case 9u: goto L_08A09084;
    case 10u: goto L_08A0908C;
    case 11u: goto L_08A09098;
    case 12u: goto L_08A090B4;
    case 13u: goto L_08A090BC;
    case 14u: goto L_08A090C4;
    case 15u: goto L_08A090CC;
    case 16u: goto L_08A090D4;
    case 17u: goto L_08A090DC;
    case 18u: goto L_08A090E8;
    case 19u: goto L_08A09100;
    case 20u: goto L_08A09108;
    case 21u: goto L_08A09130;
    case 22u: goto L_08A09144;
    case 23u: goto L_08A0916C;
    case 24u: goto L_08A0917C;
    case 25u: goto L_08A09184;
    case 26u: goto L_08A09198;
    case 27u: goto L_08A091A0;
    case 28u: goto L_08A091B8;
    case 29u: goto L_08A091C8;
    case 30u: goto L_08A091D4;
    case 31u: goto L_08A091EC;
    case 32u: goto L_08A091F4;
    case 33u: goto L_08A09200;
    case 34u: goto L_08A0921C;
    case 35u: goto L_08A09220;
    case 36u: goto L_08A09238;
    case 37u: goto L_08A0923C;
    case 38u: goto L_08A09248;
    case 39u: goto L_08A09264;
    case 40u: goto L_08A0927C;
    case 41u: goto L_08A09284;
    case 42u: goto L_08A09290;
    case 43u: goto L_08A09298;
    case 44u: goto L_08A092A0;
    case 45u: goto L_08A092A8;
    case 46u: goto L_08A092C0;
    case 47u: goto L_08A092F8;
    case 48u: goto L_08A09304;
    case 49u: goto L_08A09310;
    case 50u: goto L_08A0931C;
    case 51u: goto L_08A09340;
    case 52u: goto L_08A09364;
    case 53u: goto L_08A09378;
    case 54u: goto L_08A093A4;
    case 55u: goto L_08A093CC;
    case 56u: goto L_08A093F4;
    case 57u: goto L_08A0941C;
    case 58u: goto L_08A09430;
    case 59u: goto L_08A09448;
    case 60u: goto L_08A09450;
    case 61u: goto L_08A0945C;
    case 62u: goto L_08A09464;
    case 63u: goto L_08A09478;
    case 64u: goto L_08A09488;
    case 65u: goto L_08A0948C;
    case 66u: goto L_08A09490;
    case 67u: goto L_08A0949C;
    case 68u: goto L_08A094A8;
    case 69u: goto L_08A094B0;
    case 70u: goto L_08A094B8;
    case 71u: goto L_08A094C0;
    case 72u: goto L_08A094D0;
    case 73u: goto L_08A094E0;
    case 74u: goto L_08A094E8;
    case 75u: goto L_08A094F8;
    case 76u: goto L_08A09500;
    case 77u: goto L_08A0950C;
    case 78u: goto L_08A09514;
    case 79u: goto L_08A0951C;
    case 80u: goto L_08A09528;
    case 81u: goto L_08A0952C;
    case 82u: goto L_08A09534;
    case 83u: goto L_08A09538;
    case 84u: goto L_08A09558;
    case 85u: goto L_08A09578;
    case 86u: goto L_08A09598;
    case 87u: goto L_08A095A0;
    case 88u: goto L_08A095AC;
    case 89u: goto L_08A095D0;
    case 90u: goto L_08A095D8;
    case 91u: goto L_08A095E0;
    case 92u: goto L_08A095EC;
    case 93u: goto L_08A095F8;
    case 94u: goto L_08A09624;
    case 95u: goto L_08A0962C;
    case 96u: goto L_08A09634;
    case 97u: goto L_08A0964C;
    case 98u: goto L_08A09690;
    case 99u: goto L_08A096A8;
    case 100u: goto L_08A096C4;
    case 101u: goto L_08A096E4;
    case 102u: goto L_08A0973C;
    case 103u: goto L_08A0974C;
    case 104u: goto L_08A09754;
    case 105u: goto L_08A0975C;
    case 106u: goto L_08A09764;
    case 107u: goto L_08A09770;
    case 108u: goto L_08A09780;
    case 109u: goto L_08A09788;
    case 110u: goto L_08A097BC;
    case 111u: goto L_08A097C0;
    case 112u: goto L_08A097C8;
    case 113u: goto L_08A097D4;
    case 114u: goto L_08A097EC;
    case 115u: goto L_08A097F8;
    case 116u: goto L_08A09800;
    case 117u: goto L_08A09808;
    case 118u: goto L_08A09818;
    case 119u: goto L_08A09820;
    case 120u: goto L_08A09824;
    case 121u: goto L_08A0982C;
    case 122u: goto L_08A09860;
    case 123u: goto L_08A09868;
    case 124u: goto L_08A09874;
    case 125u: goto L_08A0987C;
    case 126u: goto L_08A09888;
    case 127u: goto L_08A09890;
    case 128u: goto L_08A09898;
    case 129u: goto L_08A098B8;
    case 130u: goto L_08A098C4;
    case 131u: goto L_08A098DC;
    case 132u: goto L_08A098E4;
    case 133u: goto L_08A098F0;
    case 134u: goto L_08A09904;
    case 135u: goto L_08A0990C;
    case 136u: goto L_08A09910;
    case 137u: goto L_08A09918;
    case 138u: goto L_08A09924;
    case 139u: goto L_08A09958;
    case 140u: goto L_08A09960;
    case 141u: goto L_08A09994;
    case 142u: goto L_08A099A0;
    case 143u: goto L_08A099B0;
    case 144u: goto L_08A099B8;
    case 145u: goto L_08A099C8;
    case 146u: goto L_08A099D0;
    case 147u: goto L_08A099D4;
    case 148u: goto L_08A099DC;
    case 149u: goto L_08A09A10;
    case 150u: goto L_08A09A1C;
    case 151u: goto L_08A09A24;
    case 152u: goto L_08A09A2C;
    case 153u: goto L_08A09A3C;
    case 154u: goto L_08A09A44;
    case 155u: goto L_08A09A48;
    case 156u: goto L_08A09A50;
    case 157u: goto L_08A09A84;
    case 158u: goto L_08A09A90;
    case 159u: goto L_08A09A98;
    case 160u: goto L_08A09ACC;
    case 161u: goto L_08A09AD4;
    case 162u: goto L_08A09AE0;
    case 163u: goto L_08A09B14;
    case 164u: goto L_08A09B24;
    case 165u: goto L_08A09B2C;
    case 166u: goto L_08A09B3C;
    case 167u: goto L_08A09B44;
    case 168u: goto L_08A09B54;
    case 169u: goto L_08A09B5C;
    case 170u: goto L_08A09B6C;
    case 171u: goto L_08A09B84;
    case 172u: goto L_08A09B8C;
    case 173u: goto L_08A09B98;
    case 174u: goto L_08A09BA0;
    case 175u: goto L_08A09BA4;
    case 176u: goto L_08A09BAC;
    case 177u: goto L_08A09BB8;
    case 178u: goto L_08A09BEC;
    case 179u: goto L_08A09C00;
    case 180u: goto L_08A09C10;
    case 181u: goto L_08A09C1C;
    case 182u: goto L_08A09C28;
    case 183u: goto L_08A09C34;
    case 184u: goto L_08A09C3C;
    case 185u: goto L_08A09C50;
    case 186u: goto L_08A09C5C;
    case 187u: goto L_08A09C68;
    case 188u: goto L_08A09C74;
    case 189u: goto L_08A09C80;
    case 190u: goto L_08A09C88;
    case 191u: goto L_08A09C94;
    case 192u: goto L_08A09C98;
    case 193u: goto L_08A09CA0;
    case 194u: goto L_08A09CA8;
    case 195u: goto L_08A09CB0;
    case 196u: goto L_08A09CB8;
    case 197u: goto L_08A09CBC;
    case 198u: goto L_08A09CE8;
    case 199u: goto L_08A09CF0;
    case 200u: goto L_08A09D0C;
    case 201u: goto L_08A09D18;
    case 202u: goto L_08A09D24;
    case 203u: goto L_08A09D58;
    case 204u: goto L_08A09D60;
    case 205u: goto L_08A09D64;
    case 206u: goto L_08A09D6C;
    case 207u: goto L_08A09D74;
    case 208u: goto L_08A09D78;
    case 209u: goto L_08A09D80;
    case 210u: goto L_08A09DB4;
    case 211u: goto L_08A09DBC;
    case 212u: goto L_08A09DC4;
    case 213u: goto L_08A09DC8;
    case 214u: goto L_08A09DD0;
    case 215u: goto L_08A09DDC;
    case 216u: goto L_08A09DE4;
    case 217u: goto L_08A09DE8;
    case 218u: goto L_08A09DF0;
    case 219u: goto L_08A09E00;
    case 220u: goto L_08A09E08;
    case 221u: goto L_08A09E14;
    case 222u: goto L_08A09E1C;
    case 223u: goto L_08A09E20;
    case 224u: goto L_08A09E28;
    case 225u: goto L_08A09E34;
    case 226u: goto L_08A09E68;
    case 227u: goto L_08A09E70;
    case 228u: goto L_08A09E8C;
    case 229u: goto L_08A09E98;
    case 230u: goto L_08A09ECC;
    case 231u: goto L_08A09ED4;
    case 232u: goto L_08A09EDC;
    case 233u: goto L_08A09EE4;
    case 234u: goto L_08A09EE8;
    case 235u: goto L_08A09EF0;
    case 236u: goto L_08A09F10;
    case 237u: goto L_08A09F20;
    case 238u: goto L_08A09F2C;
    case 239u: goto L_08A09F60;
    case 240u: goto L_08A09F88;
    case 241u: goto L_08A09F90;
    case 242u: goto L_08A09F98;
    case 243u: goto L_08A09FA0;
    case 244u: goto L_08A09FB8;
    case 245u: goto L_08A09FBC;
    case 246u: goto L_08A09FC8;
    case 247u: goto L_08A09FD0;
    case 248u: goto L_08A09FE0;
    case 249u: goto L_08A09FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A09000:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A09030u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09030u) goto L_08A09030;
    return;
L_08A09030:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09048;
      }
      goto L_08A09038;
    }
L_08A09038:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09048:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A09074u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A09074u) goto L_08A09074;
    return;
L_08A09074:
    aot_gpr[31] = (0x08A0907Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 11u, 0x089FF0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A0907Cu) goto L_08A0907C;
    return;
L_08A0907C:
    aot_gpr[31] = (0x08A09084u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A09084u) goto L_08A09084;
    return;
L_08A09084:
    aot_gpr[31] = (0x08A0908Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A0908Cu) goto L_08A0908C;
    return;
L_08A0908C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A090CC;
      }
      goto L_08A09098;
    }
L_08A09098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(232)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A090B4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A090B4u) goto L_08A090B4;
    return;
L_08A090B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A090CC;
      }
      goto L_08A090BC;
    }
L_08A090BC:
    aot_gpr[31] = (0x08A090C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 61u, 0x08A0E3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A090C4u) goto L_08A090C4;
    return;
L_08A090C4:
    aot_gpr[31] = (0x08A090CCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A09100;
L_08A090CC:
    aot_gpr[31] = (0x08A090D4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A09108;
L_08A090D4:
    aot_gpr[31] = (0x08A090DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A090DCu) goto L_08A090DC;
    return;
L_08A090DC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A090E8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 195u, 0x08A03C74u>(ctx, &aot_mem) && ctx.pc == 0x08A090E8u) goto L_08A090E8;
    return;
L_08A090E8:
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
L_08A09100:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09108:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1428)));
    aot_gpr[6] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A09248;
      }
      goto L_08A09130;
    }
L_08A09130:
    aot_gpr[18] = (1u << 16u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-25360))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09248;
      }
      goto L_08A09144;
    }
L_08A09144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-4704));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0916Cu);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-4676));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0916Cu) goto L_08A0916C;
    return;
L_08A0916C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A0917Cu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 149u, 0x08A00A14u>(ctx, &aot_mem) && ctx.pc == 0x08A0917Cu) goto L_08A0917C;
    return;
L_08A0917C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A0923C;
      }
      goto L_08A09184;
    }
L_08A09184:
    aot_gpr[19] = (0u | 40176u);
    aot_gpr[17] = (0u | 40433u);
    aot_gpr[19] = (aot_gpr[16] + aot_gpr[19]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A09238;
      }
      goto L_08A09198;
    }
L_08A09198:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A0923C;
      }
      goto L_08A091A0;
    }
L_08A091A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A091B8u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A091B8u) goto L_08A091B8;
    return;
L_08A091B8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A091C8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 149u, 0x08A00A14u>(ctx, &aot_mem) && ctx.pc == 0x08A091C8u) goto L_08A091C8;
    return;
L_08A091C8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A0923C;
      }
      goto L_08A091D4;
    }
L_08A091D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A091ECu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A091ECu) goto L_08A091EC;
    return;
L_08A091EC:
    aot_gpr[31] = (0x08A091F4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 168u, 0x08A00B34u>(ctx, &aot_mem) && ctx.pc == 0x08A091F4u) goto L_08A091F4;
    return;
L_08A091F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
        goto L_08A09220;
    }
    goto L_08A09200;
L_08A09200:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0921Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0921Cu) goto L_08A0921C;
    return;
L_08A0921C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    goto L_08A09220;
L_08A09220:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A09238u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09238u) goto L_08A09238;
    return;
L_08A09238:
    aot_gpr[4] = (1u << 16u);
    goto L_08A0923C;
L_08A0923C:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(-25360), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-25103), static_cast<std::uint8_t>(0u));
    goto L_08A09248;
L_08A09248:
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
L_08A09264:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_08A0927C;
L_08A0927C:
    aot_gpr[31] = (0x08A09284u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 133u, 0x08A089C0u>(ctx, &aot_mem) && ctx.pc == 0x08A09284u) goto L_08A09284;
    return;
L_08A09284:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A092A8;
      }
      goto L_08A09290;
    }
L_08A09290:
    aot_gpr[31] = (0x08A09298u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 135u, 0x08A089E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09298u) goto L_08A09298;
    return;
L_08A09298:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A092A8;
      }
      goto L_08A092A0;
    }
L_08A092A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0927C;
      }
      goto L_08A092A8;
    }
L_08A092A8:
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
L_08A092C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A093CC;
      }
      goto L_08A092F8;
    }
L_08A092F8:
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A093A4;
      }
      goto L_08A09304;
    }
L_08A09304:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A09310u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 135u, 0x08A089E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09310u) goto L_08A09310;
    return;
L_08A09310:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A093CC;
      }
      goto L_08A0931C;
    }
L_08A0931C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A09340u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09340u) goto L_08A09340;
    return;
L_08A09340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A09364u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09364u) goto L_08A09364;
    return;
L_08A09364:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[31] = (0x08A09378u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A09378u) goto L_08A09378;
    return;
L_08A09378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(144));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A09304;
      }
      goto L_08A093A4;
    }
L_08A093A4:
    aot_gpr[2] = (0u | 1u);
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
L_08A093CC:
    aot_gpr[2] = (0u | 0u);
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
L_08A093F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-768));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(744), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(748), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(756), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(760), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0948C;
      }
      goto L_08A0941C;
    }
L_08A0941C:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26172)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[17] | 0u);
        goto L_08A09490;
    }
    goto L_08A09430;
L_08A09430:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A09448u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09448u) goto L_08A09448;
    return;
L_08A09448:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A09490;
      }
      goto L_08A09450;
    }
L_08A09450:
    aot_gpr[4] = (0u | 39368u);
    aot_gpr[31] = (0x08A0945Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 158u, 0x08A0CBD8u>(ctx, &aot_mem) && ctx.pc == 0x08A0945Cu) goto L_08A0945C;
    return;
L_08A0945C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A09490;
      }
      goto L_08A09464;
    }
L_08A09464:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(752)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A09478u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 69u, 0x08A0A2C8u>(ctx, &aot_mem) && ctx.pc == 0x08A09478u) goto L_08A09478;
    return;
L_08A09478:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(752)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A09490;
      }
      goto L_08A09488;
    }
L_08A09488:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(752), aot_gpr[18]);
    goto L_08A0948C;
L_08A0948C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A09490;
L_08A09490:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(708));
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(720));
        goto L_08A0949C;
    }
    goto L_08A0949C;
L_08A0949C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(704)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(704)));
        goto L_08A09538;
    }
    goto L_08A094A8;
L_08A094A8:
    aot_gpr[31] = (0x08A094B0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 154u, 0x08A0BA48u>(ctx, &aot_mem) && ctx.pc == 0x08A094B0u) goto L_08A094B0;
    return;
L_08A094B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A09534;
      }
      goto L_08A094B8;
    }
L_08A094B8:
    aot_gpr[31] = (0x08A094C0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 56u, 0x08A0C430u>(ctx, &aot_mem) && ctx.pc == 0x08A094C0u) goto L_08A094C0;
    return;
L_08A094C0:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(708));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A094D0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 192u, 0x08A0BCA4u>(ctx, &aot_mem) && ctx.pc == 0x08A094D0u) goto L_08A094D0;
    return;
L_08A094D0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(756));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A094E0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 197u, 0x08A0BD04u>(ctx, &aot_mem) && ctx.pc == 0x08A094E0u) goto L_08A094E0;
    return;
L_08A094E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A0952C;
      }
      goto L_08A094E8;
    }
L_08A094E8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A094F8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 156u, 0x08A078D4u>(ctx, &aot_mem) && ctx.pc == 0x08A094F8u) goto L_08A094F8;
    return;
L_08A094F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A0952C;
      }
      goto L_08A09500;
    }
L_08A09500:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0950Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 180u, 0x08A0BBECu>(ctx, &aot_mem) && ctx.pc == 0x08A0950Cu) goto L_08A0950C;
    return;
L_08A0950C:
    aot_gpr[31] = (0x08A09514u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(716)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A09514u) goto L_08A09514;
    return;
L_08A09514:
    aot_gpr[31] = (0x08A0951Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0951Cu) goto L_08A0951C;
    return;
L_08A0951C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A09528u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A09528u) goto L_08A09528;
    return;
L_08A09528:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A0952C;
L_08A0952C:
    aot_gpr[31] = (0x08A09534u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 58u, 0x08A0C48Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09534u) goto L_08A09534;
    return;
L_08A09534:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(704)));
    goto L_08A09538;
L_08A09538:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(744)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(748)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(752)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(756)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(760)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09558:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-688));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(680), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(684), aot_gpr[31]);
    aot_gpr[31] = (0x08A09578u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A09578u) goto L_08A09578;
    return;
L_08A09578:
    aot_gpr[17] = (0u | 39368u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(756));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(668));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09598u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 149u, 0x08A0CB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09598u) goto L_08A09598;
    return;
L_08A09598:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A0962C;
      }
      goto L_08A095A0;
    }
L_08A095A0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A095ACu);
    aot_gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A095ACu) goto L_08A095AC;
    return;
L_08A095AC:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26172)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A095D0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A095D0u) goto L_08A095D0;
    return;
L_08A095D0:
    aot_gpr[31] = (0x08A095D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 34u, 0x08A08298u>(ctx, &aot_mem) && ctx.pc == 0x08A095D8u) goto L_08A095D8;
    return;
L_08A095D8:
    aot_gpr[31] = (0x08A095E0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 183u, 0x08A0CD58u>(ctx, &aot_mem) && ctx.pc == 0x08A095E0u) goto L_08A095E0;
    return;
L_08A095E0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A095ECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 159u, 0x08A0CBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A095ECu) goto L_08A095EC;
    return;
L_08A095EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A095F8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 182u, 0x08A0CD50u>(ctx, &aot_mem) && ctx.pc == 0x08A095F8u) goto L_08A095F8;
    return;
L_08A095F8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1424)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 7u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A09624u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 135u, 0x08A0A680u>(ctx, &aot_mem) && ctx.pc == 0x08A09624u) goto L_08A09624;
    return;
L_08A09624:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08A0962C;
L_08A0962C:
    aot_gpr[31] = (0x08A09634u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09634u) goto L_08A09634;
    return;
L_08A09634:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(680)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(684)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0964C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1056));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1032), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1040), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1044), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1048), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(516));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1036), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[19] + static_cast<std::uint32_t>(756));
    aot_gpr[4] = (0u | 11u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1052), aot_gpr[31]);
    aot_gpr[31] = (0x08A09690u);
    aot_gpr[6] = (0u | 513u);
    if (rt.invoke_chained_direct<&recomp_unit_0513_entry, 513u, 242u, 0x08A05FDCu>(ctx, &aot_mem) && ctx.pc == 0x08A09690u) goto L_08A09690;
    return;
L_08A09690:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 513u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A096A8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-4660));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A096A8u) goto L_08A096A8;
    return;
L_08A096A8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A096C4u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 91u, 0x08A086BCu>(ctx, &aot_mem) && ctx.pc == 0x08A096C4u) goto L_08A096C4;
    return;
L_08A096C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1052)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A096E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-4288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4236), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4240), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4256), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4244), aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4260), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4264), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4268), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4276), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4232), aot_gpr[7]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4248), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4252), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4272), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4280), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4284), aot_gpr[31]);
    aot_gpr[31] = (0x08A0973Cu);
    aot_gpr[22] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 10u, 0x08A07054u>(ctx, &aot_mem) && ctx.pc == 0x08A0973Cu) goto L_08A0973C;
    return;
L_08A0973C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0975C;
      }
      goto L_08A0974C;
    }
L_08A0974C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_08A0975C;
      }
      goto L_08A09754;
    }
L_08A09754:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A09788;
      }
      goto L_08A0975C;
    }
L_08A0975C:
    aot_gpr[31] = (0x08A09764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x08A09764u) goto L_08A09764;
    return;
L_08A09764:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A09770u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x08A09770u) goto L_08A09770;
    return;
L_08A09770:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (0u | 2u);
      if (branch_taken) {
          goto L_08A097BC;
      }
      goto L_08A09780;
    }
L_08A09780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A097C0;
      }
      goto L_08A09788;
    }
L_08A09788:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A097BC:
    aot_gpr[19] = (aot_gpr[4] | 0u);
    goto L_08A097C0;
L_08A097C0:
    aot_gpr[31] = (0x08A097C8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A097C8u) goto L_08A097C8;
    return;
L_08A097C8:
    aot_gpr[4] = (aot_gpr[23] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
        goto L_08A09D64;
    }
    goto L_08A097D4;
L_08A097D4:
    aot_gpr[23] = (aot_gpr[23] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[23]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-4576)));
    jump_target = aot_gpr[1];
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[23]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A097EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A09824;
      }
      goto L_08A097F8;
    }
L_08A097F8:
    aot_gpr[31] = (0x08A09800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A09800u) goto L_08A09800;
    return;
L_08A09800:
    aot_gpr[31] = (0x08A09808u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 7u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x08A09808u) goto L_08A09808;
    return;
L_08A09808:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A09818u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A09818u) goto L_08A09818;
    return;
L_08A09818:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
      if (branch_taken) {
          goto L_08A09D64;
      }
      goto L_08A09820;
    }
L_08A09820:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A09824;
L_08A09824:
    aot_gpr[31] = (0x08A0982Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0982Cu) goto L_08A0982C;
    return;
L_08A0982C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09860:
    aot_gpr[31] = (0x08A09868u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 257u, 0x08A07F04u>(ctx, &aot_mem) && ctx.pc == 0x08A09868u) goto L_08A09868;
    return;
L_08A09868:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09874u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A09874u) goto L_08A09874;
    return;
L_08A09874:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
      if (branch_taken) {
          goto L_08A09D64;
      }
      goto L_08A0987C;
    }
L_08A0987C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A09958;
      }
      goto L_08A09888;
    }
L_08A09888:
    aot_gpr[31] = (0x08A09890u);
    aot_gpr[22] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A09890u) goto L_08A09890;
    return;
L_08A09890:
    aot_gpr[31] = (0x08A09898u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09898u) goto L_08A09898;
    return;
L_08A09898:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A098B8u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A098B8u) goto L_08A098B8;
    return;
L_08A098B8:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(1352));
    aot_gpr[31] = (0x08A098C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A098C4u) goto L_08A098C4;
    return;
L_08A098C4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2020), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2277), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(1432));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A098DCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 238u, 0x089FFF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A098DCu) goto L_08A098DC;
    return;
L_08A098DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A09910;
      }
      goto L_08A098E4;
    }
L_08A098E4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A098F0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A098F0u) goto L_08A098F0;
    return;
L_08A098F0:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[23] = (0u | 9u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A09904u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09904u) goto L_08A09904;
    return;
L_08A09904:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
      if (branch_taken) {
          goto L_08A09D64;
      }
      goto L_08A0990C;
    }
L_08A0990C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A09910;
L_08A09910:
    aot_gpr[31] = (0x08A09918u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09918u) goto L_08A09918;
    return;
L_08A09918:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09924u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09924u) goto L_08A09924;
    return;
L_08A09924:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09958:
    aot_gpr[31] = (0x08A09960u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09960u) goto L_08A09960;
    return;
L_08A09960:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09994:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A099D4;
      }
      goto L_08A099A0;
    }
L_08A099A0:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[22] = (0u | 1u);
    aot_gpr[31] = (0x08A099B0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4776));
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A099B0u) goto L_08A099B0;
    return;
L_08A099B0:
    aot_gpr[31] = (0x08A099B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A099B8u) goto L_08A099B8;
    return;
L_08A099B8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A099C8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A099C8u) goto L_08A099C8;
    return;
L_08A099C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
      if (branch_taken) {
          goto L_08A09D64;
      }
      goto L_08A099D0;
    }
L_08A099D0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A099D4;
L_08A099D4:
    aot_gpr[31] = (0x08A099DCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A099DCu) goto L_08A099DC;
    return;
L_08A099DC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09A10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A09A48;
      }
      goto L_08A09A1C;
    }
L_08A09A1C:
    aot_gpr[31] = (0x08A09A24u);
    aot_gpr[22] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A09A24u) goto L_08A09A24;
    return;
L_08A09A24:
    aot_gpr[31] = (0x08A09A2Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09A2Cu) goto L_08A09A2C;
    return;
L_08A09A2C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A09A3Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A09A3Cu) goto L_08A09A3C;
    return;
L_08A09A3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
      if (branch_taken) {
          goto L_08A09D64;
      }
      goto L_08A09A44;
    }
L_08A09A44:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A09A48;
L_08A09A48:
    aot_gpr[31] = (0x08A09A50u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09A50u) goto L_08A09A50;
    return;
L_08A09A50:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09A84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A09ACC;
      }
      goto L_08A09A90;
    }
L_08A09A90:
    aot_gpr[31] = (0x08A09A98u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09A98u) goto L_08A09A98;
    return;
L_08A09A98:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09ACC:
    aot_gpr[31] = (0x08A09AD4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 248u, 0x08A07E98u>(ctx, &aot_mem) && ctx.pc == 0x08A09AD4u) goto L_08A09AD4;
    return;
L_08A09AD4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09AE0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09AE0u) goto L_08A09AE0;
    return;
L_08A09AE0:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09B14:
    aot_gpr[21] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A09B24u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A09B24u) goto L_08A09B24;
    return;
L_08A09B24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
      if (branch_taken) {
          goto L_08A09D64;
      }
      goto L_08A09B2C;
    }
L_08A09B2C:
    aot_gpr[21] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A09B3Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A09B3Cu) goto L_08A09B3C;
    return;
L_08A09B3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
      if (branch_taken) {
          goto L_08A09D64;
      }
      goto L_08A09B44;
    }
L_08A09B44:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A09B54u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A09B54u) goto L_08A09B54;
    return;
L_08A09B54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
      if (branch_taken) {
          goto L_08A09D64;
      }
      goto L_08A09B5C;
    }
L_08A09B5C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(2536));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[31] = (0x08A09B6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A09B6Cu) goto L_08A09B6C;
    return;
L_08A09B6C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3204), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3461), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1432));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A09B84u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 238u, 0x089FFF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09B84u) goto L_08A09B84;
    return;
L_08A09B84:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A09BEC;
    }
    goto L_08A09B8C;
L_08A09B8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A09BA4;
      }
      goto L_08A09B98;
    }
L_08A09B98:
    aot_gpr[31] = (0x08A09BA0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 248u, 0x08A07E98u>(ctx, &aot_mem) && ctx.pc == 0x08A09BA0u) goto L_08A09BA0;
    return;
L_08A09BA0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A09BA4;
L_08A09BA4:
    aot_gpr[31] = (0x08A09BACu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09BACu) goto L_08A09BAC;
    return;
L_08A09BAC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09BB8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09BB8u) goto L_08A09BB8;
    return;
L_08A09BB8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09BEC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A09C00u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09C00u) goto L_08A09C00;
    return;
L_08A09C00:
    aot_gpr[4] = (0u | 39508u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[31] = (0x08A09C10u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 182u, 0x089FFB70u>(ctx, &aot_mem) && ctx.pc == 0x08A09C10u) goto L_08A09C10;
    return;
L_08A09C10:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09C1Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A09C1Cu) goto L_08A09C1C;
    return;
L_08A09C1C:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[31] = (0x08A09C28u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x08A09C28u) goto L_08A09C28;
    return;
L_08A09C28:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A09C34u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 220u, 0x08A08F24u>(ctx, &aot_mem) && ctx.pc == 0x08A09C34u) goto L_08A09C34;
    return;
L_08A09C34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A09D58;
      }
      goto L_08A09C3C;
    }
L_08A09C3C:
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(3720));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09C50u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-4772));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x08A09C50u) goto L_08A09C50;
    return;
L_08A09C50:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A09C5Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 237u, 0x089F0D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09C5Cu) goto L_08A09C5C;
    return;
L_08A09C5C:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A09C68u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 238u, 0x089F0D44u>(ctx, &aot_mem) && ctx.pc == 0x08A09C68u) goto L_08A09C68;
    return;
L_08A09C68:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A09C74u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09C74u) goto L_08A09C74;
    return;
L_08A09C74:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A09C80u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 240u, 0x089F0D54u>(ctx, &aot_mem) && ctx.pc == 0x08A09C80u) goto L_08A09C80;
    return;
L_08A09C80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A09C94;
      }
      goto L_08A09C88;
    }
L_08A09C88:
    aot_gpr[19] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4752));
      if (branch_taken) {
          goto L_08A09C98;
      }
      goto L_08A09C94;
    }
L_08A09C94:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-4748));
    goto L_08A09C98;
L_08A09C98:
    aot_gpr[31] = (0x08A09CA0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 240u, 0x089F0D54u>(ctx, &aot_mem) && ctx.pc == 0x08A09CA0u) goto L_08A09CA0;
    return;
L_08A09CA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A09CB8;
      }
      goto L_08A09CA8;
    }
L_08A09CA8:
    aot_gpr[31] = (0x08A09CB0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 240u, 0x089F0D54u>(ctx, &aot_mem) && ctx.pc == 0x08A09CB0u) goto L_08A09CB0;
    return;
L_08A09CB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A09CBC;
      }
      goto L_08A09CB8;
    }
L_08A09CB8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4748));
    goto L_08A09CBC;
L_08A09CBC:
    aot_gpr[2] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[8] = (aot_gpr[22] | 0u);
    aot_gpr[9] = (aot_gpr[21] | 0u);
    aot_gpr[10] = (aot_gpr[20] | 0u);
    aot_gpr[11] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A09CE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A09CE8u) goto L_08A09CE8;
    return;
L_08A09CE8:
    aot_gpr[31] = (0x08A09CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A09CF0u) goto L_08A09CF0;
    return;
L_08A09CF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(3720));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A09D0Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09D0Cu) goto L_08A09D0C;
    return;
L_08A09D0C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A09D18u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09D18u) goto L_08A09D18;
    return;
L_08A09D18:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09D24u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09D24u) goto L_08A09D24;
    return;
L_08A09D24:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09D58:
    aot_gpr[31] = (0x08A09D60u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09D60u) goto L_08A09D60;
    return;
L_08A09D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
    goto L_08A09D64;
L_08A09D64:
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08A09DB4;
    }
    goto L_08A09D6C;
L_08A09D6C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A09DC8;
      }
      goto L_08A09D74;
    }
L_08A09D74:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A09D78;
L_08A09D78:
    aot_gpr[31] = (0x08A09D80u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09D80u) goto L_08A09D80;
    return;
L_08A09D80:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09DB4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A09D78;
      }
      goto L_08A09DBC;
    }
L_08A09DBC:
    { const bool branch_taken = aot_gpr[21] == aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A09DC8;
      }
      goto L_08A09DC4;
    }
L_08A09DC4:
    aot_gpr[21] = (0u | 1u);
    goto L_08A09DC8;
L_08A09DC8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(684));
      if (branch_taken) {
          goto L_08A09DE8;
      }
      goto L_08A09DD0;
    }
L_08A09DD0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A09DDCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 220u, 0x08A08F24u>(ctx, &aot_mem) && ctx.pc == 0x08A09DDCu) goto L_08A09DDC;
    return;
L_08A09DDC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A09E68;
      }
      goto L_08A09DE4;
    }
L_08A09DE4:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(684));
    goto L_08A09DE8;
L_08A09DE8:
    aot_gpr[31] = (0x08A09DF0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A09DF0u) goto L_08A09DF0;
    return;
L_08A09DF0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09E00u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x08A09E00u) goto L_08A09E00;
    return;
L_08A09E00:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A09E20;
      }
      goto L_08A09E08;
    }
L_08A09E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4232)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A09ECC;
      }
      goto L_08A09E14;
    }
L_08A09E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09ED4;
      }
      goto L_08A09E1C;
    }
L_08A09E1C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A09E20;
L_08A09E20:
    aot_gpr[31] = (0x08A09E28u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09E28u) goto L_08A09E28;
    return;
L_08A09E28:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09E34u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09E34u) goto L_08A09E34;
    return;
L_08A09E34:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09E68:
    aot_gpr[31] = (0x08A09E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A09E70u) goto L_08A09E70;
    return;
L_08A09E70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A09E8Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09E8Cu) goto L_08A09E8C;
    return;
L_08A09E8C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09E98u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09E98u) goto L_08A09E98;
    return;
L_08A09E98:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09ECC:
    aot_gpr[31] = (0x08A09ED4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 153u, 0x089F0884u>(ctx, &aot_mem) && ctx.pc == 0x08A09ED4u) goto L_08A09ED4;
    return;
L_08A09ED4:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A09EE8;
      }
      goto L_08A09EDC;
    }
L_08A09EDC:
    aot_gpr[31] = (0x08A09EE4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 248u, 0x08A07E98u>(ctx, &aot_mem) && ctx.pc == 0x08A09EE4u) goto L_08A09EE4;
    return;
L_08A09EE4:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08A09EE8;
L_08A09EE8:
    aot_gpr[31] = (0x08A09EF0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 109u, 0x08A0767Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09EF0u) goto L_08A09EF0;
    return;
L_08A09EF0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4244)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4240)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A09F10u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4236)));
    if (rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 135u, 0x08A0A680u>(ctx, &aot_mem) && ctx.pc == 0x08A09F10u) goto L_08A09F10;
    return;
L_08A09F10:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A09F20u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09F20u) goto L_08A09F20;
    return;
L_08A09F20:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A09F2Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A09F2Cu) goto L_08A09F2C;
    return;
L_08A09F2C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4248)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4252)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4256)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4260)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4264)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4268)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4272)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4276)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09F60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08A09F88u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 161u, 0x08A08B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09F88u) goto L_08A09F88;
    return;
L_08A09F88:
    aot_gpr[31] = (0x08A09F90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A09F90u) goto L_08A09F90;
    return;
L_08A09F90:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 40708u);
      if (branch_taken) {
          goto L_08A09FBC;
      }
      goto L_08A09F98;
    }
L_08A09F98:
    aot_gpr[31] = (0x08A09FA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A09FA0u) goto L_08A09FA0;
    return;
L_08A09FA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A09FB8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A09FB8u) goto L_08A09FB8;
    return;
L_08A09FB8:
    aot_gpr[4] = (0u | 40708u);
    goto L_08A09FBC;
L_08A09FBC:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[31] = (0x08A09FC8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 16u, 0x08A0D0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A09FC8u) goto L_08A09FC8;
    return;
L_08A09FC8:
    aot_gpr[31] = (0x08A09FD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 10u, 0x08A07054u>(ctx, &aot_mem) && ctx.pc == 0x08A09FD0u) goto L_08A09FD0;
    return;
L_08A09FD0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 67u, 0x08A0A29Cu>(ctx, &aot_mem); return;
      }
      goto L_08A09FE0;
    }
L_08A09FE0:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-4536)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 67u, 0x08A0A29Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0518_entry, 518u, 1u, 0x08A0A000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0517(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0517_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_517(Runtime &runtime) {
    runtime.register_generated_unit(517u, 0x08A09000u, 4096u, &recomp_unit_0517, &recomp_unit_0517_entry);
    runtime.register_function(0x08A09000u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09010u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09030u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09038u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09048u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09058u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09074u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0907Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09084u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0908Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09098u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A090B4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A090BCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A090C4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A090CCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A090D4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A090DCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A090E8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09100u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09108u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09130u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09144u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0916Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0917Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09184u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09198u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A091A0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A091B8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A091C8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A091D4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A091ECu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A091F4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09200u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0921Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09220u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09238u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0923Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09248u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09264u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0927Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09284u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09290u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09298u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A092A0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A092A8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A092C0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A092F8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09304u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09310u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0931Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09340u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09364u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09378u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A093A4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A093CCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A093F4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0941Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09430u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09448u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09450u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0945Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09464u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09478u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09488u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0948Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09490u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0949Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A094A8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A094B0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A094B8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A094C0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A094D0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A094E0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A094E8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A094F8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09500u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0950Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09514u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0951Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09528u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0952Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09534u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09538u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09558u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09578u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09598u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A095A0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A095ACu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A095D0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A095D8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A095E0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A095ECu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A095F8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09624u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0962Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09634u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0964Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09690u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A096A8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A096C4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A096E4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0973Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0974Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09754u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0975Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09764u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09770u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09780u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09788u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A097BCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A097C0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A097C8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A097D4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A097ECu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A097F8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09800u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09808u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09818u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09820u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09824u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0982Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09860u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09868u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09874u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0987Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09888u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09890u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09898u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A098B8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A098C4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A098DCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A098E4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A098F0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09904u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A0990Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09910u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09918u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09924u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09958u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09960u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09994u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A099A0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A099B0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A099B8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A099C8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A099D0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A099D4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A099DCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A10u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A1Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A24u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A2Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A3Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A44u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A48u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A50u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A84u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A90u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09A98u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09ACCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09AD4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09AE0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B14u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B24u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B2Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B3Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B44u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B54u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B5Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B6Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B84u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B8Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09B98u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09BA0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09BA4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09BACu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09BB8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09BECu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C00u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C10u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C1Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C28u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C34u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C3Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C50u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C5Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C68u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C74u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C80u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C88u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C94u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09C98u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09CA0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09CA8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09CB0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09CB8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09CBCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09CE8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09CF0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D0Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D18u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D24u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D58u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D60u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D64u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D6Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D74u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D78u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09D80u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DB4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DBCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DC4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DC8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DD0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DDCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DE4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DE8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09DF0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E00u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E08u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E14u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E1Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E20u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E28u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E34u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E68u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E70u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E8Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09E98u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09ECCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09ED4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09EDCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09EE4u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09EE8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09EF0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09F10u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09F20u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09F2Cu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09F60u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09F88u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09F90u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09F98u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09FA0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09FB8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09FBCu, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09FC8u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09FD0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09FE0u, &recomp_unit_0517, "recomp_unit_0517");
    runtime.register_function(0x08A09FF8u, &recomp_unit_0517, "recomp_unit_0517");
}
} // namespace psprecomp
