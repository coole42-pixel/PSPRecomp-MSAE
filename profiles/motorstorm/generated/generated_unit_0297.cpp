#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0297[1023] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10,
    0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 26, 0, 0, 27, 0, 0,
    28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 38, 0, 39, 40, 0, 0,
    0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 55, 0, 0, 0, 56,
    0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 61, 62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0,
    0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    85, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0,
    0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 111,
    0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 127, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0,
    0, 152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 168, 0, 0, 0, 169, 170, 0,
    0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179,
    0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 189,
    0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 198,
    0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 225, 0,
    0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234,
};
void recomp_unit_0297_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0892D000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0297[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0892D000;
    case 2u: goto L_0892D00C;
    case 3u: goto L_0892D020;
    case 4u: goto L_0892D038;
    case 5u: goto L_0892D044;
    case 6u: goto L_0892D04C;
    case 7u: goto L_0892D064;
    case 8u: goto L_0892D06C;
    case 9u: goto L_0892D074;
    case 10u: goto L_0892D07C;
    case 11u: goto L_0892D084;
    case 12u: goto L_0892D08C;
    case 13u: goto L_0892D094;
    case 14u: goto L_0892D0A0;
    case 15u: goto L_0892D0A8;
    case 16u: goto L_0892D0B0;
    case 17u: goto L_0892D0B8;
    case 18u: goto L_0892D0BC;
    case 19u: goto L_0892D0EC;
    case 20u: goto L_0892D130;
    case 21u: goto L_0892D138;
    case 22u: goto L_0892D144;
    case 23u: goto L_0892D154;
    case 24u: goto L_0892D15C;
    case 25u: goto L_0892D164;
    case 26u: goto L_0892D168;
    case 27u: goto L_0892D174;
    case 28u: goto L_0892D180;
    case 29u: goto L_0892D188;
    case 30u: goto L_0892D190;
    case 31u: goto L_0892D198;
    case 32u: goto L_0892D1A0;
    case 33u: goto L_0892D1AC;
    case 34u: goto L_0892D1B4;
    case 35u: goto L_0892D1C4;
    case 36u: goto L_0892D1DC;
    case 37u: goto L_0892D1E4;
    case 38u: goto L_0892D1E8;
    case 39u: goto L_0892D1F0;
    case 40u: goto L_0892D1F4;
    case 41u: goto L_0892D20C;
    case 42u: goto L_0892D22C;
    case 43u: goto L_0892D234;
    case 44u: goto L_0892D28C;
    case 45u: goto L_0892D2A0;
    case 46u: goto L_0892D2AC;
    case 47u: goto L_0892D2C0;
    case 48u: goto L_0892D2D0;
    case 49u: goto L_0892D2DC;
    case 50u: goto L_0892D2F0;
    case 51u: goto L_0892D32C;
    case 52u: goto L_0892D338;
    case 53u: goto L_0892D358;
    case 54u: goto L_0892D368;
    case 55u: goto L_0892D36C;
    case 56u: goto L_0892D37C;
    case 57u: goto L_0892D388;
    case 58u: goto L_0892D3A0;
    case 59u: goto L_0892D3B0;
    case 60u: goto L_0892D3B8;
    case 61u: goto L_0892D3C0;
    case 62u: goto L_0892D3C4;
    case 63u: goto L_0892D3CC;
    case 64u: goto L_0892D3E8;
    case 65u: goto L_0892D3F4;
    case 66u: goto L_0892D438;
    case 67u: goto L_0892D468;
    case 68u: goto L_0892D484;
    case 69u: goto L_0892D48C;
    case 70u: goto L_0892D494;
    case 71u: goto L_0892D4A0;
    case 72u: goto L_0892D4BC;
    case 73u: goto L_0892D4D4;
    case 74u: goto L_0892D4E4;
    case 75u: goto L_0892D534;
    case 76u: goto L_0892D55C;
    case 77u: goto L_0892D56C;
    case 78u: goto L_0892D574;
    case 79u: goto L_0892D588;
    case 80u: goto L_0892D598;
    case 81u: goto L_0892D5A8;
    case 82u: goto L_0892D5BC;
    case 83u: goto L_0892D5D8;
    case 84u: goto L_0892D5EC;
    case 85u: goto L_0892D600;
    case 86u: goto L_0892D604;
    case 87u: goto L_0892D614;
    case 88u: goto L_0892D620;
    case 89u: goto L_0892D640;
    case 90u: goto L_0892D664;
    case 91u: goto L_0892D66C;
    case 92u: goto L_0892D674;
    case 93u: goto L_0892D67C;
    case 94u: goto L_0892D688;
    case 95u: goto L_0892D6A4;
    case 96u: goto L_0892D6B4;
    case 97u: goto L_0892D6D0;
    case 98u: goto L_0892D6D4;
    case 99u: goto L_0892D6E4;
    case 100u: goto L_0892D6EC;
    case 101u: goto L_0892D6F8;
    case 102u: goto L_0892D70C;
    case 103u: goto L_0892D718;
    case 104u: goto L_0892D724;
    case 105u: goto L_0892D730;
    case 106u: goto L_0892D73C;
    case 107u: goto L_0892D750;
    case 108u: goto L_0892D758;
    case 109u: goto L_0892D760;
    case 110u: goto L_0892D770;
    case 111u: goto L_0892D77C;
    case 112u: goto L_0892D788;
    case 113u: goto L_0892D79C;
    case 114u: goto L_0892D7A8;
    case 115u: goto L_0892D7B0;
    case 116u: goto L_0892D7C0;
    case 117u: goto L_0892D7D4;
    case 118u: goto L_0892D7D8;
    case 119u: goto L_0892D818;
    case 120u: goto L_0892D838;
    case 121u: goto L_0892D840;
    case 122u: goto L_0892D858;
    case 123u: goto L_0892D86C;
    case 124u: goto L_0892D880;
    case 125u: goto L_0892D898;
    case 126u: goto L_0892D8AC;
    case 127u: goto L_0892D8B0;
    case 128u: goto L_0892D8B4;
    case 129u: goto L_0892D8D8;
    case 130u: goto L_0892D8F8;
    case 131u: goto L_0892D900;
    case 132u: goto L_0892D930;
    case 133u: goto L_0892D960;
    case 134u: goto L_0892D97C;
    case 135u: goto L_0892D99C;
    case 136u: goto L_0892D9B4;
    case 137u: goto L_0892D9BC;
    case 138u: goto L_0892D9C4;
    case 139u: goto L_0892D9CC;
    case 140u: goto L_0892D9E0;
    case 141u: goto L_0892D9E8;
    case 142u: goto L_0892D9FC;
    case 143u: goto L_0892DA10;
    case 144u: goto L_0892DA24;
    case 145u: goto L_0892DA30;
    case 146u: goto L_0892DA4C;
    case 147u: goto L_0892DA58;
    case 148u: goto L_0892DA60;
    case 149u: goto L_0892DA68;
    case 150u: goto L_0892DA70;
    case 151u: goto L_0892DA78;
    case 152u: goto L_0892DA84;
    case 153u: goto L_0892DA8C;
    case 154u: goto L_0892DA98;
    case 155u: goto L_0892DAB8;
    case 156u: goto L_0892DACC;
    case 157u: goto L_0892DAD4;
    case 158u: goto L_0892DAE0;
    case 159u: goto L_0892DB00;
    case 160u: goto L_0892DB30;
    case 161u: goto L_0892DC04;
    case 162u: goto L_0892DC0C;
    case 163u: goto L_0892DC14;
    case 164u: goto L_0892DC38;
    case 165u: goto L_0892DC3C;
    case 166u: goto L_0892DC50;
    case 167u: goto L_0892DC60;
    case 168u: goto L_0892DC64;
    case 169u: goto L_0892DC74;
    case 170u: goto L_0892DC78;
    case 171u: goto L_0892DC84;
    case 172u: goto L_0892DC9C;
    case 173u: goto L_0892DCAC;
    case 174u: goto L_0892DCB8;
    case 175u: goto L_0892DCC4;
    case 176u: goto L_0892DCCC;
    case 177u: goto L_0892DCD4;
    case 178u: goto L_0892DCF4;
    case 179u: goto L_0892DCFC;
    case 180u: goto L_0892DD08;
    case 181u: goto L_0892DD18;
    case 182u: goto L_0892DD30;
    case 183u: goto L_0892DD40;
    case 184u: goto L_0892DD48;
    case 185u: goto L_0892DD4C;
    case 186u: goto L_0892DD54;
    case 187u: goto L_0892DD68;
    case 188u: goto L_0892DD78;
    case 189u: goto L_0892DD7C;
    case 190u: goto L_0892DD88;
    case 191u: goto L_0892DD94;
    case 192u: goto L_0892DDA4;
    case 193u: goto L_0892DDB0;
    case 194u: goto L_0892DDC8;
    case 195u: goto L_0892DDD4;
    case 196u: goto L_0892DDDC;
    case 197u: goto L_0892DDE8;
    case 198u: goto L_0892DDFC;
    case 199u: goto L_0892DE08;
    case 200u: goto L_0892DE10;
    case 201u: goto L_0892DE2C;
    case 202u: goto L_0892DE38;
    case 203u: goto L_0892DE44;
    case 204u: goto L_0892DE54;
    case 205u: goto L_0892DE5C;
    case 206u: goto L_0892DE68;
    case 207u: goto L_0892DE80;
    case 208u: goto L_0892DE90;
    case 209u: goto L_0892DE98;
    case 210u: goto L_0892DEA0;
    case 211u: goto L_0892DEB4;
    case 212u: goto L_0892DEC4;
    case 213u: goto L_0892DEC8;
    case 214u: goto L_0892DED4;
    case 215u: goto L_0892DEE8;
    case 216u: goto L_0892DEF0;
    case 217u: goto L_0892DEFC;
    case 218u: goto L_0892DF14;
    case 219u: goto L_0892DF24;
    case 220u: goto L_0892DF2C;
    case 221u: goto L_0892DF34;
    case 222u: goto L_0892DF48;
    case 223u: goto L_0892DF60;
    case 224u: goto L_0892DF74;
    case 225u: goto L_0892DF78;
    case 226u: goto L_0892DF84;
    case 227u: goto L_0892DF98;
    case 228u: goto L_0892DFA0;
    case 229u: goto L_0892DFAC;
    case 230u: goto L_0892DFC4;
    case 231u: goto L_0892DFD4;
    case 232u: goto L_0892DFDC;
    case 233u: goto L_0892DFE4;
    case 234u: goto L_0892DFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0892D000:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0892D00Cu);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B0ACu;
    return;
