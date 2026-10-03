#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0348[1019] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 15, 16, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    22, 23, 24, 0, 0, 25, 0, 26, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 33, 0, 0, 0, 34, 0, 0,
    0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 42, 43, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58,
    0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 72,
    0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 85, 0, 86, 0, 87, 0,
    88, 0, 0, 0, 89, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93,
    94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114,
    0, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0,
    0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 131, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145,
    0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162,
    0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 182, 0, 183, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198,
    0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 234, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 238, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0,
    248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 262, 0, 263, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 269, 0, 0, 0, 0, 0, 270,
};
void recomp_unit_0348_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08960000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0348[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08960000;
    case 2u: goto L_0896000C;
    case 3u: goto L_08960018;
    case 4u: goto L_08960034;
    case 5u: goto L_08960038;
    case 6u: goto L_08960048;
    case 7u: goto L_08960068;
    case 8u: goto L_08960074;
    case 9u: goto L_08960088;
    case 10u: goto L_089600A4;
    case 11u: goto L_089600AC;
    case 12u: goto L_089600B4;
    case 13u: goto L_089600C8;
    case 14u: goto L_089600E0;
    case 15u: goto L_089600EC;
    case 16u: goto L_089600F0;
    case 17u: goto L_08960100;
    case 18u: goto L_08960134;
    case 19u: goto L_0896013C;
    case 20u: goto L_08960148;
    case 21u: goto L_08960178;
    case 22u: goto L_08960180;
    case 23u: goto L_08960184;
    case 24u: goto L_08960188;
    case 25u: goto L_08960194;
    case 26u: goto L_0896019C;
    case 27u: goto L_089601A0;
    case 28u: goto L_089601B0;
    case 29u: goto L_089601C0;
    case 30u: goto L_089601C8;
    case 31u: goto L_089601D8;
    case 32u: goto L_089601E0;
    case 33u: goto L_089601E4;
    case 34u: goto L_089601F4;
    case 35u: goto L_08960204;
    case 36u: goto L_08960228;
    case 37u: goto L_08960240;
    case 38u: goto L_0896025C;
    case 39u: goto L_08960264;
    case 40u: goto L_08960274;
    case 41u: goto L_08960294;
    case 42u: goto L_0896029C;
    case 43u: goto L_089602A0;
    case 44u: goto L_089602A8;
    case 45u: goto L_089602B0;
    case 46u: goto L_089602B8;
    case 47u: goto L_089602C4;
    case 48u: goto L_089602CC;
    case 49u: goto L_089602E0;
    case 50u: goto L_08960324;
    case 51u: goto L_08960334;
    case 52u: goto L_08960340;
    case 53u: goto L_08960348;
    case 54u: goto L_08960354;
    case 55u: goto L_08960360;
    case 56u: goto L_08960368;
    case 57u: goto L_08960370;
    case 58u: goto L_0896037C;
    case 59u: goto L_0896038C;
    case 60u: goto L_08960394;
    case 61u: goto L_0896039C;
    case 62u: goto L_089603A4;
    case 63u: goto L_089603B0;
    case 64u: goto L_089603B8;
    case 65u: goto L_089603C0;
    case 66u: goto L_089603C8;
    case 67u: goto L_089603D0;
    case 68u: goto L_089603DC;
    case 69u: goto L_089603E4;
    case 70u: goto L_089603F0;
    case 71u: goto L_089603F8;
    case 72u: goto L_089603FC;
    case 73u: goto L_08960404;
    case 74u: goto L_0896040C;
    case 75u: goto L_08960420;
    case 76u: goto L_08960430;
    case 77u: goto L_0896044C;
    case 78u: goto L_08960454;
    case 79u: goto L_08960460;
    case 80u: goto L_08960488;
    case 81u: goto L_089604A4;
    case 82u: goto L_089604B0;
    case 83u: goto L_089604DC;
    case 84u: goto L_089604E4;
    case 85u: goto L_089604E8;
    case 86u: goto L_089604F0;
    case 87u: goto L_089604F8;
    case 88u: goto L_08960500;
    case 89u: goto L_08960510;
    case 90u: goto L_08960514;
    case 91u: goto L_0896052C;
    case 92u: goto L_08960574;
    case 93u: goto L_0896057C;
    case 94u: goto L_08960580;
    case 95u: goto L_08960588;
    case 96u: goto L_08960590;
    case 97u: goto L_089605A0;
    case 98u: goto L_089605B4;
    case 99u: goto L_089605D0;
    case 100u: goto L_089605EC;
    case 101u: goto L_089605FC;
    case 102u: goto L_0896060C;
    case 103u: goto L_08960624;
    case 104u: goto L_08960650;
    case 105u: goto L_0896065C;
    case 106u: goto L_08960670;
    case 107u: goto L_0896067C;
    case 108u: goto L_08960698;
    case 109u: goto L_089606A4;
    case 110u: goto L_089606B0;
    case 111u: goto L_089606CC;
    case 112u: goto L_089606E0;
    case 113u: goto L_089606E8;
    case 114u: goto L_089606FC;
    case 115u: goto L_08960704;
    case 116u: goto L_0896070C;
    case 117u: goto L_0896071C;
    case 118u: goto L_08960724;
    case 119u: goto L_0896072C;
    case 120u: goto L_08960730;
    case 121u: goto L_0896073C;
    case 122u: goto L_08960758;
    case 123u: goto L_0896076C;
    case 124u: goto L_08960774;
    case 125u: goto L_08960788;
    case 126u: goto L_08960790;
    case 127u: goto L_08960798;
    case 128u: goto L_089607A8;
    case 129u: goto L_089607B0;
    case 130u: goto L_089607B8;
    case 131u: goto L_089607BC;
    case 132u: goto L_089607C8;
    case 133u: goto L_089607D0;
    case 134u: goto L_089607D8;
    case 135u: goto L_089607E0;
    case 136u: goto L_089607E8;
    case 137u: goto L_089607F0;
    case 138u: goto L_089607F8;
    case 139u: goto L_08960800;
    case 140u: goto L_08960828;
    case 141u: goto L_08960844;
    case 142u: goto L_08960854;
    case 143u: goto L_08960868;
    case 144u: goto L_08960870;
    case 145u: goto L_0896087C;
    case 146u: goto L_08960888;
    case 147u: goto L_08960890;
    case 148u: goto L_08960898;
    case 149u: goto L_089608A0;
    case 150u: goto L_089608B4;
    case 151u: goto L_089608D8;
    case 152u: goto L_089608E8;
    case 153u: goto L_089608F4;
    case 154u: goto L_08960910;
    case 155u: goto L_08960928;
    case 156u: goto L_08960934;
    case 157u: goto L_0896093C;
    case 158u: goto L_08960950;
    case 159u: goto L_08960960;
    case 160u: goto L_0896096C;
    case 161u: goto L_08960974;
    case 162u: goto L_0896097C;
    case 163u: goto L_08960984;
    case 164u: goto L_0896098C;
    case 165u: goto L_08960994;
    case 166u: goto L_0896099C;
    case 167u: goto L_089609A4;
    case 168u: goto L_089609AC;
    case 169u: goto L_089609B4;
    case 170u: goto L_089609BC;
    case 171u: goto L_089609C4;
    case 172u: goto L_089609E8;
    case 173u: goto L_08960A04;
    case 174u: goto L_08960A14;
    case 175u: goto L_08960A24;
    case 176u: goto L_08960A30;
    case 177u: goto L_08960A40;
    case 178u: goto L_08960A48;
    case 179u: goto L_08960A50;
    case 180u: goto L_08960A60;
    case 181u: goto L_08960A68;
    case 182u: goto L_08960A6C;
    case 183u: goto L_08960A74;
    case 184u: goto L_08960A90;
    case 185u: goto L_08960A9C;
    case 186u: goto L_08960AAC;
    case 187u: goto L_08960AB8;
    case 188u: goto L_08960AC0;
    case 189u: goto L_08960AD4;
    case 190u: goto L_08960AF4;
    case 191u: goto L_08960B04;
    case 192u: goto L_08960B10;
    case 193u: goto L_08960B2C;
    case 194u: goto L_08960B44;
    case 195u: goto L_08960B50;
    case 196u: goto L_08960B58;
    case 197u: goto L_08960B6C;
    case 198u: goto L_08960B7C;
    case 199u: goto L_08960B88;
    case 200u: goto L_08960B90;
    case 201u: goto L_08960B98;
    case 202u: goto L_08960BA0;
    case 203u: goto L_08960BA8;
    case 204u: goto L_08960BBC;
    case 205u: goto L_08960BCC;
    case 206u: goto L_08960BE4;
    case 207u: goto L_08960BEC;
    case 208u: goto L_08960BF8;
    case 209u: goto L_08960C08;
    case 210u: goto L_08960C20;
    case 211u: goto L_08960C2C;
    case 212u: goto L_08960C48;
    case 213u: goto L_08960C50;
    case 214u: goto L_08960C58;
    case 215u: goto L_08960C64;
    case 216u: goto L_08960C6C;
    case 217u: goto L_08960C74;
    case 218u: goto L_08960C84;
    case 219u: goto L_08960CA8;
    case 220u: goto L_08960CC0;
    case 221u: goto L_08960CD0;
    case 222u: goto L_08960CE0;
    case 223u: goto L_08960CF4;
    case 224u: goto L_08960D0C;
    case 225u: goto L_08960D14;
    case 226u: goto L_08960D1C;
    case 227u: goto L_08960D28;
    case 228u: goto L_08960D34;
    case 229u: goto L_08960D58;
    case 230u: goto L_08960D60;
    case 231u: goto L_08960D6C;
    case 232u: goto L_08960DA4;
    case 233u: goto L_08960DB4;
    case 234u: goto L_08960DB8;
    case 235u: goto L_08960DBC;
    case 236u: goto L_08960DC4;
    case 237u: goto L_08960DF0;
    case 238u: goto L_08960DF4;
    case 239u: goto L_08960E18;
    case 240u: goto L_08960E24;
    case 241u: goto L_08960E2C;
    case 242u: goto L_08960E34;
    case 243u: goto L_08960E3C;
    case 244u: goto L_08960E44;
    case 245u: goto L_08960E4C;
    case 246u: goto L_08960E5C;
    case 247u: goto L_08960E78;
    case 248u: goto L_08960E80;
    case 249u: goto L_08960E88;
    case 250u: goto L_08960EA4;
    case 251u: goto L_08960EAC;
    case 252u: goto L_08960EB4;
    case 253u: goto L_08960EC8;
    case 254u: goto L_08960ED0;
    case 255u: goto L_08960EF0;
    case 256u: goto L_08960EF8;
    case 257u: goto L_08960F18;
    case 258u: goto L_08960F20;
    case 259u: goto L_08960F30;
    case 260u: goto L_08960F48;
    case 261u: goto L_08960F74;
    case 262u: goto L_08960F88;
    case 263u: goto L_08960F90;
    case 264u: goto L_08960F98;
    case 265u: goto L_08960FA4;
    case 266u: goto L_08960FB0;
    case 267u: goto L_08960FC0;
    case 268u: goto L_08960FCC;
    case 269u: goto L_08960FD0;
    case 270u: goto L_08960FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08960000:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896000C:
    aot_gpr[2] = (2220u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-31032));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960018:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089600B4;
      }
      goto L_08960034;
    }
