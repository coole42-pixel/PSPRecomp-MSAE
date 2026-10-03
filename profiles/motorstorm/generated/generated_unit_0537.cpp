#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0537[1024] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0,
    17, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0,
    60, 0, 61, 0, 62, 0, 0, 63, 64, 0, 65, 0, 0, 0, 0, 0, 66, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78,
    0, 79, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0,
    0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0,
    0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125,
    0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 133,
    0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0,
    0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184,
    0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0,
    0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0,
    0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 221, 222, 0, 0, 223, 0, 224, 0,
    225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0,
    0, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238,
    0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247,
};
void recomp_unit_0537_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A1D000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0537[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A1D000;
    case 2u: goto L_08A1D010;
    case 3u: goto L_08A1D018;
    case 4u: goto L_08A1D028;
    case 5u: goto L_08A1D034;
    case 6u: goto L_08A1D044;
    case 7u: goto L_08A1D050;
    case 8u: goto L_08A1D060;
    case 9u: goto L_08A1D06C;
    case 10u: goto L_08A1D090;
    case 11u: goto L_08A1D0A8;
    case 12u: goto L_08A1D0CC;
    case 13u: goto L_08A1D0DC;
    case 14u: goto L_08A1D0E8;
    case 15u: goto L_08A1D0F0;
    case 16u: goto L_08A1D0F8;
    case 17u: goto L_08A1D100;
    case 18u: goto L_08A1D108;
    case 19u: goto L_08A1D110;
    case 20u: goto L_08A1D11C;
    case 21u: goto L_08A1D138;
    case 22u: goto L_08A1D168;
    case 23u: goto L_08A1D17C;
    case 24u: goto L_08A1D190;
    case 25u: goto L_08A1D1A4;
    case 26u: goto L_08A1D1B8;
    case 27u: goto L_08A1D1CC;
    case 28u: goto L_08A1D1E0;
    case 29u: goto L_08A1D1F4;
    case 30u: goto L_08A1D208;
    case 31u: goto L_08A1D21C;
    case 32u: goto L_08A1D230;
    case 33u: goto L_08A1D238;
    case 34u: goto L_08A1D244;
    case 35u: goto L_08A1D24C;
    case 36u: goto L_08A1D260;
    case 37u: goto L_08A1D274;
    case 38u: goto L_08A1D280;
    case 39u: goto L_08A1D290;
    case 40u: goto L_08A1D2A4;
    case 41u: goto L_08A1D2B0;
    case 42u: goto L_08A1D2B8;
    case 43u: goto L_08A1D2C4;
    case 44u: goto L_08A1D2D4;
    case 45u: goto L_08A1D2FC;
    case 46u: goto L_08A1D320;
    case 47u: goto L_08A1D340;
    case 48u: goto L_08A1D348;
    case 49u: goto L_08A1D350;
    case 50u: goto L_08A1D364;
    case 51u: goto L_08A1D380;
    case 52u: goto L_08A1D388;
    case 53u: goto L_08A1D39C;
    case 54u: goto L_08A1D3C8;
    case 55u: goto L_08A1D3D4;
    case 56u: goto L_08A1D3DC;
    case 57u: goto L_08A1D3E4;
    case 58u: goto L_08A1D3F0;
    case 59u: goto L_08A1D3F8;
    case 60u: goto L_08A1D400;
    case 61u: goto L_08A1D408;
    case 62u: goto L_08A1D410;
    case 63u: goto L_08A1D41C;
    case 64u: goto L_08A1D420;
    case 65u: goto L_08A1D428;
    case 66u: goto L_08A1D440;
    case 67u: goto L_08A1D444;
    case 68u: goto L_08A1D44C;
    case 69u: goto L_08A1D454;
    case 70u: goto L_08A1D470;
    case 71u: goto L_08A1D4B0;
    case 72u: goto L_08A1D4B8;
    case 73u: goto L_08A1D4C4;
    case 74u: goto L_08A1D4CC;
    case 75u: goto L_08A1D4DC;
    case 76u: goto L_08A1D4E4;
    case 77u: goto L_08A1D4F4;
    case 78u: goto L_08A1D4FC;
    case 79u: goto L_08A1D504;
    case 80u: goto L_08A1D508;
    case 81u: goto L_08A1D514;
    case 82u: goto L_08A1D534;
    case 83u: goto L_08A1D540;
    case 84u: goto L_08A1D560;
    case 85u: goto L_08A1D568;
    case 86u: goto L_08A1D574;
    case 87u: goto L_08A1D594;
    case 88u: goto L_08A1D5A0;
    case 89u: goto L_08A1D5A8;
    case 90u: goto L_08A1D5B4;
    case 91u: goto L_08A1D5C0;
    case 92u: goto L_08A1D5E0;
    case 93u: goto L_08A1D5EC;
    case 94u: goto L_08A1D5F4;
    case 95u: goto L_08A1D604;
    case 96u: goto L_08A1D60C;
    case 97u: goto L_08A1D61C;
    case 98u: goto L_08A1D624;
    case 99u: goto L_08A1D634;
    case 100u: goto L_08A1D63C;
    case 101u: goto L_08A1D640;
    case 102u: goto L_08A1D650;
    case 103u: goto L_08A1D670;
    case 104u: goto L_08A1D690;
    case 105u: goto L_08A1D6B8;
    case 106u: goto L_08A1D6C4;
    case 107u: goto L_08A1D6E8;
    case 108u: goto L_08A1D6F4;
    case 109u: goto L_08A1D708;
    case 110u: goto L_08A1D718;
    case 111u: goto L_08A1D728;
    case 112u: goto L_08A1D778;
    case 113u: goto L_08A1D798;
    case 114u: goto L_08A1D7A4;
    case 115u: goto L_08A1D7B0;
    case 116u: goto L_08A1D7B4;
    case 117u: goto L_08A1D7BC;
    case 118u: goto L_08A1D7D4;
    case 119u: goto L_08A1D7F8;
    case 120u: goto L_08A1D80C;
    case 121u: goto L_08A1D820;
    case 122u: goto L_08A1D828;
    case 123u: goto L_08A1D83C;
    case 124u: goto L_08A1D85C;
    case 125u: goto L_08A1D87C;
    case 126u: goto L_08A1D88C;
    case 127u: goto L_08A1D898;
    case 128u: goto L_08A1D8A0;
    case 129u: goto L_08A1D8A8;
    case 130u: goto L_08A1D8E0;
    case 131u: goto L_08A1D8EC;
    case 132u: goto L_08A1D8F8;
    case 133u: goto L_08A1D8FC;
    case 134u: goto L_08A1D904;
    case 135u: goto L_08A1D910;
    case 136u: goto L_08A1D91C;
    case 137u: goto L_08A1D924;
    case 138u: goto L_08A1D92C;
    case 139u: goto L_08A1D930;
    case 140u: goto L_08A1D938;
    case 141u: goto L_08A1D944;
    case 142u: goto L_08A1D950;
    case 143u: goto L_08A1D958;
    case 144u: goto L_08A1D960;
    case 145u: goto L_08A1D968;
    case 146u: goto L_08A1D98C;
    case 147u: goto L_08A1D994;
    case 148u: goto L_08A1D99C;
    case 149u: goto L_08A1D9B8;
    case 150u: goto L_08A1D9C4;
    case 151u: goto L_08A1D9D0;
    case 152u: goto L_08A1D9E4;
    case 153u: goto L_08A1D9F8;
    case 154u: goto L_08A1DA04;
    case 155u: goto L_08A1DA10;
    case 156u: goto L_08A1DA1C;
    case 157u: goto L_08A1DA34;
    case 158u: goto L_08A1DA3C;
    case 159u: goto L_08A1DA48;
    case 160u: goto L_08A1DA54;
    case 161u: goto L_08A1DA5C;
    case 162u: goto L_08A1DA64;
    case 163u: goto L_08A1DA6C;
    case 164u: goto L_08A1DA78;
    case 165u: goto L_08A1DA88;
    case 166u: goto L_08A1DAA8;
    case 167u: goto L_08A1DAB0;
    case 168u: goto L_08A1DAB8;
    case 169u: goto L_08A1DAC8;
    case 170u: goto L_08A1DAD8;
    case 171u: goto L_08A1DAEC;
    case 172u: goto L_08A1DB00;
    case 173u: goto L_08A1DB0C;
    case 174u: goto L_08A1DB14;
    case 175u: goto L_08A1DB1C;
    case 176u: goto L_08A1DB28;
    case 177u: goto L_08A1DB34;
    case 178u: goto L_08A1DB3C;
    case 179u: goto L_08A1DB6C;
    case 180u: goto L_08A1DB9C;
    case 181u: goto L_08A1DBC4;
    case 182u: goto L_08A1DBE8;
    case 183u: goto L_08A1DBF4;
    case 184u: goto L_08A1DBFC;
    case 185u: goto L_08A1DC04;
    case 186u: goto L_08A1DC0C;
    case 187u: goto L_08A1DC18;
    case 188u: goto L_08A1DC20;
    case 189u: goto L_08A1DC40;
    case 190u: goto L_08A1DC48;
    case 191u: goto L_08A1DC60;
    case 192u: goto L_08A1DC68;
    case 193u: goto L_08A1DC70;
    case 194u: goto L_08A1DC84;
    case 195u: goto L_08A1DC8C;
    case 196u: goto L_08A1DCA4;
    case 197u: goto L_08A1DCB4;
    case 198u: goto L_08A1DCBC;
    case 199u: goto L_08A1DCC8;
    case 200u: goto L_08A1DCD0;
    case 201u: goto L_08A1DCE8;
    case 202u: goto L_08A1DCF0;
    case 203u: goto L_08A1DCF8;
    case 204u: goto L_08A1DD04;
    case 205u: goto L_08A1DD0C;
    case 206u: goto L_08A1DD14;
    case 207u: goto L_08A1DD38;
    case 208u: goto L_08A1DD84;
    case 209u: goto L_08A1DDA4;
    case 210u: goto L_08A1DDB0;
    case 211u: goto L_08A1DDB8;
    case 212u: goto L_08A1DDC8;
    case 213u: goto L_08A1DDD4;
    case 214u: goto L_08A1DDE0;
    case 215u: goto L_08A1DDF4;
    case 216u: goto L_08A1DE14;
    case 217u: goto L_08A1DE30;
    case 218u: goto L_08A1DE44;
    case 219u: goto L_08A1DE4C;
    case 220u: goto L_08A1DE54;
    case 221u: goto L_08A1DE60;
    case 222u: goto L_08A1DE64;
    case 223u: goto L_08A1DE70;
    case 224u: goto L_08A1DE78;
    case 225u: goto L_08A1DE80;
    case 226u: goto L_08A1DE8C;
    case 227u: goto L_08A1DE94;
    case 228u: goto L_08A1DEA8;
    case 229u: goto L_08A1DEB4;
    case 230u: goto L_08A1DEBC;
    case 231u: goto L_08A1DED0;
    case 232u: goto L_08A1DEEC;
    case 233u: goto L_08A1DEF4;
    case 234u: goto L_08A1DF0C;
    case 235u: goto L_08A1DF14;
    case 236u: goto L_08A1DF24;
    case 237u: goto L_08A1DF2C;
    case 238u: goto L_08A1DF7C;
    case 239u: goto L_08A1DF88;
    case 240u: goto L_08A1DFA0;
    case 241u: goto L_08A1DFA8;
    case 242u: goto L_08A1DFB4;
    case 243u: goto L_08A1DFBC;
    case 244u: goto L_08A1DFC4;
    case 245u: goto L_08A1DFD8;
    case 246u: goto L_08A1DFF4;
    case 247u: goto L_08A1DFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A1D000:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D010:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D018:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1D028u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 97u, 0x08A465CCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D028u) goto L_08A1D028;
    return;