L_0892D00C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (2219u << 16u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16152)));
      if (branch_taken) {
          goto L_0892D04C;
      }
      goto L_0892D020;
    }
L_0892D020:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[4] = (0u | 9216u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892D038u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0295_entry, 295u, 19u, 0x0892B158u>(ctx, &aot_mem) && ctx.pc == 0x0892D038u) goto L_0892D038;
    return;
L_0892D038:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892D044u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0295_entry, 295u, 41u, 0x0892B364u>(ctx, &aot_mem) && ctx.pc == 0x0892D044u) goto L_0892D044;
    return;
L_0892D044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D064;
      }
      goto L_0892D04C;
    }
L_0892D04C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[4] = (0u | 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892D064u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0295_entry, 295u, 47u, 0x0892B408u>(ctx, &aot_mem) && ctx.pc == 0x0892D064u) goto L_0892D064;
    return;
L_0892D064:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D0A0;
      }
      goto L_0892D06C;
    }
L_0892D06C:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[17] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892D084;
      }
      goto L_0892D074;
    }
L_0892D074:
    aot_gpr[31] = (0x0892D07Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 198u, 0x0892AEF4u>(ctx, &aot_mem) && ctx.pc == 0x0892D07Cu) goto L_0892D07C;
    return;
L_0892D07C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-10804)));
      if (branch_taken) {
          goto L_0892D094;
      }
      goto L_0892D084;
    }