L_08960034:
    aot_gpr[4] = (0u | 0u);
    goto L_08960038;
L_08960038:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960038;
      }
      goto L_08960048;
    }
L_08960048:
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 8u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x08960068u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-28836));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x08960068u) goto L_08960068;
    return;
L_08960068:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089600B4;
      }
      goto L_08960074;
    }
L_08960074:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089600AC;
      }
      goto L_08960088;
    }
L_08960088:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089600A4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089600A4u) goto L_089600A4;
    return;
L_089600A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089600B4;
      }
      goto L_089600AC;
    }
L_089600AC:
    aot_gpr[31] = (0x089600B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x089600B4u) goto L_089600B4;
    return;
L_089600B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089600C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089600F0;
      }
      goto L_089600E0;
    }
L_089600E0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x089600ECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 253u, 0x0895EFE4u>(ctx, &aot_mem) && ctx.pc == 0x089600ECu) goto L_089600EC;
    return;
L_089600EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089600F0;
L_089600F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960100:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896013C;
      }
      goto L_08960134;
    }
L_08960134:
    aot_gpr[31] = (0x0896013Cu);
    // nop
    goto L_089600C8;
L_0896013C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960148:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960184;
      }
      goto L_08960178;
    }
L_08960178:
    aot_gpr[31] = (0x08960180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08960180u) goto L_08960180;
    return;
