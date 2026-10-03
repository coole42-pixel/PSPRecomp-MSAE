#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0499[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37,
    0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 47, 0, 48, 49, 50, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 56, 0, 57, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61,
    0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 74,
    0, 75, 0, 76, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 85, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 103, 104, 0, 0, 0, 105, 0, 106,
    0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 120, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133,
    134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142,
    0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154,
    0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0, 0,
    166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    183, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 194,
    0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0,
    226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0,
    0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 244, 245, 0, 246, 0, 0,
    247, 0, 0, 248, 249, 0, 250, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0,
    258, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0,
    0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 272,
};
void recomp_unit_0499_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F7004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0499[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F7004;
    case 2u: goto L_089F702C;
    case 3u: goto L_089F7040;
    case 4u: goto L_089F705C;
    case 5u: goto L_089F7094;
    case 6u: goto L_089F70A8;
    case 7u: goto L_089F70B8;
    case 8u: goto L_089F70D0;
    case 9u: goto L_089F70D8;
    case 10u: goto L_089F70EC;
    case 11u: goto L_089F7120;
    case 12u: goto L_089F7138;
    case 13u: goto L_089F713C;
    case 14u: goto L_089F7148;
    case 15u: goto L_089F7160;
    case 16u: goto L_089F7188;
    case 17u: goto L_089F7190;
    case 18u: goto L_089F71A4;
    case 19u: goto L_089F71B8;
    case 20u: goto L_089F71C0;
    case 21u: goto L_089F71C8;
    case 22u: goto L_089F71D4;
    case 23u: goto L_089F71E4;
    case 24u: goto L_089F7200;
    case 25u: goto L_089F723C;
    case 26u: goto L_089F7248;
    case 27u: goto L_089F724C;
    case 28u: goto L_089F7268;
    case 29u: goto L_089F7298;
    case 30u: goto L_089F72A0;
    case 31u: goto L_089F72AC;
    case 32u: goto L_089F72B4;
    case 33u: goto L_089F72BC;
    case 34u: goto L_089F72C4;
    case 35u: goto L_089F72E8;
    case 36u: goto L_089F72F4;
    case 37u: goto L_089F7300;
    case 38u: goto L_089F730C;
    case 39u: goto L_089F7318;
    case 40u: goto L_089F7320;
    case 41u: goto L_089F732C;
    case 42u: goto L_089F7338;
    case 43u: goto L_089F7344;
    case 44u: goto L_089F734C;
    case 45u: goto L_089F7358;
    case 46u: goto L_089F7394;
    case 47u: goto L_089F739C;
    case 48u: goto L_089F73A4;
    case 49u: goto L_089F73A8;
    case 50u: goto L_089F73AC;
    case 51u: goto L_089F73B4;
    case 52u: goto L_089F73BC;
    case 53u: goto L_089F73CC;
    case 54u: goto L_089F73D4;
    case 55u: goto L_089F7410;
    case 56u: goto L_089F7418;
    case 57u: goto L_089F7420;
    case 58u: goto L_089F7424;
    case 59u: goto L_089F742C;
    case 60u: goto L_089F7470;
    case 61u: goto L_089F7480;
    case 62u: goto L_089F7488;
    case 63u: goto L_089F7494;
    case 64u: goto L_089F749C;
    case 65u: goto L_089F74A4;
    case 66u: goto L_089F74B0;
    case 67u: goto L_089F74C0;
    case 68u: goto L_089F74C8;
    case 69u: goto L_089F74D4;
    case 70u: goto L_089F74DC;
    case 71u: goto L_089F74E4;
    case 72u: goto L_089F74F0;
    case 73u: goto L_089F74F8;
    case 74u: goto L_089F7500;
    case 75u: goto L_089F7508;
    case 76u: goto L_089F7510;
    case 77u: goto L_089F7514;
    case 78u: goto L_089F751C;
    case 79u: goto L_089F7528;
    case 80u: goto L_089F7558;
    case 81u: goto L_089F7588;
    case 82u: goto L_089F75DC;
    case 83u: goto L_089F75EC;
    case 84u: goto L_089F7604;
    case 85u: goto L_089F7614;
    case 86u: goto L_089F7618;
    case 87u: goto L_089F7620;
    case 88u: goto L_089F762C;
    case 89u: goto L_089F7640;
    case 90u: goto L_089F7648;
    case 91u: goto L_089F7660;
    case 92u: goto L_089F7670;
    case 93u: goto L_089F7678;
    case 94u: goto L_089F7684;
    case 95u: goto L_089F7698;
    case 96u: goto L_089F76A4;
    case 97u: goto L_089F76AC;
    case 98u: goto L_089F76B4;
    case 99u: goto L_089F76B8;
    case 100u: goto L_089F76C0;
    case 101u: goto L_089F76C8;
    case 102u: goto L_089F76DC;
    case 103u: goto L_089F76E4;
    case 104u: goto L_089F76E8;
    case 105u: goto L_089F76F8;
    case 106u: goto L_089F7700;
    case 107u: goto L_089F770C;
    case 108u: goto L_089F7724;
    case 109u: goto L_089F772C;
    case 110u: goto L_089F7738;
    case 111u: goto L_089F774C;
    case 112u: goto L_089F7754;
    case 113u: goto L_089F7764;
    case 114u: goto L_089F776C;
    case 115u: goto L_089F7778;
    case 116u: goto L_089F77B8;
    case 117u: goto L_089F77C4;
    case 118u: goto L_089F77CC;
    case 119u: goto L_089F77E0;
    case 120u: goto L_089F77E4;
    case 121u: goto L_089F77FC;
    case 122u: goto L_089F780C;
    case 123u: goto L_089F7814;
    case 124u: goto L_089F7820;
    case 125u: goto L_089F7830;
    case 126u: goto L_089F783C;
    case 127u: goto L_089F7848;
    case 128u: goto L_089F7850;
    case 129u: goto L_089F7854;
    case 130u: goto L_089F785C;
    case 131u: goto L_089F7864;
    case 132u: goto L_089F7878;
    case 133u: goto L_089F7880;
    case 134u: goto L_089F7884;
    case 135u: goto L_089F788C;
    case 136u: goto L_089F78A4;
    case 137u: goto L_089F78AC;
    case 138u: goto L_089F78B8;
    case 139u: goto L_089F78C0;
    case 140u: goto L_089F78C8;
    case 141u: goto L_089F78CC;
    case 142u: goto L_089F7900;
    case 143u: goto L_089F7908;
    case 144u: goto L_089F7914;
    case 145u: goto L_089F7924;
    case 146u: goto L_089F7934;
    case 147u: goto L_089F793C;
    case 148u: goto L_089F7944;
    case 149u: goto L_089F794C;
    case 150u: goto L_089F7958;
    case 151u: goto L_089F7968;
    case 152u: goto L_089F7970;
    case 153u: goto L_089F7978;
    case 154u: goto L_089F7980;
    case 155u: goto L_089F7990;
    case 156u: goto L_089F7998;
    case 157u: goto L_089F79A0;
    case 158u: goto L_089F79AC;
    case 159u: goto L_089F79BC;
    case 160u: goto L_089F79C4;
    case 161u: goto L_089F79CC;
    case 162u: goto L_089F79D4;
    case 163u: goto L_089F79E4;
    case 164u: goto L_089F79EC;
    case 165u: goto L_089F79F4;
    case 166u: goto L_089F7A04;
    case 167u: goto L_089F7A0C;
    case 168u: goto L_089F7A14;
    case 169u: goto L_089F7A1C;
    case 170u: goto L_089F7A24;
    case 171u: goto L_089F7A2C;
    case 172u: goto L_089F7A3C;
    case 173u: goto L_089F7A44;
    case 174u: goto L_089F7A4C;
    case 175u: goto L_089F7A54;
    case 176u: goto L_089F7A64;
    case 177u: goto L_089F7A7C;
    case 178u: goto L_089F7A84;
    case 179u: goto L_089F7A94;
    case 180u: goto L_089F7AAC;
    case 181u: goto L_089F7AB4;
    case 182u: goto L_089F7AF4;
    case 183u: goto L_089F7B04;
    case 184u: goto L_089F7B0C;
    case 185u: goto L_089F7B1C;
    case 186u: goto L_089F7B28;
    case 187u: goto L_089F7B38;
    case 188u: goto L_089F7B44;
    case 189u: goto L_089F7B50;
    case 190u: goto L_089F7B5C;
    case 191u: goto L_089F7B68;
    case 192u: goto L_089F7B70;
    case 193u: goto L_089F7B78;
    case 194u: goto L_089F7B80;
    case 195u: goto L_089F7B8C;
    case 196u: goto L_089F7B98;
    case 197u: goto L_089F7BAC;
    case 198u: goto L_089F7BC4;
    case 199u: goto L_089F7BD8;
    case 200u: goto L_089F7BEC;
    case 201u: goto L_089F7BF4;
    case 202u: goto L_089F7C2C;
    case 203u: goto L_089F7C34;
    case 204u: goto L_089F7C40;
    case 205u: goto L_089F7C48;
    case 206u: goto L_089F7C50;
    case 207u: goto L_089F7C60;
    case 208u: goto L_089F7C68;
    case 209u: goto L_089F7C74;
    case 210u: goto L_089F7CA0;
    case 211u: goto L_089F7CA8;
    case 212u: goto L_089F7CB0;
    case 213u: goto L_089F7CDC;
    case 214u: goto L_089F7CE4;
    case 215u: goto L_089F7CF0;
    case 216u: goto L_089F7CF8;
    case 217u: goto L_089F7D1C;
    case 218u: goto L_089F7D24;
    case 219u: goto L_089F7D34;
    case 220u: goto L_089F7D3C;
    case 221u: goto L_089F7D48;
    case 222u: goto L_089F7D54;
    case 223u: goto L_089F7D5C;
    case 224u: goto L_089F7D6C;
    case 225u: goto L_089F7D74;
    case 226u: goto L_089F7D84;
    case 227u: goto L_089F7D8C;
    case 228u: goto L_089F7D98;
    case 229u: goto L_089F7DA4;
    case 230u: goto L_089F7DB0;
    case 231u: goto L_089F7DD0;
    case 232u: goto L_089F7DE0;
    case 233u: goto L_089F7DEC;
    case 234u: goto L_089F7DF8;
    case 235u: goto L_089F7E08;
    case 236u: goto L_089F7E10;
    case 237u: goto L_089F7E1C;
    case 238u: goto L_089F7E28;
    case 239u: goto L_089F7E30;
    case 240u: goto L_089F7E40;
    case 241u: goto L_089F7E48;
    case 242u: goto L_089F7E54;
    case 243u: goto L_089F7E5C;
    case 244u: goto L_089F7E6C;
    case 245u: goto L_089F7E70;
    case 246u: goto L_089F7E78;
    case 247u: goto L_089F7E84;
    case 248u: goto L_089F7E90;
    case 249u: goto L_089F7E94;
    case 250u: goto L_089F7E9C;
    case 251u: goto L_089F7EA4;
    case 252u: goto L_089F7EB0;
    case 253u: goto L_089F7EBC;
    case 254u: goto L_089F7ED0;
    case 255u: goto L_089F7ED8;
    case 256u: goto L_089F7EE0;
    case 257u: goto L_089F7EE8;
    case 258u: goto L_089F7F04;
    case 259u: goto L_089F7F08;
    case 260u: goto L_089F7F30;
    case 261u: goto L_089F7F74;
    case 262u: goto L_089F7F7C;
    case 263u: goto L_089F7F88;
    case 264u: goto L_089F7F90;
    case 265u: goto L_089F7FA0;
    case 266u: goto L_089F7FB0;
    case 267u: goto L_089F7FC0;
    case 268u: goto L_089F7FC8;
    case 269u: goto L_089F7FD4;
    case 270u: goto L_089F7FE0;
    case 271u: goto L_089F7FF0;
    case 272u: goto L_089F7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F7004:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F70D8;
      }
      goto L_089F702C;
    }
