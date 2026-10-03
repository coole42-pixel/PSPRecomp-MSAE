#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0468[1020] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13,
    0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 20, 0, 21, 0,
    22, 0, 23, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59,
    0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 77, 0,
    78, 0, 0, 79, 0, 80, 0, 81, 0, 0, 82, 83, 0, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 88, 89, 0, 0, 0, 90, 0, 91, 0,
    0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0,
    0, 119, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0,
    129, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 143,
    0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168,
    0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 192, 193, 0, 0, 0, 0, 0,
    0, 0, 194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 217, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225,
    0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 229, 230, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239,
};
void recomp_unit_0468_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089D8004u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0468[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D8004;
    case 2u: goto L_089D8038;
    case 3u: goto L_089D8048;
    case 4u: goto L_089D8050;
    case 5u: goto L_089D8058;
    case 6u: goto L_089D8060;
    case 7u: goto L_089D8068;
    case 8u: goto L_089D8070;
    case 9u: goto L_089D80B8;
    case 10u: goto L_089D80BC;
    case 11u: goto L_089D80C0;
    case 12u: goto L_089D80EC;
    case 13u: goto L_089D8100;
    case 14u: goto L_089D810C;
    case 15u: goto L_089D8118;
    case 16u: goto L_089D8124;
    case 17u: goto L_089D8140;
    case 18u: goto L_089D8160;
    case 19u: goto L_089D8170;
    case 20u: goto L_089D8174;
    case 21u: goto L_089D817C;
    case 22u: goto L_089D8184;
    case 23u: goto L_089D818C;
    case 24u: goto L_089D8194;
    case 25u: goto L_089D81A0;
    case 26u: goto L_089D81AC;
    case 27u: goto L_089D81BC;
    case 28u: goto L_089D81C4;
    case 29u: goto L_089D81D8;
    case 30u: goto L_089D81EC;
    case 31u: goto L_089D81FC;
    case 32u: goto L_089D8208;
    case 33u: goto L_089D8224;
    case 34u: goto L_089D822C;
    case 35u: goto L_089D823C;
    case 36u: goto L_089D8244;
    case 37u: goto L_089D8250;
    case 38u: goto L_089D8264;
    case 39u: goto L_089D8270;
    case 40u: goto L_089D8278;
    case 41u: goto L_089D8294;
    case 42u: goto L_089D82A8;
    case 43u: goto L_089D82CC;
    case 44u: goto L_089D82E8;
    case 45u: goto L_089D8314;
    case 46u: goto L_089D8324;
    case 47u: goto L_089D832C;
    case 48u: goto L_089D8334;
    case 49u: goto L_089D833C;
    case 50u: goto L_089D8380;
    case 51u: goto L_089D8384;
    case 52u: goto L_089D8388;
    case 53u: goto L_089D83B4;
    case 54u: goto L_089D83C0;
    case 55u: goto L_089D83C8;
    case 56u: goto L_089D83DC;
    case 57u: goto L_089D83E8;
    case 58u: goto L_089D83F4;
    case 59u: goto L_089D8400;
    case 60u: goto L_089D840C;
    case 61u: goto L_089D8418;
    case 62u: goto L_089D8424;
    case 63u: goto L_089D8430;
    case 64u: goto L_089D843C;
    case 65u: goto L_089D8448;
    case 66u: goto L_089D8458;
    case 67u: goto L_089D8464;
    case 68u: goto L_089D846C;
    case 69u: goto L_089D849C;
    case 70u: goto L_089D84A0;
    case 71u: goto L_089D84B8;
    case 72u: goto L_089D84C0;
    case 73u: goto L_089D84C8;
    case 74u: goto L_089D84D4;
    case 75u: goto L_089D84DC;
    case 76u: goto L_089D84E8;
    case 77u: goto L_089D84FC;
    case 78u: goto L_089D8504;
    case 79u: goto L_089D8510;
    case 80u: goto L_089D8518;
    case 81u: goto L_089D8520;
    case 82u: goto L_089D852C;
    case 83u: goto L_089D8530;
    case 84u: goto L_089D853C;
    case 85u: goto L_089D8548;
    case 86u: goto L_089D8550;
    case 87u: goto L_089D8558;
    case 88u: goto L_089D8560;
    case 89u: goto L_089D8564;
    case 90u: goto L_089D8574;
    case 91u: goto L_089D857C;
    case 92u: goto L_089D858C;
    case 93u: goto L_089D8594;
    case 94u: goto L_089D859C;
    case 95u: goto L_089D85C4;
    case 96u: goto L_089D85D4;
    case 97u: goto L_089D85DC;
    case 98u: goto L_089D85E4;
    case 99u: goto L_089D85EC;
    case 100u: goto L_089D860C;
    case 101u: goto L_089D863C;
    case 102u: goto L_089D8644;
    case 103u: goto L_089D8660;
    case 104u: goto L_089D8678;
    case 105u: goto L_089D867C;
    case 106u: goto L_089D86A4;
    case 107u: goto L_089D86A8;
    case 108u: goto L_089D86B8;
    case 109u: goto L_089D86C0;
    case 110u: goto L_089D86C8;
    case 111u: goto L_089D86D0;
    case 112u: goto L_089D86DC;
    case 113u: goto L_089D86E4;
    case 114u: goto L_089D86EC;
    case 115u: goto L_089D86F8;
    case 116u: goto L_089D8750;
    case 117u: goto L_089D8760;
    case 118u: goto L_089D8774;
    case 119u: goto L_089D8788;
    case 120u: goto L_089D879C;
    case 121u: goto L_089D87A4;
    case 122u: goto L_089D87B0;
    case 123u: goto L_089D87BC;
    case 124u: goto L_089D87C8;
    case 125u: goto L_089D87D0;
    case 126u: goto L_089D87D8;
    case 127u: goto L_089D87E8;
    case 128u: goto L_089D87F0;
    case 129u: goto L_089D8804;
    case 130u: goto L_089D880C;
    case 131u: goto L_089D8818;
    case 132u: goto L_089D8824;
    case 133u: goto L_089D8838;
    case 134u: goto L_089D8844;
    case 135u: goto L_089D885C;
    case 136u: goto L_089D8864;
    case 137u: goto L_089D8870;
    case 138u: goto L_089D8878;
    case 139u: goto L_089D88A8;
    case 140u: goto L_089D88B0;
    case 141u: goto L_089D88DC;
    case 142u: goto L_089D88EC;
    case 143u: goto L_089D8900;
    case 144u: goto L_089D8908;
    case 145u: goto L_089D891C;
    case 146u: goto L_089D8928;
    case 147u: goto L_089D8930;
    case 148u: goto L_089D8938;
    case 149u: goto L_089D8940;
    case 150u: goto L_089D8960;
    case 151u: goto L_089D897C;
    case 152u: goto L_089D8988;
    case 153u: goto L_089D89A8;
    case 154u: goto L_089D89AC;
    case 155u: goto L_089D89B4;
    case 156u: goto L_089D89CC;
    case 157u: goto L_089D89D8;
    case 158u: goto L_089D89E0;
    case 159u: goto L_089D8A08;
    case 160u: goto L_089D8A20;
    case 161u: goto L_089D8A34;
    case 162u: goto L_089D8A58;
    case 163u: goto L_089D8A70;
    case 164u: goto L_089D8AA0;
    case 165u: goto L_089D8AE4;
    case 166u: goto L_089D8AEC;
    case 167u: goto L_089D8AF8;
    case 168u: goto L_089D8B00;
    case 169u: goto L_089D8B0C;
    case 170u: goto L_089D8B14;
    case 171u: goto L_089D8B20;
    case 172u: goto L_089D8B28;
    case 173u: goto L_089D8B34;
    case 174u: goto L_089D8B3C;
    case 175u: goto L_089D8B48;
    case 176u: goto L_089D8B50;
    case 177u: goto L_089D8B5C;
    case 178u: goto L_089D8B64;
    case 179u: goto L_089D8B70;
    case 180u: goto L_089D8B78;
    case 181u: goto L_089D8BAC;
    case 182u: goto L_089D8BB4;
    case 183u: goto L_089D8BC0;
    case 184u: goto L_089D8BC8;
    case 185u: goto L_089D8BD0;
    case 186u: goto L_089D8BE0;
    case 187u: goto L_089D8BE4;
    case 188u: goto L_089D8C00;
    case 189u: goto L_089D8C1C;
    case 190u: goto L_089D8C54;
    case 191u: goto L_089D8C64;
    case 192u: goto L_089D8C68;
    case 193u: goto L_089D8C6C;
    case 194u: goto L_089D8C8C;
    case 195u: goto L_089D8C90;
    case 196u: goto L_089D8CBC;
    case 197u: goto L_089D8CD0;
    case 198u: goto L_089D8CD8;
    case 199u: goto L_089D8D08;
    case 200u: goto L_089D8D10;
    case 201u: goto L_089D8D24;
    case 202u: goto L_089D8D3C;
    case 203u: goto L_089D8D48;
    case 204u: goto L_089D8D4C;
    case 205u: goto L_089D8D7C;
    case 206u: goto L_089D8D8C;
    case 207u: goto L_089D8D98;
    case 208u: goto L_089D8DA0;
    case 209u: goto L_089D8DD4;
    case 210u: goto L_089D8DE4;
    case 211u: goto L_089D8DF8;
    case 212u: goto L_089D8E2C;
    case 213u: goto L_089D8E3C;
    case 214u: goto L_089D8E44;
    case 215u: goto L_089D8E58;
    case 216u: goto L_089D8E90;
    case 217u: goto L_089D8E98;
    case 218u: goto L_089D8EA0;
    case 219u: goto L_089D8EA4;
    case 220u: goto L_089D8ECC;
    case 221u: goto L_089D8EE0;
    case 222u: goto L_089D8EE8;
    case 223u: goto L_089D8EF0;
    case 224u: goto L_089D8EF8;
    case 225u: goto L_089D8F00;
    case 226u: goto L_089D8F08;
    case 227u: goto L_089D8F24;
    case 228u: goto L_089D8F2C;
    case 229u: goto L_089D8F34;
    case 230u: goto L_089D8F38;
    case 231u: goto L_089D8F40;
    case 232u: goto L_089D8F48;
    case 233u: goto L_089D8F50;
    case 234u: goto L_089D8F5C;
    case 235u: goto L_089D8F74;
    case 236u: goto L_089D8FC0;
    case 237u: goto L_089D8FC8;
    case 238u: goto L_089D8FD4;
    case 239u: goto L_089D8FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D8004:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(6)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    aot_gpr[31] = (0x089D8038u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089D8038u) goto L_089D8038;
    return;
L_089D8038:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0467_entry, 467u, 246u, 0x089D7FC0u>(ctx, &aot_mem); return;
      }
      goto L_089D8048;
    }
