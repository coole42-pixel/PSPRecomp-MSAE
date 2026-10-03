#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0382[1023] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 12, 13, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    18, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27,
    28, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 46,
    0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 50, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0,
    0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 67, 0,
    68, 0, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0,
    0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0,
    0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95,
    0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 103, 0, 0, 0, 104, 0, 105, 0, 0,
    106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0,
    0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0,
    166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    175, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 182, 0,
    0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0,
    207, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    217, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 230,
    0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239,
    0, 240, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248, 249,
};
void recomp_unit_0382_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08982000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0382[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08982000;
    case 2u: goto L_08982008;
    case 3u: goto L_08982018;
    case 4u: goto L_08982024;
    case 5u: goto L_0898202C;
    case 6u: goto L_08982040;
    case 7u: goto L_08982048;
    case 8u: goto L_08982064;
    case 9u: goto L_0898206C;
    case 10u: goto L_08982074;
    case 11u: goto L_08982098;
    case 12u: goto L_089820A0;
    case 13u: goto L_089820A4;
    case 14u: goto L_089820AC;
    case 15u: goto L_089820B0;
    case 16u: goto L_089820D0;
    case 17u: goto L_089820EC;
    case 18u: goto L_08982100;
    case 19u: goto L_0898210C;
    case 20u: goto L_08982124;
    case 21u: goto L_08982130;
    case 22u: goto L_0898213C;
    case 23u: goto L_08982144;
    case 24u: goto L_08982148;
    case 25u: goto L_0898215C;
    case 26u: goto L_08982164;
    case 27u: goto L_0898217C;
    case 28u: goto L_08982180;
    case 29u: goto L_08982194;
    case 30u: goto L_08982198;
    case 31u: goto L_089821AC;
    case 32u: goto L_089821BC;
    case 33u: goto L_089821C8;
    case 34u: goto L_089821E0;
    case 35u: goto L_089821F4;
    case 36u: goto L_089821FC;
    case 37u: goto L_0898220C;
    case 38u: goto L_08982224;
    case 39u: goto L_08982230;
    case 40u: goto L_0898223C;
    case 41u: goto L_08982244;
    case 42u: goto L_08982250;
    case 43u: goto L_0898225C;
    case 44u: goto L_08982264;
    case 45u: goto L_08982278;
    case 46u: goto L_0898227C;
    case 47u: goto L_08982284;
    case 48u: goto L_08982290;
    case 49u: goto L_089822A8;
    case 50u: goto L_089822AC;
    case 51u: goto L_089822B0;
    case 52u: goto L_089822BC;
    case 53u: goto L_089822C8;
    case 54u: goto L_089822D4;
    case 55u: goto L_089822E0;
    case 56u: goto L_089822EC;
    case 57u: goto L_089822F8;
    case 58u: goto L_08982304;
    case 59u: goto L_08982314;
    case 60u: goto L_0898231C;
    case 61u: goto L_08982340;
    case 62u: goto L_08982348;
    case 63u: goto L_08982350;
    case 64u: goto L_08982358;
    case 65u: goto L_08982360;
    case 66u: goto L_0898236C;
    case 67u: goto L_08982378;
    case 68u: goto L_08982380;
    case 69u: goto L_0898238C;
    case 70u: goto L_08982398;
    case 71u: goto L_089823A0;
    case 72u: goto L_089823A8;
    case 73u: goto L_089823B8;
    case 74u: goto L_089823C8;
    case 75u: goto L_089823E8;
    case 76u: goto L_089823F8;
    case 77u: goto L_08982408;
    case 78u: goto L_08982414;
    case 79u: goto L_08982428;
    case 80u: goto L_08982438;
    case 81u: goto L_08982448;
    case 82u: goto L_08982450;
    case 83u: goto L_0898245C;
    case 84u: goto L_08982468;
    case 85u: goto L_08982470;
    case 86u: goto L_08982484;
    case 87u: goto L_08982488;
    case 88u: goto L_089824A8;
    case 89u: goto L_089824AC;
    case 90u: goto L_089824B8;
    case 91u: goto L_089824C0;
    case 92u: goto L_089824CC;
    case 93u: goto L_089824D8;
    case 94u: goto L_089824F0;
    case 95u: goto L_089824FC;
    case 96u: goto L_08982504;
    case 97u: goto L_0898250C;
    case 98u: goto L_08982520;
    case 99u: goto L_08982528;
    case 100u: goto L_08982530;
    case 101u: goto L_08982548;
    case 102u: goto L_08982558;
    case 103u: goto L_0898255C;
    case 104u: goto L_0898256C;
    case 105u: goto L_08982574;
    case 106u: goto L_08982580;
    case 107u: goto L_08982588;
    case 108u: goto L_08982594;
    case 109u: goto L_089825B0;
    case 110u: goto L_089825B8;
    case 111u: goto L_089825C0;
    case 112u: goto L_089825CC;
    case 113u: goto L_089825DC;
    case 114u: goto L_089825F0;
    case 115u: goto L_089825FC;
    case 116u: goto L_08982618;
    case 117u: goto L_08982620;
    case 118u: goto L_08982648;
    case 119u: goto L_08982654;
    case 120u: goto L_08982668;
    case 121u: goto L_08982670;
    case 122u: goto L_08982678;
    case 123u: goto L_08982684;
    case 124u: goto L_08982690;
    case 125u: goto L_089827EC;
    case 126u: goto L_089827F8;
    case 127u: goto L_08982830;
    case 128u: goto L_08982840;
    case 129u: goto L_08982868;
    case 130u: goto L_08982874;
    case 131u: goto L_08982884;
    case 132u: goto L_089828A4;
    case 133u: goto L_089828B0;
    case 134u: goto L_089828D0;
    case 135u: goto L_089828DC;
    case 136u: goto L_089828E4;
    case 137u: goto L_08982900;
    case 138u: goto L_0898290C;
    case 139u: goto L_0898291C;
    case 140u: goto L_08982930;
    case 141u: goto L_0898293C;
    case 142u: goto L_08982974;
    case 143u: goto L_08982980;
    case 144u: goto L_0898298C;
    case 145u: goto L_089829A8;
    case 146u: goto L_089829B0;
    case 147u: goto L_089829D0;
    case 148u: goto L_089829D8;
    case 149u: goto L_089829F8;
    case 150u: goto L_08982A00;
    case 151u: goto L_08982A20;
    case 152u: goto L_08982A28;
    case 153u: goto L_08982A4C;
    case 154u: goto L_08982A58;
    case 155u: goto L_08982A7C;
    case 156u: goto L_08982A88;
    case 157u: goto L_08982AA8;
    case 158u: goto L_08982AC0;
    case 159u: goto L_08982AC8;
    case 160u: goto L_08982AD0;
    case 161u: goto L_08982AD8;
    case 162u: goto L_08982AE0;
    case 163u: goto L_08982AE8;
    case 164u: goto L_08982AF0;
    case 165u: goto L_08982AF8;
    case 166u: goto L_08982B00;
    case 167u: goto L_08982B20;
    case 168u: goto L_08982B2C;
    case 169u: goto L_08982B34;
    case 170u: goto L_08982B3C;
    case 171u: goto L_08982B44;
    case 172u: goto L_08982B4C;
    case 173u: goto L_08982B54;
    case 174u: goto L_08982B78;
    case 175u: goto L_08982B80;
    case 176u: goto L_08982B84;
    case 177u: goto L_08982B90;
    case 178u: goto L_08982B98;
    case 179u: goto L_08982BB4;
    case 180u: goto L_08982BB8;
    case 181u: goto L_08982BF4;
    case 182u: goto L_08982BF8;
    case 183u: goto L_08982C10;
    case 184u: goto L_08982C18;
    case 185u: goto L_08982C44;
    case 186u: goto L_08982C70;
    case 187u: goto L_08982C78;
    case 188u: goto L_08982C98;
    case 189u: goto L_08982CA0;
    case 190u: goto L_08982CA8;
    case 191u: goto L_08982CB0;
    case 192u: goto L_08982CC8;
    case 193u: goto L_08982CDC;
    case 194u: goto L_08982D18;
    case 195u: goto L_08982D2C;
    case 196u: goto L_08982D34;
    case 197u: goto L_08982D5C;
    case 198u: goto L_08982D68;
    case 199u: goto L_08982D98;
    case 200u: goto L_08982DA8;
    case 201u: goto L_08982DBC;
    case 202u: goto L_08982DC8;
    case 203u: goto L_08982DD4;
    case 204u: goto L_08982DDC;
    case 205u: goto L_08982DE4;
    case 206u: goto L_08982DF8;
    case 207u: goto L_08982E00;
    case 208u: goto L_08982E08;
    case 209u: goto L_08982E14;
    case 210u: goto L_08982E1C;
    case 211u: goto L_08982E24;
    case 212u: goto L_08982E2C;
    case 213u: goto L_08982E34;
    case 214u: goto L_08982E44;
    case 215u: goto L_08982E4C;
    case 216u: goto L_08982E74;
    case 217u: goto L_08982E80;
    case 218u: goto L_08982E84;
    case 219u: goto L_08982EA0;
    case 220u: goto L_08982EA8;
    case 221u: goto L_08982EB0;
    case 222u: goto L_08982EB8;
    case 223u: goto L_08982EC0;
    case 224u: goto L_08982EC8;
    case 225u: goto L_08982ED0;
    case 226u: goto L_08982ED8;
    case 227u: goto L_08982EE0;
    case 228u: goto L_08982EEC;
    case 229u: goto L_08982EF4;
    case 230u: goto L_08982EFC;
    case 231u: goto L_08982F10;
    case 232u: goto L_08982F18;
    case 233u: goto L_08982F28;
    case 234u: goto L_08982F30;
    case 235u: goto L_08982F54;
    case 236u: goto L_08982F5C;
    case 237u: goto L_08982F6C;
    case 238u: goto L_08982F74;
    case 239u: goto L_08982F7C;
    case 240u: goto L_08982F84;
    case 241u: goto L_08982F88;
    case 242u: goto L_08982FA0;
    case 243u: goto L_08982FC4;
    case 244u: goto L_08982FCC;
    case 245u: goto L_08982FDC;
    case 246u: goto L_08982FE4;
    case 247u: goto L_08982FEC;
    case 248u: goto L_08982FF4;
    case 249u: goto L_08982FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08982000:
    aot_gpr[31] = (0x08982008u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08982008u) goto L_08982008;
    return;
L_08982008:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(252));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08982018u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5AE7Cu;
    return;