L_089F702C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F7094;
      }
      goto L_089F7040;
    }
L_089F7040:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x089F705Cu);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F705Cu) goto L_089F705C;
    return;
L_089F705C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F70A8;
      }
      goto L_089F7094;
    }
L_089F7094:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    goto L_089F70A8;
L_089F70A8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089F70B8u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F70B8u) goto L_089F70B8;
    return;
L_089F70B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[16] == aot_gpr[17];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089F70D8;
      }
      goto L_089F70D0;
    }
L_089F70D0:
    aot_gpr[31] = (0x089F70D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F70D8u) goto L_089F70D8;
    return;
L_089F70D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F70EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[5] < aot_gpr[16] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[18] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F713C;
      }
      goto L_089F7120;
    }
L_089F7120:
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[16] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F71C8;
      }
      goto L_089F7138;
    }
L_089F7138:
    aot_gpr[18] = (2216u << 16u);
    goto L_089F713C;
L_089F713C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-18744));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_089F7188;
      }
      goto L_089F7148;
    }
L_089F7148:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] >> 2u);
    aot_gpr[31] = (0x089F7160u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 32u, 0x089FA23Cu>(ctx, &aot_mem) && ctx.pc == 0x089F7160u) goto L_089F7160;
    return;
L_089F7160:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F7190;
      }
      goto L_089F7188;
    }