L_08A1D028:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D034:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1D044u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 98u, 0x08A465D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D044u) goto L_08A1D044;
    return;
L_08A1D044:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D050:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A1D060u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 99u, 0x08A465DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D060u) goto L_08A1D060;
    return;
L_08A1D060:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D06C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1D090u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D090u) goto L_08A1D090;
    return;
L_08A1D090:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(300), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D0A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A1D0CCu);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D0CCu) goto L_08A1D0CC;
    return;
L_08A1D0CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1D0DCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D0DCu) goto L_08A1D0DC;
    return;
L_08A1D0DC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A1D11C;
      }
      goto L_08A1D0E8;
    }
L_08A1D0E8:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-104));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A1D0F0;
L_08A1D0F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D11C;
      }
      goto L_08A1D0F8;
    }
L_08A1D0F8:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1D11C;
      }
      goto L_08A1D100;
    }
L_08A1D100:
    aot_gpr[31] = (0x08A1D108u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D108u) goto L_08A1D108;
    return;
L_08A1D108:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (aot_gpr[16] | 0u);
        goto L_08A1D110;
    }
    goto L_08A1D110;
L_08A1D110:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A1D0F0;
      }
      goto L_08A1D11C;
    }
L_08A1D11C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A1D138:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A1D168u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D168u) goto L_08A1D168;
    return;