L_08982018:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0898202C;
      }
      goto L_08982024;
    }
L_08982024:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 116u);
      if (branch_taken) {
          goto L_089820B0;
      }
      goto L_0898202C;
    }
L_0898202C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(648)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(648), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] ^ 1u);
    goto L_08982040;
L_08982040:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898206C;
      }
      goto L_08982048;
    }
L_08982048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08982064u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08982064u) goto L_08982064;
    return;
L_08982064:
    aot_gpr[31] = (0x0898206Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 207u, 0x08981DD4u>(ctx, &aot_mem) && ctx.pc == 0x0898206Cu) goto L_0898206C;
    return;
L_0898206C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (0u | 100u);
      if (branch_taken) {
          goto L_089820A4;
      }
      goto L_08982074;
    }
L_08982074:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[16] = (0u | 4000u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08982098u);
    aot_gpr[5] = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08982098u) goto L_08982098;
    return;
L_08982098:
    if (aot_gpr[2] != 0u) {
    aot_gpr[16] = (0u | 24000u);
        goto L_089820A0;
    }
    goto L_089820A0;
L_089820A0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089820A4;
L_089820A4:
    aot_gpr[31] = (0x089820ACu);
    // nop
    ctx.pc = 0x08A5AFBCu;
    return;
L_089820AC:
    aot_gpr[2] = (0u | 0u);
    goto L_089820B0;