L_089D8048:
    aot_gpr[31] = (0x089D8050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 10u, 0x089D4050u>(ctx, &aot_mem) && ctx.pc == 0x089D8050u) goto L_089D8050;
    return;
L_089D8050:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0467_entry, 467u, 247u, 0x089D7FC4u>(ctx, &aot_mem); return;
L_089D8058:
    aot_gpr[31] = (0x089D8060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 18u, 0x089D914Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8060u) goto L_089D8060;
    return;
L_089D8060:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D8004;
      }
      goto L_089D8068;
    }
L_089D8068:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0467_entry, 467u, 247u, 0x089D7FC4u>(ctx, &aot_mem); return;
L_089D8070:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_089D80EC;
      }
      goto L_089D80B8;
    }
L_089D80B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D80BC;
L_089D80BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_089D80C0;
L_089D80C0:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D80EC:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(1398));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D8100u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089D8100u) goto L_089D8100;
    return;
L_089D8100:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D810Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D810Cu) goto L_089D810C;
    return;
L_089D810C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D8118u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D8118u) goto L_089D8118;
    return;
L_089D8118:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D8124u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D8124u) goto L_089D8124;
    return;
L_089D8124:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(248)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D80BC;
      }
      goto L_089D8140;
    }
L_089D8140:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(360)));
    aot_gpr[3] = (aot_gpr[2] << 6u);
    aot_gpr[2] = (aot_gpr[2] << 4u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D80BC;
      }
      goto L_089D8160;
    }