L_08A1D168:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16952));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A1D17Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A1DD14;
L_08A1D17C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A1D190u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D190u) goto L_08A1D190;
    return;
L_08A1D190:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1D1A4u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D1A4u) goto L_08A1D1A4;
    return;
L_08A1D1A4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A1D1B8u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D1B8u) goto L_08A1D1B8;
    return;
L_08A1D1B8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1D1CCu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D1CCu) goto L_08A1D1CC;
    return;
L_08A1D1CC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A1D1E0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D1E0u) goto L_08A1D1E0;
    return;
L_08A1D1E0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(352));
    aot_gpr[31] = (0x08A1D1F4u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D1F4u) goto L_08A1D1F4;
    return;
L_08A1D1F4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1D208u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D208u) goto L_08A1D208;
    return;
L_08A1D208:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A1D21Cu);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D21Cu) goto L_08A1D21C;
    return;
L_08A1D21C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1D230u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D230u) goto L_08A1D230;
    return;
L_08A1D230:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1D244;
      }
      goto L_08A1D238;
    }
L_08A1D238:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A1D244;
L_08A1D244:
    aot_gpr[31] = (0x08A1D24Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A1D8A8;
L_08A1D24C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(356));
    aot_gpr[31] = (0x08A1D260u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D260u) goto L_08A1D260;
    return;