L_089820B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089820D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-896));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(776), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[14] = (aot_gpr[4] + 0u);
    aot_gpr[15] = (2215u << 16u);
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(-19008));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(784), aot_gpr[31]);
    goto L_089820EC;
L_089820EC:
    aot_gpr[25] = (aot_gpr[6] & 3u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[25]);
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[25] << 3u);
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-32));
    goto L_08982100;
L_08982100:
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) <= 0;
    aot_gpr[2] = (std::rotr(aot_gpr[24], static_cast<int>(aot_gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08982124;
      }
      goto L_0898210C;
    }
L_0898210C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((aot_gpr[24] & 0x0000FFFFu) << 0u));
    aot_gpr[2] = (std::rotr(aot_gpr[2], static_cast<int>(aot_gpr[25] & 31u)));
    goto L_08982124;
L_08982124:
    aot_gpr[3] = ((aot_gpr[2] >> 30u) & 0x00000003u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[10] = ((aot_gpr[2] >> 29u) & 0x00000001u);
      if (branch_taken) {
          goto L_08982620;
      }
      goto L_08982130;
    }
L_08982130:
    aot_gpr[8] = (aot_gpr[3] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(788), static_cast<std::uint16_t>(aot_gpr[10]));
      if (branch_taken) {
          goto L_089821BC;
      }
      goto L_0898213C;
    }
L_0898213C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) > 0;
    aot_gpr[10] = (aot_gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982144;
    }
L_08982144:
    aot_gpr[20] = (aot_gpr[15] + static_cast<std::uint32_t>(108));
    goto L_08982148;
L_08982148:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-4), aot_gpr[11]);
      if (branch_taken) {
          goto L_08982148;
      }
      goto L_0898215C;
    }
L_0898215C:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(0));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(144));
    goto L_08982164;
L_08982164:
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[9]));
    aot_gpr[8] = (aot_gpr[9] + static_cast<std::uint32_t>(144));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[10] + static_cast<std::uint32_t>(304), static_cast<std::uint16_t>(aot_gpr[8]));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[20];
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08982164;
      }
      goto L_0898217C;
    }
L_0898217C:
    aot_gpr[20] = (aot_gpr[15] + static_cast<std::uint32_t>(16));
    goto L_08982180;
L_08982180:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(-4), aot_gpr[11]);
      if (branch_taken) {
          goto L_08982180;
      }
      goto L_08982194;
    }
L_08982194:
    aot_gpr[20] = (aot_gpr[15] + static_cast<std::uint32_t>(64));
    goto L_08982198;
L_08982198:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[15];
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(280), aot_gpr[11]);
      if (branch_taken) {
          goto L_08982198;
      }
      goto L_089821AC;
    }
L_089821AC:
    aot_gpr[15] = (aot_gpr[15] + static_cast<std::uint32_t>(-188));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(aot_gpr[11]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(636), static_cast<std::uint16_t>(aot_gpr[11]));
    goto L_089822AC;
L_089821BC:
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) <= 0;
    aot_gpr[2] = (std::rotr(aot_gpr[24], static_cast<int>(aot_gpr[25] & 31u)));
      if (branch_taken) {
          goto L_089821E0;
      }
      goto L_089821C8;
    }
L_089821C8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((aot_gpr[24] & 0x0000FFFFu) << 0u));
    aot_gpr[2] = (std::rotr(aot_gpr[2], static_cast<int>(aot_gpr[25] & 31u)));
    goto L_089821E0;
L_089821E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(860), aot_gpr[2]);
    aot_gpr[20] = ((aot_gpr[2] >> 28u) & 0x0000000Fu);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(760));
    aot_gpr[8] = (aot_gpr[15] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[15]);
    goto L_089821F4;
L_089821F4:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[20];
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898223C;
      }
      goto L_089821FC;
    }
L_089821FC:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(9))))));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) <= 0;
    aot_gpr[2] = (std::rotr(aot_gpr[24], static_cast<int>(aot_gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08982224;
      }
      goto L_0898220C;
    }
L_0898220C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((aot_gpr[24] & 0x0000FFFFu) << 0u));
    aot_gpr[2] = (std::rotr(aot_gpr[2], static_cast<int>(aot_gpr[25] & 31u)));
    goto L_08982224;
L_08982224:
    aot_gpr[2] = (aot_gpr[2] >> 29u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[10] = ((aot_gpr[10] & ~0x00007E00u) | ((aot_gpr[2] & 0x0000003Fu) << 9u));
      if (branch_taken) {
          goto L_089821F4;
      }
      goto L_08982230;
    }
L_08982230:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE16(aot_gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[10]));
    goto L_089821F4;
L_0898223C:
    aot_gpr[31] = (0x08982244u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(760));
    goto L_08982594;
L_08982244:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982250;
    }
L_08982250:
    aot_gpr[13] = ((aot_gpr[13] >> 18u) & 0x0000001Fu);
    aot_gpr[31] = (0x0898225Cu);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(257));
    goto L_08982488;
L_0898225C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982264;
    }
L_08982264:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(61)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[15] = ((aot_gpr[15] & ~0x0000003Eu) | ((aot_gpr[9] & 0x0000001Fu) << 1u));
      if (branch_taken) {
          goto L_0898227C;
      }
      goto L_08982278;
    }
L_08982278:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[15] + static_cast<std::uint32_t>(60))))));
    goto L_0898227C;