L_089D8160:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[3] & 127u);
      if (branch_taken) {
          goto L_089D822C;
      }
      goto L_089D8170;
    }
L_089D8170:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089D8174;
L_089D8174:
    aot_gpr[31] = (0x089D817Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D817Cu) goto L_089D817C;
    return;
L_089D817C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D80BC;
      }
      goto L_089D8184;
    }
L_089D8184:
    aot_gpr[31] = (0x089D818Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D818Cu) goto L_089D818C;
    return;
L_089D818C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D81AC;
      }
      goto L_089D8194;
    }
L_089D8194:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[16] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089D8244;
    }
    goto L_089D81A0;
L_089D81A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[16] == aot_gpr[2]) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089D8244;
    }
    goto L_089D81AC;
L_089D81AC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    aot_gpr[17] = (aot_gpr[29] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089D81FC;
      }
      goto L_089D81BC;
    }
L_089D81BC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089D8324;
L_089D81C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D80BC;
      }
      goto L_089D81D8;
    }
L_089D81D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[31] = (0x089D81ECu);
    aot_gpr[5] = (ctx.lo);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089D81ECu) goto L_089D81EC;
    return;
L_089D81EC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D8324;
      }
      goto L_089D81FC;
    }
L_089D81FC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089D8208u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D8208u) goto L_089D8208;
    return;
L_089D8208:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D81C4;
      }
      goto L_089D8224;
    }
L_089D8224:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D80BC;
L_089D822C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x089D823Cu);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D823Cu) goto L_089D823C;
    return;
L_089D823C:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    goto L_089D8174;
L_089D8244:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D80BC;
      }
      goto L_089D8250;
    }
L_089D8250:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D8324;
      }
      goto L_089D8264;
    }