L_089F7188:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    goto L_089F7190;
L_089F7190:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x089F71A4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089F71A4u) goto L_089F71A4;
    return;
L_089F71A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_089F71E4;
      }
      goto L_089F71B8;
    }
L_089F71B8:
    aot_gpr[31] = (0x089F71C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F71C0u) goto L_089F71C0;
    return;
L_089F71C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F71E4;
      }
      goto L_089F71C8;
    }
L_089F71C8:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F71D4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x089F71D4u) goto L_089F71D4;
    return;
L_089F71D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_089F71E4;
L_089F71E4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7200:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F724C;
      }
      goto L_089F723C;
    }
L_089F723C:
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[31] = (0x089F7248u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089F7004;
L_089F7248:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_089F724C;
L_089F724C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F7268u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x089F7268u) goto L_089F7268;
    return;
L_089F7268:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
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
L_089F7298:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F72BC;
      }
      goto L_089F72A0;
    }
L_089F72A0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_089F72BC;
      }
      goto L_089F72AC;
    }
L_089F72AC:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[8] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F72C4;
      }
      goto L_089F72B4;
    }
L_089F72B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F73BC;
      }
      goto L_089F72BC;
    }
L_089F72BC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F72C4:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8160));
    aot_gpr[2] = (0u | 239u);
    aot_gpr[11] = (0u | 187u);
    aot_gpr[10] = (0u | 191u);
    aot_gpr[9] = (0u | 190u);
    aot_gpr[7] = (0u | 10u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[4] | 0u);
    goto L_089F72E8;
L_089F72E8:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[12] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089F7318;
      }
      goto L_089F72F4;
    }
L_089F72F4:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = aot_gpr[13] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_089F7318;
      }
      goto L_089F7300;
    }
L_089F7300:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[13] != aot_gpr[10];
    // nop
      if (branch_taken) {
          goto L_089F7318;
      }
      goto L_089F730C;
    }
L_089F730C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F73AC;
      }
      goto L_089F7318;
    }
L_089F7318:
    if (aot_gpr[12] != aot_gpr[2]) {
    aot_gpr[3] = (aot_gpr[6] << 24u);
        goto L_089F7358;
    }
    goto L_089F7320;
L_089F7320:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(1)));
    if (aot_gpr[12] != aot_gpr[10]) {
    aot_gpr[3] = (aot_gpr[6] << 24u);
        goto L_089F7358;
    }
    goto L_089F732C;