L_08960180:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    goto L_08960184;
L_08960184:
    aot_gpr[17] = (0u | 0u);
    goto L_08960188;
L_08960188:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089601A0;
      }
      goto L_08960194;
    }
L_08960194:
    aot_gpr[31] = (0x0896019Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896019Cu) goto L_0896019C;
    return;
L_0896019C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_089601A0;
L_089601A0:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08960188;
      }
      goto L_089601B0;
    }
L_089601B0:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-28296));
    goto L_089601C0;
L_089601C0:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[19] + aot_gpr[18]);
    goto L_089601C8;
L_089601C8:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089601E4;
      }
      goto L_089601D8;
    }
L_089601D8:
    aot_gpr[31] = (0x089601E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x089601E0u) goto L_089601E0;
    return;
L_089601E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089601E4;
L_089601E4:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < static_cast<std::uint32_t>(43) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089601C8;
      }
      goto L_089601F4;
    }
L_089601F4:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(172));
      if (branch_taken) {
          goto L_089601C0;
      }
      goto L_08960204;
    }
L_08960204:
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
L_08960228:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08960264;
      }
      goto L_08960240;
    }
L_08960240:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (0u | 195u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10120));
    aot_gpr[31] = (0x0896025Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22984));
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 252u, 0x0895EFDCu>(ctx, &aot_mem) && ctx.pc == 0x0896025Cu) goto L_0896025C;
    return;