L_089D8264:
    aot_gpr[23] = (aot_gpr[29] + 0u);
    aot_gpr[22] = (0u + 0u);
    aot_gpr[30] = (2216u << 16u);
    goto L_089D8270;
L_089D8270:
    aot_gpr[31] = (0x089D8278u);
    aot_gpr[5] = (aot_gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D8278u) goto L_089D8278;
    return;
L_089D8278:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D80B8;
      }
      goto L_089D8294;
    }
L_089D8294:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[6] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089D80B8;
      }
      goto L_089D82A8;
    }
L_089D82A8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D82CCu);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 229u, 0x089D4E40u>(ctx, &aot_mem) && ctx.pc == 0x089D82CCu) goto L_089D82CC;
    return;
L_089D82CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[31] = (0x089D82E8u);
    aot_gpr[6] = (ctx.lo);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D82E8u) goto L_089D82E8;
    return;
L_089D82E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D8314u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D8314u) goto L_089D8314;
    return;
L_089D8314:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    aot_gpr[2] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_089D8270;
      }
      goto L_089D8324;
    }
L_089D8324:
    aot_gpr[31] = (0x089D832Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D832Cu) goto L_089D832C;
    return;
L_089D832C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089D80B8;
      }
      goto L_089D8334;
    }
L_089D8334:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_089D80C0;
L_089D833C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    aot_gpr[5] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_089D83B4;
      }
      goto L_089D8380;
    }
L_089D8380:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D8384;
L_089D8384:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_089D8388;
L_089D8388:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D83B4:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D8384;
      }
      goto L_089D83C0;
    }
L_089D83C0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_089D8388;
      }
      goto L_089D83C8;
    }
L_089D83C8:
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(1398));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D83DCu);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x089D83DCu) goto L_089D83DC;
    return;
L_089D83DC:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D83E8u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D83E8u) goto L_089D83E8;
    return;
L_089D83E8:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D83F4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D83F4u) goto L_089D83F4;
    return;
L_089D83F4:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D8400u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(38));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D8400u) goto L_089D8400;
    return;
L_089D8400:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D840Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(39));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D840Cu) goto L_089D840C;
    return;
L_089D840C:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D8418u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x089D8418u) goto L_089D8418;
    return;
L_089D8418:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D8424u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(42));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D8424u) goto L_089D8424;
    return;
L_089D8424:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D8430u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x089D8430u) goto L_089D8430;
    return;
L_089D8430:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D843Cu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D843Cu) goto L_089D843C;
    return;
L_089D843C:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D8448u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089D8448u) goto L_089D8448;
    return;
L_089D8448:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr[31] = (0x089D8458u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089D8458u) goto L_089D8458;
    return;
L_089D8458:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089D8464u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D8464u) goto L_089D8464;
    return;
L_089D8464:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D8380;
      }
      goto L_089D846C;
    }
L_089D846C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(37)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    aot_gpr[2] = (aot_gpr[3] << 6u);
    aot_gpr[3] = (aot_gpr[3] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[20] + 0u);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089D84DC;
      }
      goto L_089D849C;
    }
L_089D849C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
    goto L_089D84A0;
L_089D84A0:
    aot_gpr[23] = (aot_gpr[18] << 2u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(372)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[23]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D86E4;
      }
      goto L_089D84B8;
    }
L_089D84B8:
    aot_gpr[31] = (0x089D84C0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D84C0u) goto L_089D84C0;
    return;
L_089D84C0:
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089D84C8;
L_089D84C8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(42))))));
        goto L_089D85EC;
    }
    goto L_089D84D4;
L_089D84D4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(36));
    goto L_089D8384;
L_089D84DC:
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[20] != aot_gpr[2];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D84A0;
      }
      goto L_089D84E8;
    }
L_089D84E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089D84FCu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1028)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 109u, 0x089D2700u>(ctx, &aot_mem) && ctx.pc == 0x089D84FCu) goto L_089D84FC;
    return;
L_089D84FC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2800)));
      if (branch_taken) {
          goto L_089D853C;
      }
      goto L_089D8504;
    }
L_089D8504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (0u + 0u);
        goto L_089D8530;
    }
    goto L_089D8510;
L_089D8510:
    aot_gpr[31] = (0x089D8518u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1028)));
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 11u, 0x089D9100u>(ctx, &aot_mem) && ctx.pc == 0x089D8518u) goto L_089D8518;
    return;
L_089D8518:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089D852C;
      }
      goto L_089D8520;
    }
L_089D8520:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    if (static_cast<std::int32_t>(aot_gpr[2]) > 0) {
    aot_gpr[19] = (0u + 0u);
        goto L_089D8560;
    }
    goto L_089D852C;
L_089D852C:
    aot_gpr[19] = (0u + 0u);
    goto L_089D8530;