L_08A1D260:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1D274u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D274u) goto L_08A1D274;
    return;
L_08A1D274:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(356), 0u);
        goto L_08A1D280;
    }
    goto L_08A1D280;
L_08A1D280:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(360));
    aot_gpr[31] = (0x08A1D290u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D290u) goto L_08A1D290;
    return;
L_08A1D290:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1D2A4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D2A4u) goto L_08A1D2A4;
    return;
L_08A1D2A4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(360), 0u);
        goto L_08A1D2B0;
    }
    goto L_08A1D2B0;
L_08A1D2B0:
    aot_gpr[31] = (0x08A1D2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D2B8u) goto L_08A1D2B8;
    return;
L_08A1D2B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1D2C4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D2C4u) goto L_08A1D2C4;
    return;
L_08A1D2C4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1D2D4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A1DD84;
L_08A1D2D4:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A1D2FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1D454;
      }
      goto L_08A1D320;
    }
L_08A1D320:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16952));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1D3C8;
      }
      goto L_08A1D340;
    }
L_08A1D340:
    aot_gpr[31] = (0x08A1D348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D348u) goto L_08A1D348;
    return;
L_08A1D348:
    aot_gpr[31] = (0x08A1D350u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D350u) goto L_08A1D350;
    return;
L_08A1D350:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(344)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A1D364u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D364u) goto L_08A1D364;
    return;
L_08A1D364:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(344)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(344)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[31] = (0x08A1D380u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D380u) goto L_08A1D380;
    return;
L_08A1D380:
    aot_gpr[31] = (0x08A1D388u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D388u) goto L_08A1D388;
    return;
L_08A1D388:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A1D39Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D39Cu) goto L_08A1D39C;
    return;
L_08A1D39C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A1D340;
      }
      goto L_08A1D3C8;
    }
L_08A1D3C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(344)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
        goto L_08A1D3F8;
    }
    goto L_08A1D3D4;
L_08A1D3D4:
    aot_gpr[31] = (0x08A1D3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D3DCu) goto L_08A1D3DC;
    return;
L_08A1D3DC:
    aot_gpr[31] = (0x08A1D3E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D3E4u) goto L_08A1D3E4;
    return;
L_08A1D3E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(344)));
    aot_gpr[31] = (0x08A1D3F0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D3F0u) goto L_08A1D3F0;
    return;
L_08A1D3F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(344), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    goto L_08A1D3F8;
L_08A1D3F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D420;
      }
      goto L_08A1D400;
    }
L_08A1D400:
    aot_gpr[31] = (0x08A1D408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D408u) goto L_08A1D408;
    return;
L_08A1D408:
    aot_gpr[31] = (0x08A1D410u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D410u) goto L_08A1D410;
    return;
L_08A1D410:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    aot_gpr[31] = (0x08A1D41Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D41Cu) goto L_08A1D41C;
    return;
L_08A1D41C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(348), 0u);
    goto L_08A1D420;
L_08A1D420:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A1D444;
      }
      goto L_08A1D428;
    }
L_08A1D428:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1D440u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A1D440u) goto L_08A1D440;
    return;
L_08A1D440:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A1D444;
L_08A1D444:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D454;
      }
      goto L_08A1D44C;
    }
L_08A1D44C:
    aot_gpr[31] = (0x08A1D454u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1D454u) goto L_08A1D454;
    return;
L_08A1D454:
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
L_08A1D470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1D4B0u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D4B0u) goto L_08A1D4B0;
    return;
L_08A1D4B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1D670;
      }
      goto L_08A1D4B8;
    }
L_08A1D4B8:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1D4C4u);
    aot_gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D4C4u) goto L_08A1D4C4;
    return;
L_08A1D4C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A1D534;
      }
      goto L_08A1D4CC;
    }
L_08A1D4CC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1D4DCu);
    aot_gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D4DCu) goto L_08A1D4DC;
    return;
L_08A1D4DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A1D508;
      }
      goto L_08A1D4E4;
    }
L_08A1D4E4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1D4F4u);
    aot_gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D4F4u) goto L_08A1D4F4;
    return;
L_08A1D4F4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
        goto L_08A1D560;
    }
    goto L_08A1D4FC;
L_08A1D4FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1D594;
      }
      goto L_08A1D504;
    }
L_08A1D504:
    aot_gpr[4] = (2216u << 16u);
    goto L_08A1D508;
L_08A1D508:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17972)));
    aot_gpr[31] = (0x08A1D514u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1DDF4;
L_08A1D514:
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
L_08A1D534:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17976)));
    aot_gpr[31] = (0x08A1D540u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1DDF4;
L_08A1D540:
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
L_08A1D560:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A1D670;
      }
      goto L_08A1D568;
    }