L_089F732C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_089F7344;
      }
      goto L_089F7338;
    }
L_089F7338:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F73AC;
      }
      goto L_089F7344;
    }
L_089F7344:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[10];
    aot_gpr[3] = (aot_gpr[6] << 24u);
      if (branch_taken) {
          goto L_089F7358;
      }
      goto L_089F734C;
    }
L_089F734C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F73AC;
      }
      goto L_089F7358;
    }
L_089F7358:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 24u));
    aot_gpr[12] = (aot_gpr[3] & 255u);
    aot_gpr[12] = (aot_gpr[8] + aot_gpr[12]);
    aot_gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[12] + static_cast<std::uint32_t>(0))))));
    aot_gpr[13] = (aot_gpr[3] ^ 10u);
    aot_gpr[12] = (aot_gpr[12] & 8u);
    aot_gpr[12] = (0u < aot_gpr[12] ? 1u : 0u);
    aot_gpr[13] = (aot_gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[3] ^ 13u);
    aot_gpr[12] = (aot_gpr[12] | aot_gpr[13]);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[3] = (aot_gpr[12] | aot_gpr[3]);
    aot_gpr[3] = (aot_gpr[3] & 255u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089F73A8;
    }
    goto L_089F7394;
L_089F7394:
    if (aot_gpr[6] == aot_gpr[7]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089F73A8;
    }
    goto L_089F739C;
L_089F739C:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F73B4;
      }
      goto L_089F73A4;
    }
L_089F73A4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089F73A8;
L_089F73A8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_089F73AC;
L_089F73AC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[3] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F72E8;
      }
      goto L_089F73B4;
    }
L_089F73B4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F73BC:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8160));
    aot_gpr[7] = (0u | 10u);
    aot_gpr[5] = (0u | 13u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089F73CC;
L_089F73CC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[9] = (aot_gpr[6] << 24u);
      if (branch_taken) {
          goto L_089F7410;
      }
      goto L_089F73D4;
    }
L_089F73D4:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[9]) >> 24u));
    aot_gpr[10] = (aot_gpr[9] & 255u);
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (aot_gpr[9] ^ 10u);
    aot_gpr[10] = (aot_gpr[10] & 8u);
    aot_gpr[10] = (0u < aot_gpr[10] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[9] ^ 13u);
    aot_gpr[10] = (aot_gpr[10] | aot_gpr[11]);
    aot_gpr[9] = (aot_gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[10] | aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[9] & 255u);
    if (aot_gpr[9] != 0u) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089F7424;
    }
    goto L_089F7410;
L_089F7410:
    if (aot_gpr[6] == aot_gpr[7]) {
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_089F7424;
    }
    goto L_089F7418;
L_089F7418:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F73B4;
      }
      goto L_089F7420;
    }
L_089F7420:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089F7424;
L_089F7424:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F73CC;
      }
      goto L_089F742C;
    }
L_089F742C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089F7470u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F7470u) goto L_089F7470;
    return;
L_089F7470:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F7480u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_089F70EC;
L_089F7480:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7558;
      }
      goto L_089F7488;
    }
L_089F7488:
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] & 255u);
      if (branch_taken) {
          goto L_089F7558;
      }
      goto L_089F7494;
    }
L_089F7494:
    aot_gpr[31] = (0x089F749Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089F7A54;
L_089F749C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (0u | 95u);
      if (branch_taken) {
          goto L_089F74B0;
      }
      goto L_089F74A4;
    }
L_089F74A4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F7558;
      }
      goto L_089F74B0;
    }
L_089F74B0:
    aot_gpr[20] = (aot_gpr[16] | 0u);
    aot_gpr[21] = (0u | 45u);
    aot_gpr[22] = (0u | 46u);
    aot_gpr[23] = (0u | 58u);
    goto L_089F74C0;
L_089F74C0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[20]);
      if (branch_taken) {
          goto L_089F7514;
      }
      goto L_089F74C8;
    }
L_089F74C8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_089F7510;
      }
      goto L_089F74D4;
    }
L_089F74D4:
    aot_gpr[31] = (0x089F74DCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089F7A84;
L_089F74DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F7508;
      }
      goto L_089F74E4;
    }
L_089F74E4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F7508;
      }
      goto L_089F74F0;
    }
L_089F74F0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_089F7508;
      }
      goto L_089F74F8;
    }
L_089F74F8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_089F7508;
      }
      goto L_089F7500;
    }
L_089F7500:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[20]);
      if (branch_taken) {
          goto L_089F7514;
      }
      goto L_089F7508;
    }
L_089F7508:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F74C0;
      }
      goto L_089F7510;
    }
L_089F7510:
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[20]);
    goto L_089F7514;
L_089F7514:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F7528;
      }
      goto L_089F751C;
    }
L_089F751C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F7528u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_089F70EC;
L_089F7528:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7558:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[18] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[21] = (aot_gpr[6] & 255u);
    aot_gpr[30] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x089F75DCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F75DCu) goto L_089F75DC;
    return;
L_089F75DC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F75ECu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_089F70EC;
L_089F75EC:
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[22] = (0u | 38u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-9792));
    { const bool branch_taken = aot_gpr[21] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
      if (branch_taken) {
          goto L_089F7614;
      }
      goto L_089F7604;
    }
L_089F7604:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-18752)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F7700;
      }
      goto L_089F7614;
    }