L_089D8530:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D849C;
L_089D853C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[4] = (aot_gpr[22] + 0u);
      if (branch_taken) {
          goto L_089D8594;
      }
      goto L_089D8548;
    }
L_089D8548:
    aot_gpr[31] = (0x089D8550u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x089D8550u) goto L_089D8550;
    return;
L_089D8550:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D8380;
      }
      goto L_089D8558;
    }
L_089D8558:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_089D8388;
L_089D8560:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_089D8564;
L_089D8564:
    aot_gpr[20] = (aot_gpr[19] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D8574u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0461_entry, 461u, 202u, 0x089D1FF8u>(ctx, &aot_mem) && ctx.pc == 0x089D8574u) goto L_089D8574;
    return;
L_089D8574:
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (aot_gpr[20] + 0u);
        goto L_089D85DC;
    }
    goto L_089D857C;
L_089D857C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_089D8564;
    }
    goto L_089D858C;
L_089D858C:
    aot_gpr[19] = (0u + 0u);
    goto L_089D8530;
L_089D8594:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    goto L_089D859C;
L_089D859C:
    aot_gpr[2] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[31] = (0x089D85C4u);
    aot_gpr[5] = (ctx.lo);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089D85C4u) goto L_089D85C4;
    return;
L_089D85C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
        goto L_089D859C;
    }
    goto L_089D85D4;
L_089D85D4:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    goto L_089D8548;
L_089D85DC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) < 0;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089D849C;
      }
      goto L_089D85E4;
    }
L_089D85E4:
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(1));
    goto L_089D849C;
L_089D85EC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(37)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D860Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x089D860Cu) goto L_089D860C;
    return;
L_089D860C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(38)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(39)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D86A8;
      }
      goto L_089D863C;
    }
L_089D863C:
    aot_gpr[17] = (0u + 0u);
    aot_gpr[16] = (0u + 0u);
    goto L_089D8644;
L_089D8644:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089D867C;
      }
      goto L_089D8660;
    }
L_089D8660:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D8678u);
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0464_entry, 464u, 229u, 0x089D4E40u>(ctx, &aot_mem) && ctx.pc == 0x089D8678u) goto L_089D8678;
    return;
L_089D8678:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089D867C;
L_089D867C:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D8644;
      }
      goto L_089D86A4;
    }
L_089D86A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089D86A8;
L_089D86A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x089D86B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089D86B8u) goto L_089D86B8;
    return;
L_089D86B8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089D87F0;
      }
      goto L_089D86C0;
    }
L_089D86C0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(64), 0u);
    goto L_089D86C8;
L_089D86C8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D87D8;
      }
      goto L_089D86D0;
    }
L_089D86D0:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089D86DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 48u, 0x089D2290u>(ctx, &aot_mem) && ctx.pc == 0x089D86DCu) goto L_089D86DC;
    return;
L_089D86DC:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    goto L_089D8548;
L_089D86E4:
    aot_gpr[31] = (0x089D86ECu);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D86ECu) goto L_089D86EC;
    return;
L_089D86EC:
    aot_gpr[5] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D84D4;
      }
      goto L_089D86F8;
    }
L_089D86F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(56), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D8750u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D8750u) goto L_089D8750;
    return;
L_089D8750:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089D8760u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D8760u) goto L_089D8760;
    return;
L_089D8760:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1084)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D8774u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D8774u) goto L_089D8774;
    return;
L_089D8774:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D8788u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 47u, 0x08986340u>(ctx, &aot_mem) && ctx.pc == 0x089D8788u) goto L_089D8788;
    return;
L_089D8788:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
        goto L_089D8804;
    }
    goto L_089D879C;
L_089D879C:
    aot_gpr[31] = (0x089D87A4u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D87A4u) goto L_089D87A4;
    return;
L_089D87A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D87B0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D87B0u) goto L_089D87B0;
    return;
L_089D87B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D87BCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D87BCu) goto L_089D87BC;
    return;
L_089D87BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089D87C8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D87C8u) goto L_089D87C8;
    return;
L_089D87C8:
    aot_gpr[31] = (0x089D87D0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 49u, 0x08986368u>(ctx, &aot_mem) && ctx.pc == 0x089D87D0u) goto L_089D87D0;
    return;
L_089D87D0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(36));
    goto L_089D8384;
L_089D87D8:
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x089D87E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 54u, 0x089D2320u>(ctx, &aot_mem) && ctx.pc == 0x089D87E8u) goto L_089D87E8;
    return;
L_089D87E8:
    aot_gpr[4] = (aot_gpr[22] + 0u);
    goto L_089D8548;
L_089D87F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    goto L_089D86C8;
L_089D8804:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D879C;
      }
      goto L_089D880C;
    }
L_089D880C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D879C;
      }
      goto L_089D8818;
    }
