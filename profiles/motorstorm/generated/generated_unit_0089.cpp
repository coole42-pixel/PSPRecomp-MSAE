#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0089[1024] = {
    1, 0, 2, 0, 3, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0,
    21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0,
    0, 0, 0, 0, 27, 0, 28, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 37,
    0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 41, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 45, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0,
    51, 0, 0, 52, 0, 53, 54, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61,
    62, 0, 0, 63, 0, 64, 0, 0, 65, 66, 0, 67, 68, 0, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 74, 0, 75,
    0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 80, 0, 0, 81, 0, 0, 0, 82, 0, 83, 84, 0, 0, 0, 0, 85, 0, 86,
    0, 0, 87, 0, 0, 0, 88, 0, 89, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 99, 0, 100,
    0, 101, 0, 0, 102, 0, 103, 104, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 110, 111, 0, 0, 112, 0, 113, 0, 114,
    0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 119, 0, 0, 120, 0, 0, 121, 0, 0,
    0, 0, 0, 122, 0, 123, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132,
    0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 136, 137, 138, 0, 139, 0, 140, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 145, 0, 0,
    146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 151, 152, 0, 153, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 158,
    0, 0, 0, 0, 159, 0, 160, 161, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 175,
    0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195,
    0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 210, 0, 0,
    211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 0, 223,
    0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0,
    0, 0, 236, 237, 0, 0, 238, 0, 0, 0, 0, 239, 240, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 244, 0, 245, 0, 246, 0,
    247, 0, 248, 0, 0, 249, 250, 0, 0, 251, 252, 0, 0, 253, 254, 0, 0, 255, 256, 0, 0, 0, 257, 0, 258, 259, 0, 0, 0, 260, 0, 261,
    262, 0, 0, 0, 263, 0, 264, 265, 0, 0, 0, 266, 0, 267, 268, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281,
};
void recomp_unit_0089_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0885D000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0089[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0885D000;
    case 2u: goto L_0885D008;
    case 3u: goto L_0885D010;
    case 4u: goto L_0885D014;
    case 5u: goto L_0885D024;
    case 6u: goto L_0885D030;
    case 7u: goto L_0885D0D0;
    case 8u: goto L_0885D0E0;
    case 9u: goto L_0885D0EC;
    case 10u: goto L_0885D118;
    case 11u: goto L_0885D154;
    case 12u: goto L_0885D174;
    case 13u: goto L_0885D17C;
    case 14u: goto L_0885D19C;
    case 15u: goto L_0885D1A8;
    case 16u: goto L_0885D1BC;
    case 17u: goto L_0885D1DC;
    case 18u: goto L_0885D1E4;
    case 19u: goto L_0885D1EC;
    case 20u: goto L_0885D1F4;
    case 21u: goto L_0885D200;
    case 22u: goto L_0885D20C;
    case 23u: goto L_0885D248;
    case 24u: goto L_0885D264;
    case 25u: goto L_0885D26C;
    case 26u: goto L_0885D278;
    case 27u: goto L_0885D290;
    case 28u: goto L_0885D298;
    case 29u: goto L_0885D29C;
    case 30u: goto L_0885D2A8;
    case 31u: goto L_0885D2C0;
    case 32u: goto L_0885D2C8;
    case 33u: goto L_0885D2CC;
    case 34u: goto L_0885D2D8;
    case 35u: goto L_0885D2F0;
    case 36u: goto L_0885D2F8;
    case 37u: goto L_0885D2FC;
    case 38u: goto L_0885D308;
    case 39u: goto L_0885D320;
    case 40u: goto L_0885D328;
    case 41u: goto L_0885D32C;
    case 42u: goto L_0885D338;
    case 43u: goto L_0885D350;
    case 44u: goto L_0885D358;
    case 45u: goto L_0885D35C;
    case 46u: goto L_0885D360;
    case 47u: goto L_0885D384;
    case 48u: goto L_0885D3D8;
    case 49u: goto L_0885D3E4;
    case 50u: goto L_0885D3F4;
    case 51u: goto L_0885D400;
    case 52u: goto L_0885D40C;
    case 53u: goto L_0885D414;
    case 54u: goto L_0885D418;
    case 55u: goto L_0885D41C;
    case 56u: goto L_0885D434;
    case 57u: goto L_0885D43C;
    case 58u: goto L_0885D444;
    case 59u: goto L_0885D458;
    case 60u: goto L_0885D464;
    case 61u: goto L_0885D47C;
    case 62u: goto L_0885D480;
    case 63u: goto L_0885D48C;
    case 64u: goto L_0885D494;
    case 65u: goto L_0885D4A0;
    case 66u: goto L_0885D4A4;
    case 67u: goto L_0885D4AC;
    case 68u: goto L_0885D4B0;
    case 69u: goto L_0885D4C0;
    case 70u: goto L_0885D4C8;
    case 71u: goto L_0885D4D0;
    case 72u: goto L_0885D4D8;
    case 73u: goto L_0885D4F0;
    case 74u: goto L_0885D4F4;
    case 75u: goto L_0885D4FC;
    case 76u: goto L_0885D50C;
    case 77u: goto L_0885D514;
    case 78u: goto L_0885D52C;
    case 79u: goto L_0885D534;
    case 80u: goto L_0885D538;
    case 81u: goto L_0885D544;
    case 82u: goto L_0885D554;
    case 83u: goto L_0885D55C;
    case 84u: goto L_0885D560;
    case 85u: goto L_0885D574;
    case 86u: goto L_0885D57C;
    case 87u: goto L_0885D588;
    case 88u: goto L_0885D598;
    case 89u: goto L_0885D5A0;
    case 90u: goto L_0885D5A4;
    case 91u: goto L_0885D5B0;
    case 92u: goto L_0885D5BC;
    case 93u: goto L_0885D5CC;
    case 94u: goto L_0885D5D4;
    case 95u: goto L_0885D5D8;
    case 96u: goto L_0885D60C;
    case 97u: goto L_0885D664;
    case 98u: goto L_0885D670;
    case 99u: goto L_0885D674;
    case 100u: goto L_0885D67C;
    case 101u: goto L_0885D684;
    case 102u: goto L_0885D690;
    case 103u: goto L_0885D698;
    case 104u: goto L_0885D69C;
    case 105u: goto L_0885D6A0;
    case 106u: goto L_0885D6AC;
    case 107u: goto L_0885D6B8;
    case 108u: goto L_0885D6D0;
    case 109u: goto L_0885D6D8;
    case 110u: goto L_0885D6DC;
    case 111u: goto L_0885D6E0;
    case 112u: goto L_0885D6EC;
    case 113u: goto L_0885D6F4;
    case 114u: goto L_0885D6FC;
    case 115u: goto L_0885D70C;
    case 116u: goto L_0885D720;
    case 117u: goto L_0885D740;
    case 118u: goto L_0885D758;
    case 119u: goto L_0885D75C;
    case 120u: goto L_0885D768;
    case 121u: goto L_0885D774;
    case 122u: goto L_0885D78C;
    case 123u: goto L_0885D794;
    case 124u: goto L_0885D798;
    case 125u: goto L_0885D7A4;
    case 126u: goto L_0885D7B0;
    case 127u: goto L_0885D7C8;
    case 128u: goto L_0885D7D0;
    case 129u: goto L_0885D7D4;
    case 130u: goto L_0885D7E0;
    case 131u: goto L_0885D7E8;
    case 132u: goto L_0885D7FC;
    case 133u: goto L_0885D80C;
    case 134u: goto L_0885D814;
    case 135u: goto L_0885D81C;
    case 136u: goto L_0885D828;
    case 137u: goto L_0885D82C;
    case 138u: goto L_0885D830;
    case 139u: goto L_0885D838;
    case 140u: goto L_0885D840;
    case 141u: goto L_0885D844;
    case 142u: goto L_0885D850;
    case 143u: goto L_0885D858;
    case 144u: goto L_0885D870;
    case 145u: goto L_0885D874;
    case 146u: goto L_0885D880;
    case 147u: goto L_0885D88C;
    case 148u: goto L_0885D894;
    case 149u: goto L_0885D8A8;
    case 150u: goto L_0885D8B0;
    case 151u: goto L_0885D8B8;
    case 152u: goto L_0885D8BC;
    case 153u: goto L_0885D8C4;
    case 154u: goto L_0885D8C8;
    case 155u: goto L_0885D8D8;
    case 156u: goto L_0885D8EC;
    case 157u: goto L_0885D8F4;
    case 158u: goto L_0885D8FC;
    case 159u: goto L_0885D910;
    case 160u: goto L_0885D918;
    case 161u: goto L_0885D91C;
    case 162u: goto L_0885D928;
    case 163u: goto L_0885D930;
    case 164u: goto L_0885D940;
    case 165u: goto L_0885D948;
    case 166u: goto L_0885D94C;
    case 167u: goto L_0885D980;
    case 168u: goto L_0885D9AC;
    case 169u: goto L_0885D9B4;
    case 170u: goto L_0885D9CC;
    case 171u: goto L_0885D9D0;
    case 172u: goto L_0885D9DC;
    case 173u: goto L_0885D9F0;
    case 174u: goto L_0885D9F8;
    case 175u: goto L_0885D9FC;
    case 176u: goto L_0885DA08;
    case 177u: goto L_0885DA10;
    case 178u: goto L_0885DA20;
    case 179u: goto L_0885DA3C;
    case 180u: goto L_0885DA54;
    case 181u: goto L_0885DA70;
    case 182u: goto L_0885DA84;
    case 183u: goto L_0885DA90;
    case 184u: goto L_0885DAB8;
    case 185u: goto L_0885DACC;
    case 186u: goto L_0885DAD8;
    case 187u: goto L_0885DAF4;
    case 188u: goto L_0885DB08;
    case 189u: goto L_0885DB14;
    case 190u: goto L_0885DB3C;
    case 191u: goto L_0885DB50;
    case 192u: goto L_0885DB5C;
    case 193u: goto L_0885DBE8;
    case 194u: goto L_0885DBF4;
    case 195u: goto L_0885DBFC;
    case 196u: goto L_0885DC08;
    case 197u: goto L_0885DC14;
    case 198u: goto L_0885DC24;
    case 199u: goto L_0885DC30;
    case 200u: goto L_0885DC44;
    case 201u: goto L_0885DC4C;
    case 202u: goto L_0885DCA8;
    case 203u: goto L_0885DCB4;
    case 204u: goto L_0885DCBC;
    case 205u: goto L_0885DCC0;
    case 206u: goto L_0885DCD0;
    case 207u: goto L_0885DCD8;
    case 208u: goto L_0885DCE8;
    case 209u: goto L_0885DCF0;
    case 210u: goto L_0885DCF4;
    case 211u: goto L_0885DD00;
    case 212u: goto L_0885DD0C;
    case 213u: goto L_0885DD14;
    case 214u: goto L_0885DD20;
    case 215u: goto L_0885DD2C;
    case 216u: goto L_0885DD34;
    case 217u: goto L_0885DD40;
    case 218u: goto L_0885DD4C;
    case 219u: goto L_0885DD54;
    case 220u: goto L_0885DD60;
    case 221u: goto L_0885DD68;
    case 222u: goto L_0885DD70;
    case 223u: goto L_0885DD7C;
    case 224u: goto L_0885DD84;
    case 225u: goto L_0885DD8C;
    case 226u: goto L_0885DD98;
    case 227u: goto L_0885DDA4;
    case 228u: goto L_0885DDB0;
    case 229u: goto L_0885DDBC;
    case 230u: goto L_0885DDC4;
    case 231u: goto L_0885DDD0;
    case 232u: goto L_0885DDDC;
    case 233u: goto L_0885DDE4;
    case 234u: goto L_0885DDF0;
    case 235u: goto L_0885DDF8;
    case 236u: goto L_0885DE08;
    case 237u: goto L_0885DE0C;
    case 238u: goto L_0885DE18;
    case 239u: goto L_0885DE2C;
    case 240u: goto L_0885DE30;
    case 241u: goto L_0885DE38;
    case 242u: goto L_0885DE4C;
    case 243u: goto L_0885DE64;
    case 244u: goto L_0885DE68;
    case 245u: goto L_0885DE70;
    case 246u: goto L_0885DE78;
    case 247u: goto L_0885DE80;
    case 248u: goto L_0885DE88;
    case 249u: goto L_0885DE94;
    case 250u: goto L_0885DE98;
    case 251u: goto L_0885DEA4;
    case 252u: goto L_0885DEA8;
    case 253u: goto L_0885DEB4;
    case 254u: goto L_0885DEB8;
    case 255u: goto L_0885DEC4;
    case 256u: goto L_0885DEC8;
    case 257u: goto L_0885DED8;
    case 258u: goto L_0885DEE0;
    case 259u: goto L_0885DEE4;
    case 260u: goto L_0885DEF4;
    case 261u: goto L_0885DEFC;
    case 262u: goto L_0885DF00;
    case 263u: goto L_0885DF10;
    case 264u: goto L_0885DF18;
    case 265u: goto L_0885DF1C;
    case 266u: goto L_0885DF2C;
    case 267u: goto L_0885DF34;
    case 268u: goto L_0885DF38;
    case 269u: goto L_0885DF44;
    case 270u: goto L_0885DF50;
    case 271u: goto L_0885DF58;
    case 272u: goto L_0885DF64;
    case 273u: goto L_0885DF6C;
    case 274u: goto L_0885DF88;
    case 275u: goto L_0885DFA8;
    case 276u: goto L_0885DFB4;
    case 277u: goto L_0885DFC4;
    case 278u: goto L_0885DFD4;
    case 279u: goto L_0885DFE0;
    case 280u: goto L_0885DFF0;
    case 281u: goto L_0885DFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0885D000:
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0885D010;
      }
      goto L_0885D008;
    }