L_089F7614:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_089F7618;
L_089F7618:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F78CC;
      }
      goto L_089F7620;
    }
L_089F7620:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F78C0;
      }
      goto L_089F762C;
    }
L_089F762C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F7640u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_089F7900;
L_089F7640:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F78C0;
      }
      goto L_089F7648;
    }
L_089F7648:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089F7670;
      }
      goto L_089F7660;
    }
L_089F7660:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089F7670;
L_089F7670:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089F76AC;
      }
      goto L_089F7678;
    }
L_089F7678:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[5] != aot_gpr[22]) {
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[5]));
        goto L_089F76A4;
    }
    goto L_089F7684;
L_089F7684:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089F7698u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 39u, 0x089F9214u>(ctx, &aot_mem) && ctx.pc == 0x089F7698u) goto L_089F7698;
    return;
L_089F7698:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089F76E8;
      }
      goto L_089F76A4;
    }
L_089F76A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F76E8;
      }
      goto L_089F76AC;
    }
L_089F76AC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089F76E4;
      }
      goto L_089F76B4;
    }
L_089F76B4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_089F76B8;
L_089F76B8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F76DC;
      }
      goto L_089F76C0;
    }
L_089F76C0:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[29] + aot_gpr[5]);
      if (branch_taken) {
          goto L_089F76DC;
      }
      goto L_089F76C8;
    }
L_089F76C8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F76B8;
      }
      goto L_089F76DC;
    }
L_089F76DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
      if (branch_taken) {
          goto L_089F76E8;
      }
      goto L_089F76E4;
    }
L_089F76E4:
    aot_gpr[16] = (0u | 0u);
    goto L_089F76E8;
L_089F76E8:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F76F8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_089F7200;
L_089F76F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7618;
      }
      goto L_089F7700;
    }
L_089F7700:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F770Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089F7298;
L_089F770C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8160));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    goto L_089F7724;
L_089F7724:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F78CC;
      }
      goto L_089F772C;
    }
L_089F772C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F78C0;
      }
      goto L_089F7738;
    }
L_089F7738:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x089F774Cu);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_089F7900;
L_089F774C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F78C0;
      }
      goto L_089F7754;
    }
L_089F7754:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 13u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_089F776C;
      }
      goto L_089F7764;
    }
L_089F7764:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[4] << 24u);
      if (branch_taken) {
          goto L_089F7778;
      }
      goto L_089F776C;
    }
L_089F776C:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F7724;
      }
      goto L_089F7778;
    }
L_089F7778:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[6] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[4] ^ 10u);
    aot_gpr[5] = (aot_gpr[5] & 8u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] ^ 13u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F77C4;
      }
      goto L_089F77B8;
    }
L_089F77B8:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F7724;
      }
      goto L_089F77C4;
    }
L_089F77C4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_089F77E4;
      }
      goto L_089F77CC;
    }
L_089F77CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F77E0u);
    aot_gpr[6] = (0u | 1u);
    goto L_089F7200;
L_089F77E0:
    aot_gpr[17] = (0u | 0u);
    goto L_089F77E4;
L_089F77E4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    aot_gpr[5] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089F780C;
      }
      goto L_089F77FC;
    }
L_089F77FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089F780C;
L_089F780C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_089F7848;
      }
      goto L_089F7814;
    }
L_089F7814:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089F783C;
      }
      goto L_089F7820;
    }
L_089F7820:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x089F7830u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 39u, 0x089F9214u>(ctx, &aot_mem) && ctx.pc == 0x089F7830u) goto L_089F7830;
    return;
L_089F7830:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089F7884;
      }
      goto L_089F783C;
    }
L_089F783C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F7884;
      }
      goto L_089F7848;
    }
L_089F7848:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089F7880;
      }
      goto L_089F7850;
    }
L_089F7850:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_089F7854;
L_089F7854:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F7878;
      }
      goto L_089F785C;
    }
L_089F785C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[29] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089F7878;
      }
      goto L_089F7864;
    }
L_089F7864:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F7854;
      }
      goto L_089F7878;
    }
L_089F7878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[16]);
      if (branch_taken) {
          goto L_089F7884;
      }
      goto L_089F7880;
    }
L_089F7880:
    aot_gpr[16] = (0u | 0u);
    goto L_089F7884;
L_089F7884:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[19];
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F78AC;
      }
      goto L_089F788C;
    }
L_089F788C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(17));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F78A4u);
    aot_gpr[6] = (0u | 1u);
    goto L_089F7200;
L_089F78A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7724;
      }
      goto L_089F78AC;
    }
L_089F78AC:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F78B8u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    goto L_089F7200;
L_089F78B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7724;
      }
      goto L_089F78C0;
    }
L_089F78C0:
    aot_gpr[31] = (0x089F78C8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F78C8u) goto L_089F78C8;
    return;
L_089F78C8:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    goto L_089F78CC;
L_089F78CC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7900:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[6] & 255u);
      if (branch_taken) {
          goto L_089F7A4C;
      }
      goto L_089F7908;
    }
L_089F7908:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[9] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F7A4C;
      }
      goto L_089F7914;
    }
L_089F7914:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F7A14;
      }
      goto L_089F7924;
    }
