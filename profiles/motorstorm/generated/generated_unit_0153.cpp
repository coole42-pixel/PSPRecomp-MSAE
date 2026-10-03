#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0153[1023] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 6, 0, 0, 7, 0, 0, 0, 0,
    0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 17, 0,
    0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28,
    0, 29, 0, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 46, 0, 0, 47, 0, 48, 49, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 55,
    0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79,
    0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94,
    0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108,
    0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0,
    0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 0,
    131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137,
    0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 145, 0,
    146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152,
    0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191,
    0, 192, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 200, 201, 202, 0, 0, 0, 0, 203, 0,
    0, 0, 204, 0, 205, 0, 206, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0,
    0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    236, 0, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 243, 0,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250,
    0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264,
    0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274,
};
void recomp_unit_0153_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0889D000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0153[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889D000;
    case 2u: goto L_0889D01C;
    case 3u: goto L_0889D034;
    case 4u: goto L_0889D040;
    case 5u: goto L_0889D05C;
    case 6u: goto L_0889D060;
    case 7u: goto L_0889D06C;
    case 8u: goto L_0889D084;
    case 9u: goto L_0889D090;
    case 10u: goto L_0889D0AC;
    case 11u: goto L_0889D0B0;
    case 12u: goto L_0889D0B8;
    case 13u: goto L_0889D0C0;
    case 14u: goto L_0889D0D0;
    case 15u: goto L_0889D0E4;
    case 16u: goto L_0889D0F0;
    case 17u: goto L_0889D0F8;
    case 18u: goto L_0889D104;
    case 19u: goto L_0889D10C;
    case 20u: goto L_0889D118;
    case 21u: goto L_0889D120;
    case 22u: goto L_0889D12C;
    case 23u: goto L_0889D13C;
    case 24u: goto L_0889D15C;
    case 25u: goto L_0889D164;
    case 26u: goto L_0889D16C;
    case 27u: goto L_0889D174;
    case 28u: goto L_0889D17C;
    case 29u: goto L_0889D184;
    case 30u: goto L_0889D190;
    case 31u: goto L_0889D198;
    case 32u: goto L_0889D1A4;
    case 33u: goto L_0889D1AC;
    case 34u: goto L_0889D1B8;
    case 35u: goto L_0889D1C0;
    case 36u: goto L_0889D1C8;
    case 37u: goto L_0889D1E4;
    case 38u: goto L_0889D1EC;
    case 39u: goto L_0889D1F4;
    case 40u: goto L_0889D210;
    case 41u: goto L_0889D218;
    case 42u: goto L_0889D220;
    case 43u: goto L_0889D23C;
    case 44u: goto L_0889D258;
    case 45u: goto L_0889D278;
    case 46u: goto L_0889D284;
    case 47u: goto L_0889D290;
    case 48u: goto L_0889D298;
    case 49u: goto L_0889D29C;
    case 50u: goto L_0889D2A0;
    case 51u: goto L_0889D2B8;
    case 52u: goto L_0889D2D4;
    case 53u: goto L_0889D2DC;
    case 54u: goto L_0889D2F8;
    case 55u: goto L_0889D2FC;
    case 56u: goto L_0889D30C;
    case 57u: goto L_0889D314;
    case 58u: goto L_0889D31C;
    case 59u: goto L_0889D324;
    case 60u: goto L_0889D32C;
    case 61u: goto L_0889D334;
    case 62u: goto L_0889D33C;
    case 63u: goto L_0889D344;
    case 64u: goto L_0889D34C;
    case 65u: goto L_0889D360;
    case 66u: goto L_0889D378;
    case 67u: goto L_0889D388;
    case 68u: goto L_0889D390;
    case 69u: goto L_0889D398;
    case 70u: goto L_0889D3A0;
    case 71u: goto L_0889D3A8;
    case 72u: goto L_0889D3B0;
    case 73u: goto L_0889D3B8;
    case 74u: goto L_0889D3C4;
    case 75u: goto L_0889D3DC;
    case 76u: goto L_0889D3E4;
    case 77u: goto L_0889D3EC;
    case 78u: goto L_0889D3F4;
    case 79u: goto L_0889D3FC;
    case 80u: goto L_0889D404;
    case 81u: goto L_0889D40C;
    case 82u: goto L_0889D414;
    case 83u: goto L_0889D41C;
    case 84u: goto L_0889D424;
    case 85u: goto L_0889D42C;
    case 86u: goto L_0889D434;
    case 87u: goto L_0889D444;
    case 88u: goto L_0889D44C;
    case 89u: goto L_0889D454;
    case 90u: goto L_0889D45C;
    case 91u: goto L_0889D464;
    case 92u: goto L_0889D46C;
    case 93u: goto L_0889D474;
    case 94u: goto L_0889D47C;
    case 95u: goto L_0889D488;
    case 96u: goto L_0889D490;
    case 97u: goto L_0889D498;
    case 98u: goto L_0889D4A0;
    case 99u: goto L_0889D4B0;
    case 100u: goto L_0889D4B8;
    case 101u: goto L_0889D4C0;
    case 102u: goto L_0889D4C8;
    case 103u: goto L_0889D4D0;
    case 104u: goto L_0889D4D8;
    case 105u: goto L_0889D4E0;
    case 106u: goto L_0889D4E8;
    case 107u: goto L_0889D4F4;
    case 108u: goto L_0889D4FC;
    case 109u: goto L_0889D504;
    case 110u: goto L_0889D50C;
    case 111u: goto L_0889D518;
    case 112u: goto L_0889D520;
    case 113u: goto L_0889D528;
    case 114u: goto L_0889D530;
    case 115u: goto L_0889D540;
    case 116u: goto L_0889D548;
    case 117u: goto L_0889D550;
    case 118u: goto L_0889D558;
    case 119u: goto L_0889D560;
    case 120u: goto L_0889D568;
    case 121u: goto L_0889D570;
    case 122u: goto L_0889D578;
    case 123u: goto L_0889D584;
    case 124u: goto L_0889D58C;
    case 125u: goto L_0889D594;
    case 126u: goto L_0889D59C;
    case 127u: goto L_0889D5A8;
    case 128u: goto L_0889D5D8;
    case 129u: goto L_0889D5E4;
    case 130u: goto L_0889D5F0;
    case 131u: goto L_0889D600;
    case 132u: goto L_0889D60C;
    case 133u: goto L_0889D61C;
    case 134u: goto L_0889D628;
    case 135u: goto L_0889D65C;
    case 136u: goto L_0889D668;
    case 137u: goto L_0889D67C;
    case 138u: goto L_0889D68C;
    case 139u: goto L_0889D694;
    case 140u: goto L_0889D69C;
    case 141u: goto L_0889D6A8;
    case 142u: goto L_0889D6B4;
    case 143u: goto L_0889D6D8;
    case 144u: goto L_0889D6E4;
    case 145u: goto L_0889D6F8;
    case 146u: goto L_0889D700;
    case 147u: goto L_0889D710;
    case 148u: goto L_0889D720;
    case 149u: goto L_0889D72C;
    case 150u: goto L_0889D740;
    case 151u: goto L_0889D754;
    case 152u: goto L_0889D77C;
    case 153u: goto L_0889D788;
    case 154u: goto L_0889D79C;
    case 155u: goto L_0889D7A4;
    case 156u: goto L_0889D7B4;
    case 157u: goto L_0889D7C4;
    case 158u: goto L_0889D7D0;
    case 159u: goto L_0889D7E4;
    case 160u: goto L_0889D7F8;
    case 161u: goto L_0889D810;
    case 162u: goto L_0889D818;
    case 163u: goto L_0889D820;
    case 164u: goto L_0889D87C;
    case 165u: goto L_0889D888;
    case 166u: goto L_0889D8A0;
    case 167u: goto L_0889D8B8;
    case 168u: goto L_0889D8CC;
    case 169u: goto L_0889D8D8;
    case 170u: goto L_0889D904;
    case 171u: goto L_0889D910;
    case 172u: goto L_0889D91C;
    case 173u: goto L_0889D92C;
    case 174u: goto L_0889D948;
    case 175u: goto L_0889D964;
    case 176u: goto L_0889D994;
    case 177u: goto L_0889D9A4;
    case 178u: goto L_0889D9AC;
    case 179u: goto L_0889D9C0;
    case 180u: goto L_0889DA0C;
    case 181u: goto L_0889DA28;
    case 182u: goto L_0889DA30;
    case 183u: goto L_0889DA38;
    case 184u: goto L_0889DA40;
    case 185u: goto L_0889DA48;
    case 186u: goto L_0889DA50;
    case 187u: goto L_0889DA7C;
    case 188u: goto L_0889DA98;
    case 189u: goto L_0889DAC4;
    case 190u: goto L_0889DAE8;
    case 191u: goto L_0889DAFC;
    case 192u: goto L_0889DB04;
    case 193u: goto L_0889DB08;
    case 194u: goto L_0889DB10;
    case 195u: goto L_0889DB1C;
    case 196u: goto L_0889DB2C;
    case 197u: goto L_0889DB38;
    case 198u: goto L_0889DB44;
    case 199u: goto L_0889DB54;
    case 200u: goto L_0889DB5C;
    case 201u: goto L_0889DB60;
    case 202u: goto L_0889DB64;
    case 203u: goto L_0889DB78;
    case 204u: goto L_0889DB88;
    case 205u: goto L_0889DB90;
    case 206u: goto L_0889DB98;
    case 207u: goto L_0889DB9C;
    case 208u: goto L_0889DBB0;
    case 209u: goto L_0889DBCC;
    case 210u: goto L_0889DBDC;
    case 211u: goto L_0889DBEC;
    case 212u: goto L_0889DBFC;
    case 213u: goto L_0889DC0C;
    case 214u: goto L_0889DC1C;
    case 215u: goto L_0889DC28;
    case 216u: goto L_0889DC30;
    case 217u: goto L_0889DC48;
    case 218u: goto L_0889DC50;
    case 219u: goto L_0889DC5C;
    case 220u: goto L_0889DC64;
    case 221u: goto L_0889DC70;
    case 222u: goto L_0889DC78;
    case 223u: goto L_0889DC84;
    case 224u: goto L_0889DC94;
    case 225u: goto L_0889DCB0;
    case 226u: goto L_0889DCBC;
    case 227u: goto L_0889DCC4;
    case 228u: goto L_0889DCCC;
    case 229u: goto L_0889DCE8;
    case 230u: goto L_0889DCF0;
    case 231u: goto L_0889DD18;
    case 232u: goto L_0889DD30;
    case 233u: goto L_0889DD40;
    case 234u: goto L_0889DD4C;
    case 235u: goto L_0889DD74;
    case 236u: goto L_0889DD80;
    case 237u: goto L_0889DD90;
    case 238u: goto L_0889DD98;
    case 239u: goto L_0889DDA0;
    case 240u: goto L_0889DDB8;
    case 241u: goto L_0889DDE0;
    case 242u: goto L_0889DDF0;
    case 243u: goto L_0889DDF8;
    case 244u: goto L_0889DE08;
    case 245u: goto L_0889DE10;
    case 246u: goto L_0889DE2C;
    case 247u: goto L_0889DE3C;
    case 248u: goto L_0889DE54;
    case 249u: goto L_0889DE64;
    case 250u: goto L_0889DE7C;
    case 251u: goto L_0889DE88;
    case 252u: goto L_0889DE90;
    case 253u: goto L_0889DEB8;
    case 254u: goto L_0889DED0;
    case 255u: goto L_0889DEE0;
    case 256u: goto L_0889DEE8;
    case 257u: goto L_0889DEF8;
    case 258u: goto L_0889DF04;
    case 259u: goto L_0889DF24;
    case 260u: goto L_0889DF44;
    case 261u: goto L_0889DF4C;
    case 262u: goto L_0889DF60;
    case 263u: goto L_0889DF68;
    case 264u: goto L_0889DF7C;
    case 265u: goto L_0889DF8C;
    case 266u: goto L_0889DF94;
    case 267u: goto L_0889DF9C;
    case 268u: goto L_0889DFAC;
    case 269u: goto L_0889DFBC;
    case 270u: goto L_0889DFC4;
    case 271u: goto L_0889DFCC;
    case 272u: goto L_0889DFE8;
    case 273u: goto L_0889DFF0;
    case 274u: goto L_0889DFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889D000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D060;
      }
      goto L_0889D01C;
    }