L_0885D008:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885D014;
      }
      goto L_0885D010;
    }
L_0885D010:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_0885D014;
L_0885D014:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 242u, 0x0885CF50u>(ctx, &aot_mem); return;
      }
      goto L_0885D024;
    }
L_0885D024:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D0E0;
      }
      goto L_0885D030;
    }
L_0885D030:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (0u | 5381u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 10762u);
        goto L_0885D0D0;
    }
    goto L_0885D0D0;
L_0885D0D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_0885D0EC;
      }
      goto L_0885D0E0;
    }
L_0885D0E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_0885D0EC;
L_0885D0EC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D118:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[10] = (aot_gpr[4] | aot_gpr[10]);
    aot_gpr[5] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_0885D17C;
      }
      goto L_0885D154;
    }
L_0885D154:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885D174u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 204u, 0x0885CC5Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D174u) goto L_0885D174;
    return;
L_0885D174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D19C;
      }
      goto L_0885D17C;
    }
L_0885D17C:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885D19Cu);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 240u, 0x0885CEE0u>(ctx, &aot_mem) && ctx.pc == 0x0885D19Cu) goto L_0885D19C;
    return;
L_0885D19C:
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0885D1A8;
    }
    goto L_0885D1A8;
L_0885D1A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D1BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_0885D200;
      }
      goto L_0885D1DC;
    }