L_08A1D568:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17972)));
    aot_gpr[31] = (0x08A1D574u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1DB9C;
L_08A1D574:
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
L_08A1D594:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1D5A0u);
    aot_gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D5A0u) goto L_08A1D5A0;
    return;
L_08A1D5A0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1D5E0;
      }
      goto L_08A1D5A8;
    }
L_08A1D5A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A1D670;
      }
      goto L_08A1D5B4;
    }
L_08A1D5B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17976)));
    aot_gpr[31] = (0x08A1D5C0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1DB9C;
L_08A1D5C0:
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
L_08A1D5E0:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1D5ECu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D5ECu) goto L_08A1D5EC;
    return;
L_08A1D5EC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1D640;
      }
      goto L_08A1D5F4;
    }
L_08A1D5F4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1D604u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D604u) goto L_08A1D604;
    return;
L_08A1D604:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1D640;
      }
      goto L_08A1D60C;
    }
L_08A1D60C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1D61Cu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D61Cu) goto L_08A1D61C;
    return;
L_08A1D61C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1D640;
      }
      goto L_08A1D624;
    }
L_08A1D624:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1D634u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D634u) goto L_08A1D634;
    return;
L_08A1D634:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D670;
      }
      goto L_08A1D63C;
    }
L_08A1D63C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1D640;
L_08A1D640:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1D650u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D650u) goto L_08A1D650;
    return;
L_08A1D650:
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
L_08A1D670:
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
L_08A1D690:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08A1D6B8u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    goto L_08A1DDC8;
L_08A1D6B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(332), aot_gpr[2]);
    aot_gpr[31] = (0x08A1D6C4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1D6C4u) goto L_08A1D6C4;
    return;
L_08A1D6C4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(300)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_08A1D6F4;
      }
      goto L_08A1D6E8;
    }
L_08A1D6E8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(316)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(312)));
    goto L_08A1D6F4;
L_08A1D6F4:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[3] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1D728;
      }
      goto L_08A1D708;
    }
L_08A1D708:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A1D718u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem) && ctx.pc == 0x08A1D718u) goto L_08A1D718;
    return;
L_08A1D718:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
    aot_gpr[3] = (aot_gpr[4] | 0u);
    goto L_08A1D728;
L_08A1D728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(324)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[11] = (aot_gpr[6] | 0u);
    aot_gpr[13] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[14];
    aot_gpr[31] = (0x08A1D778u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D778u) goto L_08A1D778;
    return;
L_08A1D778:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D798:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1D7B4;
      }
      goto L_08A1D7A4;
    }
L_08A1D7A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1D7B4;
      }
      goto L_08A1D7B0;
    }
L_08A1D7B0:
    aot_gpr[2] = (0u | 1u);
    goto L_08A1D7B4;
L_08A1D7B4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D7BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D7D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1D83C;
      }
      goto L_08A1D7F8;
    }
L_08A1D7F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1D83C;
      }
      goto L_08A1D80C;
    }
L_08A1D80C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[31] = (0x08A1D820u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D820u) goto L_08A1D820;
    return;
L_08A1D820:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(340), aot_gpr[19]);
        goto L_08A1D85C;
    }
    goto L_08A1D828;
L_08A1D828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A1D80C;
      }
      goto L_08A1D83C;
    }
L_08A1D83C:
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
L_08A1D85C:
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
L_08A1D87C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D898;
      }
      goto L_08A1D88C;
    }
L_08A1D88C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D898:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D8A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1D8A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08A1D8E0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D8E0u) goto L_08A1D8E0;
    return;
L_08A1D8E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1D8ECu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D8ECu) goto L_08A1D8EC;
    return;
L_08A1D8EC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A1D950;
      }
      goto L_08A1D8F8;
    }
L_08A1D8F8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(236));
    goto L_08A1D8FC;
L_08A1D8FC:
    aot_gpr[31] = (0x08A1D904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D904u) goto L_08A1D904;
    return;
L_08A1D904:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1D910u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D910u) goto L_08A1D910;
    return;
L_08A1D910:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D930;
      }
      goto L_08A1D91C;
    }
L_08A1D91C:
    aot_gpr[31] = (0x08A1D924u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D924u) goto L_08A1D924;
    return;
L_08A1D924:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D930;
      }
      goto L_08A1D92C;
    }
L_08A1D92C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A1D930;
L_08A1D930:
    aot_gpr[31] = (0x08A1D938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1D938u) goto L_08A1D938;
    return;
L_08A1D938:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1D944u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1D944u) goto L_08A1D944;
    return;
L_08A1D944:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1D8FC;
      }
      goto L_08A1D950;
    }
L_08A1D950:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), aot_gpr[19]);
      if (branch_taken) {
          goto L_08A1DB6C;
      }
      goto L_08A1D958;
    }