L_0889D01C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0889D034u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D034u) goto L_0889D034;
    return;
L_0889D034:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D05C;
      }
      goto L_0889D040;
    }
L_0889D040:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889D05Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D05Cu) goto L_0889D05C;
    return;
L_0889D05C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_0889D060;
L_0889D060:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D0B0;
      }
      goto L_0889D06C;
    }
L_0889D06C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0889D084u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D084u) goto L_0889D084;
    return;
L_0889D084:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D0AC;
      }
      goto L_0889D090;
    }
L_0889D090:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889D0ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D0ACu) goto L_0889D0AC;
    return;
L_0889D0AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_0889D0B0;
L_0889D0B0:
    aot_gpr[31] = (0x0889D0B8u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 93u, 0x08969640u>(ctx, &aot_mem) && ctx.pc == 0x0889D0B8u) goto L_0889D0B8;
    return;
L_0889D0B8:
    aot_gpr[31] = (0x0889D0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 284u, 0x08963FFCu>(ctx, &aot_mem) && ctx.pc == 0x0889D0C0u) goto L_0889D0C0;
    return;
L_0889D0C0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D0D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889D0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889D0E4u) goto L_0889D0E4;
    return;
L_0889D0E4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D12C;
      }
      goto L_0889D0F0;
    }
L_0889D0F0:
    aot_gpr[31] = (0x0889D0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 57u, 0x088A6470u>(ctx, &aot_mem) && ctx.pc == 0x0889D0F8u) goto L_0889D0F8;
    return;