L_0898227C:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[11];
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[9]));
      if (branch_taken) {
          goto L_08982264;
      }
      goto L_08982284;
    }
L_08982284:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(636));
    aot_gpr[31] = (0x08982290u);
    aot_gpr[13] = ((aot_gpr[13] >> 23u) & 0x0000001Fu);
    goto L_08982484;
L_08982290:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(60))))));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr[15] = ((aot_gpr[15] & ~0x0000003Eu) | ((aot_gpr[9] & 0x0000001Fu) << 1u));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[15] + static_cast<std::uint32_t>(124))))));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[11];
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[9]));
      if (branch_taken) {
          goto L_08982290;
      }
      goto L_089822A8;
    }
L_089822A8:
    aot_gpr[15] = ((aot_gpr[15] & ~0x0000003Eu) | ((0u & 0x0000001Fu) << 1u));
    goto L_089822AC;
L_089822AC:
    aot_gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    goto L_089822B0;
L_089822B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(30)));
    aot_gpr[31] = (0x089822BCu);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    goto L_08982428;
L_089822BC:
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(638));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[10] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(aot_gpr[2]));
      if (branch_taken) {
          goto L_08982340;
      }
      goto L_089822C8;
    }
L_089822C8:
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 4u));
    aot_gpr[31] = (0x089822D4u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(666)));
      if (branch_taken) {
          goto L_0898236C;
      }
      goto L_089822D4;
    }
L_089822D4:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(636))))));
    aot_gpr[31] = (0x089822E0u);
    aot_gpr[1] = (aot_gpr[4] - aot_gpr[20]);
    goto L_089823E8;
L_089822E0:
    aot_gpr[20] = (aot_gpr[5] < aot_gpr[1] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[10] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[2])));
      if (branch_taken) {
          goto L_08982684;
      }
      goto L_089822EC;
    }
L_089822EC:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-30));
    aot_gpr[31] = (0x089822F8u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    aot_gpr[20] = (aot_gpr[4] - aot_gpr[2]);
      if (branch_taken) {
          goto L_08982350;
      }
      goto L_089822F8;
    }
L_089822F8:
    aot_gpr[10] = (aot_gpr[14] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982304;
    }
L_08982304:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(-1)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[1] == aot_gpr[4];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(aot_gpr[8]));
      if (branch_taken) {
          goto L_089822B0;
      }
      goto L_08982314;
    }
L_08982314:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08982304;
L_0898231C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((aot_gpr[24] & 0x0000FFFFu) << 0u));
    aot_gpr[2] = (std::rotr(aot_gpr[2], static_cast<int>(aot_gpr[25] & 31u)));
    aot_gpr[2] = (aot_gpr[2] >> (aot_gpr[10] & 31u));
    jump_target = aot_gpr[31];
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982340:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08982684;
      }
      goto L_08982348;
    }
L_08982348:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_089822B0;
L_08982350:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[25] = (aot_gpr[25] - aot_gpr[10]);
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982358;
    }
L_08982358:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) > 0;
    aot_gpr[2] = (std::rotr(aot_gpr[24], static_cast<int>(aot_gpr[25] & 31u)));
      if (branch_taken) {
          goto L_0898231C;
      }
      goto L_08982360;
    }
L_08982360:
    aot_gpr[2] = (aot_gpr[2] >> (aot_gpr[10] & 31u));
    jump_target = aot_gpr[31];
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898236C:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[10]) >> 28u));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[10];
    aot_gpr[25] = (aot_gpr[25] - aot_gpr[10]);
      if (branch_taken) {
          goto L_0898238C;
      }
      goto L_08982378;
    }
L_08982378:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) > 0;
    aot_gpr[2] = (std::rotr(aot_gpr[24], static_cast<int>(aot_gpr[25] & 31u)));
      if (branch_taken) {
          goto L_0898231C;
      }
      goto L_08982380;
    }
L_08982380:
    aot_gpr[2] = (aot_gpr[2] >> (aot_gpr[10] & 31u));
    jump_target = aot_gpr[31];
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898238C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(788))))));
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982398;
    }
L_08982398:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[25] = (aot_gpr[25] + aot_gpr[10]);
      if (branch_taken) {
          goto L_08982100;
      }
      goto L_089823A0;
    }
L_089823A0:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[14]);
      if (branch_taken) {
          goto L_089823B8;
      }
      goto L_089823A8;
    }
L_089823A8:
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(39));
    aot_gpr[9] = (aot_gpr[25] >> 3u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_089823B8;
L_089823B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(784)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(776)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(896));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089823C8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((aot_gpr[24] & 0x0000FFFFu) << 0u));
    aot_gpr[2] = (std::rotr(aot_gpr[2], static_cast<int>(aot_gpr[25] & 31u)));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((0u & 0x0000FFFFu) << 0u));
    goto L_089823F8;
L_089823E8:
    aot_gpr[2] = (aot_gpr[24] >> (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] - aot_gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) > 0;
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[10] & 31u));
      if (branch_taken) {
          goto L_089823C8;
      }
      goto L_089823F8;
    }
L_089823F8:
    aot_gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(aot_gpr[2]));
    aot_gpr[10] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08982448;
      }
      goto L_08982408;
    }
L_08982408:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(58))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982414:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[10]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(60))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982428:
    aot_gpr[2] = (aot_gpr[24] >> (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] - aot_gpr[12]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) > 0;
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[12] & 31u));
      if (branch_taken) {
          goto L_089823C8;
      }
      goto L_08982438;
    }
L_08982438:
    aot_gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(aot_gpr[2]));
    aot_gpr[10] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08982408;
      }
      goto L_08982448;
    }
L_08982448:
    { const bool branch_taken = aot_gpr[25] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          goto L_08982470;
      }
      goto L_08982450;
    }