L_0885D1DC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D200;
      }
      goto L_0885D1E4;
    }
L_0885D1E4:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[4]);
      if (branch_taken) {
          goto L_0885D200;
      }
      goto L_0885D1EC;
    }
L_0885D1EC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885D200;
      }
      goto L_0885D1F4;
    }
L_0885D1F4:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0885D200u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 86u, 0x088616B0u>(ctx, &aot_mem) && ctx.pc == 0x0885D200u) goto L_0885D200;
    return;
L_0885D200:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D20C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0885D360;
      }
      goto L_0885D248;
    }
L_0885D248:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885D264u);
    aot_gpr[8] = (0u | 1u);
    goto L_0885D1BC;
L_0885D264:
    if (aot_gpr[2] != 0u) {
    aot_gpr[21] = (0u | 1u);
        goto L_0885D26C;
    }
    goto L_0885D26C;
L_0885D26C:
    aot_gpr[4] = (aot_gpr[21] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D29C;
      }
      goto L_0885D278;
    }
L_0885D278:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885D290u);
    aot_gpr[8] = (0u | 2u);
    goto L_0885D1BC;
L_0885D290:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D29C;
      }
      goto L_0885D298;
    }
L_0885D298:
    aot_gpr[21] = (0u | 1u);
    goto L_0885D29C;
L_0885D29C:
    aot_gpr[4] = (aot_gpr[21] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D2CC;
      }
      goto L_0885D2A8;
    }
L_0885D2A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885D2C0u);
    aot_gpr[8] = (0u | 4u);
    goto L_0885D1BC;
L_0885D2C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D2CC;
      }
      goto L_0885D2C8;
    }
L_0885D2C8:
    aot_gpr[21] = (0u | 1u);
    goto L_0885D2CC;
L_0885D2CC:
    aot_gpr[4] = (aot_gpr[21] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D2FC;
      }
      goto L_0885D2D8;
    }
L_0885D2D8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885D2F0u);
    aot_gpr[8] = (0u | 8u);
    goto L_0885D1BC;
L_0885D2F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D2FC;
      }
      goto L_0885D2F8;
    }
L_0885D2F8:
    aot_gpr[21] = (0u | 1u);
    goto L_0885D2FC;
L_0885D2FC:
    aot_gpr[4] = (aot_gpr[21] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D32C;
      }
      goto L_0885D308;
    }
L_0885D308:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885D320u);
    aot_gpr[8] = (0u | 16u);
    goto L_0885D1BC;
L_0885D320:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D32C;
      }
      goto L_0885D328;
    }