L_0889D0F8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889D104u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x0889D104u) goto L_0889D104;
    return;
L_0889D104:
    aot_gpr[31] = (0x0889D10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 123u, 0x088A0880u>(ctx, &aot_mem) && ctx.pc == 0x0889D10Cu) goto L_0889D10C;
    return;
L_0889D10C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889D118u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x0889D118u) goto L_0889D118;
    return;
L_0889D118:
    aot_gpr[31] = (0x0889D120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 95u, 0x088A5A28u>(ctx, &aot_mem) && ctx.pc == 0x0889D120u) goto L_0889D120;
    return;
L_0889D120:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889D12Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 10u, 0x089FE0DCu>(ctx, &aot_mem) && ctx.pc == 0x0889D12Cu) goto L_0889D12C;
    return;
L_0889D12C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D13C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0889D15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889D15Cu) goto L_0889D15C;
    return;
L_0889D15C:
    aot_gpr[31] = (0x0889D164u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 95u, 0x088A5A28u>(ctx, &aot_mem) && ctx.pc == 0x0889D164u) goto L_0889D164;
    return;
L_0889D164:
    aot_gpr[31] = (0x0889D16Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 123u, 0x088A0880u>(ctx, &aot_mem) && ctx.pc == 0x0889D16Cu) goto L_0889D16C;
    return;
L_0889D16C:
    aot_gpr[31] = (0x0889D174u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 57u, 0x088A6470u>(ctx, &aot_mem) && ctx.pc == 0x0889D174u) goto L_0889D174;
    return;
L_0889D174:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889D1B8;
      }
      goto L_0889D17C;
    }