L_08A1D958:
    aot_gpr[31] = (0x08A1D960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D960u) goto L_08A1D960;
    return;
L_08A1D960:
    aot_gpr[31] = (0x08A1D968u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D968u) goto L_08A1D968;
    return;
L_08A1D968:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(208));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 236u);
    aot_gpr[31] = (0x08A1D98Cu);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D98Cu) goto L_08A1D98C;
    return;
L_08A1D98C:
    aot_gpr[31] = (0x08A1D994u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(344), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1D994u) goto L_08A1D994;
    return;
L_08A1D994:
    aot_gpr[31] = (0x08A1D99Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D99Cu) goto L_08A1D99C;
    return;
L_08A1D99C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 237u);
    aot_gpr[31] = (0x08A1D9B8u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1D9B8u) goto L_08A1D9B8;
    return;
L_08A1D9B8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A1DB6C;
      }
      goto L_08A1D9C4;
    }
L_08A1D9C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DB6C;
      }
      goto L_08A1D9D0;
    }
L_08A1D9D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[31] = (0x08A1D9E4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D9E4u) goto L_08A1D9E4;
    return;
L_08A1D9E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1D9F8u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1D9F8u) goto L_08A1D9F8;
    return;
L_08A1D9F8:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x08A1DA04u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1DA04u) goto L_08A1DA04;
    return;
L_08A1DA04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1DA10u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DA10u) goto L_08A1DA10;
    return;
L_08A1DA10:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A1DB34;
      }
      goto L_08A1DA1C;
    }
L_08A1DA1C:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(236));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(244));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(252));
    goto L_08A1DA34;
L_08A1DA34:
    aot_gpr[31] = (0x08A1DA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1DA3Cu) goto L_08A1DA3C;
    return;
L_08A1DA3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1DA48u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DA48u) goto L_08A1DA48;
    return;
L_08A1DA48:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DB14;
      }
      goto L_08A1DA54;
    }
L_08A1DA54:
    aot_gpr[31] = (0x08A1DA5Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DA5Cu) goto L_08A1DA5C;
    return;
L_08A1DA5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DB14;
      }
      goto L_08A1DA64;
    }
L_08A1DA64:
    aot_gpr[31] = (0x08A1DA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1DA6Cu) goto L_08A1DA6C;
    return;
L_08A1DA6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1DA78u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DA78u) goto L_08A1DA78;
    return;
L_08A1DA78:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 259u);
    aot_gpr[31] = (0x08A1DA88u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A1DA88u) goto L_08A1DA88;
    return;
L_08A1DA88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DAB0;
      }
      goto L_08A1DAA8;
    }
L_08A1DAA8:
    aot_gpr[31] = (0x08A1DAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A1DAB0u) goto L_08A1DAB0;
    return;
L_08A1DAB0:
    aot_gpr[31] = (0x08A1DAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1DAB8u) goto L_08A1DAB8;
    return;
L_08A1DAB8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1DAC8u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DAC8u) goto L_08A1DAC8;
    return;
L_08A1DAC8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 266u);
    aot_gpr[31] = (0x08A1DAD8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A1DAD8u) goto L_08A1DAD8;
    return;
L_08A1DAD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x08A1DAECu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1DAECu) goto L_08A1DAEC;
    return;
L_08A1DAEC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1DB00u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DB00u) goto L_08A1DB00;
    return;
L_08A1DB00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), aot_gpr[17]);
        goto L_08A1DB0C;
    }
    goto L_08A1DB0C;
L_08A1DB0C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08A1DB14;
L_08A1DB14:
    aot_gpr[31] = (0x08A1DB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1DB1Cu) goto L_08A1DB1C;
    return;
L_08A1DB1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1DB28u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DB28u) goto L_08A1DB28;
    return;
L_08A1DB28:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DA34;
      }
      goto L_08A1DB34;
    }
L_08A1DB34:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1DB6C;
      }
      goto L_08A1DB3C;
    }
L_08A1DB3C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DB6C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DB9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A1DBC4u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    goto L_08A1DDC8;
L_08A1DBC4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(8160));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A1DBF4;
      }
      goto L_08A1DBE8;
    }
L_08A1DBE8:
    aot_gpr[19] = (aot_gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 24u));
      if (branch_taken) {
          goto L_08A1DBFC;
      }
      goto L_08A1DBF4;
    }
L_08A1DBF4:
    aot_gpr[19] = (aot_gpr[19] << 24u);
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 24u));
    goto L_08A1DBFC;
L_08A1DBFC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1DC04;
L_08A1DC04:
    aot_gpr[31] = (0x08A1DC0Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A1DDF4;
L_08A1DC0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1DC40;
      }
      goto L_08A1DC18;
    }