L_0892D084:
    aot_gpr[31] = (0x0892D08Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 209u, 0x0892AF90u>(ctx, &aot_mem) && ctx.pc == 0x0892D08Cu) goto L_0892D08C;
    return;
L_0892D08C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-10804)));
    goto L_0892D094;
L_0892D094:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_0892D0A0;
L_0892D0A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_0892D0BC;
      }
      goto L_0892D0A8;
    }
L_0892D0A8:
    { const bool branch_taken = aot_gpr[21] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0892D0B8;
      }
      goto L_0892D0B0;
    }
L_0892D0B0:
    aot_gpr[31] = (0x0892D0B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x0892D0B8u) goto L_0892D0B8;
    return;
L_0892D0B8:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_0892D0BC;
L_0892D0BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(644)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(648)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(652)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(664)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(680)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D0EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5568)));
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0892D138;
      }
      goto L_0892D130;
    }
L_0892D130:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892D1F4;
      }
      goto L_0892D138;
    }
L_0892D138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x0892D144u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 9u, 0x089342F0u>(ctx, &aot_mem) && ctx.pc == 0x0892D144u) goto L_0892D144;
    return;
L_0892D144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0892D168;
      }
      goto L_0892D154;
    }
L_0892D154:
    aot_gpr[31] = (0x0892D15Cu);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B0BCu;
    return;
L_0892D15C:
    aot_gpr[31] = (0x0892D164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 153u, 0x08943ACCu>(ctx, &aot_mem) && ctx.pc == 0x0892D164u) goto L_0892D164;
    return;
L_0892D164:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    goto L_0892D168;
L_0892D168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0892D1A0;
      }
      goto L_0892D174;
    }
L_0892D174:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D198;
      }
      goto L_0892D180;
    }
L_0892D180:
    aot_gpr[31] = (0x0892D188u);
    // nop
    ctx.pc = 0x08A5AA54u;
    return;
L_0892D188:
    aot_gpr[31] = (0x0892D190u);
    // nop
    ctx.pc = 0x08A5AA14u;
    return;
L_0892D190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D1A0;
      }
      goto L_0892D198;
    }
L_0892D198:
    aot_gpr[31] = (0x0892D1A0u);
    // nop
    ctx.pc = 0x08A5AA64u;
    return;
L_0892D1A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D1B4;
      }
      goto L_0892D1AC;
    }
L_0892D1AC:
    aot_gpr[31] = (0x0892D1B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x0892D1B4u) goto L_0892D1B4;
    return;
L_0892D1B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5412)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D1E4;
      }
      goto L_0892D1C4;
    }
L_0892D1C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(5412), aot_gpr[4]);
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(16145)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D1E8;
      }
      goto L_0892D1DC;
    }
L_0892D1DC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(16145), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0892D1E8;
      }
      goto L_0892D1E4;
    }
L_0892D1E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_0892D1E8;
L_0892D1E8:
    aot_gpr[31] = (0x0892D1F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.pc = 0x08A5AFF4u;
    return;
L_0892D1F0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0892D1F4;
L_0892D1F4:
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
L_0892D20C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[9] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0892D22Cu);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 183u, 0x0892AE28u>(ctx, &aot_mem) && ctx.pc == 0x0892D22Cu) goto L_0892D22C;
    return;
L_0892D22C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0892D32C;
      }
      goto L_0892D234;
    }
L_0892D234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[6] = (aot_gpr[2] << 6u);
    aot_gpr[7] = (17792u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[7] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(5376)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[6] = (aot_gpr[8] << 2u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (20224u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    if (aot_gpr[9] != 0u) {
    aot_gpr[8] = (0u | 2u);
        goto L_0892D28C;
    }
    goto L_0892D28C;
L_0892D28C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
      if (branch_taken) {
          goto L_0892D2AC;
      }
      goto L_0892D2A0;
    }
L_0892D2A0:
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0892D2C0;
      }
      goto L_0892D2AC;
    }
L_0892D2AC:
    aot_fpr[14] = aot_fpr[14] - aot_fpr[12];
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_0892D2C0;
L_0892D2C0:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[5]);
      if (branch_taken) {
          goto L_0892D2DC;
      }
      goto L_0892D2D0;
    }
L_0892D2D0:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0892D2F0;
      }
      goto L_0892D2DC;
    }
L_0892D2DC:
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_0892D2F0;
L_0892D2F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[5] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_0892D32C;
L_0892D32C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D338:
    aot_gpr[7] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(5392));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-8468)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
      if (branch_taken) {
          goto L_0892D368;
      }
      goto L_0892D358;
    }