L_089F7924:
    aot_gpr[9] = (2215u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(8160));
    aot_gpr[10] = (0u | 1u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_089F7934;
L_089F7934:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7A04;
      }
      goto L_089F793C;
    }
L_089F793C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7A04;
      }
      goto L_089F7944;
    }
L_089F7944:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[10];
    aot_gpr[11] = (aot_gpr[9] + aot_gpr[8]);
      if (branch_taken) {
          goto L_089F7980;
      }
      goto L_089F794C;
    }
L_089F794C:
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[8]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[11] = (aot_gpr[9] + aot_gpr[8]);
      if (branch_taken) {
          goto L_089F7978;
      }
      goto L_089F7958;
    }
L_089F7958:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (aot_gpr[11] & 1u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7970;
      }
      goto L_089F7968;
    }
L_089F7968:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089F7970;
      }
      goto L_089F7970;
    }
L_089F7970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7998;
      }
      goto L_089F7978;
    }
L_089F7978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7998;
      }
      goto L_089F7980;
    }
L_089F7980:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (aot_gpr[11] & 1u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7998;
      }
      goto L_089F7990;
    }
L_089F7990:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089F7998;
      }
      goto L_089F7998;
    }
L_089F7998:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[10];
    aot_gpr[11] = (aot_gpr[9] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089F79D4;
      }
      goto L_089F79A0;
    }
L_089F79A0:
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[11] = (aot_gpr[9] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089F79CC;
      }
      goto L_089F79AC;
    }
L_089F79AC:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (aot_gpr[11] & 1u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[11] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F79C4;
      }
      goto L_089F79BC;
    }
L_089F79BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089F79C4;
      }
      goto L_089F79C4;
    }
L_089F79C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F79EC;
      }
      goto L_089F79CC;
    }
L_089F79CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F79EC;
      }
      goto L_089F79D4;
    }
L_089F79D4:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (aot_gpr[11] & 1u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[11] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F79EC;
      }
      goto L_089F79E4;
    }
L_089F79E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089F79EC;
      }
      goto L_089F79EC;
    }
L_089F79EC:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[11];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F7A04;
      }
      goto L_089F79F4;
    }
L_089F79F4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F7934;
      }
      goto L_089F7A04;
    }
L_089F7A04:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F7A4C;
      }
      goto L_089F7A0C;
    }
L_089F7A0C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7A14:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7A3C;
      }
      goto L_089F7A1C;
    }
L_089F7A1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7A3C;
      }
      goto L_089F7A24;
    }
L_089F7A24:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F7A3C;
      }
      goto L_089F7A2C;
    }
L_089F7A2C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_089F7A14;
      }
      goto L_089F7A3C;
    }
L_089F7A3C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F7A4C;
      }
      goto L_089F7A44;
    }
L_089F7A44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7A4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7A54:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089F7A7C;
      }
      goto L_089F7A64;
    }
L_089F7A64:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8160));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] & 3u);
    goto L_089F7A7C;
L_089F7A7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7A84:
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 127 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089F7AAC;
      }
      goto L_089F7A94;
    }
L_089F7A94:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8160));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] & 7u);
    goto L_089F7AAC;
L_089F7AAC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7AB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (0u | 192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[8] = (0u | 224u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    aot_gpr[7] = (0u | 240u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    aot_gpr[8] = (0u | 248u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
    aot_gpr[7] = (0u | 252u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[4] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[4] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
      if (branch_taken) {
          goto L_089F7B04;
      }
      goto L_089F7AF4;
    }
L_089F7AF4:
    aot_gpr[8] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F7B5C;
      }
      goto L_089F7B04;
    }
L_089F7B04:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (1u << 16u);
      if (branch_taken) {
          goto L_089F7B1C;
      }
      goto L_089F7B0C;
    }
L_089F7B0C:
    aot_gpr[8] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089F7B5C;
      }
      goto L_089F7B1C;
    }
L_089F7B1C:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (32u << 16u);
      if (branch_taken) {
          goto L_089F7B38;
      }
      goto L_089F7B28;
    }
L_089F7B28:
    aot_gpr[8] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089F7B5C;
      }
      goto L_089F7B38;
    }
L_089F7B38:
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[8] = (0u | 4u);
      if (branch_taken) {
          goto L_089F7B50;
      }
      goto L_089F7B44;
    }
L_089F7B44:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F7B5C;
      }
      goto L_089F7B50;
    }
L_089F7B50:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7B5C:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_089F7B80;
      }
      goto L_089F7B68;
    }
L_089F7B68:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) <= 0;
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F7BEC;
      }
      goto L_089F7B70;
    }
L_089F7B70:
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F7BD8;
      }
      goto L_089F7B78;
    }
L_089F7B78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[4] | 128u);
      if (branch_taken) {
          goto L_089F7BC4;
      }
      goto L_089F7B80;
    }
L_089F7B80:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[8]) < 4 ? 1u : 0u);
    if (aot_gpr[9] != 0u) {
    aot_gpr[7] = (aot_gpr[4] | 128u);
        goto L_089F7BAC;
    }
    goto L_089F7B8C;
L_089F7B8C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[8]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (aot_gpr[4] | 128u);
      if (branch_taken) {
          goto L_089F7BEC;
      }
      goto L_089F7B98;
    }
L_089F7B98:
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[8] & 191u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (aot_gpr[4] >> 6u);
    aot_gpr[7] = (aot_gpr[4] | 128u);
    goto L_089F7BAC;