L_0889D17C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D190;
      }
      goto L_0889D184;
    }
L_0889D184:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889D190u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x0889D190u) goto L_0889D190;
    return;
L_0889D190:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1A4;
      }
      goto L_0889D198;
    }
L_0889D198:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889D1A4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x0889D1A4u) goto L_0889D1A4;
    return;
L_0889D1A4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1B8;
      }
      goto L_0889D1AC;
    }
L_0889D1AC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0889D1B8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 13u, 0x089FE114u>(ctx, &aot_mem) && ctx.pc == 0x0889D1B8u) goto L_0889D1B8;
    return;
L_0889D1B8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1E4;
      }
      goto L_0889D1C0;
    }
L_0889D1C0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1E4;
      }
      goto L_0889D1C8;
    }
L_0889D1C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0889D1E4u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D1E4u) goto L_0889D1E4;
    return;
L_0889D1E4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D210;
      }
      goto L_0889D1EC;
    }
L_0889D1EC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D210;
      }
      goto L_0889D1F4;
    }
L_0889D1F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0889D210u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D210u) goto L_0889D210;
    return;
L_0889D210:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D23C;
      }
      goto L_0889D218;
    }
L_0889D218:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D23C;
      }
      goto L_0889D220;
    }
L_0889D220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0889D23Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D23Cu) goto L_0889D23C;
    return;
L_0889D23C:
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
L_0889D258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889D2A0;
      }
      goto L_0889D278;
    }
L_0889D278:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x0889D284u);
    aot_gpr[4] = (0u | 408u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 61u, 0x088A4408u>(ctx, &aot_mem) && ctx.pc == 0x0889D284u) goto L_0889D284;
    return;
L_0889D284:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D29C;
      }
      goto L_0889D290;
    }
L_0889D290:
    aot_gpr[31] = (0x0889D298u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 65u, 0x088A4440u>(ctx, &aot_mem) && ctx.pc == 0x0889D298u) goto L_0889D298;
    return;
L_0889D298:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_0889D29C;
L_0889D29C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    goto L_0889D2A0;
L_0889D2A0:
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
L_0889D2B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D2FC;
      }
      goto L_0889D2D4;
    }
L_0889D2D4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D2F8;
      }
      goto L_0889D2DC;
    }
L_0889D2DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0889D2F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D2F8u) goto L_0889D2F8;
    return;
L_0889D2F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_0889D2FC;
L_0889D2FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D30C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D314:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D31C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D324:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D32C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D334:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D33C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D344:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D34C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D360;
    }
L_0889D360:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15848)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D378:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
        goto L_0889D3A0;
    }
    goto L_0889D388;
L_0889D388:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889D3B0;
      }
      goto L_0889D390;
    }
L_0889D390:
    aot_gpr[31] = (0x0889D398u);
    // nop
    goto L_0889D258;
L_0889D398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D3B0;
      }
      goto L_0889D3A0;
    }
L_0889D3A0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D3B0;
      }
      goto L_0889D3A8;
    }
L_0889D3A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D3B0;
      }
      goto L_0889D3B0;
    }
L_0889D3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D3B8;
    }
L_0889D3B8:
    aot_gpr[5] = (aot_gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D42C;
      }
      goto L_0889D3C4;
    }
L_0889D3C4:
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[6]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(15888)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D3DC:
    aot_gpr[31] = (0x0889D3E4u);
    // nop
    goto L_0889D2B8;
L_0889D3E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D42C;
      }
      goto L_0889D3EC;
    }
L_0889D3EC:
    aot_gpr[31] = (0x0889D3F4u);
    // nop
    goto L_0889D30C;
L_0889D3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D42C;
      }
      goto L_0889D3FC;
    }
L_0889D3FC:
    aot_gpr[31] = (0x0889D404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 252u, 0x0889CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D404u) goto L_0889D404;
    return;
L_0889D404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D42C;
      }
      goto L_0889D40C;
    }
L_0889D40C:
    aot_gpr[31] = (0x0889D414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 242u, 0x0889CE60u>(ctx, &aot_mem) && ctx.pc == 0x0889D414u) goto L_0889D414;
    return;
L_0889D414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D42C;
      }
      goto L_0889D41C;
    }
L_0889D41C:
    aot_gpr[31] = (0x0889D424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 244u, 0x0889CE70u>(ctx, &aot_mem) && ctx.pc == 0x0889D424u) goto L_0889D424;
    return;
L_0889D424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D42C;
      }
      goto L_0889D42C;
    }
L_0889D42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D434;
    }
L_0889D434:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_0889D45C;
      }
      goto L_0889D444;
    }
L_0889D444:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889D474;
      }
      goto L_0889D44C;
    }
L_0889D44C:
    aot_gpr[31] = (0x0889D454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 243u, 0x0889CE68u>(ctx, &aot_mem) && ctx.pc == 0x0889D454u) goto L_0889D454;
    return;
L_0889D454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D474;
      }
      goto L_0889D45C;
    }
L_0889D45C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889D474;
      }
      goto L_0889D464;
    }
L_0889D464:
    aot_gpr[31] = (0x0889D46Cu);
    // nop
    goto L_0889D31C;
L_0889D46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D474;
      }
      goto L_0889D474;
    }