L_0892D358:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0892D36C;
      }
      goto L_0892D368;
    }
L_0892D368:
    aot_gpr[6] = (0u | 0u);
    goto L_0892D36C;
L_0892D36C:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D3C0;
      }
      goto L_0892D37C;
    }
L_0892D37C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5392)));
    aot_gpr[6] = (aot_gpr[6] << 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    goto L_0892D388;
L_0892D388:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < 0 ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] ^ 1u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D3B8;
      }
      goto L_0892D3A0;
    }
L_0892D3A0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0892D388;
      }
      goto L_0892D3B0;
    }
L_0892D3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D3C0;
      }
      goto L_0892D3B8;
    }
L_0892D3B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D3C4;
      }
      goto L_0892D3C0;
    }
L_0892D3C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0892D3C4;
L_0892D3C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D3CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0892D3E8u);
    aot_gpr[3] = (aot_gpr[7] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 183u, 0x0892AE28u>(ctx, &aot_mem) && ctx.pc == 0x0892D3E8u) goto L_0892D3E8;
    return;
L_0892D3E8:
    aot_gpr[10] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[10]) < 0;
    aot_gpr[4] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0892D4D4;
      }
      goto L_0892D3F4;
    }
L_0892D3F4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7472)));
    aot_gpr[5] = (aot_gpr[10] << 6u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5376)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (aot_gpr[3] != 0u) {
    aot_gpr[4] = (0u | 2u);
        goto L_0892D438;
    }
    goto L_0892D438;
L_0892D438:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(44), 0u);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[11]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_0892D48C;
      }
      goto L_0892D468;
    }
L_0892D468:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[11] << 7u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x0892D484u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 174u, 0x0892ADACu>(ctx, &aot_mem) && ctx.pc == 0x0892D484u) goto L_0892D484;
    return;
L_0892D484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D4BC;
      }
      goto L_0892D48C;
    }
L_0892D48C:
    aot_gpr[31] = (0x0892D494u);
    aot_gpr[4] = (0u | 0u);
    goto L_0892D338;
L_0892D494:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(24), aot_gpr[2]);
      if (branch_taken) {
          goto L_0892D4BC;
      }
      goto L_0892D4A0;
    }
L_0892D4A0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5392)));
    aot_gpr[4] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x0892D4BCu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0294_entry, 294u, 172u, 0x0892AD88u>(ctx, &aot_mem) && ctx.pc == 0x0892D4BCu) goto L_0892D4BC;
    return;
L_0892D4BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3072));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_0892D4D4;
L_0892D4D4:
    aot_gpr[2] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892D4E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1456));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1416), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1436), aot_gpr[22]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[22] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1024u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1412), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1420), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1424), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1428), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1432), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1440), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1444), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1448), aot_gpr[31]);
    aot_gpr[31] = (0x0892D534u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0892D534u) goto L_0892D534;
    return;
L_0892D534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[4] << 8u);
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16160));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D574;
      }
      goto L_0892D55C;
    }
L_0892D55C:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0892D56Cu);
    aot_gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D56Cu) goto L_0892D56C;
    return;
L_0892D56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DB00;
      }
      goto L_0892D574;
    }
L_0892D574:
    aot_gpr[16] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0892D588u);
    aot_gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0892D588u) goto L_0892D588;
    return;
L_0892D588:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 73u);
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_0892D7D8;
    }
    goto L_0892D598;
L_0892D598:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr[5] = (0u | 68u);
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_0892D7D8;
    }
    goto L_0892D5A8;
L_0892D5A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1408), aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_gpr[5] = (0u | 51u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1404), aot_gpr[17]);
      if (branch_taken) {
          goto L_0892D7D4;
      }
      goto L_0892D5BC;
    }
L_0892D5BC:
    aot_gpr[8] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(6)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(7)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (0u | 10u);
    aot_gpr[31] = (0x0892D5D8u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(9)));
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 9u, 0x08929088u>(ctx, &aot_mem) && ctx.pc == 0x0892D5D8u) goto L_0892D5D8;
    return;
L_0892D5D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(5)));
    aot_gpr[19] = (aot_gpr[2] + static_cast<std::uint32_t>(10));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_0892D604;
      }
      goto L_0892D5EC;
    }
L_0892D5EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(10)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(11)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0892D600u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(13)));
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 10u, 0x089290B4u>(ctx, &aot_mem) && ctx.pc == 0x0892D600u) goto L_0892D600;
    return;
L_0892D600:
    aot_gpr[17] = (aot_gpr[2] + static_cast<std::uint32_t>(10));
    goto L_0892D604;
L_0892D604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x0892D614u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 180u, 0x0891CD38u>(ctx, &aot_mem) && ctx.pc == 0x0892D614u) goto L_0892D614;
    return;
L_0892D614:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1072), aot_gpr[2]);
      if (branch_taken) {
          goto L_0892D674;
      }
      goto L_0892D620;
    }
L_0892D620:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1404)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0892D640u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0892D640u) goto L_0892D640;
    return;
L_0892D640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1408)));
    aot_gpr[6] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
      if (branch_taken) {
          goto L_0892D67C;
      }
      goto L_0892D664;
    }
L_0892D664:
    aot_gpr[31] = (0x0892D66Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0892D66Cu) goto L_0892D66C;
    return;
L_0892D66C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D55C;
      }
      goto L_0892D674;
    }
L_0892D674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DB00;
      }
      goto L_0892D67C;
    }