L_0896025C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08960264;
L_08960264:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089602A0;
      }
      goto L_08960294;
    }
L_08960294:
    aot_gpr[31] = (0x0896029Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896029Cu) goto L_0896029C;
    return;
L_0896029C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_089602A0;
L_089602A0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089602CC;
      }
      goto L_089602A8;
    }
L_089602A8:
    aot_gpr[31] = (0x089602B0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089602B0u) goto L_089602B0;
    return;
L_089602B0:
    aot_gpr[31] = (0x089602B8u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x089602B8u) goto L_089602B8;
    return;
L_089602B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), aot_gpr[2]);
      if (branch_taken) {
          goto L_089602CC;
      }
      goto L_089602C4;
    }
L_089602C4:
    aot_gpr[31] = (0x089602CCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089602CCu) goto L_089602CC;
    return;
L_089602CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089602E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[9] = (0u | 2u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[9];
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08960334;
      }
      goto L_08960324;
    }
L_08960324:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0896037C;
      }
      goto L_08960334;
    }
L_08960334:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896037C;
      }
      goto L_08960340;
    }
L_08960340:
    aot_gpr[31] = (0x08960348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x08960348u) goto L_08960348;
    return;
L_08960348:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960370;
      }
      goto L_08960354;
    }
L_08960354:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08960360u);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x08960360u) goto L_08960360;
    return;
L_08960360:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960370;
      }
      goto L_08960368;
    }
L_08960368:
    aot_gpr[31] = (0x08960370u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 260u, 0x0895FF60u>(ctx, &aot_mem) && ctx.pc == 0x08960370u) goto L_08960370;
    return;
L_08960370:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0896037C;
L_0896037C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960394;
      }
      goto L_0896038C;
    }
L_0896038C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_08960394;
    }
L_08960394:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_0896039C;
    }
L_0896039C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089603C8;
      }
      goto L_089603A4;
    }
L_089603A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089603C0;
      }
      goto L_089603B0;
    }
L_089603B0:
    aot_gpr[31] = (0x089603B8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089603B8u) goto L_089603B8;
    return;
L_089603B8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_089603C0;
    }
L_089603C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_089603C8;
    }
L_089603C8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_089603D0;
    }
L_089603D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089603F8;
      }
      goto L_089603DC;
    }
L_089603DC:
    aot_gpr[31] = (0x089603E4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 160u, 0x08962BBCu>(ctx, &aot_mem) && ctx.pc == 0x089603E4u) goto L_089603E4;
    return;
L_089603E4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089603F0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 160u, 0x08962BBCu>(ctx, &aot_mem) && ctx.pc == 0x089603F0u) goto L_089603F0;
    return;