L_0889D474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D47C;
    }
L_0889D47C:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D498;
      }
      goto L_0889D488;
    }
L_0889D488:
    aot_gpr[31] = (0x0889D490u);
    // nop
    goto L_0889D324;
L_0889D490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D498;
      }
      goto L_0889D498;
    }
L_0889D498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D4A0;
    }
L_0889D4A0:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0889D4C8;
      }
      goto L_0889D4B0;
    }
L_0889D4B0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889D4E0;
      }
      goto L_0889D4B8;
    }
L_0889D4B8:
    aot_gpr[31] = (0x0889D4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 249u, 0x0889CEE8u>(ctx, &aot_mem) && ctx.pc == 0x0889D4C0u) goto L_0889D4C0;
    return;
L_0889D4C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D4E0;
      }
      goto L_0889D4C8;
    }
L_0889D4C8:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889D4E0;
      }
      goto L_0889D4D0;
    }
L_0889D4D0:
    aot_gpr[31] = (0x0889D4D8u);
    // nop
    goto L_0889D32C;
L_0889D4D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D4E0;
      }
      goto L_0889D4E0;
    }
L_0889D4E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D4E8;
    }
L_0889D4E8:
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D504;
      }
      goto L_0889D4F4;
    }
L_0889D4F4:
    aot_gpr[31] = (0x0889D4FCu);
    // nop
    goto L_0889D334;
L_0889D4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D504;
      }
      goto L_0889D504;
    }
L_0889D504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D50C;
    }
L_0889D50C:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D528;
      }
      goto L_0889D518;
    }
L_0889D518:
    aot_gpr[31] = (0x0889D520u);
    // nop
    goto L_0889D314;
L_0889D520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D528;
      }
      goto L_0889D528;
    }
L_0889D528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D530;
    }
L_0889D530:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_0889D558;
      }
      goto L_0889D540;
    }
L_0889D540:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889D570;
      }
      goto L_0889D548;
    }
L_0889D548:
    aot_gpr[31] = (0x0889D550u);
    // nop
    goto L_0889D000;
L_0889D550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D570;
      }
      goto L_0889D558;
    }
L_0889D558:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0889D570;
      }
      goto L_0889D560;
    }
L_0889D560:
    aot_gpr[31] = (0x0889D568u);
    // nop
    goto L_0889D33C;
L_0889D568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D570;
      }
      goto L_0889D570;
    }
L_0889D570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D578;
    }
L_0889D578:
    aot_gpr[5] = (0u | 7u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889D594;
      }
      goto L_0889D584;
    }
L_0889D584:
    aot_gpr[31] = (0x0889D58Cu);
    // nop
    goto L_0889D344;
L_0889D58C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D594;
      }
      goto L_0889D594;
    }
L_0889D594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D59C;
      }
      goto L_0889D59C;
    }
L_0889D59C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D5A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24828));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889D5D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26616), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 122u, 0x088A4834u>(ctx, &aot_mem) && ctx.pc == 0x0889D5D8u) goto L_0889D5D8;
    return;
L_0889D5D8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0889D5E4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26620));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D5E4u) goto L_0889D5E4;
    return;
L_0889D5E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D5F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889D600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0889D600u) goto L_0889D600;
    return;
L_0889D600:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D60C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0889D61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D61Cu) goto L_0889D61C;
    return;
L_0889D61C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D628:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26640), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2186u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0889D65Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10572));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 17u, 0x08962124u>(ctx, &aot_mem) && ctx.pc == 0x0889D65Cu) goto L_0889D65C;
    return;
L_0889D65C:
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[31] = (0x0889D668u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10412));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 18u, 0x08962130u>(ctx, &aot_mem) && ctx.pc == 0x0889D668u) goto L_0889D668;
    return;
L_0889D668:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D67C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0889D69C;
      }
      goto L_0889D68C;
    }
L_0889D68C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D69C;
      }
      goto L_0889D694;
    }
L_0889D694:
    aot_gpr[31] = (0x0889D69Cu);
    // nop
    goto L_0889D60C;
L_0889D69C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D6A8:
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26640), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D6B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0889D6D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15956));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889D6D8u) goto L_0889D6D8;
    return;
L_0889D6D8:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889D720;
      }
      goto L_0889D6E4;
    }
L_0889D6E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26640)));
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26644)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889D740;
      }
      goto L_0889D6F8;
    }
L_0889D6F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D740;
      }
      goto L_0889D700;
    }
L_0889D700:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x0889D710u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15980));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889D710u) goto L_0889D710;
    return;
L_0889D710:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26644)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26644), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889D740;
      }
      goto L_0889D720;
    }
L_0889D720:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x0889D72Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16020));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889D72Cu) goto L_0889D72C;
    return;
L_0889D72C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26648)));
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(26640), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26648), aot_gpr[6]);
    goto L_0889D740;
L_0889D740:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D754:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0889D77Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16052));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889D77Cu) goto L_0889D77C;
    return;
L_0889D77C:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889D7C4;
      }
      goto L_0889D788;
    }
L_0889D788:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26640)));
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26644)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889D7E4;
      }
      goto L_0889D79C;
    }
L_0889D79C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D7E4;
      }
      goto L_0889D7A4;
    }