L_0892D67C:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1400), aot_gpr[22]);
      if (branch_taken) {
          goto L_0892D7B0;
      }
      goto L_0892D688;
    }
L_0892D688:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1400)));
    aot_gpr[18] = (0u | 84u);
    aot_gpr[30] = (0u | 80u);
    aot_gpr[23] = (0u | 69u);
    aot_gpr[22] = (0u | 49u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(64));
    aot_gpr[20] = (0u | 50u);
    goto L_0892D6A4;
L_0892D6A4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1072)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[17]);
    aot_gpr[5] = (0u | 0u);
    goto L_0892D6B4;
L_0892D6B4:
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[29] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(1076), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D6D4;
      }
      goto L_0892D6D0;
    }
L_0892D6D0:
    aot_gpr[4] = (0u | 0u);
    goto L_0892D6D4;
L_0892D6D4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D6B4;
      }
      goto L_0892D6E4;
    }
L_0892D6E4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D6F8;
      }
      goto L_0892D6EC;
    }
L_0892D6EC:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[17] < aot_gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_0892D7A8;
      }
      goto L_0892D6F8;
    }
L_0892D6F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(5)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(6)));
    aot_gpr[31] = (0x0892D70Cu);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(7)));
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 10u, 0x089290B4u>(ctx, &aot_mem) && ctx.pc == 0x0892D70Cu) goto L_0892D70C;
    return;
L_0892D70C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1076))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0892D758;
      }
      goto L_0892D718;
    }
L_0892D718:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1077))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_0892D758;
      }
      goto L_0892D724;
    }
L_0892D724:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1078))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_0892D758;
      }
      goto L_0892D730;
    }
L_0892D730:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1079))))));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0892D758;
      }
      goto L_0892D73C;
    }
L_0892D73C:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0892D750u);
    aot_gpr[7] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 11u, 0x089290E0u>(ctx, &aot_mem) && ctx.pc == 0x0892D750u) goto L_0892D750;
    return;
L_0892D750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D79C;
      }
      goto L_0892D758;
    }
L_0892D758:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892D79C;
      }
      goto L_0892D760;
    }
L_0892D760:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1077))))));
    aot_gpr[5] = (0u | 73u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892D79C;
      }
      goto L_0892D770;
    }
L_0892D770:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1078))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0892D79C;
      }
      goto L_0892D77C;
    }
L_0892D77C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1079))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0892D79C;
      }
      goto L_0892D788;
    }
L_0892D788:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1400)));
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892D79Cu);
    aot_gpr[7] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 11u, 0x089290E0u>(ctx, &aot_mem) && ctx.pc == 0x0892D79Cu) goto L_0892D79C;
    return;
L_0892D79C:
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
    aot_gpr[16] = (aot_gpr[17] < aot_gpr[19] ? 1u : 0u);
    goto L_0892D7A8;
L_0892D7A8:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892D6A4;
      }
      goto L_0892D7B0;
    }
L_0892D7B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0892D7C0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(1072));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0892D7C0u) goto L_0892D7C0;
    return;
L_0892D7C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1404)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1400)));
      if (branch_taken) {
          goto L_0892D8B4;
      }
      goto L_0892D7D4;
    }
L_0892D7D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_0892D7D8;
L_0892D7D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25412)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-25416)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[5] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[10] - aot_gpr[9]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[6] = (0u | 128u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0892D818u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0892D818u) goto L_0892D818;
    return;
L_0892D818:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[19] << 8u);
    aot_gpr[5] = (aot_gpr[19] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D840;
      }
      goto L_0892D838;
    }
L_0892D838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D55C;
      }
      goto L_0892D840;
    }
L_0892D840:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1408), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1404), aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 84u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892D8B0;
      }
      goto L_0892D858;
    }
L_0892D858:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1408), aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(1))))));
    aot_gpr[5] = (0u | 65u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1404), aot_gpr[17]);
      if (branch_taken) {
          goto L_0892D8B0;
      }
      goto L_0892D86C;
    }
L_0892D86C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1408), aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_gpr[5] = (0u | 71u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1404), aot_gpr[17]);
      if (branch_taken) {
          goto L_0892D8B0;
      }
      goto L_0892D880;
    }
L_0892D880:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1408), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1404), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0892D898u);
    aot_gpr[6] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0892D898u) goto L_0892D898;
    return;
L_0892D898:
    aot_gpr[5] = (0u | 33u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[31] = (0x0892D8ACu);
    aot_gpr[6] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0892D8ACu) goto L_0892D8AC;
    return;
L_0892D8AC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_0892D8B0;
L_0892D8B0:
    aot_gpr[4] = (0u | 0u);
    goto L_0892D8B4;
L_0892D8B4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1408)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1404)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 1024u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0892D8D8u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 189u, 0x08932EF0u>(ctx, &aot_mem) && ctx.pc == 0x0892D8D8u) goto L_0892D8D8;
    return;
L_0892D8D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[4] << 8u);
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D900;
      }
      goto L_0892D8F8;
    }
L_0892D8F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D55C;
      }
      goto L_0892D900;
    }
L_0892D900:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(132), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(128), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u | 88u);
    aot_gpr[20] = (0u | 2u);
    aot_gpr[10] = (65504u << 16u);
    aot_gpr[16] = (24u << 16u);
    aot_gpr[17] = (6u << 16u);
    goto L_0892D930;