L_089603F0:
    { const bool branch_taken = aot_gpr[22] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089603FC;
      }
      goto L_089603F8;
    }
L_089603F8:
    aot_gpr[21] = (0u | 1u);
    goto L_089603FC;
L_089603FC:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960460;
      }
      goto L_08960404;
    }
L_08960404:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08960420;
      }
      goto L_0896040C;
    }
L_0896040C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 268u);
    aot_gpr[31] = (0x08960420u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22984));
    goto L_08960228;
L_08960420:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_0896044C;
      }
      goto L_08960430;
    }
L_08960430:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_08960454;
      }
      goto L_0896044C;
    }
L_0896044C:
    aot_gpr[31] = (0x08960454u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 138u, 0x0896299Cu>(ctx, &aot_mem) && ctx.pc == 0x08960454u) goto L_08960454;
    return;
L_08960454:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08960460u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_08960274;
L_08960460:
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
L_08960488:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089604A4u);
    aot_gpr[7] = (0u | 0u);
    goto L_089602E0;
L_089604A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089604B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] << 3u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089604E8;
      }
      goto L_089604DC;
    }
L_089604DC:
    aot_gpr[31] = (0x089604E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x089604E4u) goto L_089604E4;
    return;
L_089604E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), 0u);
    goto L_089604E8;
L_089604E8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960514;
      }
      goto L_089604F0;
    }
L_089604F0:
    aot_gpr[31] = (0x089604F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089604F8u) goto L_089604F8;
    return;
L_089604F8:
    aot_gpr[31] = (0x08960500u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x08960500u) goto L_08960500;
    return;
L_08960500:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08960510u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08960510u) goto L_08960510;
    return;
L_08960510:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    goto L_08960514;
L_08960514:
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
L_0896052C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28296));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08960580;
      }
      goto L_08960574;
    }
L_08960574:
    aot_gpr[31] = (0x0896057Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896057Cu) goto L_0896057C;
    return;
L_0896057C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08960580;
L_08960580:
    aot_gpr[31] = (0x08960588u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08960588u) goto L_08960588;
    return;
L_08960588:
    aot_gpr[31] = (0x08960590u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x08960590u) goto L_08960590;
    return;
L_08960590:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x089605A0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089605A0u) goto L_089605A0;
    return;
L_089605A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089605B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089605D0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x089605D0u) goto L_089605D0;
    return;
L_089605D0:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 8u);
    aot_gpr[31] = (0x089605ECu);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-28688));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x089605ECu) goto L_089605EC;
    return;
L_089605EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089605FCu);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089605FCu) goto L_089605FC;
    return;
L_089605FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0896060Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08960100;
L_0896060C:
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
L_08960624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (0u | 172u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28296));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08960650u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-28656));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x08960650u) goto L_08960650;
    return;
L_08960650:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896065C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08960670u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-31032));
    goto L_089605B4;
L_08960670:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896067Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27608));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896067Cu) goto L_0896067C;
    return;
L_0896067C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[7] = (2214u << 16u);
    aot_gpr[5] = (0u | 172u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28296));
    aot_gpr[31] = (0x08960698u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-28668));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x08960698u) goto L_08960698;
    return;
L_08960698:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089606A4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27596));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089606A4u) goto L_089606A4;
    return;
L_089606A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089606B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089606CCu);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-22508));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x089606CCu) goto L_089606CC;
    return;
L_089606CC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089606E0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089606E0u) goto L_089606E0;
    return;
L_089606E0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896072C;
      }
      goto L_089606E8;
    }
L_089606E8:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-27584));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896072C;
      }
      goto L_089606FC;
    }
L_089606FC:
    aot_gpr[31] = (0x08960704u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08960704u) goto L_08960704;
    return;
L_08960704:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960724;
      }
      goto L_0896070C;
    }
L_0896070C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089606FC;
      }
      goto L_0896071C;
    }
L_0896071C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896072C;
      }
      goto L_08960724;
    }
L_08960724:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08960730;
      }
      goto L_0896072C;
    }
L_0896072C:
    aot_gpr[2] = (0u | 0u);
    goto L_08960730;
L_08960730:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896073C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08960758u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-22912));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08960758u) goto L_08960758;
    return;
L_08960758:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896076Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896076Cu) goto L_0896076C;
    return;