L_0889D7A4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x0889D7B4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15980));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889D7B4u) goto L_0889D7B4;
    return;
L_0889D7B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(26644)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(26644), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889D7E4;
      }
      goto L_0889D7C4;
    }
L_0889D7C4:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[31] = (0x0889D7D0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16020));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889D7D0u) goto L_0889D7D0;
    return;
L_0889D7D0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26648)));
    aot_gpr[6] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(26640), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26648), aot_gpr[6]);
    goto L_0889D7E4;
L_0889D7E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D7F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0889D810u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AD4Cu;
    return;
L_0889D810:
    aot_gpr[31] = (0x0889D818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x0889D818u) goto L_0889D818;
    return;
L_0889D818:
    aot_gpr[31] = (0x0889D820u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D820u) goto L_0889D820;
    return;
L_0889D820:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26544)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[6] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26540)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(524));
    aot_gpr[6] = (0u | 7u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x0889D87Cu);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889D87Cu) goto L_0889D87C;
    return;
L_0889D87C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D888:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x0889D8A0u);
    aot_gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D8A0u) goto L_0889D8A0;
    return;
L_0889D8A0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0889D8B8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x0889D8B8u) goto L_0889D8B8;
    return;
L_0889D8B8:
    aot_gpr[5] = (2186u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889D8CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9912));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 18u, 0x089AB0F0u>(ctx, &aot_mem) && ctx.pc == 0x0889D8CCu) goto L_0889D8CC;
    return;
L_0889D8CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D8D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D92C;
      }
      goto L_0889D904;
    }
L_0889D904:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(16104));
    goto L_0889D910;
L_0889D910:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889D91Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 268u, 0x0889AF74u>(ctx, &aot_mem) && ctx.pc == 0x0889D91Cu) goto L_0889D91C;
    return;
L_0889D91C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_0889D910;
      }
      goto L_0889D92C;
    }
L_0889D92C:
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
L_0889D948:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9A4;
      }
      goto L_0889D964;
    }
L_0889D964:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10240));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(300), aot_gpr[5]);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[16] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-24824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889D994u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 31u, 0x0896719Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D994u) goto L_0889D994;
    return;
L_0889D994:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0889D9A4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 7u, 0x0896705Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D9A4u) goto L_0889D9A4;
    return;
L_0889D9A4:
    aot_gpr[31] = (0x0889D9ACu);
    aot_gpr[4] = (0u | 1u);
    goto L_0889D6B4;
L_0889D9AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D9C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-640));
    aot_gpr[5] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[6] = (0u | 5000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26640)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(604), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(72) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(608), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(612), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(616), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889DA28;
      }
      goto L_0889DA0C;
    }
L_0889DA0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26640)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(16200)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DA28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DA30;
    }
L_0889DA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DA38;
    }
L_0889DA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DA40;
    }
L_0889DA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DA48;
    }
L_0889DA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DA50;
    }
L_0889DA50:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16120));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (0u | 30000u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x0889DA7Cu);
    aot_gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 208u, 0x0896FC34u>(ctx, &aot_mem) && ctx.pc == 0x0889DA7Cu) goto L_0889DA7C;
    return;
L_0889DA7C:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DA98;
    }
L_0889DA98:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(17796));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (0u | 18u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889DAE8;
      }
      goto L_0889DAC4;
    }
L_0889DAC4:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1))))));
    aot_gpr[9] = (aot_gpr[29] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[8]));
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889DAC4;
      }
      goto L_0889DAE8;
    }
L_0889DAE8:
    aot_gpr[16] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[16] & 255u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x0889DAFCu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889DAFCu) goto L_0889DAFC;
    return;
L_0889DAFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DB9C;
      }
      goto L_0889DB04;
    }
L_0889DB04:
    aot_gpr[18] = (0u | 0u);
    goto L_0889DB08;
L_0889DB08:
    aot_gpr[31] = (0x0889DB10u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0889DB10u) goto L_0889DB10;
    return;
L_0889DB10:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DB90;
      }
      goto L_0889DB1C;
    }
L_0889DB1C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0889DB60;
      }
      goto L_0889DB2C;
    }
L_0889DB2C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (0u | 92u);
      if (branch_taken) {
          goto L_0889DB54;
      }
      goto L_0889DB38;
    }
L_0889DB38:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 123 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 92u);
      if (branch_taken) {
          goto L_0889DB54;
      }
      goto L_0889DB44;
    }
L_0889DB44:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_0889DB60;
      }
      goto L_0889DB54;
    }
L_0889DB54:
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[17] = (aot_gpr[17] << 4u);
        goto L_0889DB64;
    }
    goto L_0889DB5C;
L_0889DB5C:
    aot_gpr[4] = (0u | 47u);
    goto L_0889DB60;
L_0889DB60:
    aot_gpr[17] = (aot_gpr[17] << 4u);
    goto L_0889DB64;
L_0889DB64:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (61440u << 16u);
    aot_gpr[4] = (aot_gpr[17] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] >> 24u);
      if (branch_taken) {
          goto L_0889DB88;
      }
      goto L_0889DB78;
    }
L_0889DB78:
    aot_gpr[17] = (aot_gpr[17] ^ aot_gpr[4]);
    aot_gpr[4] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[4]);
    goto L_0889DB88;