L_0892D930:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] << 8u);
    aot_gpr[11] = (aot_gpr[11] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[5] << 24u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[11] | aot_gpr[2]);
    aot_gpr[11] = (aot_gpr[3] << 16u);
    aot_gpr[19] = (aot_gpr[19] | aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[19] & aot_gpr[10]);
    { const bool branch_taken = aot_gpr[11] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_0892D97C;
      }
      goto L_0892D960;
    }
L_0892D960:
    aot_gpr[16] = (aot_gpr[19] & aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[19] & aot_gpr[17]);
    aot_gpr[21] = (aot_gpr[19] & 3072u);
    aot_gpr[16] = (aot_gpr[16] >> 19u);
    aot_gpr[17] = (aot_gpr[17] >> 17u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] >> 10u);
      if (branch_taken) {
          goto L_0892D9B4;
      }
      goto L_0892D97C;
    }
L_0892D97C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[11] = (aot_gpr[4] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0892D930;
      }
      goto L_0892D99C;
    }
L_0892D99C:
    aot_gpr[16] = (aot_gpr[19] & aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[19] & aot_gpr[17]);
    aot_gpr[21] = (aot_gpr[19] & 3072u);
    aot_gpr[16] = (aot_gpr[16] >> 19u);
    aot_gpr[17] = (aot_gpr[17] >> 17u);
    aot_gpr[21] = (aot_gpr[21] >> 10u);
    goto L_0892D9B4;
L_0892D9B4:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_0892D9BC;
L_0892D9BC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[8] = (aot_gpr[7] < static_cast<std::uint32_t>(37) ? 1u : 0u);
      if (branch_taken) {
          goto L_0892D9E0;
      }
      goto L_0892D9C4;
    }
L_0892D9C4:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892D9E0;
      }
      goto L_0892D9CC;
    }
L_0892D9CC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0892D9BC;
      }
      goto L_0892D9E0;
    }
L_0892D9E0:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892DA30;
      }
      goto L_0892D9E8;
    }
L_0892D9E8:
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 105u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0892DA30;
      }
      goto L_0892D9FC;
    }
L_0892D9FC:
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 110u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0892DA30;
      }
      goto L_0892DA10;
    }
L_0892DA10:
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 103u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892DA30;
      }
      goto L_0892DA24;
    }
L_0892DA24:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(132), aot_gpr[4]);
      if (branch_taken) {
          goto L_0892DAB8;
      }
      goto L_0892DA30;
    }
L_0892DA30:
    aot_gpr[19] = (aot_gpr[19] & 61440u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[19] >> 12u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1080));
    aot_gpr[6] = (0u | 320u);
    aot_gpr[31] = (0x0892DA4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25796));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0892DA4Cu) goto L_0892DA4C;
    return;
L_0892DA4C:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892DA8C;
      }
      goto L_0892DA58;
    }
L_0892DA58:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892DA68;
      }
      goto L_0892DA60;
    }
L_0892DA60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0892DA98;
      }
      goto L_0892DA68;
    }
L_0892DA68:
    { const bool branch_taken = aot_gpr[17] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0892DA78;
      }
      goto L_0892DA70;
    }
L_0892DA70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0892DA98;
      }
      goto L_0892DA78;
    }
L_0892DA78:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892DA98;
      }
      goto L_0892DA84;
    }
L_0892DA84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0892DA98;
      }
      goto L_0892DA8C;
    }
L_0892DA8C:
    aot_gpr[18] = (0u | 4u);
    if (aot_gpr[17] == aot_gpr[4]) {
    aot_gpr[18] = (0u | 3u);
        goto L_0892DA98;
    }
    goto L_0892DA98;
L_0892DA98:
    aot_gpr[4] = (aot_gpr[19] << 4u);
    aot_gpr[5] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1080)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    goto L_0892DAB8;
L_0892DAB8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(1024));
    aot_gpr[6] = (0u | 48u);
    aot_gpr[31] = (0x0892DACCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25476));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0892DACCu) goto L_0892DACC;
    return;
L_0892DACC:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[20];
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0892DAE0;
      }
      goto L_0892DAD4;
    }
L_0892DAD4:
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (0u | 2u);
        goto L_0892DAE0;
    }
    goto L_0892DAE0;
L_0892DAE0:
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[21]);
    aot_gpr[5] = (aot_gpr[21] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1024)));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    goto L_0892DB00;
L_0892DB00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1412)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1416)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1420)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1424)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1428)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1432)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1436)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1440)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1444)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1448)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1456));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892DB30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-784));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(756), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(5568)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(3)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(740), aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(736), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(744), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(748), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(752), aot_gpr[20]);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-8448));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(760), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(764), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(768), aot_gpr[31]);
    goto L_0892DC04;
L_0892DC04:
    aot_gpr[31] = (0x0892DC0Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 148u, 0x08943A70u>(ctx, &aot_mem) && ctx.pc == 0x0892DC0Cu) goto L_0892DC0C;
    return;
L_0892DC0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC3C;
      }
      goto L_0892DC14;
    }
L_0892DC14:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16156)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0892DC38u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B054u;
    return;
L_0892DC38:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    goto L_0892DC3C;
L_0892DC3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u | 10u);
    aot_gpr[31] = (0x0892DC50u);
    aot_gpr[6] = (0u | 33u);
    ctx.pc = 0x08A5B024u;
    return;
L_0892DC50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC64;
      }
      goto L_0892DC60;
    }
L_0892DC60:
    aot_gpr[18] = (0u | 1u);
    goto L_0892DC64;
L_0892DC64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DC78;
      }
      goto L_0892DC74;
    }
L_0892DC74:
    aot_gpr[19] = (0u | 1u);
    goto L_0892DC78;