L_089D8818:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D879C;
      }
      goto L_089D8824;
    }
L_089D8824:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_089D8844;
    }
    goto L_089D8838;
L_089D8838:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(280), aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_089D8844;
L_089D8844:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(372)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[23] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089D8864;
      }
      goto L_089D885C;
    }
L_089D885C:
    aot_gpr[31] = (0x089D8864u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0462_entry, 462u, 4u, 0x089D202Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8864u) goto L_089D8864;
    return;
L_089D8864:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1084)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D84C8;
      }
      goto L_089D8870;
    }
L_089D8870:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (2216u << 16u);
    goto L_089D8878;
L_089D8878:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1084)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_089D8878;
      }
      goto L_089D88A8;
    }
L_089D88A8:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    goto L_089D84C8;
L_089D88B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22664));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(264)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(240)));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089D88EC;
      }
      goto L_089D88DC;
    }
L_089D88DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D88EC:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(22660), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(244)));
    aot_gpr[31] = (0x089D8900u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089D8900u) goto L_089D8900;
    return;
L_089D8900:
    aot_gpr[31] = (0x089D8908u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089D8908u) goto L_089D8908;
    return;
L_089D8908:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D891C:
    aot_gpr[24] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[14] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089D89A8;
      }
      goto L_089D8928;
    }
L_089D8928:
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_089D89AC;
    }
    goto L_089D8930;
L_089D8930:
    if (static_cast<std::int32_t>(aot_gpr[6]) <= 0) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_089D89AC;
    }
    goto L_089D8938;
L_089D8938:
    if (static_cast<std::int32_t>(aot_gpr[8]) <= 0) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_089D89AC;
    }
    goto L_089D8940;
L_089D8940:
    aot_gpr[15] = (2217u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(2800)));
    aot_gpr[25] = (2217u << 16u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(22660)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(244)));
    aot_gpr[2] = (aot_gpr[12] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
        goto L_089D8AE4;
    }
    goto L_089D8960;
L_089D8960:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(240)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(268)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[2] = (ctx.lo);
    aot_gpr[2] = (aot_gpr[13] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(10));
        goto L_089D8AE4;
    }
    goto L_089D897C;
L_089D897C:
    aot_gpr[2] = (aot_gpr[7] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089D89B4;
      }
      goto L_089D8988;
    }
L_089D8988:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(360)));
    aot_gpr[3] = (aot_gpr[7] << 4u);
    aot_gpr[2] = (aot_gpr[7] << 6u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-768)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D89D8;
      }
      goto L_089D89A8;
    }
L_089D89A8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D89AC;
L_089D89AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D89B4:
    aot_gpr[2] = (aot_gpr[7] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-12420));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D89CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D89AC;
      }
      goto L_089D89D8;
    }
L_089D89D8:
    { const bool branch_taken = aot_gpr[12] == 0u;
    ctx.lo = 0u;
      if (branch_taken) {
          goto L_089D8A20;
      }
      goto L_089D89E0;
    }
L_089D89E0:
    aot_gpr[3] = (aot_gpr[13] - aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[3] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(356)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u + 0u);
    goto L_089D8A08;
L_089D8A08:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[5];
    rt.unsupported(0x089D8A1Cu, 0x0062001Cu, "special? not lowered yet"); return;
      if (branch_taken) {
          goto L_089D8A08;
      }
      goto L_089D8A20;
    }
L_089D8A20:
    rt.unsupported(0x089D8A20u, 0x00C8001Cu, "special? not lowered yet"); return;
L_089D8A34:
    aot_gpr[2] = (aot_gpr[13] << 2u);
    aot_gpr[3] = (aot_gpr[13] << 4u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(356)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[13]);
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[11] = (aot_gpr[4] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D89AC;
      }
      goto L_089D8A58;
    }
L_089D8A58:
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[14]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(16), aot_gpr[9]);
      if (branch_taken) {
          goto L_089D8AA0;
      }
      goto L_089D8A70;
    }
L_089D8A70:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    goto L_089D8AA0;
L_089D8AA0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(22664)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(268)));
    aot_gpr[2] = (aot_gpr[12] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[12] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[15] + static_cast<std::uint32_t>(2800)));
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(22660), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(268)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(268), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8AE4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8AEC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D89D8;
      }
      goto L_089D8AF8;
    }
L_089D8AF8:
    // nop
    goto L_089D89AC;
L_089D8B00:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D89D8;
      }
      goto L_089D8B0C;
    }
L_089D8B0C:
    // nop
    goto L_089D89AC;
L_089D8B14:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D89D8;
      }
      goto L_089D8B20;
    }
L_089D8B20:
    // nop
    goto L_089D89AC;
L_089D8B28:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D89D8;
      }
      goto L_089D8B34;
    }