L_0885D328:
    aot_gpr[21] = (0u | 1u);
    goto L_0885D32C;
L_0885D32C:
    aot_gpr[4] = (aot_gpr[21] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D35C;
      }
      goto L_0885D338;
    }
L_0885D338:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885D350u);
    aot_gpr[8] = (0u | 32u);
    goto L_0885D1BC;
L_0885D350:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[21] & 255u);
      if (branch_taken) {
          goto L_0885D360;
      }
      goto L_0885D358;
    }
L_0885D358:
    aot_gpr[21] = (0u | 1u);
    goto L_0885D35C;
L_0885D35C:
    aot_gpr[2] = (aot_gpr[21] & 255u);
    goto L_0885D360;
L_0885D360:
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
L_0885D384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x0885D3D8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 154u, 0x0885C998u>(ctx, &aot_mem) && ctx.pc == 0x0885D3D8u) goto L_0885D3D8;
    return;
L_0885D3D8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0885D3E4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 192u, 0x0885CBECu>(ctx, &aot_mem) && ctx.pc == 0x0885D3E4u) goto L_0885D3E4;
    return;
L_0885D3E4:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[22] = (static_cast<std::int32_t>(aot_gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885D41C;
      }
      goto L_0885D3F4;
    }
L_0885D3F4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D418;
      }
      goto L_0885D400;
    }
L_0885D400:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0885D40Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 198u, 0x0885CC24u>(ctx, &aot_mem) && ctx.pc == 0x0885D40Cu) goto L_0885D40C;
    return;
L_0885D40C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_0885D41C;
      }
      goto L_0885D414;
    }
L_0885D414:
    aot_gpr[6] = (0u | 1u);
    goto L_0885D418;
L_0885D418:
    aot_gpr[4] = (aot_gpr[6] & 255u);
    goto L_0885D41C;
L_0885D41C:
    aot_gpr[7] = (0u < aot_gpr[20] ? 1u : 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[4]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_0885D434;
L_0885D434:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0885D57C;
      }
      goto L_0885D43C;
    }
L_0885D43C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D57C;
      }
      goto L_0885D444;
    }
L_0885D444:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885D458u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 109u, 0x08A4C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D458u) goto L_0885D458;
    return;
L_0885D458:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(109)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D480;
      }
      goto L_0885D464;
    }
L_0885D464:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(88)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0885D480;
      }
      goto L_0885D47C;
    }
L_0885D47C:
    aot_gpr[6] = (0u | 1u);
    goto L_0885D480;
L_0885D480:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D4B0;
      }
      goto L_0885D48C;
    }
L_0885D48C:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885D4A4;
      }
      goto L_0885D494;
    }
L_0885D494:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0885D4A0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 198u, 0x0885CC24u>(ctx, &aot_mem) && ctx.pc == 0x0885D4A0u) goto L_0885D4A0;
    return;
L_0885D4A0:
    aot_gpr[4] = (0u < aot_gpr[2] ? 1u : 0u);
    goto L_0885D4A4;
L_0885D4A4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D4B0;
      }
      goto L_0885D4AC;
    }
L_0885D4AC:
    aot_gpr[7] = (0u | 1u);
    goto L_0885D4B0;
L_0885D4B0:
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (aot_gpr[17] | 0u);
        goto L_0885D4C0;
    }
    goto L_0885D4C0;
L_0885D4C0:
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_0885D4F4;
      }
      goto L_0885D4C8;
    }
L_0885D4C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D4F4;
      }
      goto L_0885D4D0;
    }
L_0885D4D0:
    { const bool branch_taken = aot_gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885D4F4;
      }
      goto L_0885D4D8;
    }
L_0885D4D8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0885D4F0u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    goto L_0885D118;
L_0885D4F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885D4F4;
L_0885D4F4:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[5] = (0u < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0885D50C;
      }
      goto L_0885D4FC;
    }
L_0885D4FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
      if (branch_taken) {
          goto L_0885D50C;
      }
      goto L_0885D50C;
    }
L_0885D50C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D538;
      }
      goto L_0885D514;
    }
L_0885D514:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0885D52Cu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    goto L_0885D20C;
L_0885D52C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D538;
      }
      goto L_0885D534;
    }
L_0885D534:
    aot_gpr[16] = (0u | 1u);
    goto L_0885D538;
L_0885D538:
    aot_gpr[4] = (aot_gpr[16] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D560;
      }
      goto L_0885D544;
    }
L_0885D544:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0885D554u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 6u, 0x08861044u>(ctx, &aot_mem) && ctx.pc == 0x0885D554u) goto L_0885D554;
    return;
L_0885D554:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D560;
      }
      goto L_0885D55C;
    }
L_0885D55C:
    aot_gpr[16] = (0u | 1u);
    goto L_0885D560;
L_0885D560:
    aot_gpr[16] = (aot_gpr[16] & 255u);
    aot_gpr[7] = (aot_gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885D574u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 116u, 0x08A4C790u>(ctx, &aot_mem) && ctx.pc == 0x0885D574u) goto L_0885D574;
    return;
L_0885D574:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0885D434;
      }
      goto L_0885D57C;
    }
L_0885D57C:
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_0885D588;
    }
    goto L_0885D588;
L_0885D588:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D5A4;
      }
      goto L_0885D598;
    }
L_0885D598:
    { const bool branch_taken = aot_gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885D5A4;
      }
      goto L_0885D5A0;
    }
L_0885D5A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0885D5A4;
L_0885D5A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D5D8;
      }
      goto L_0885D5B0;
    }
L_0885D5B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0885D5CC;
      }
      goto L_0885D5BC;
    }
L_0885D5BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
      if (branch_taken) {
          goto L_0885D5CC;
      }
      goto L_0885D5CC;
    }
L_0885D5CC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D5D8;
      }
      goto L_0885D5D4;
    }
L_0885D5D4:
    aot_gpr[4] = (0u | 1u);
    goto L_0885D5D8;