L_0892DC78:
    aot_gpr[4] = (aot_gpr[18] | aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DD54;
      }
      goto L_0892DC84;
    }
L_0892DC84:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21280)));
    aot_gpr[22] = (aot_gpr[4] ^ 1u);
    aot_gpr[22] = (aot_gpr[22] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DCD4;
      }
      goto L_0892DC9C;
    }
L_0892DC9C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-29208)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DCCC;
      }
      goto L_0892DCAC;
    }
L_0892DCAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0892DCB8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x0892DCB8u) goto L_0892DCB8;
    return;
L_0892DCB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[31] = (0x0892DCC4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(392));
    ctx.pc = 0x08A5B27Cu;
    return;
L_0892DCC4:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29208), static_cast<std::uint8_t>(0u));
    goto L_0892DCCC;
L_0892DCCC:
    aot_gpr[31] = (0x0892DCD4u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x0892DCD4u) goto L_0892DCD4;
    return;
L_0892DCD4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u | 21u);
    aot_gpr[6] = (0u | 33u);
    aot_gpr[31] = (0x0892DCF4u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B054u;
    return;
L_0892DCF4:
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0892DD08;
      }
      goto L_0892DCFC;
    }
L_0892DCFC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0892DD08u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 170u, 0x08932DDCu>(ctx, &aot_mem) && ctx.pc == 0x0892DD08u) goto L_0892DD08;
    return;
L_0892DD08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DD30;
      }
      goto L_0892DD18;
    }
L_0892DD18:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16140), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0892DD4C;
      }
      goto L_0892DD30;
    }
L_0892DD30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] & 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DD48;
      }
      goto L_0892DD40;
    }
L_0892DD40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0892DD4C;
      }
      goto L_0892DD48;
    }
L_0892DD48:
    aot_gpr[18] = (0u | 0u);
    goto L_0892DD4C;
L_0892DD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 10u, 0x0892E078u>(ctx, &aot_mem); return;
      }
      goto L_0892DD54;
    }
L_0892DD54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0892DD68u);
    aot_gpr[6] = (0u | 32u);
    ctx.pc = 0x08A5B024u;
    return;
L_0892DD68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DD7C;
      }
      goto L_0892DD78;
    }
L_0892DD78:
    aot_gpr[20] = (0u | 1u);
    goto L_0892DD7C;
L_0892DD7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DDB0;
      }
      goto L_0892DD88;
    }
L_0892DD88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0892DD94u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    ctx.pc = 0x08A5AA44u;
    return;
L_0892DD94:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DDD4;
      }
      goto L_0892DDA4;
    }
L_0892DDA4:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0892DDD4;
      }
      goto L_0892DDB0;
    }
L_0892DDB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(60));
    aot_gpr[31] = (0x0892DDC8u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AA6Cu;
    return;
L_0892DDC8:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[22] = (aot_gpr[22] << 2u);
    goto L_0892DDD4;
L_0892DDD4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0892DE10;
      }
      goto L_0892DDDC;
    }
L_0892DDDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DDFC;
      }
      goto L_0892DDE8;
    }
L_0892DDE8:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 14u, 0x0892E0BCu>(ctx, &aot_mem); return;
      }
      goto L_0892DDFC;
    }
L_0892DDFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0892DE08u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(404));
    ctx.pc = 0x08A5AA8Cu;
    return;
L_0892DE08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 14u, 0x0892E0BCu>(ctx, &aot_mem); return;
      }
      goto L_0892DE10;
    }
L_0892DE10:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(24577) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892DF74;
      }
      goto L_0892DE2C;
    }
L_0892DE2C:
    aot_gpr[23] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-24576));
    aot_gpr[4] = (2219u << 16u);
    goto L_0892DE38;
L_0892DE38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16144)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[22] - aot_gpr[23]);
      if (branch_taken) {
          goto L_0892DEB4;
      }
      goto L_0892DE44;
    }
L_0892DE44:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0892DE54u);
    aot_gpr[7] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 41u, 0x08929330u>(ctx, &aot_mem) && ctx.pc == 0x0892DE54u) goto L_0892DE54;
    return;
L_0892DE54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DEB4;
      }
      goto L_0892DE5C;
    }
L_0892DE5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x0892DE68u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.pc = 0x08A5B0ACu;
    return;
L_0892DE68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u | 96u);
    aot_gpr[6] = (0u | 33u);
    aot_gpr[31] = (0x0892DE80u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B054u;
    return;
L_0892DE80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DE98;
      }
      goto L_0892DE90;
    }
L_0892DE90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 4u, 0x0892E028u>(ctx, &aot_mem); return;
      }
      goto L_0892DE98;
    }
L_0892DE98:
    aot_gpr[31] = (0x0892DEA0u);
    aot_gpr[4] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x0892DEA0u) goto L_0892DEA0;
    return;
L_0892DEA0:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892DE38;
      }
      goto L_0892DEB4;
    }
L_0892DEB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[31] = (0x0892DEC4u);
    aot_gpr[6] = (aot_gpr[22] - aot_gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 154u, 0x08928E64u>(ctx, &aot_mem) && ctx.pc == 0x0892DEC4u) goto L_0892DEC4;
    return;
L_0892DEC4:
    aot_gpr[4] = (2219u << 16u);
    goto L_0892DEC8;
L_0892DEC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16144)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DF48;
      }
      goto L_0892DED4;
    }
L_0892DED4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0892DEE8u);
    aot_gpr[7] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 41u, 0x08929330u>(ctx, &aot_mem) && ctx.pc == 0x0892DEE8u) goto L_0892DEE8;
    return;