L_0896076C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089607B8;
      }
      goto L_08960774;
    }
L_08960774:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-27552));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089607B8;
      }
      goto L_08960788;
    }
L_08960788:
    aot_gpr[31] = (0x08960790u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08960790u) goto L_08960790;
    return;
L_08960790:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089607B0;
      }
      goto L_08960798;
    }
L_08960798:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960788;
      }
      goto L_089607A8;
    }
L_089607A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089607B8;
      }
      goto L_089607B0;
    }
L_089607B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089607BC;
      }
      goto L_089607B8;
    }
L_089607B8:
    aot_gpr[2] = (0u | 0u);
    goto L_089607BC;
L_089607BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089607C8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089607D0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089607D8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089607E0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089607E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089607F0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089607F8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960800:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08960828u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08960828u) goto L_08960828;
    return;
L_08960828:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4288));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x08960844u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22492));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08960844u) goto L_08960844;
    return;
L_08960844:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08960854u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-22468));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08960854u) goto L_08960854;
    return;
L_08960854:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08960868u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960868u) goto L_08960868;
    return;
L_08960868:
    aot_gpr[31] = (0x08960870u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_089606B0;
L_08960870:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896087Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_0896073C;
L_0896087C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089608B4;
      }
      goto L_08960888;
    }
L_08960888:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089608B4;
      }
      goto L_08960890;
    }
L_08960890:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089608B4;
      }
      goto L_08960898;
    }
L_08960898:
    aot_gpr[31] = (0x089608A0u);
    // nop
    goto L_0896000C;
L_089608A0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089608B4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0896052C;
L_089608B4:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089608D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089608E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x089608E8u) goto L_089608E8;
    return;
L_089608E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089608F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896093C;
      }
      goto L_08960910;
    }
L_08960910:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4288));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08960928u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08960928u) goto L_08960928;
    return;
L_08960928:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896093C;
      }
      goto L_08960934;
    }
L_08960934:
    aot_gpr[31] = (0x0896093Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089608D8;
L_0896093C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960950:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08960960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x08960960u) goto L_08960960;
    return;
L_08960960:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896096C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960974:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896097C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960984:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896098C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960994:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896099C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089609A4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089609AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089609B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089609BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089609C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089609E8u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x089609E8u) goto L_089609E8;
    return;
L_089609E8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4424));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x08960A04u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22456));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08960A04u) goto L_08960A04;
    return;
L_08960A04:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08960A14u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-22436));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08960A14u) goto L_08960A14;
    return;
L_08960A14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08960A24u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960A24u) goto L_08960A24;
    return;
L_08960A24:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960A6C;
      }
      goto L_08960A30;
    }
L_08960A30:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08960A40u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22428));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08960A40u) goto L_08960A40;
    return;
L_08960A40:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960A50;
      }
      goto L_08960A48;
    }
L_08960A48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08960A6C;
      }
      goto L_08960A50;
    }
L_08960A50:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08960A60u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22420));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08960A60u) goto L_08960A60;
    return;
L_08960A60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960A6C;
      }
      goto L_08960A68;
    }
L_08960A68:
    aot_gpr[18] = (0u | 2u);
    goto L_08960A6C;
L_08960A6C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960AD4;
      }
      goto L_08960A74;
    }
L_08960A74:
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08960A90u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22412));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 129u, 0x08A008A4u>(ctx, &aot_mem) && ctx.pc == 0x08960A90u) goto L_08960A90;
    return;
L_08960A90:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08960A9Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-22400));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08960A9Cu) goto L_08960A9C;
    return;
L_08960A9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08960AACu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960AACu) goto L_08960AAC;
    return;
L_08960AAC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960AD4;
      }
      goto L_08960AB8;
    }
L_08960AB8:
    aot_gpr[31] = (0x08960AC0u);
    // nop
    goto L_0896000C;
L_08960AC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08960AD4u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_089604B0;
L_08960AD4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08960AF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08960B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08960B04u) goto L_08960B04;
    return;
L_08960B04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960B10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08960B58;
      }
      goto L_08960B2C;
    }
L_08960B2C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4424));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08960B44u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08960B44u) goto L_08960B44;
    return;
L_08960B44:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960B58;
      }
      goto L_08960B50;
    }