L_0885D5D8:
    aot_gpr[2] = (aot_gpr[4] & 255u);
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
L_0885D60C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[30]);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[30] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[19] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[23] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
      if (branch_taken) {
          goto L_0885D674;
      }
      goto L_0885D664;
    }
L_0885D664:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0885D670u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 123u, 0x0885C7B8u>(ctx, &aot_mem) && ctx.pc == 0x0885D670u) goto L_0885D670;
    return;
L_0885D670:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0885D674;
L_0885D674:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0885D6A0;
      }
      goto L_0885D67C;
    }
L_0885D67C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D69C;
      }
      goto L_0885D684;
    }
L_0885D684:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0885D690u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 124u, 0x0885C7CCu>(ctx, &aot_mem) && ctx.pc == 0x0885D690u) goto L_0885D690;
    return;
L_0885D690:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_0885D6A0;
      }
      goto L_0885D698;
    }
L_0885D698:
    aot_gpr[6] = (0u | 1u);
    goto L_0885D69C;
L_0885D69C:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    goto L_0885D6A0;
L_0885D6A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885D6E0;
      }
      goto L_0885D6AC;
    }
L_0885D6AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D6DC;
      }
      goto L_0885D6B8;
    }
L_0885D6B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0885D6D0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 127u, 0x0885C7ECu>(ctx, &aot_mem) && ctx.pc == 0x0885D6D0u) goto L_0885D6D0;
    return;
L_0885D6D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_0885D6E0;
      }
      goto L_0885D6D8;
    }
L_0885D6D8:
    aot_gpr[7] = (0u | 1u);
    goto L_0885D6DC;
L_0885D6DC:
    aot_gpr[4] = (aot_gpr[7] & 255u);
    goto L_0885D6E0;
L_0885D6E0:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[21] = (0u | 1u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0885D6EC;
L_0885D6EC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D8EC;
      }
      goto L_0885D6F4;
    }
L_0885D6F4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D8EC;
      }
      goto L_0885D6FC;
    }
L_0885D6FC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885D70Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 109u, 0x08A4C73Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D70Cu) goto L_0885D70C;
    return;
L_0885D70C:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0885D720u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 134u, 0x0885C83Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D720u) goto L_0885D720;
    return;
L_0885D720:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(96)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(92)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D75C;
      }
      goto L_0885D740;
    }
L_0885D740:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D75C;
      }
      goto L_0885D758;
    }
L_0885D758:
    aot_gpr[17] = (aot_gpr[21] | 0u);
    goto L_0885D75C;
L_0885D75C:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D798;
      }
      goto L_0885D768;
    }
L_0885D768:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[21];
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0885D78C;
      }
      goto L_0885D774;
    }
L_0885D774:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_0885D78C;
L_0885D78C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D798;
      }
      goto L_0885D794;
    }
L_0885D794:
    aot_gpr[17] = (aot_gpr[21] | 0u);
    goto L_0885D798;
L_0885D798:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D7D4;
      }
      goto L_0885D7A4;
    }
L_0885D7A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[21];
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0885D7C8;
      }
      goto L_0885D7B0;
    }
L_0885D7B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_0885D7C8;
L_0885D7C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D7D4;
      }
      goto L_0885D7D0;
    }
L_0885D7D0:
    aot_gpr[17] = (aot_gpr[21] | 0u);
    goto L_0885D7D4;
L_0885D7D4:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D844;
      }
      goto L_0885D7E0;
    }
L_0885D7E0:
    if (aot_gpr[23] == 0u) {
    aot_gpr[17] = (aot_gpr[21] | 0u);
        goto L_0885D844;
    }
    goto L_0885D7E8;
L_0885D7E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (0u | 10u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[16] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0885D838;
      }
      goto L_0885D7FC;
    }
L_0885D7FC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7512)));
    aot_gpr[31] = (0x0885D80Cu);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 253u, 0x088BEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D80Cu) goto L_0885D80C;
    return;
L_0885D80C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_0885D82C;
      }
      goto L_0885D814;
    }
L_0885D814:
    aot_gpr[31] = (0x0885D81Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7512)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 253u, 0x088BEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885D81Cu) goto L_0885D81C;
    return;
L_0885D81C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4052)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] & 255u);
      if (branch_taken) {
          goto L_0885D830;
      }
      goto L_0885D828;
    }
L_0885D828:
    aot_gpr[16] = (aot_gpr[21] | 0u);
    goto L_0885D82C;
L_0885D82C:
    aot_gpr[16] = (aot_gpr[16] & 255u);
    goto L_0885D830;
L_0885D830:
    aot_gpr[16] = (0u < aot_gpr[16] ? 1u : 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0885D838;
L_0885D838:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D844;
      }
      goto L_0885D840;
    }
L_0885D840:
    aot_gpr[17] = (aot_gpr[21] | 0u);
    goto L_0885D844;
L_0885D844:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D874;
      }
      goto L_0885D850;
    }
L_0885D850:
    if (aot_gpr[23] != 0u) {
    aot_gpr[17] = (aot_gpr[21] | 0u);
        goto L_0885D874;
    }
    goto L_0885D858;
L_0885D858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[22] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D874;
      }
      goto L_0885D870;
    }
L_0885D870:
    aot_gpr[17] = (aot_gpr[21] | 0u);
    goto L_0885D874;
L_0885D874:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D8C8;
      }
      goto L_0885D880;
    }
L_0885D880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    aot_gpr[6] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_0885D8BC;
      }
      goto L_0885D88C;
    }
L_0885D88C:
    { const bool branch_taken = aot_gpr[23] != 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D8B0;
      }
      goto L_0885D894;
    }
L_0885D894:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(192)));
    aot_gpr[4] = (aot_gpr[9] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x0885D8A8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 138u, 0x0885C884u>(ctx, &aot_mem) && ctx.pc == 0x0885D8A8u) goto L_0885D8A8;
    return;
L_0885D8A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_0885D8B8;
      }
      goto L_0885D8B0;
    }