L_08982450:
    aot_gpr[10] = (aot_gpr[24] >> (aot_gpr[25] & 31u));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000001u) | ((aot_gpr[10] & 0x00000001u) << 0u));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(1));
    goto L_0898245C;
L_0898245C:
    aot_gpr[3] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[2]);
      if (branch_taken) {
          goto L_08982414;
      }
      goto L_08982468;
    }
L_08982468:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08982448;
L_08982470:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (0u + static_cast<std::uint32_t>(-31));
    aot_gpr[2] = ((aot_gpr[2] & ~0x00000001u) | ((aot_gpr[24] & 0x00000001u) << 0u));
    goto L_0898245C;
L_08982484:
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08982488;
L_08982488:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[1] = (0u + 0u);
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(7));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[11] = (aot_gpr[20] + 0u);
    ctx.hi = aot_gpr[31];
    aot_gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(760))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(52), 0u);
    goto L_089824A8;
L_089824A8:
    aot_gpr[8] = (aot_gpr[1] & 511u);
    goto L_089824AC;
L_089824AC:
    aot_gpr[8] = (aot_gpr[8] - aot_gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) >= 0;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(790)));
      if (branch_taken) {
          goto L_08982588;
      }
      goto L_089824B8;
    }
L_089824B8:
    aot_gpr[31] = (0x089824C0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(762));
    goto L_08982428;
L_089824C0:
    aot_gpr[8] = (aot_gpr[2] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) <= 0;
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? aot_gpr[8] : aot_gpr[9]);
      if (branch_taken) {
          goto L_08982504;
      }
      goto L_089824CC;
    }
L_089824CC:
    aot_gpr[25] = (aot_gpr[25] + aot_gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) <= 0;
    aot_gpr[2] = (std::rotr(aot_gpr[24], static_cast<int>(aot_gpr[25] & 31u)));
      if (branch_taken) {
          goto L_089824F0;
      }
      goto L_089824D8;
    }
L_089824D8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((aot_gpr[24] & 0x0000FFFFu) << 0u));
    aot_gpr[2] = (std::rotr(aot_gpr[2], static_cast<int>(aot_gpr[25] & 31u)));
    goto L_089824F0;
L_089824F0:
    aot_gpr[10] = (0u - aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] >> (aot_gpr[10] & 31u));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    goto L_089824FC;
L_089824FC:
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[8]);
    goto L_089824A8;
L_08982504:
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[10] = (aot_gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08982520;
      }
      goto L_0898250C;
    }
L_0898250C:
    aot_gpr[1] = ((aot_gpr[1] & ~0x00007E00u) | ((aot_gpr[2] & 0x0000003Fu) << 9u));
    PSPRECOMP_AOT_STORE16(aot_gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr[1]));
    aot_gpr[1] = (aot_gpr[1] + static_cast<std::uint32_t>(1));
    if (aot_gpr[2] != 0u) aot_gpr[11] = (aot_gpr[10]);
    goto L_089824A8;
L_08982520:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[1]) <= 0;
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982528;
    }
L_08982528:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[25]) <= 0;
    aot_gpr[2] = (std::rotr(aot_gpr[24], static_cast<int>(aot_gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08982548;
      }
      goto L_08982530;
    }
L_08982530:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[25] & 31u));
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000FFFFu) | ((aot_gpr[24] & 0x0000FFFFu) << 0u));
    aot_gpr[2] = (std::rotr(aot_gpr[2], static_cast<int>(aot_gpr[25] & 31u)));
    goto L_08982548;
L_08982548:
    aot_gpr[2] = (aot_gpr[2] >> 30u);
    aot_gpr[8] = (aot_gpr[1] & 511u);
    { const bool branch_taken = aot_gpr[8] == aot_gpr[1];
    aot_gpr[8] = (aot_gpr[2] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089824FC;
      }
      goto L_08982558;
    }
L_08982558:
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[1]);
    goto L_0898255C;
L_0898255C:
    PSPRECOMP_AOT_STORE16(aot_gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr[1]));
    aot_gpr[1] = (aot_gpr[1] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[1] != aot_gpr[8];
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898255C;
      }
      goto L_0898256C;
    }
L_0898256C:
    aot_gpr[8] = (aot_gpr[1] & 511u);
    goto L_089824AC;
L_08982574:
    aot_gpr[2] = (aot_gpr[1] >> (aot_gpr[8] & 31u));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982580;
    }
L_08982580:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[1]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982588:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[31] = (ctx.hi);
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982594;
    }
L_08982594:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[13] = (aot_gpr[20] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[9] = (aot_gpr[20] + static_cast<std::uint32_t>(2));
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(40), 0u);
    goto L_089825B0;
L_089825B0:
    { const bool branch_taken = aot_gpr[11] == aot_gpr[13];
    aot_gpr[12] = (aot_gpr[13] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08982574;
      }
      goto L_089825B8;
    }
L_089825B8:
    aot_gpr[1] = (aot_gpr[1] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[13] + static_cast<std::uint32_t>(60))))));
    goto L_089825C0;
L_089825C0:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[12] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = aot_gpr[11] == aot_gpr[12];
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089825DC;
      }
      goto L_089825CC;
    }
L_089825CC:
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[3]) > static_cast<std::int32_t>(aot_gpr[2]) ? aot_gpr[3] : aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[12] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[2]) ? aot_gpr[3] : aot_gpr[2]);
    goto L_089825C0;
L_089825DC:
    aot_gpr[12] = (aot_gpr[2] >> 9u);
    aot_gpr[2] = (aot_gpr[2] & 511u);
    PSPRECOMP_AOT_STORE16(aot_gpr[13] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(aot_gpr[2]));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[12];
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089825B0;
      }
      goto L_089825F0;
    }
L_089825F0:
    aot_gpr[10] = (aot_gpr[8] - aot_gpr[12]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (aot_gpr[12] + 0u);
      if (branch_taken) {
          goto L_08982618;
      }
      goto L_089825FC;
    }