L_089D8B34:
    // nop
    goto L_089D89AC;
L_089D8B3C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D89D8;
      }
      goto L_089D8B48;
    }
L_089D8B48:
    // nop
    goto L_089D89AC;
L_089D8B50:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D89D8;
      }
      goto L_089D8B5C;
    }
L_089D8B5C:
    // nop
    goto L_089D89AC;
L_089D8B64:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D89D8;
      }
      goto L_089D8B70;
    }
L_089D8B70:
    // nop
    goto L_089D89AC;
L_089D8B78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D8C64;
      }
      goto L_089D8BAC;
    }
L_089D8BAC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089D8C68;
      }
      goto L_089D8BB4;
    }
L_089D8BB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[19] = (0u + 0u);
      if (branch_taken) {
          goto L_089D8BE0;
      }
      goto L_089D8BC0;
    }
L_089D8BC0:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089D8C6C;
L_089D8BC8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) > 0;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089D8C8C;
      }
      goto L_089D8BD0;
    }
L_089D8BD0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089D8C68;
      }
      goto L_089D8BE0;
    }
L_089D8BE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
    goto L_089D8BE4;
L_089D8BE4:
    aot_gpr[3] = (aot_gpr[19] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089D8BC8;
    }
    goto L_089D8C00;
L_089D8C00:
    aot_gpr[21] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(244)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089D8C64;
      }
      goto L_089D8C1C;
    }
L_089D8C1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089D8C54;
L_089D8C54:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(40)));
        goto L_089D8BE4;
    }
    goto L_089D8C64;
L_089D8C64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089D8C68;
L_089D8C68:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089D8C6C;
L_089D8C6C:
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
L_089D8C8C:
    aot_gpr[21] = (2217u << 16u);
    goto L_089D8C90;
L_089D8C90:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (aot_gpr[4] << 6u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-768));
    aot_gpr[6] = (aot_gpr[22] + aot_gpr[6]);
    aot_gpr[31] = (0x089D8CBCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089D8B78;
L_089D8CBC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089D8C90;
    }
    goto L_089D8CD0;
L_089D8CD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089D8C54;
L_089D8CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_089D8EE8;
      }
      goto L_089D8D08;
    }
L_089D8D08:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[20] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D8EE8;
      }
      goto L_089D8D10;
    }
L_089D8D10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[19] << 6u);
      if (branch_taken) {
          goto L_089D8D48;
      }
      goto L_089D8D24;
    }
L_089D8D24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(360)));
    aot_gpr[3] = (aot_gpr[19] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D8D4C;
      }
      goto L_089D8D3C;
    }
L_089D8D3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
        goto L_089D8D7C;
    }
    goto L_089D8D48;
L_089D8D48:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(10));
    goto L_089D8D4C;
L_089D8D4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8D7C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089D8D8Cu);
    aot_gpr[23] = (2217u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x089D8D8Cu) goto L_089D8D8C;
    return;
L_089D8D8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(22660)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089D8E90;
      }
      goto L_089D8D98;
    }
L_089D8D98:
    aot_gpr[22] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(22664)));
    goto L_089D8DA0;
L_089D8DA0:
    aot_gpr[2] = (aot_gpr[18] << 2u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (aot_gpr[3] << 2u);
    aot_gpr[2] = (aot_gpr[3] << 4u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(22660)));
      if (branch_taken) {
          goto L_089D8E2C;
      }
      goto L_089D8DD4;
    }
L_089D8DD4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 16 ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_089D8E98;
    }
    goto L_089D8DE4;
L_089D8DE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089D8D48;
      }
      goto L_089D8DF8;
    }
L_089D8DF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[3] = (aot_gpr[3] << 2u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(22660)));
    goto L_089D8E2C;
L_089D8E2C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(22664)));
      if (branch_taken) {
          goto L_089D8DA0;
      }
      goto L_089D8E3C;
    }
L_089D8E3C:
    aot_gpr[31] = (0x089D8E44u);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(22664));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089D8E44u) goto L_089D8E44;
    return;
L_089D8E44:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(264)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_089D8D4C;
      }
      goto L_089D8E58;
    }
L_089D8E58:
    aot_gpr[2] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(264), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8E90:
    aot_gpr[22] = (2217u << 16u);
    goto L_089D8E3C;
L_089D8E98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(22660)));
      if (branch_taken) {
          goto L_089D8E2C;
      }
      goto L_089D8EA0;
    }
L_089D8EA0:
    aot_gpr[21] = (0u + 0u);
    goto L_089D8EA4;
L_089D8EA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (aot_gpr[3] << 6u);
    aot_gpr[3] = (aot_gpr[3] << 4u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-768));
    aot_gpr[31] = (0x089D8ECCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089D8B78;
L_089D8ECC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089D8EA4;
    }
    goto L_089D8EE0;