L_0892DEE8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DF48;
      }
      goto L_0892DEF0;
    }
L_0892DEF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x0892DEFCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.pc = 0x08A5B0ACu;
    return;
L_0892DEFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u | 96u);
    aot_gpr[6] = (0u | 33u);
    aot_gpr[31] = (0x0892DF14u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B054u;
    return;
L_0892DF14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DF2C;
      }
      goto L_0892DF24;
    }
L_0892DF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 4u, 0x0892E028u>(ctx, &aot_mem); return;
      }
      goto L_0892DF2C;
    }
L_0892DF2C:
    aot_gpr[31] = (0x0892DF34u);
    aot_gpr[4] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x0892DF34u) goto L_0892DF34;
    return;
L_0892DF34:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892DEC8;
      }
      goto L_0892DF48;
    }
L_0892DF48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[22] - aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0892DF60u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 154u, 0x08928E64u>(ctx, &aot_mem) && ctx.pc == 0x0892DF60u) goto L_0892DF60;
    return;
L_0892DF60:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(16144), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 4u, 0x0892E028u>(ctx, &aot_mem); return;
      }
      goto L_0892DF74;
    }
L_0892DF74:
    aot_gpr[4] = (2219u << 16u);
    goto L_0892DF78;
L_0892DF78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(16144)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DFF8;
      }
      goto L_0892DF84;
    }
L_0892DF84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0892DF98u);
    aot_gpr[7] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 41u, 0x08929330u>(ctx, &aot_mem) && ctx.pc == 0x0892DF98u) goto L_0892DF98;
    return;
L_0892DF98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DFF8;
      }
      goto L_0892DFA0;
    }
L_0892DFA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x0892DFACu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.pc = 0x08A5B0ACu;
    return;
L_0892DFAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (0u | 96u);
    aot_gpr[6] = (0u | 33u);
    aot_gpr[31] = (0x0892DFC4u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B054u;
    return;
L_0892DFC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892DFDC;
      }
      goto L_0892DFD4;
    }
L_0892DFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 4u, 0x0892E028u>(ctx, &aot_mem); return;
      }
      goto L_0892DFDC;
    }
L_0892DFDC:
    aot_gpr[31] = (0x0892DFE4u);
    aot_gpr[4] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x0892DFE4u) goto L_0892DFE4;
    return;
L_0892DFE4:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0892DF78;
      }
      goto L_0892DFF8;
    }
L_0892DFF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[16]);
    ctx.pc = 0x0892E000u; return;
}

void recomp_unit_0297(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0297_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_297(Runtime &runtime) {
    runtime.register_generated_unit(297u, 0x0892D000u, 4096u, &recomp_unit_0297, &recomp_unit_0297_entry);
    runtime.register_function(0x0892D000u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D00Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D020u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D038u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D044u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D04Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D064u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D06Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D074u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D07Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D084u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D08Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D094u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D0A0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D0A8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D0B0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D0B8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D0BCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D0ECu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D130u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D138u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D144u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D154u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D15Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D164u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D168u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D174u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D180u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D188u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D190u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D198u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1A0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1ACu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1B4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1C4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1DCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1E4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1E8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1F0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D1F4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D20Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D22Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D234u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D28Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D2A0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D2ACu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D2C0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D2D0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D2DCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D2F0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D32Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D338u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D358u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D368u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D36Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D37Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D388u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D3A0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D3B0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D3B8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D3C0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D3C4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D3CCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D3E8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D3F4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D438u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D468u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D484u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D48Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D494u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D4A0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D4BCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D4D4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D4E4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D534u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D55Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D56Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D574u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D588u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D598u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D5A8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D5BCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D5D8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D5ECu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D600u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D604u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D614u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D620u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D640u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D664u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D66Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D674u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D67Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D688u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D6A4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D6B4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D6D0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D6D4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D6E4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D6ECu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D6F8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D70Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D718u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D724u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D730u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D73Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D750u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D758u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D760u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D770u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D77Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D788u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D79Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D7A8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D7B0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D7C0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D7D4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D7D8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D818u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D838u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D840u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D858u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D86Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D880u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D898u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D8ACu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D8B0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D8B4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D8D8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D8F8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D900u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D930u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D960u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D97Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D99Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D9B4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D9BCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D9C4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D9CCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D9E0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D9E8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892D9FCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA10u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA24u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA30u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA4Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA58u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA60u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA68u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA70u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA78u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA84u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA8Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DA98u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DAB8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DACCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DAD4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DAE0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DB00u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DB30u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC04u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC0Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC14u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC38u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC3Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC50u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC60u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC64u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC74u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC78u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC84u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DC9Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DCACu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DCB8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DCC4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DCCCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DCD4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DCF4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DCFCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD08u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD18u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD30u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD40u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD48u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD4Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD54u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD68u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD78u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD7Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD88u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DD94u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DDA4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DDB0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DDC8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DDD4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DDDCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DDE8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DDFCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE08u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE10u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE2Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE38u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE44u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE54u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE5Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE68u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE80u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE90u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DE98u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DEA0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DEB4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DEC4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DEC8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DED4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DEE8u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DEF0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DEFCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF14u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF24u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF2Cu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF34u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF48u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF60u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF74u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF78u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF84u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DF98u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DFA0u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DFACu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DFC4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DFD4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DFDCu, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DFE4u, &recomp_unit_0297, "recomp_unit_0297");
    runtime.register_function(0x0892DFF8u, &recomp_unit_0297, "recomp_unit_0297");
}
} // namespace psprecomp