L_0885D8B0:
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    goto L_0885D8B8;
L_0885D8B8:
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    goto L_0885D8BC;
L_0885D8BC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D8C8;
      }
      goto L_0885D8C4;
    }
L_0885D8C4:
    aot_gpr[7] = (aot_gpr[21] | 0u);
    goto L_0885D8C8;
L_0885D8C8:
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0885D8D8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 116u, 0x08A4C790u>(ctx, &aot_mem) && ctx.pc == 0x0885D8D8u) goto L_0885D8D8;
    return;
L_0885D8D8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0885D6EC;
      }
      goto L_0885D8EC;
    }
L_0885D8EC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D91C;
      }
      goto L_0885D8F4;
    }
L_0885D8F4:
    if (aot_gpr[23] != 0u) {
    aot_gpr[16] = (0u | 1u);
        goto L_0885D91C;
    }
    goto L_0885D8FC;
L_0885D8FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0885D910u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 144u, 0x0885C8D0u>(ctx, &aot_mem) && ctx.pc == 0x0885D910u) goto L_0885D910;
    return;
L_0885D910:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D91C;
      }
      goto L_0885D918;
    }
L_0885D918:
    aot_gpr[16] = (0u | 1u);
    goto L_0885D91C;
L_0885D91C:
    aot_gpr[4] = (aot_gpr[16] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D94C;
      }
      goto L_0885D928;
    }
L_0885D928:
    if (aot_gpr[23] != 0u) {
    aot_gpr[16] = (0u | 1u);
        goto L_0885D94C;
    }
    goto L_0885D930;
L_0885D930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0885D940u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_0885D384;
L_0885D940:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D94C;
      }
      goto L_0885D948;
    }
L_0885D948:
    aot_gpr[16] = (0u | 1u);
    goto L_0885D94C;
L_0885D94C:
    aot_gpr[2] = (aot_gpr[16] & 255u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885D980:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0885D9ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 162u, 0x0885BAD8u>(ctx, &aot_mem) && ctx.pc == 0x0885D9ACu) goto L_0885D9AC;
    return;
L_0885D9AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D9D0;
      }
      goto L_0885D9B4;
    }
L_0885D9B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885D9D0;
      }
      goto L_0885D9CC;
    }
L_0885D9CC:
    aot_gpr[17] = (0u | 1u);
    goto L_0885D9D0;
L_0885D9D0:
    aot_gpr[4] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885D9FC;
      }
      goto L_0885D9DC;
    }
L_0885D9DC:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885D9F0u);
    aot_gpr[7] = (0u | 0u);
    goto L_0885D60C;
L_0885D9F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885D9FC;
      }
      goto L_0885D9F8;
    }
L_0885D9F8:
    aot_gpr[17] = (0u | 1u);
    goto L_0885D9FC;
L_0885D9FC:
    aot_gpr[17] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DA20;
      }
      goto L_0885DA08;
    }
L_0885DA08:
    aot_gpr[31] = (0x0885DA10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 158u, 0x0885BA88u>(ctx, &aot_mem) && ctx.pc == 0x0885DA10u) goto L_0885DA10;
    return;
L_0885DA10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0885DA20;
L_0885DA20:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_0885DA3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[11] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[10] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0885DACC;
      }
      goto L_0885DA54;
    }
L_0885DA54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[6] & 32u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
        goto L_0885DA90;
    }
    goto L_0885DA70;
L_0885DA70:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[11] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (aot_gpr[11] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x0885DA84u);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 21u, 0x0885C16Cu>(ctx, &aot_mem) && ctx.pc == 0x0885DA84u) goto L_0885DA84;
    return;
L_0885DA84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    goto L_0885DA90;
L_0885DA90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (aot_gpr[4] & 25u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DACC;
      }
      goto L_0885DAB8;
    }
L_0885DAB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_0885DACC;
L_0885DACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DB50;
      }
      goto L_0885DAD8;
    }
L_0885DAD8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (aot_gpr[6] & 32u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
        goto L_0885DB14;
    }
    goto L_0885DAF4;
L_0885DAF4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[11] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (aot_gpr[11] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x0885DB08u);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 21u, 0x0885C16Cu>(ctx, &aot_mem) && ctx.pc == 0x0885DB08u) goto L_0885DB08;
    return;
L_0885DB08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    goto L_0885DB14;
L_0885DB14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(60)));
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] & 25u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DB50;
      }
      goto L_0885DB3C;
    }
L_0885DB3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    goto L_0885DB50;
L_0885DB50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DB5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<20u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (0u | 1u);
        goto L_0885DBE8;
    }
    goto L_0885DBE8;
L_0885DBE8:
    aot_gpr[2] = (aot_gpr[4] & 255u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DBF4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0885DC44;
      }
      goto L_0885DBFC;
    }
L_0885DBFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885DC44;
      }
      goto L_0885DC08;
    }
L_0885DC08:
    aot_gpr[7] = (aot_gpr[6] & 128u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DC24;
      }
      goto L_0885DC14;
    }
L_0885DC14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(256)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(256), aot_gpr[7]);
    goto L_0885DC24;
L_0885DC24:
    aot_gpr[5] = (aot_gpr[6] & 1024u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DC44;
      }
      goto L_0885DC30;
    }
L_0885DC30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(260)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(260), aot_gpr[5]);
    goto L_0885DC44;
L_0885DC44:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885DC4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[22]);
    aot_gpr[2] = (aot_gpr[2] & 255u);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[30]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[9] | 0u);
    aot_gpr[30] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[23] = (1u << 16u);
      if (branch_taken) {
          goto L_0885DCC0;
      }
      goto L_0885DCA8;
    }
L_0885DCA8:
    aot_gpr[5] = (aot_gpr[6] & 5381u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[6] & 10762u);
      if (branch_taken) {
          goto L_0885DCC0;
      }
      goto L_0885DCB4;
    }
L_0885DCB4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DCC0;
      }
      goto L_0885DCBC;
    }