L_089D8EE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(22660)));
    goto L_089D8E2C;
L_089D8EE8:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D8D4C;
L_089D8EF0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089D8F34;
      }
      goto L_089D8EF8;
    }
L_089D8EF8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089D8F38;
      }
      goto L_089D8F00;
    }
L_089D8F00:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_089D8F34;
      }
      goto L_089D8F08;
    }
L_089D8F08:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(264)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089D8F2C;
      }
      goto L_089D8F24;
    }
L_089D8F24:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8F2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089D8CD8;
L_089D8F34:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    goto L_089D8F38;
L_089D8F38:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8F40:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089D8FC8;
      }
      goto L_089D8F48;
    }
L_089D8F48:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[10] = (2217u << 16u);
      if (branch_taken) {
          goto L_089D8FC8;
      }
      goto L_089D8F50;
    }
L_089D8F50:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(17));
      if (branch_taken) {
          goto L_089D8FC8;
      }
      goto L_089D8F5C;
    }
L_089D8F5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(2800)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(272)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(252)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089D8FC0;
      }
      goto L_089D8F74;
    }
L_089D8F74:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(352)));
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(2800)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(272)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(352)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(272)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(2800)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(272)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(272), aot_gpr[2]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    goto L_089D8FC0;
L_089D8FC0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8FC8:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8FD4:
    aot_gpr[10] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(2800)));
    aot_gpr[9] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(240)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 2u, 0x089D9030u>(ctx, &aot_mem); return;
      }
      goto L_089D8FF0;
    }
L_089D8FF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(336)));
    aot_gpr[11] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    ctx.pc = 0x089D9000u; return;
}

void recomp_unit_0468(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0468_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_468(Runtime &runtime) {
    runtime.register_generated_unit(468u, 0x089D8000u, 4096u, &recomp_unit_0468, &recomp_unit_0468_entry);
    runtime.register_function(0x089D8004u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8038u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8048u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8050u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8058u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8060u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8068u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8070u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D80B8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D80BCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D80C0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D80ECu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8100u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D810Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8118u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8124u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8140u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8160u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8170u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8174u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D817Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8184u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D818Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8194u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D81A0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D81ACu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D81BCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D81C4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D81D8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D81ECu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D81FCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8208u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8224u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D822Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D823Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8244u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8250u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8264u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8270u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8278u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8294u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D82A8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D82CCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D82E8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8314u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8324u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D832Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8334u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D833Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8380u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8384u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8388u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D83B4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D83C0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D83C8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D83DCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D83E8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D83F4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8400u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D840Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8418u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8424u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8430u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D843Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8448u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8458u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8464u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D846Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D849Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D84A0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D84B8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D84C0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D84C8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D84D4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D84DCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D84E8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D84FCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8504u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8510u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8518u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8520u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D852Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8530u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D853Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8548u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8550u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8558u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8560u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8564u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8574u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D857Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D858Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8594u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D859Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D85C4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D85D4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D85DCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D85E4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D85ECu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D860Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D863Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8644u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8660u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8678u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D867Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86A4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86A8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86B8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86C0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86C8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86D0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86DCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86E4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86ECu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D86F8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8750u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8760u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8774u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8788u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D879Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D87A4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D87B0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D87BCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D87C8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D87D0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D87D8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D87E8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D87F0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8804u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D880Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8818u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8824u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8838u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8844u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D885Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8864u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8870u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8878u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D88A8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D88B0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D88DCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D88ECu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8900u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8908u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D891Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8928u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8930u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8938u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8940u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8960u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D897Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8988u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D89A8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D89ACu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D89B4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D89CCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D89D8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D89E0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8A08u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8A20u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8A34u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8A58u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8A70u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8AA0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8AE4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8AECu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8AF8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B00u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B0Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B14u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B20u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B28u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B34u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B3Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B48u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B50u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B5Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B64u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B70u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8B78u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8BACu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8BB4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8BC0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8BC8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8BD0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8BE0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8BE4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8C00u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8C1Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8C54u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8C64u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8C68u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8C6Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8C8Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8C90u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8CBCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8CD0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8CD8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D08u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D10u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D24u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D3Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D48u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D4Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D7Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D8Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8D98u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8DA0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8DD4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8DE4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8DF8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8E2Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8E3Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8E44u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8E58u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8E90u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8E98u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8EA0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8EA4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8ECCu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8EE0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8EE8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8EF0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8EF8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F00u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F08u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F24u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F2Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F34u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F38u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F40u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F48u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F50u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F5Cu, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8F74u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8FC0u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8FC8u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8FD4u, &recomp_unit_0468, "recomp_unit_0468");
    runtime.register_function(0x089D8FF0u, &recomp_unit_0468, "recomp_unit_0468");
}
} // namespace psprecomp