L_089825FC:
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[1]));
    aot_gpr[1] = (std::rotr(aot_gpr[1], static_cast<int>(aot_gpr[10] & 31u)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[10]);
    aot_gpr[9] = (aot_gpr[9] - aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[13] - aot_gpr[1]);
    aot_gpr[10] = (aot_gpr[10] - aot_gpr[1]);
    aot_gpr[10] = (aot_gpr[9] - aot_gpr[10]);
    goto L_08982618;
L_08982618:
    PSPRECOMP_AOT_STORE16(aot_gpr[9] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(aot_gpr[10]));
    goto L_089825B0;
L_08982620:
    aot_gpr[8] = (0u - aot_gpr[25]);
    aot_gpr[8] = (aot_gpr[8] >> 3u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[8]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[8]));
    aot_gpr[3] = (aot_gpr[8] & 65535u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[9] = (~(aot_gpr[8] | 0u));
      if (branch_taken) {
          goto L_08982684;
      }
      goto L_08982648;
    }
L_08982648:
    aot_gpr[9] = (std::rotr(aot_gpr[9], 16));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08982678;
      }
      goto L_08982654;
    }
L_08982654:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[4];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(aot_gpr[9]));
      if (branch_taken) {
          goto L_08982654;
      }
      goto L_08982668;
    }
L_08982668:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[25] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089823A0;
      }
      goto L_08982670;
    }
L_08982670:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    goto L_089820EC;
L_08982678:
    aot_gpr[2] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 264u);
    goto L_089823B8;
L_08982684:
    aot_gpr[2] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 260u);
    goto L_089823B8;
L_08982690:
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10468));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-1616), aot_gpr[3]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1616));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10544));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10556));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10784));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10960));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10792));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10968));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10840));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(11008));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10976));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10888));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11052));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10944));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10952));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10992));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(60), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(11000));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11068));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(64), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(11060));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11076));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10220));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10304));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10232));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10372));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(88), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(10416));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    aot_gpr[4] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10460));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    aot_gpr[3] = (2200u << 16u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(11084));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2804), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(104), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089827EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089827F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[31] = (0x08982830u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08982830u) goto L_08982830;
    return;
L_08982830:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08982868u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089827EC;
L_08982868:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08982874u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_089827F8;
L_08982874:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982884:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089828A4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 155u, 0x089EB970u>(ctx, &aot_mem) && ctx.pc == 0x089828A4u) goto L_089828A4;
    return;
L_089828A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089828B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089828D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 157u, 0x089EB9A4u>(ctx, &aot_mem) && ctx.pc == 0x089828D0u) goto L_089828D0;
    return;
L_089828D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089828DC:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 159u, 0x089EB9D8u>(ctx, &aot_mem); return;
L_089828E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[3] = (0u | 50001u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-1620)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_0898291C;
      }
      goto L_08982900;
    }
L_08982900:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0898290Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-1620), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 164u, 0x089EBA3Cu>(ctx, &aot_mem) && ctx.pc == 0x0898290Cu) goto L_0898290C;
    return;
L_0898290C:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-1620)));
    if (aot_gpr[3] != 0u) aot_gpr[2] = (0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-1620), aot_gpr[2]);
    goto L_0898291C;
L_0898291C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982930:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-1620), 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 165u, 0x089EBA50u>(ctx, &aot_mem); return;
L_0898293C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089829D0;
      }
      goto L_08982974;
    }
L_08982974:
    aot_gpr[7] = (aot_gpr[8] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089829A8;
      }
      goto L_08982980;
    }
L_08982980:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089829F8;
      }
      goto L_0898298C;
    }
L_0898298C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089829A8:
    aot_gpr[31] = (0x089829B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 172u, 0x089EBAF8u>(ctx, &aot_mem) && ctx.pc == 0x089829B0u) goto L_089829B0;
    return;
L_089829B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089829D0:
    aot_gpr[31] = (0x089829D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 166u, 0x089EBA60u>(ctx, &aot_mem) && ctx.pc == 0x089829D8u) goto L_089829D8;
    return;
L_089829D8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089829F8:
    aot_gpr[31] = (0x08982A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 180u, 0x089EBBA8u>(ctx, &aot_mem) && ctx.pc == 0x08982A00u) goto L_08982A00;
    return;
L_08982A00:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982A20:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 184u, 0x089EBC04u>(ctx, &aot_mem); return;
L_08982A28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08982A4Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 167u, 0x089EBA74u>(ctx, &aot_mem) && ctx.pc == 0x08982A4Cu) goto L_08982A4C;
    return;
L_08982A4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982A58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08982A7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 169u, 0x089EBAACu>(ctx, &aot_mem) && ctx.pc == 0x08982A7Cu) goto L_08982A7C;
    return;
L_08982A7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982A88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08982AA8u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 171u, 0x089EBAE4u>(ctx, &aot_mem) && ctx.pc == 0x08982AA8u) goto L_08982AA8;
    return;
L_08982AA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982AC0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 162u, 0x089EBA14u>(ctx, &aot_mem); return;
L_08982AC8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 163u, 0x089EBA28u>(ctx, &aot_mem); return;
L_08982AD0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 176u, 0x089EBB58u>(ctx, &aot_mem); return;
L_08982AD8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 177u, 0x089EBB6Cu>(ctx, &aot_mem); return;
L_08982AE0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 178u, 0x089EBB80u>(ctx, &aot_mem); return;
L_08982AE8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 179u, 0x089EBB94u>(ctx, &aot_mem); return;
L_08982AF0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 161u, 0x089EBA00u>(ctx, &aot_mem); return;
L_08982AF8:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 174u, 0x089EBB30u>(ctx, &aot_mem); return;
L_08982B00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08982B20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 181u, 0x089EBBBCu>(ctx, &aot_mem) && ctx.pc == 0x08982B20u) goto L_08982B20;
    return;