L_08A1DC18:
    aot_gpr[31] = (0x08A1DC20u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A1DDF4;
L_08A1DC20:
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
L_08A1DC40:
    aot_gpr[31] = (0x08A1DC48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1DDC8;
L_08A1DC48:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DC68;
      }
      goto L_08A1DC60;
    }
L_08A1DC60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A1DC68;
      }
      goto L_08A1DC68;
    }
L_08A1DC68:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1DC04;
      }
      goto L_08A1DC70;
    }
L_08A1DC70:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17972)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A1DC20;
      }
      goto L_08A1DC84;
    }
L_08A1DC84:
    aot_gpr[31] = (0x08A1DC8Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1DDC8;
L_08A1DC8C:
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17972)));
      if (branch_taken) {
          goto L_08A1DCB4;
      }
      goto L_08A1DCA4;
    }
L_08A1DCA4:
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(32));
    aot_gpr[19] = (aot_gpr[5] << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 24u));
      if (branch_taken) {
          goto L_08A1DCBC;
      }
      goto L_08A1DCB4;
    }
L_08A1DCB4:
    aot_gpr[19] = (aot_gpr[19] << 24u);
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 24u));
    goto L_08A1DCBC;
L_08A1DCBC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A1DCC8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1DDF4;
L_08A1DCC8:
    aot_gpr[31] = (0x08A1DCD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1DDC8;
L_08A1DCD0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DCF0;
      }
      goto L_08A1DCE8;
    }
L_08A1DCE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A1DCF0;
      }
      goto L_08A1DCF0;
    }
L_08A1DCF0:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A1DD0C;
      }
      goto L_08A1DCF8;
    }
L_08A1DCF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17976)));
    aot_gpr[31] = (0x08A1DD04u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A1DDF4;
L_08A1DD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DC20;
      }
      goto L_08A1DD0C;
    }
L_08A1DD0C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17972)));
      if (branch_taken) {
          goto L_08A1DCBC;
      }
      goto L_08A1DD14;
    }
L_08A1DD14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1DD38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1DD38u) goto L_08A1DD38;
    return;
L_08A1DD38:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(344), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DD84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1DDA4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 158u, 0x08A12ADCu>(ctx, &aot_mem) && ctx.pc == 0x08A1DDA4u) goto L_08A1DDA4;
    return;
L_08A1DDA4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A1DDB8;
      }
      goto L_08A1DDB0;
    }
L_08A1DDB0:
    aot_gpr[31] = (0x08A1DDB8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 166u, 0x08A22AFCu>(ctx, &aot_mem) && ctx.pc == 0x08A1DDB8u) goto L_08A1DDB8;
    return;
L_08A1DDB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DDC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
        goto L_08A1DDE0;
    }
    goto L_08A1DDD4;
L_08A1DDD4:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17968)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DDE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DDF4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[5] = (ctx.hi);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DE14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1DEBC;
      }
      goto L_08A1DE30;
    }
L_08A1DE30:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(17096));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1DE64;
      }
      goto L_08A1DE44;
    }
L_08A1DE44:
    aot_gpr[31] = (0x08A1DE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1DE4Cu) goto L_08A1DE4C;
    return;
L_08A1DE4C:
    aot_gpr[31] = (0x08A1DE54u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DE54u) goto L_08A1DE54;
    return;
L_08A1DE54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    aot_gpr[31] = (0x08A1DE60u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1DE60u) goto L_08A1DE60;
    return;
L_08A1DE60:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(328), 0u);
    goto L_08A1DE64;
L_08A1DE64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A1DE94;
      }
      goto L_08A1DE70;
    }
L_08A1DE70:
    aot_gpr[31] = (0x08A1DE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1DE78u) goto L_08A1DE78;
    return;
L_08A1DE78:
    aot_gpr[31] = (0x08A1DE80u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1DE80u) goto L_08A1DE80;
    return;
L_08A1DE80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(428)));
    aot_gpr[31] = (0x08A1DE8Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1DE8Cu) goto L_08A1DE8C;
    return;
L_08A1DE8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(428), 0u);
    aot_gpr[4] = (2216u << 16u);
    goto L_08A1DE94;
L_08A1DE94:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1DEA8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A1DEA8u) goto L_08A1DEA8;
    return;
L_08A1DEA8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DEBC;
      }
      goto L_08A1DEB4;
    }
L_08A1DEB4:
    aot_gpr[31] = (0x08A1DEBCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1DEBCu) goto L_08A1DEBC;
    return;
L_08A1DEBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DED0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A1DEECu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 239u, 0x08A00FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A1DEECu) goto L_08A1DEEC;
    return;
L_08A1DEEC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DFC4;
      }
      goto L_08A1DEF4;
    }
L_08A1DEF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1DF0Cu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DF0Cu) goto L_08A1DF0C;
    return;
L_08A1DF0C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(300)));
        goto L_08A1DF24;
    }
    goto L_08A1DF14;
L_08A1DF14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(312)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08A1DF2C;
      }
      goto L_08A1DF24;
    }