L_089F7BAC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] & 191u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (aot_gpr[4] >> 6u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[4] | 128u);
    goto L_089F7BC4;
L_089F7BC4:
    aot_gpr[7] = (aot_gpr[7] & 191u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (aot_gpr[4] >> 6u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089F7BD8;
L_089F7BD8:
    aot_gpr[6] = (aot_gpr[8] << 2u);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_089F7BEC;
L_089F7BEC:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7BF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x089F7C2Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089F7298;
L_089F7C2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F7CB0;
      }
      goto L_089F7C34;
    }
L_089F7C34:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_089F7CB0;
      }
      goto L_089F7C40;
    }
L_089F7C40:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_089F7CB0;
      }
      goto L_089F7C48;
    }
L_089F7C48:
    aot_gpr[31] = (0x089F7C50u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 250u, 0x089F4FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F7C50u) goto L_089F7C50;
    return;
L_089F7C50:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F7C60u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089F7298;
L_089F7C60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F7CB0;
      }
      goto L_089F7C68;
    }
L_089F7C68:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F7CB0;
      }
      goto L_089F7C74;
    }
L_089F7C74:
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8724));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-8716));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-8708));
    aot_gpr[31] = (0x089F7CA0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-8704));
    goto L_089F7900;
L_089F7CA0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_089F7CDC;
    }
    goto L_089F7CA8;
L_089F7CA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7D24;
      }
      goto L_089F7CB0;
    }
L_089F7CB0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7CDC:
    aot_gpr[31] = (0x089F7CE4u);
    aot_gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F7CE4u) goto L_089F7CE4;
    return;
L_089F7CE4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F7D1C;
      }
      goto L_089F7CF0;
    }
L_089F7CF0:
    aot_gpr[31] = (0x089F7CF8u);
    aot_gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F7CF8u) goto L_089F7CF8;
    return;
L_089F7CF8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10608));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_089F7D1C;
L_089F7D1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7ED0;
      }
      goto L_089F7D24;
    }
L_089F7D24:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F7D34u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_089F7900;
L_089F7D34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7D74;
      }
      goto L_089F7D3C;
    }
L_089F7D3C:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x089F7D48u);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F7D48u) goto L_089F7D48;
    return;
L_089F7D48:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F7D6C;
      }
      goto L_089F7D54;
    }
L_089F7D54:
    aot_gpr[31] = (0x089F7D5Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F7D5Cu) goto L_089F7D5C;
    return;
L_089F7D5C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10320));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_089F7D6C;
L_089F7D6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7ED0;
      }
      goto L_089F7D74;
    }
L_089F7D74:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F7D84u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_089F7900;
L_089F7D84:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7DF8;
      }
      goto L_089F7D8C;
    }
L_089F7D8C:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x089F7D98u);
    aot_gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F7D98u) goto L_089F7D98;
    return;
L_089F7D98:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089F7DEC;
      }
      goto L_089F7DA4;
    }
L_089F7DA4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F7DB0u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F7DB0u) goto L_089F7DB0;
    return;
L_089F7DB0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10464));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-8728));
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089F7DD0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F7DD0u) goto L_089F7DD0;
    return;
L_089F7DD0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F7DE0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_089F70EC;
L_089F7DE0:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (0u | 1u);
    goto L_089F7DEC;
L_089F7DEC:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7ED0;
      }
      goto L_089F7DF8;
    }
L_089F7DF8:
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089F7E08u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    goto L_089F7900;
L_089F7E08:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1))))));
        goto L_089F7E48;
    }
    goto L_089F7E10;
L_089F7E10:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x089F7E1Cu);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F7E1Cu) goto L_089F7E1C;
    return;
L_089F7E1C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F7E40;
      }
      goto L_089F7E28;
    }
L_089F7E28:
    aot_gpr[31] = (0x089F7E30u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F7E30u) goto L_089F7E30;
    return;
L_089F7E30:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10760));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_089F7E40;
L_089F7E40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7ED0;
      }
      goto L_089F7E48;
    }
L_089F7E48:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F7E54u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_089F7A54;
L_089F7E54:
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_089F7E70;
    }
    goto L_089F7E5C;
L_089F7E5C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1))))));
    aot_gpr[5] = (0u | 95u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089F7E9C;
      }
      goto L_089F7E6C;
    }
L_089F7E6C:
    aot_gpr[17] = (0u | 0u);
    goto L_089F7E70;
L_089F7E70:
    aot_gpr[31] = (0x089F7E78u);
    aot_gpr[4] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F7E78u) goto L_089F7E78;
    return;
L_089F7E78:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F7E94;
      }
      goto L_089F7E84;
    }
L_089F7E84:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F7E90u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8728));
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 73u, 0x089F550Cu>(ctx, &aot_mem) && ctx.pc == 0x089F7E90u) goto L_089F7E90;
    return;
L_089F7E90:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    goto L_089F7E94;
L_089F7E94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7ED0;
      }
      goto L_089F7E9C;
    }
L_089F7E9C:
    aot_gpr[31] = (0x089F7EA4u);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F7EA4u) goto L_089F7EA4;
    return;
L_089F7EA4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F7ED0;
      }
      goto L_089F7EB0;
    }