L_0889DB88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889DB08;
      }
      goto L_0889DB90;
    }
L_0889DB90:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DB9C;
      }
      goto L_0889DB98;
    }
L_0889DB98:
    aot_gpr[17] = (0u | 1u);
    goto L_0889DB9C;
L_0889DB9C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7928)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC1C;
      }
      goto L_0889DBB0;
    }
L_0889DBB0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(7928), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0889DBCCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7932));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0889DBCCu) goto L_0889DBCC;
    return;
L_0889DBCC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-3216)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_0889DC0C;
      }
      goto L_0889DBDC;
    }
L_0889DBDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7917)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC0C;
      }
      goto L_0889DBEC;
    }
L_0889DBEC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[31] = (0x0889DBFCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 148u, 0x08888EB4u>(ctx, &aot_mem) && ctx.pc == 0x0889DBFCu) goto L_0889DBFC;
    return;
L_0889DBFC:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889DC28;
      }
      goto L_0889DC0C;
    }
L_0889DC0C:
    aot_gpr[4] = (0u | 9u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889DC28;
      }
      goto L_0889DC1C;
    }
L_0889DC1C:
    aot_gpr[4] = (0u | 9u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889DC28;
L_0889DC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DC30;
    }
L_0889DC30:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26012)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889DC5C;
      }
      goto L_0889DC48;
    }
L_0889DC48:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC5C;
      }
      goto L_0889DC50;
    }
L_0889DC50:
    aot_gpr[4] = (0u | 9u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889DC5C;
L_0889DC5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DC64;
    }
L_0889DC64:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    aot_gpr[31] = (0x0889DC70u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    ctx.pc = 0x08A5AD54u;
    return;
L_0889DC70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DCB0;
      }
      goto L_0889DC78;
    }
L_0889DC78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DCB0;
      }
      goto L_0889DC84;
    }
L_0889DC84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DCB0;
      }
      goto L_0889DC94;
    }
L_0889DC94:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26538), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889DCBC;
      }
      goto L_0889DCB0;
    }
L_0889DCB0:
    aot_gpr[4] = (0u | 10u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889DCBC;
L_0889DCBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DCC4;
    }
L_0889DCC4:
    aot_gpr[31] = (0x0889DCCCu);
    aot_gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 222u, 0x0895EE58u>(ctx, &aot_mem) && ctx.pc == 0x0889DCCCu) goto L_0889DCCC;
    return;
L_0889DCCC:
    aot_gpr[4] = (0u | 11u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 12u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DCE8;
    }
L_0889DCE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DCF0;
    }
L_0889DCF0:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(26652), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (2186u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26636)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (0u | 10071u);
    aot_gpr[31] = (0x0889DD18u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-20608));
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 61u, 0x0896C3B4u>(ctx, &aot_mem) && ctx.pc == 0x0889DD18u) goto L_0889DD18;
    return;
L_0889DD18:
    aot_gpr[4] = (0u | 13u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DD30;
    }
L_0889DD30:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x0889DD40u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 263u, 0x0889AF10u>(ctx, &aot_mem) && ctx.pc == 0x0889DD40u) goto L_0889DD40;
    return;
L_0889DD40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DD90;
      }
      goto L_0889DD4C;
    }
L_0889DD4C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (16880u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0889DD90;
      }
      goto L_0889DD74;
    }
L_0889DD74:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[31] = (0x0889DD80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0889DD80u) goto L_0889DD80;
    return;
L_0889DD80:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[31] = (0x0889DD90u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 154u, 0x08962B58u>(ctx, &aot_mem) && ctx.pc == 0x0889DD90u) goto L_0889DD90;
    return;
L_0889DD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DD98;
    }
L_0889DD98:
    aot_gpr[31] = (0x0889DDA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889D7F8;
L_0889DDA0:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DDB8;
    }
L_0889DDB8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (16880u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0889DDF0;
      }
      goto L_0889DDE0;
    }
L_0889DDE0:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889DE88;
      }
      goto L_0889DDF0;
    }
L_0889DDF0:
    aot_gpr[31] = (0x0889DDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x0889DDF8u) goto L_0889DDF8;
    return;
L_0889DDF8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0889DE08u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16124));
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 87u, 0x089F3584u>(ctx, &aot_mem) && ctx.pc == 0x0889DE08u) goto L_0889DE08;
    return;
L_0889DE08:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DE88;
      }
      goto L_0889DE10;
    }
L_0889DE10:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DE3C;
      }
      goto L_0889DE2C;
    }
L_0889DE2C:
    aot_gpr[4] = (0u | 19u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889DE88;
      }
      goto L_0889DE3C;
    }
L_0889DE3C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7968)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889DE7C;
      }
      goto L_0889DE54;
    }
L_0889DE54:
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0889DE64u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10024));
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 190u, 0x0896B954u>(ctx, &aot_mem) && ctx.pc == 0x0889DE64u) goto L_0889DE64;
    return;
L_0889DE64:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889DE88;
      }
      goto L_0889DE7C;
    }
L_0889DE7C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    goto L_0889DE88;
L_0889DE88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DE90;
    }
L_0889DE90:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7048)));
    aot_gpr[4] = (16880u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0889DEE8;
      }
      goto L_0889DEB8;
    }