L_08A1DF24:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    goto L_08A1DF2C;
L_08A1DF2C:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(468)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(472)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(476)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(432)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(436)));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[11] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    jump_target = aot_gpr[13];
    aot_gpr[31] = (0x08A1DF7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[12]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DF7Cu) goto L_08A1DF7C;
    return;
L_08A1DF7C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1DF88u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0540_entry, 540u, 2u, 0x08A20008u>(ctx, &aot_mem) && ctx.pc == 0x08A1DF88u) goto L_08A1DF88;
    return;
L_08A1DF88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1DFA0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1DFA0u) goto L_08A1DFA0;
    return;
L_08A1DFA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1DFBC;
      }
      goto L_08A1DFA8;
    }
L_08A1DFA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1DFBC;
      }
      goto L_08A1DFB4;
    }
L_08A1DFB4:
    aot_gpr[31] = (0x08A1DFBCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 134u, 0x08A1EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A1DFBCu) goto L_08A1DFBC;
    return;
L_08A1DFBC:
    aot_gpr[31] = (0x08A1DFC4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0539_entry, 539u, 20u, 0x08A1F1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A1DFC4u) goto L_08A1DFC4;
    return;
L_08A1DFC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1DFD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A1DFF4u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0538_entry, 538u, 21u, 0x08A1E1CCu>(ctx, &aot_mem) && ctx.pc == 0x08A1DFF4u) goto L_08A1DFF4;
    return;
L_08A1DFF4:
    aot_gpr[31] = (0x08A1DFFCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1DFFCu) goto L_08A1DFFC;
    return;
L_08A1DFFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    ctx.pc = 0x08A1E000u; return;
}

void recomp_unit_0537(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0537_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_537(Runtime &runtime) {
    runtime.register_generated_unit(537u, 0x08A1D000u, 4096u, &recomp_unit_0537, &recomp_unit_0537_entry);
    runtime.register_function(0x08A1D000u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D010u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D018u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D028u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D034u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D044u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D050u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D060u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D06Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D090u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D0A8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D0CCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D0DCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D0E8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D0F0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D0F8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D100u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D108u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D110u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D11Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D138u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D168u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D17Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D190u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D1A4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D1B8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D1CCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D1E0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D1F4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D208u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D21Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D230u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D238u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D244u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D24Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D260u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D274u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D280u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D290u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D2A4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D2B0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D2B8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D2C4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D2D4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D2FCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D320u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D340u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D348u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D350u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D364u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D380u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D388u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D39Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D3C8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D3D4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D3DCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D3E4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D3F0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D3F8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D400u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D408u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D410u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D41Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D420u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D428u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D440u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D444u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D44Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D454u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D470u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D4B0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D4B8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D4C4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D4CCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D4DCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D4E4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D4F4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D4FCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D504u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D508u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D514u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D534u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D540u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D560u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D568u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D574u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D594u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D5A0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D5A8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D5B4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D5C0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D5E0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D5ECu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D5F4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D604u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D60Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D61Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D624u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D634u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D63Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D640u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D650u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D670u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D690u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D6B8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D6C4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D6E8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D6F4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D708u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D718u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D728u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D778u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D798u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D7A4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D7B0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D7B4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D7BCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D7D4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D7F8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D80Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D820u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D828u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D83Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D85Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D87Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D88Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D898u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D8A0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D8A8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D8E0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D8ECu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D8F8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D8FCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D904u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D910u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D91Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D924u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D92Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D930u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D938u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D944u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D950u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D958u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D960u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D968u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D98Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D994u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D99Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D9B8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D9C4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D9D0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D9E4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1D9F8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA04u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA10u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA1Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA34u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA3Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA48u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA54u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA5Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA64u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA6Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA78u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DA88u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DAA8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DAB0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DAB8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DAC8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DAD8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DAECu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB00u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB0Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB14u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB1Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB28u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB34u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB3Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB6Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DB9Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DBC4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DBE8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DBF4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DBFCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC04u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC0Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC18u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC20u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC40u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC48u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC60u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC68u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC70u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC84u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DC8Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DCA4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DCB4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DCBCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DCC8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DCD0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DCE8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DCF0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DCF8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DD04u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DD0Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DD14u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DD38u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DD84u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DDA4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DDB0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DDB8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DDC8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DDD4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DDE0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DDF4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE14u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE30u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE44u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE4Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE54u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE60u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE64u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE70u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE78u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE80u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE8Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DE94u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DEA8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DEB4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DEBCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DED0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DEECu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DEF4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DF0Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DF14u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DF24u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DF2Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DF7Cu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DF88u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DFA0u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DFA8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DFB4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DFBCu, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DFC4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DFD8u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DFF4u, &recomp_unit_0537, "recomp_unit_0537");
    runtime.register_function(0x08A1DFFCu, &recomp_unit_0537, "recomp_unit_0537");
}
} // namespace psprecomp