L_08960B50:
    aot_gpr[31] = (0x08960B58u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08960AF4;
L_08960B58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960B6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08960B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x08960B7Cu) goto L_08960B7C;
    return;
L_08960B7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960B88:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960B90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960B98:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960BA0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960BA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960BEC;
      }
      goto L_08960BBC;
    }
L_08960BBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08960BCCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x08960BCCu) goto L_08960BCC;
    return;
L_08960BCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08960BE4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08960BE4u) goto L_08960BE4;
    return;
L_08960BE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08960BEC;
L_08960BEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960C20;
      }
      goto L_08960BF8;
    }
L_08960BF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08960C08u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x08960C08u) goto L_08960C08;
    return;
L_08960C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08960C20u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08960C20u) goto L_08960C20;
    return;
L_08960C20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960C2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960C58;
      }
      goto L_08960C48;
    }
L_08960C48:
    aot_gpr[31] = (0x08960C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08960C50u) goto L_08960C50;
    return;
L_08960C50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_08960C58;
L_08960C58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960C74;
      }
      goto L_08960C64;
    }
L_08960C64:
    aot_gpr[31] = (0x08960C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08960C6Cu) goto L_08960C6C;
    return;
L_08960C6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    goto L_08960C74;
L_08960C74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960C84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960CA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960CC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08960D1C;
      }
      goto L_08960CD0;
    }
L_08960CD0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4560));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_08960D1C;
      }
      goto L_08960CE0;
    }
L_08960CE0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D14;
      }
      goto L_08960CF4;
    }
L_08960CF4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08960D0Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960D0Cu) goto L_08960D0C;
    return;
L_08960D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960D1C;
      }
      goto L_08960D14;
    }
L_08960D14:
    aot_gpr[31] = (0x08960D1Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08960D1Cu) goto L_08960D1C;
    return;
L_08960D1C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960D28:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-27208)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960D34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27208), aot_gpr[4]);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 336u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08960D58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08960D58u) goto L_08960D58;
    return;
L_08960D58:
    aot_gpr[31] = (0x08960D60u);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 48u, 0x089622D4u>(ctx, &aot_mem) && ctx.pc == 0x08960D60u) goto L_08960D60;
    return;
L_08960D60:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960D6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30968));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960DBC;
      }
      goto L_08960DA4;
    }
L_08960DA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08960DB8;
      }
      goto L_08960DB4;
    }
L_08960DB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_08960DB8;
L_08960DB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    goto L_08960DBC;
L_08960DBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960DC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F30;
      }
      goto L_08960DF0;
    }
L_08960DF0:
    aot_gpr[4] = (aot_gpr[18] << 4u);
    goto L_08960DF4;
L_08960DF4:
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F20;
      }
      goto L_08960E18;
    }
L_08960E18:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08960EF8;
      }
      goto L_08960E24;
    }
L_08960E24:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08960EB4;
      }
      goto L_08960E2C;
    }
L_08960E2C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08960E4C;
      }
      goto L_08960E34;
    }
L_08960E34:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08960E88;
      }
      goto L_08960E3C;
    }
L_08960E3C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08960ED0;
      }
      goto L_08960E44;
    }
L_08960E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F20;
      }
      goto L_08960E4C;
    }
L_08960E4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08960E80;
      }
      goto L_08960E5C;
    }
L_08960E5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960E80;
      }
      goto L_08960E78;
    }
L_08960E78:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08960E80;
L_08960E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F20;
      }
      goto L_08960E88;
    }
L_08960E88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960EAC;
      }
      goto L_08960EA4;
    }
L_08960EA4:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08960EAC;
L_08960EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F20;
      }
      goto L_08960EB4;
    }
L_08960EB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08960EC8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08960D6C;
L_08960EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F20;
      }
      goto L_08960ED0;
    }
L_08960ED0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08960EF0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960EF0u) goto L_08960EF0;
    return;
L_08960EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F20;
      }
      goto L_08960EF8;
    }
L_08960EF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08960F18u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08960F18u) goto L_08960F18;
    return;
L_08960F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F20;
      }
      goto L_08960F20;
    }
L_08960F20:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] << 4u);
      if (branch_taken) {
          goto L_08960DF4;
      }
      goto L_08960F30;
    }