L_08982B20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982B2C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 183u, 0x089EBBF0u>(ctx, &aot_mem); return;
L_08982B34:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 175u, 0x089EBB44u>(ctx, &aot_mem); return;
L_08982B3C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982B44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982B4C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 160u, 0x089EB9ECu>(ctx, &aot_mem); return;
L_08982B54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12424));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08982B84;
      }
      goto L_08982B78;
    }
L_08982B78:
    aot_gpr[31] = (0x08982B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08982B80u) goto L_08982B80;
    return;
L_08982B80:
    aot_gpr[2] = (0u + 0u);
    goto L_08982B84;
L_08982B84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982B90:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08982C10;
      }
      goto L_08982B98;
    }
L_08982B98:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[2] + static_cast<std::uint32_t>(-18816));
    aot_gpr[2] = (aot_gpr[4] | aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    aot_gpr[6] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08982C18;
      }
      goto L_08982BB4;
    }
L_08982BB4:
    aot_gpr[5] = (aot_gpr[8] + 0u);
    goto L_08982BB8;
L_08982BB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[6] + static_cast<std::uint32_t>(-1), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    rt.memory().aot_store_word_right(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08982BB8;
      }
      goto L_08982BF4;
    }
L_08982BF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    goto L_08982BF8;
L_08982BF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08982C10;
L_08982C10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982C18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08982BF4;
      }
      goto L_08982C44;
    }
L_08982C44:
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
          goto L_08982C18;
      }
      goto L_08982C70;
    }
L_08982C70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(2)));
    goto L_08982BF8;
L_08982C78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08982CC8;
      }
      goto L_08982C98;
    }
L_08982C98:
    aot_gpr[31] = (0x08982CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08982CA0u) goto L_08982CA0;
    return;
L_08982CA0:
    aot_gpr[31] = (0x08982CA8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 175u, 0x08992BBCu>(ctx, &aot_mem) && ctx.pc == 0x08982CA8u) goto L_08982CA8;
    return;
L_08982CA8:
    aot_gpr[31] = (0x08982CB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 47u, 0x08990468u>(ctx, &aot_mem) && ctx.pc == 0x08982CB0u) goto L_08982CB0;
    return;
L_08982CB0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08982CC8;
L_08982CC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982CDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_08982D34;
      }
      goto L_08982D18;
    }
L_08982D18:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
      if (branch_taken) {
          goto L_08982D5C;
      }
      goto L_08982D2C;
    }
L_08982D2C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08982D34;
L_08982D34:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982D5C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(29));
      if (branch_taken) {
          goto L_08982D98;
      }
      goto L_08982D68;
    }
L_08982D68:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982D98:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-1504)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
        goto L_08982DBC;
    }
    goto L_08982DA8;
L_08982DA8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-1504), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08982D34;
L_08982DBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2000));
      if (branch_taken) {
          goto L_08982DD4;
      }
      goto L_08982DC8;
    }
L_08982DC8:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(2000));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08982D34;
L_08982DD4:
    aot_gpr[31] = (0x08982DDCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 77u, 0x08990860u>(ctx, &aot_mem) && ctx.pc == 0x08982DDCu) goto L_08982DDC;
    return;
L_08982DDC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2000));
      if (branch_taken) {
          goto L_08982DC8;
      }
      goto L_08982DE4;
    }
L_08982DE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[18] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    aot_gpr[31] = (0x08982DF8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-1508), aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08982DF8u) goto L_08982DF8;
    return;
L_08982DF8:
    aot_gpr[31] = (0x08982E00u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982E00u) goto L_08982E00;
    return;
L_08982E00:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08982D34;
      }
      goto L_08982E08;
    }
L_08982E08:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08982E14u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0387_entry, 387u, 142u, 0x08987A54u>(ctx, &aot_mem) && ctx.pc == 0x08982E14u) goto L_08982E14;
    return;
L_08982E14:
    aot_gpr[31] = (0x08982E1Cu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08982E1Cu) goto L_08982E1C;
    return;
L_08982E1C:
    aot_gpr[31] = (0x08982E24u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982E24u) goto L_08982E24;
    return;
L_08982E24:
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (aot_gpr[2] + 0u);
        goto L_08982D34;
    }
    goto L_08982E2C;
L_08982E2C:
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-1508), aot_gpr[20]);
        goto L_08982E44;
    }
    goto L_08982E34;
L_08982E34:
    aot_gpr[19] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-1504), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-1508), 0u);
    goto L_08982D34;
L_08982E44:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-1504), aot_gpr[20]);
    goto L_08982D34;
L_08982E4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-1504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_08982E84;
      }
      goto L_08982E74;
    }
L_08982E74:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (0u + 0u);
      if (branch_taken) {
          goto L_08982EA0;
      }
      goto L_08982E80;
    }
L_08982E80:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-1504), aot_gpr[2]);
    goto L_08982E84;
L_08982E84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982EA0:
    aot_gpr[31] = (0x08982EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08982EA8u) goto L_08982EA8;
    return;
L_08982EA8:
    aot_gpr[31] = (0x08982EB0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982EB0u) goto L_08982EB0;
    return;
L_08982EB0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08982E84;
      }
      goto L_08982EB8;
    }
L_08982EB8:
    aot_gpr[31] = (0x08982EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 252u, 0x08989DECu>(ctx, &aot_mem) && ctx.pc == 0x08982EC0u) goto L_08982EC0;
    return;
L_08982EC0:
    aot_gpr[31] = (0x08982EC8u);
    aot_gpr[17] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08982EC8u) goto L_08982EC8;
    return;
L_08982EC8:
    aot_gpr[31] = (0x08982ED0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982ED0u) goto L_08982ED0;
    return;