L_089F7EB0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F7EBCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0497_entry, 497u, 3u, 0x089F5020u>(ctx, &aot_mem) && ctx.pc == 0x089F7EBCu) goto L_089F7EBC;
    return;
L_089F7EBC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10760));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_089F7ED0;
L_089F7ED0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7EE0;
      }
      goto L_089F7ED8;
    }
L_089F7ED8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089F7F08;
      }
      goto L_089F7EE0;
    }
L_089F7EE0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F7F08;
      }
      goto L_089F7EE8;
    }
L_089F7EE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F7F04u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F7F04u) goto L_089F7F04;
    return;
L_089F7F04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F7F08;
L_089F7F08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F7F30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x089F7F74u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089F7298;
L_089F7F74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 35u, 0x089F81FCu>(ctx, &aot_mem); return;
      }
      goto L_089F7F7C;
    }
L_089F7F7C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 35u, 0x089F81FCu>(ctx, &aot_mem); return;
      }
      goto L_089F7F88;
    }
L_089F7F88:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F7FB0;
      }
      goto L_089F7F90;
    }
L_089F7F90:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F7FA0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0501_entry, 501u, 4u, 0x089F9044u>(ctx, &aot_mem) && ctx.pc == 0x089F7FA0u) goto L_089F7FA0;
    return;
L_089F7FA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    goto L_089F7FB0;
L_089F7FB0:
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F7FC0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_089F742C;
L_089F7FC0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089F7FD4;
      }
      goto L_089F7FC8;
    }
L_089F7FC8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F7FF8;
      }
      goto L_089F7FD4;
    }
L_089F7FD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 7u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 35u, 0x089F81FCu>(ctx, &aot_mem); return;
      }
      goto L_089F7FE0;
    }
L_089F7FE0:
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F7FF0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F7FF0u) goto L_089F7FF0;
    return;
L_089F7FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 35u, 0x089F81FCu>(ctx, &aot_mem); return;
      }
      goto L_089F7FF8;
    }
L_089F7FF8:
    aot_gpr[31] = (0x089F8000u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_089F7298;
}

void recomp_unit_0499(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0499_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_499(Runtime &runtime) {
    runtime.register_generated_unit(499u, 0x089F7000u, 4096u, &recomp_unit_0499, &recomp_unit_0499_entry);
    runtime.register_function(0x089F7004u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F702Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7040u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F705Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7094u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F70A8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F70B8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F70D0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F70D8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F70ECu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7120u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7138u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F713Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7148u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7160u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7188u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7190u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F71A4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F71B8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F71C0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F71C8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F71D4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F71E4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7200u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F723Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7248u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F724Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7268u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7298u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F72A0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F72ACu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F72B4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F72BCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F72C4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F72E8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F72F4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7300u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F730Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7318u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7320u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F732Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7338u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7344u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F734Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7358u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7394u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F739Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F73A4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F73A8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F73ACu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F73B4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F73BCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F73CCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F73D4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7410u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7418u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7420u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7424u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F742Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7470u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7480u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7488u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7494u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F749Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74A4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74B0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74C0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74C8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74D4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74DCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74E4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74F0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F74F8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7500u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7508u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7510u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7514u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F751Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7528u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7558u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7588u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F75DCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F75ECu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7604u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7614u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7618u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7620u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F762Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7640u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7648u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7660u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7670u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7678u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7684u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7698u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76A4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76ACu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76B4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76B8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76C0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76C8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76DCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76E4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76E8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F76F8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7700u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F770Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7724u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F772Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7738u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F774Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7754u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7764u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F776Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7778u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F77B8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F77C4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F77CCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F77E0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F77E4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F77FCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F780Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7814u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7820u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7830u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F783Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7848u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7850u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7854u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F785Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7864u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7878u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7880u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7884u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F788Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F78A4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F78ACu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F78B8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F78C0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F78C8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F78CCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7900u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7908u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7914u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7924u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7934u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F793Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7944u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F794Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7958u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7968u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7970u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7978u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7980u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7990u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7998u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79A0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79ACu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79BCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79C4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79CCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79D4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79E4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79ECu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F79F4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A04u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A0Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A14u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A1Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A24u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A2Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A3Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A44u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A4Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A54u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A64u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A7Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A84u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7A94u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7AACu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7AB4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7AF4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B04u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B0Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B1Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B28u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B38u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B44u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B50u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B5Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B68u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B70u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B78u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B80u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B8Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7B98u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7BACu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7BC4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7BD8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7BECu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7BF4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7C2Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7C34u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7C40u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7C48u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7C50u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7C60u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7C68u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7C74u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7CA0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7CA8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7CB0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7CDCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7CE4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7CF0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7CF8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D1Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D24u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D34u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D3Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D48u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D54u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D5Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D6Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D74u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D84u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D8Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7D98u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7DA4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7DB0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7DD0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7DE0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7DECu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7DF8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E08u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E10u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E1Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E28u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E30u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E40u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E48u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E54u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E5Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E6Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E70u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E78u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E84u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E90u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E94u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7E9Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7EA4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7EB0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7EBCu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7ED0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7ED8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7EE0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7EE8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7F04u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7F08u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7F30u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7F74u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7F7Cu, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7F88u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7F90u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7FA0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7FB0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7FC0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7FC8u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7FD4u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7FE0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7FF0u, &recomp_unit_0499, "recomp_unit_0499");
    runtime.register_function(0x089F7FF8u, &recomp_unit_0499, "recomp_unit_0499");
}
} // namespace psprecomp