L_0885DCBC:
    aot_gpr[4] = (0u | 1u);
    goto L_0885DCC0;
L_0885DCC0:
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (0u | 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u < aot_gpr[18] ? 1u : 0u);
        goto L_0885DCD0;
    }
    goto L_0885DCD0;
L_0885DCD0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] & 5381u);
      if (branch_taken) {
          goto L_0885DCF0;
      }
      goto L_0885DCD8;
    }
L_0885DCD8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0885DCE8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_0885DB5C;
L_0885DCE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_0885DCF4;
      }
      goto L_0885DCF0;
    }
L_0885DCF0:
    aot_gpr[16] = (0u < aot_gpr[16] ? 1u : 0u);
    goto L_0885DCF4;
L_0885DCF4:
    aot_gpr[4] = (aot_gpr[20] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0885DD14;
      }
      goto L_0885DD00;
    }
L_0885DD00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0885DD0Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 153u, 0x08821EFCu>(ctx, &aot_mem) && ctx.pc == 0x0885DD0Cu) goto L_0885DD0C;
    return;
L_0885DD0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DD14;
    }
L_0885DD14:
    aot_gpr[4] = (aot_gpr[20] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DD34;
      }
      goto L_0885DD20;
    }
L_0885DD20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0885DD2Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 123u, 0x08821CB0u>(ctx, &aot_mem) && ctx.pc == 0x0885DD2Cu) goto L_0885DD2C;
    return;
L_0885DD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DD34;
    }
L_0885DD34:
    aot_gpr[4] = (aot_gpr[20] & 4u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DD54;
      }
      goto L_0885DD40;
    }
L_0885DD40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0885DD4Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 129u, 0x08821D28u>(ctx, &aot_mem) && ctx.pc == 0x0885DD4Cu) goto L_0885DD4C;
    return;
L_0885DD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DD54;
    }
L_0885DD54:
    aot_gpr[4] = (aot_gpr[20] & 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DD70;
      }
      goto L_0885DD60;
    }
L_0885DD60:
    aot_gpr[31] = (0x0885DD68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 33u, 0x08822244u>(ctx, &aot_mem) && ctx.pc == 0x0885DD68u) goto L_0885DD68;
    return;
L_0885DD68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DD70;
    }
L_0885DD70:
    aot_gpr[4] = (aot_gpr[20] & 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DD8C;
      }
      goto L_0885DD7C;
    }
L_0885DD7C:
    aot_gpr[31] = (0x0885DD84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 45u, 0x0882236Cu>(ctx, &aot_mem) && ctx.pc == 0x0885DD84u) goto L_0885DD84;
    return;
L_0885DD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DD8C;
    }
L_0885DD8C:
    aot_gpr[4] = (aot_gpr[20] & 2048u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DDE4;
      }
      goto L_0885DD98;
    }
L_0885DD98:
    aot_gpr[4] = (aot_gpr[7] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0885DDC4;
      }
      goto L_0885DDA4;
    }
L_0885DDA4:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0885DDB0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 135u, 0x08821DA4u>(ctx, &aot_mem) && ctx.pc == 0x0885DDB0u) goto L_0885DDB0;
    return;
L_0885DDB0:
    aot_gpr[17] = (0u | 15u);
    if (aot_gpr[16] != 0u) {
    aot_gpr[17] = (0u | 2u);
        goto L_0885DDBC;
    }
    goto L_0885DDBC;
L_0885DDBC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(104), aot_gpr[17]);
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DDC4;
    }
L_0885DDC4:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x0885DDD0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 144u, 0x08821E50u>(ctx, &aot_mem) && ctx.pc == 0x0885DDD0u) goto L_0885DDD0;
    return;
L_0885DDD0:
    aot_gpr[17] = (0u | 13u);
    if (aot_gpr[16] != 0u) {
    aot_gpr[17] = (0u | 8u);
        goto L_0885DDDC;
    }
    goto L_0885DDDC;
L_0885DDDC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(104), aot_gpr[17]);
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DDE4;
    }
L_0885DDE4:
    aot_gpr[4] = (aot_gpr[20] & 4096u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DDF0;
    }
L_0885DDF0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885DE0C;
      }
      goto L_0885DDF8;
    }
L_0885DDF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885DE0C;
      }
      goto L_0885DE08;
    }
L_0885DE08:
    aot_gpr[4] = (0u | 1u);
    goto L_0885DE0C;
L_0885DE0C:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0885DE30;
      }
      goto L_0885DE18;
    }
L_0885DE18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(92)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE30;
      }
      goto L_0885DE2C;
    }
L_0885DE2C:
    aot_gpr[16] = (0u | 1u);
    goto L_0885DE30;
L_0885DE30:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] & 255u);
      if (branch_taken) {
          goto L_0885DE68;
      }
      goto L_0885DE38;
    }
L_0885DE38:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[31] = (0x0885DE4Cu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0885DE4Cu) goto L_0885DE4C;
    return;
L_0885DE4C:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[16] = (0u | 1u);
        goto L_0885DE64;
    }
    goto L_0885DE64;
L_0885DE64:
    aot_gpr[16] = (aot_gpr[16] & 255u);
    goto L_0885DE68;
L_0885DE68:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0885DE80;
      }
      goto L_0885DE70;
    }
L_0885DE70:
    aot_gpr[31] = (0x0885DE78u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 9u, 0x088220A0u>(ctx, &aot_mem) && ctx.pc == 0x0885DE78u) goto L_0885DE78;
    return;
L_0885DE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE88;
      }
      goto L_0885DE80;
    }
L_0885DE80:
    aot_gpr[31] = (0x0885DE88u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 153u, 0x08821EFCu>(ctx, &aot_mem) && ctx.pc == 0x0885DE88u) goto L_0885DE88;
    return;
L_0885DE88:
    aot_gpr[4] = (aot_gpr[20] & 16384u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DE98;
      }
      goto L_0885DE94;
    }