L_08982ED0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08982E84;
      }
      goto L_08982ED8;
    }
L_08982ED8:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[18] = (2216u << 16u);
      if (branch_taken) {
          goto L_08982F10;
      }
      goto L_08982EE0;
    }
L_08982EE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[31] = (0x08982EECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 82u, 0x089908ACu>(ctx, &aot_mem) && ctx.pc == 0x08982EECu) goto L_08982EEC;
    return;
L_08982EEC:
    aot_gpr[31] = (0x08982EF4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982EF4u) goto L_08982EF4;
    return;
L_08982EF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08982E84;
      }
      goto L_08982EFC;
    }
L_08982EFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-1508), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-1504), 0u);
    goto L_08982F10;
L_08982F10:
    aot_gpr[31] = (0x08982F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 20u, 0x08985208u>(ctx, &aot_mem) && ctx.pc == 0x08982F18u) goto L_08982F18;
    return;
L_08982F18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08982F28u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4244));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08982F28u) goto L_08982F28;
    return;
L_08982F28:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_08982E84;
L_08982F30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08982F54u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08982F54u) goto L_08982F54;
    return;
L_08982F54:
    aot_gpr[31] = (0x08982F5Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982F5Cu) goto L_08982F5C;
    return;
L_08982F5C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_08982F88;
      }
      goto L_08982F6C;
    }
L_08982F6C:
    aot_gpr[31] = (0x08982F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 17u, 0x08986160u>(ctx, &aot_mem) && ctx.pc == 0x08982F74u) goto L_08982F74;
    return;
L_08982F74:
    aot_gpr[31] = (0x08982F7Cu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08982F7Cu) goto L_08982F7C;
    return;
L_08982F7C:
    aot_gpr[31] = (0x08982F84u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982F84u) goto L_08982F84;
    return;
L_08982F84:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_08982F88;
L_08982F88:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08982FA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08982FC4u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08982FC4u) goto L_08982FC4;
    return;
L_08982FC4:
    aot_gpr[31] = (0x08982FCCu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982FCCu) goto L_08982FCC;
    return;
L_08982FCC:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_08982FF8;
      }
      goto L_08982FDC;
    }
L_08982FDC:
    aot_gpr[31] = (0x08982FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 6u, 0x0898D074u>(ctx, &aot_mem) && ctx.pc == 0x08982FE4u) goto L_08982FE4;
    return;
L_08982FE4:
    aot_gpr[31] = (0x08982FECu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08982FECu) goto L_08982FEC;
    return;
L_08982FEC:
    aot_gpr[31] = (0x08982FF4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08982FF4u) goto L_08982FF4;
    return;
L_08982FF4:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_08982FF8;
L_08982FF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08983000u; return;
}

void recomp_unit_0382(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0382_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_382(Runtime &runtime) {
    runtime.register_generated_unit(382u, 0x08982000u, 4096u, &recomp_unit_0382, &recomp_unit_0382_entry);
    runtime.register_function(0x08982000u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982008u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982018u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982024u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898202Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982040u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982048u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982064u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898206Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982074u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982098u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089820A0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089820A4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089820ACu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089820B0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089820D0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089820ECu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982100u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898210Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982124u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982130u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898213Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982144u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982148u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898215Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982164u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898217Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982180u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982194u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982198u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089821ACu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089821BCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089821C8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089821E0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089821F4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089821FCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898220Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982224u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982230u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898223Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982244u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982250u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898225Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982264u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982278u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898227Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982284u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982290u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822A8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822ACu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822B0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822BCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822C8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822D4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822E0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822ECu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089822F8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982304u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982314u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898231Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982340u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982348u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982350u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982358u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982360u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898236Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982378u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982380u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898238Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982398u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089823A0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089823A8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089823B8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089823C8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089823E8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089823F8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982408u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982414u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982428u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982438u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982448u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982450u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898245Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982468u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982470u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982484u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982488u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089824A8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089824ACu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089824B8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089824C0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089824CCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089824D8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089824F0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089824FCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982504u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898250Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982520u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982528u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982530u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982548u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982558u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898255Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898256Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982574u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982580u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982588u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982594u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089825B0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089825B8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089825C0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089825CCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089825DCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089825F0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089825FCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982618u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982620u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982648u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982654u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982668u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982670u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982678u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982684u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982690u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089827ECu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089827F8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982830u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982840u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982868u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982874u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982884u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089828A4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089828B0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089828D0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089828DCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089828E4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982900u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898290Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898291Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982930u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898293Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982974u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982980u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x0898298Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089829A8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089829B0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089829D0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089829D8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x089829F8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982A00u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982A20u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982A28u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982A4Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982A58u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982A7Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982A88u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AA8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AC0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AC8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AD0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AD8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AE0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AE8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AF0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982AF8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B00u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B20u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B2Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B34u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B3Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B44u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B4Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B54u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B78u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B80u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B84u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B90u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982B98u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982BB4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982BB8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982BF4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982BF8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982C10u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982C18u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982C44u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982C70u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982C78u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982C98u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982CA0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982CA8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982CB0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982CC8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982CDCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982D18u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982D2Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982D34u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982D5Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982D68u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982D98u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982DA8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982DBCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982DC8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982DD4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982DDCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982DE4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982DF8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E00u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E08u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E14u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E1Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E24u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E2Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E34u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E44u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E4Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E74u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E80u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982E84u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EA0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EA8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EB0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EB8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EC0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EC8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982ED0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982ED8u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EE0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EECu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EF4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982EFCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F10u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F18u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F28u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F30u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F54u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F5Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F6Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F74u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F7Cu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F84u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982F88u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982FA0u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982FC4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982FCCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982FDCu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982FE4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982FECu, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982FF4u, &recomp_unit_0382, "recomp_unit_0382");
    runtime.register_function(0x08982FF8u, &recomp_unit_0382, "recomp_unit_0382");
}
} // namespace psprecomp