L_08960F30:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960F48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-30968));
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08960F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 50u, 0x08962310u>(ctx, &aot_mem) && ctx.pc == 0x08960F74u) goto L_08960F74;
    return;
L_08960F74:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (0u | 2u);
    aot_gpr[18] = (aot_gpr[7] + aot_gpr[18]);
    goto L_08960F88;
L_08960F88:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960FB0;
      }
      goto L_08960F90;
    }
L_08960F90:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08960FB0;
      }
      goto L_08960F98;
    }
L_08960F98:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[31] = (0x08960FA4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08960C2C;
L_08960FA4:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08960FB0;
L_08960FB0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08960F88;
      }
      goto L_08960FC0;
    }
L_08960FC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27208)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08960FD0;
      }
      goto L_08960FCC;
    }
L_08960FCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-27208), 0u);
    goto L_08960FD0;
L_08960FD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08960FE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30968));
    ctx.pc = 0x08961000u; return;
}

void recomp_unit_0348(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0348_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_348(Runtime &runtime) {
    runtime.register_generated_unit(348u, 0x08960000u, 4096u, &recomp_unit_0348, &recomp_unit_0348_entry);
    runtime.register_function(0x08960000u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896000Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960018u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960034u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960038u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960048u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960068u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960074u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960088u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089600A4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089600ACu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089600B4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089600C8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089600E0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089600ECu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089600F0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960100u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960134u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896013Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960148u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960178u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960180u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960184u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960188u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960194u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896019Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089601A0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089601B0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089601C0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089601C8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089601D8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089601E0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089601E4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089601F4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960204u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960228u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960240u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896025Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960264u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960274u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960294u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896029Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089602A0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089602A8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089602B0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089602B8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089602C4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089602CCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089602E0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960324u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960334u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960340u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960348u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960354u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960360u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960368u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960370u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896037Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896038Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960394u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896039Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603A4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603B0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603B8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603C0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603C8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603D0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603DCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603E4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603F0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603F8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089603FCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960404u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896040Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960420u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960430u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896044Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960454u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960460u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960488u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089604A4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089604B0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089604DCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089604E4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089604E8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089604F0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089604F8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960500u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960510u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960514u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896052Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960574u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896057Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960580u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960588u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960590u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089605A0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089605B4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089605D0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089605ECu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089605FCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896060Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960624u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960650u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896065Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960670u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896067Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960698u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089606A4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089606B0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089606CCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089606E0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089606E8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089606FCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960704u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896070Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896071Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960724u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896072Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960730u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896073Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960758u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896076Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960774u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960788u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960790u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960798u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607A8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607B0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607B8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607BCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607C8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607D0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607D8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607E0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607E8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607F0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089607F8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960800u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960828u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960844u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960854u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960868u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960870u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896087Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960888u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960890u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960898u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089608A0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089608B4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089608D8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089608E8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089608F4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960910u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960928u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960934u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896093Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960950u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960960u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896096Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960974u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896097Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960984u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896098Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960994u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x0896099Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089609A4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089609ACu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089609B4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089609BCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089609C4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x089609E8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A04u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A14u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A24u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A30u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A40u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A48u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A50u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A60u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A68u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A6Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A74u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A90u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960A9Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960AACu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960AB8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960AC0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960AD4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960AF4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B04u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B10u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B2Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B44u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B50u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B58u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B6Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B7Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B88u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B90u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960B98u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960BA0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960BA8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960BBCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960BCCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960BE4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960BECu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960BF8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C08u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C20u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C2Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C48u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C50u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C58u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C64u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C6Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C74u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960C84u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960CA8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960CC0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960CD0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960CE0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960CF4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960D0Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960D14u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960D1Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960D28u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960D34u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960D58u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960D60u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960D6Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960DA4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960DB4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960DB8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960DBCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960DC4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960DF0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960DF4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E18u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E24u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E2Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E34u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E3Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E44u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E4Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E5Cu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E78u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E80u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960E88u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960EA4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960EACu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960EB4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960EC8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960ED0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960EF0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960EF8u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960F18u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960F20u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960F30u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960F48u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960F74u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960F88u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960F90u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960F98u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960FA4u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960FB0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960FC0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960FCCu, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960FD0u, &recomp_unit_0348, "recomp_unit_0348");
    runtime.register_function(0x08960FE8u, &recomp_unit_0348, "recomp_unit_0348");
}
} // namespace psprecomp