L_0885DE94:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    goto L_0885DE98;
L_0885DE98:
    aot_gpr[4] = (aot_gpr[20] & 8192u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DEA8;
      }
      goto L_0885DEA4;
    }
L_0885DEA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    goto L_0885DEA8;
L_0885DEA8:
    aot_gpr[4] = (aot_gpr[20] & aot_gpr[23]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DEB8;
      }
      goto L_0885DEB4;
    }
L_0885DEB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(36), 0u);
    goto L_0885DEB8;
L_0885DEB8:
    aot_gpr[4] = (aot_gpr[20] & 32768u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DEC8;
      }
      goto L_0885DEC4;
    }
L_0885DEC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(40), 0u);
    goto L_0885DEC8;
L_0885DEC8:
    aot_gpr[4] = (4u << 16u);
    aot_gpr[4] = (aot_gpr[20] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DEE4;
      }
      goto L_0885DED8;
    }
L_0885DED8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DEE4;
      }
      goto L_0885DEE0;
    }
L_0885DEE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    goto L_0885DEE4;
L_0885DEE4:
    aot_gpr[4] = (2u << 16u);
    aot_gpr[4] = (aot_gpr[20] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF00;
      }
      goto L_0885DEF4;
    }
L_0885DEF4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF00;
      }
      goto L_0885DEFC;
    }
L_0885DEFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    goto L_0885DF00;
L_0885DF00:
    aot_gpr[4] = (16u << 16u);
    aot_gpr[4] = (aot_gpr[20] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF1C;
      }
      goto L_0885DF10;
    }
L_0885DF10:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF1C;
      }
      goto L_0885DF18;
    }
L_0885DF18:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(36), 0u);
    goto L_0885DF1C;
L_0885DF1C:
    aot_gpr[4] = (8u << 16u);
    aot_gpr[4] = (aot_gpr[20] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF38;
      }
      goto L_0885DF2C;
    }
L_0885DF2C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF38;
      }
      goto L_0885DF34;
    }
L_0885DF34:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(40), 0u);
    goto L_0885DF38;
L_0885DF38:
    aot_gpr[4] = (aot_gpr[20] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF58;
      }
      goto L_0885DF44;
    }
L_0885DF44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DF58;
      }
      goto L_0885DF50;
    }
L_0885DF50:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_0885DF58;
L_0885DF58:
    aot_gpr[4] = (aot_gpr[20] & 128u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[20] & 64u);
      if (branch_taken) {
          goto L_0885DF6C;
      }
      goto L_0885DF64;
    }
L_0885DF64:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DFD4;
      }
      goto L_0885DF6C;
    }
L_0885DF6C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0885DFD4;
      }
      goto L_0885DF88;
    }
L_0885DF88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
    aot_gpr[5] = (aot_gpr[5] & 16u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885DFC4;
      }
      goto L_0885DFA8;
    }
L_0885DFA8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885DFB4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x0880FE24u>(ctx, &aot_mem) && ctx.pc == 0x0885DFB4u) goto L_0885DFB4;
    return;
L_0885DFB4:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0885DFC4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    goto L_0885DBF4;
L_0885DFC4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(2112));
      if (branch_taken) {
          goto L_0885DF88;
      }
      goto L_0885DFD4;
    }
L_0885DFD4:
    aot_gpr[4] = (aot_gpr[20] & 1024u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 4u, 0x0885E038u>(ctx, &aot_mem); return;
      }
      goto L_0885DFE0;
    }
L_0885DFE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2092)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 1u, 0x0885E004u>(ctx, &aot_mem); return;
      }
      goto L_0885DFF0;
    }
L_0885DFF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0885DFFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 145u, 0x08811AD4u>(ctx, &aot_mem) && ctx.pc == 0x0885DFFCu) goto L_0885DFFC;
    return;
L_0885DFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 4u, 0x0885E038u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 1u, 0x0885E004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0089(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0089_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_89(Runtime &runtime) {
    runtime.register_generated_unit(89u, 0x0885D000u, 4096u, &recomp_unit_0089, &recomp_unit_0089_entry);
    runtime.register_function(0x0885D000u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D008u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D010u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D014u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D024u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D030u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D0D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D0E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D0ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D118u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D154u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D174u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D17Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D19Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D1A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D1BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D1DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D1E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D1ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D1F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D200u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D20Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D248u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D264u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D26Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D278u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D290u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D298u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D29Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D2A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D2C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D2C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D2CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D2D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D2F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D2F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D2FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D308u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D320u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D328u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D32Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D338u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D350u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D358u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D35Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D360u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D384u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D3D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D3E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D3F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D400u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D40Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D414u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D418u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D41Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D434u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D43Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D444u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D458u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D464u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D47Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D480u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D48Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D494u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D4FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D50Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D514u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D52Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D534u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D538u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D544u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D554u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D55Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D560u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D574u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D57Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D588u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D598u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D5A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D5A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D5B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D5BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D5CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D5D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D5D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D60Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D664u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D670u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D674u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D67Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D684u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D690u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D698u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D69Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D6FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D70Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D720u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D740u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D758u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D75Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D768u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D774u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D78Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D794u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D798u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D7A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D7B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D7C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D7D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D7D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D7E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D7E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D7FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D80Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D814u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D81Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D828u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D82Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D830u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D838u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D840u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D844u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D850u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D858u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D870u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D874u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D880u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D88Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D894u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D8FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D910u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D918u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D91Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D928u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D930u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D940u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D948u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D94Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D980u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D9ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D9B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D9CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D9D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D9DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D9F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D9F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885D9FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DA08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DA10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DA20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DA3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DA54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DA70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DA84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DA90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DAB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DACCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DAD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DAF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DB08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DB14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DB3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DB50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DB5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DBE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DBF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DBFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DC08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DC14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DC24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DC30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DC44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DC4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DCF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DD98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DDF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DE98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DED8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DEFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DF88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DFA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DFB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DFC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DFD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DFE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DFF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0885DFFCu, &recomp_unit_0089, "recomp_unit_0089");
}
} // namespace psprecomp