L_0889DEB8:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0889DED0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0889DED0u) goto L_0889DED0;
    return;
L_0889DED0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x0889DEE0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 154u, 0x08962B58u>(ctx, &aot_mem) && ctx.pc == 0x0889DEE0u) goto L_0889DEE0;
    return;
L_0889DEE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF94;
      }
      goto L_0889DEE8;
    }
L_0889DEE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[31] = (0x0889DEF8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 6u, 0x0889B04Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DEF8u) goto L_0889DEF8;
    return;
L_0889DEF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF94;
      }
      goto L_0889DF04;
    }
L_0889DF04:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7968)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889DF60;
      }
      goto L_0889DF24;
    }
L_0889DF24:
    aot_gpr[7] = (aot_gpr[6] << 6u);
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889DF4C;
      }
      goto L_0889DF44;
    }
L_0889DF44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0889DF60;
      }
      goto L_0889DF4C;
    }
L_0889DF4C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF24;
      }
      goto L_0889DF60;
    }
L_0889DF60:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF8C;
      }
      goto L_0889DF68;
    }
L_0889DF68:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0889DF7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7968), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 4u, 0x0889B030u>(ctx, &aot_mem) && ctx.pc == 0x0889DF7Cu) goto L_0889DF7C;
    return;
L_0889DF7C:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889DF94;
      }
      goto L_0889DF8C;
    }
L_0889DF8C:
    aot_gpr[31] = (0x0889DF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 8u, 0x0889B080u>(ctx, &aot_mem) && ctx.pc == 0x0889DF94u) goto L_0889DF94;
    return;
L_0889DF94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DF9C;
    }
L_0889DF9C:
    aot_gpr[4] = (2186u << 16u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x0889DFACu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-10024));
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 190u, 0x0896B954u>(ctx, &aot_mem) && ctx.pc == 0x0889DFACu) goto L_0889DFAC;
    return;
L_0889DFAC:
    aot_gpr[4] = (0u | 18u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DFBC;
    }
L_0889DFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DFC4;
    }
L_0889DFC4:
    aot_gpr[31] = (0x0889DFCCu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 266u, 0x0896BE80u>(ctx, &aot_mem) && ctx.pc == 0x0889DFCCu) goto L_0889DFCC;
    return;
L_0889DFCC:
    aot_gpr[4] = (0u | 20u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26640), aot_gpr[4]);
    aot_gpr[4] = (0u | 21u);
    aot_gpr[5] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26644), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DFE8;
    }
L_0889DFE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 212u, 0x0889EDA4u>(ctx, &aot_mem); return;
      }
      goto L_0889DFF0;
    }
L_0889DFF0:
    aot_gpr[31] = (0x0889DFF8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0889D888;
L_0889DFF8:
    aot_gpr[4] = (0u | 22u);
    aot_gpr[5] = (2215u << 16u);
    ctx.pc = 0x0889E000u; return;
}

void recomp_unit_0153(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0153_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_153(Runtime &runtime) {
    runtime.register_generated_unit(153u, 0x0889D000u, 4096u, &recomp_unit_0153, &recomp_unit_0153_entry);
    runtime.register_function(0x0889D000u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D01Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D034u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D040u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D05Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D060u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D06Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D084u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D090u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D0ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D0B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D0B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D0C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D0D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D0E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D0F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D0F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D104u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D10Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D118u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D120u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D12Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D13Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D15Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D164u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D16Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D174u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D17Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D190u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D198u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D1A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D1ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D1B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D1C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D1C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D1E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D1ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D1F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D210u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D218u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D220u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D23Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D258u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D278u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D284u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D290u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D298u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D29Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D2A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D2B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D2D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D2DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D2F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D2FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D30Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D314u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D31Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D324u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D32Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D334u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D33Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D344u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D34Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D360u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D378u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D388u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D390u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D398u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D3FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D404u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D40Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D414u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D41Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D424u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D42Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D434u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D444u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D44Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D454u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D45Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D464u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D46Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D474u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D47Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D488u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D490u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D498u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D4FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D504u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D50Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D518u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D520u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D528u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D530u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D540u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D548u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D550u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D558u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D560u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D568u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D570u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D578u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D584u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D58Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D594u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D59Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D5A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D5D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D5E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D5F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D600u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D60Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D61Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D628u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D65Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D668u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D67Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D68Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D694u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D69Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D6A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D6B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D6D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D6E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D6F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D700u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D710u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D720u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D72Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D740u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D754u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D77Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D788u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D79Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D7A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D7B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D7C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D7D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D7E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D7F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D810u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D818u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D820u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D87Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D888u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D8A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D8B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D8CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D8D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D904u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D910u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D91Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D92Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D948u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D964u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D994u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D9A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D9ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889D9C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DA98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DAC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DAE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DAFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DB9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DBB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DBCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DBDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DBECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DBFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DC94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DCB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DCBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DCC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DCCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DCE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DCF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DD18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DD30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DD40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DD4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DD74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DD80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DD90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DD98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DDA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DDB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DDE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DDF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DDF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DE90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DEB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DED0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DEE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DEE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DEF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DF9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DFACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DFBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DFC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DFCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DFE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DFF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x0889DFF8u, &recomp_unit_0153, "recomp_unit_0153");
}
} // namespace psprecomp
