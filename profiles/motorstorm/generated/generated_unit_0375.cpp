#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0375[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14,
    0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 27, 28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 32,
    0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 41, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0,
    0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 57, 0, 0, 58, 0, 0, 0, 0,
    59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0,
    77, 0, 78, 0, 79, 0, 0, 0, 80, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88,
    0, 89, 0, 90, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98,
    0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0,
    105, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 115, 0,
    0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 127,
    0, 0, 0, 0, 128, 0, 0, 129, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138,
    0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 147, 148, 0,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0,
    166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0,
    174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184,
    0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202,
    0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0,
    212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 0, 0,
    0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0,
    0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0,
    0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274,
};
void recomp_unit_0375_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0897B000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0375[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897B000;
    case 2u: goto L_0897B020;
    case 3u: goto L_0897B030;
    case 4u: goto L_0897B040;
    case 5u: goto L_0897B064;
    case 6u: goto L_0897B06C;
    case 7u: goto L_0897B08C;
    case 8u: goto L_0897B0AC;
    case 9u: goto L_0897B0B4;
    case 10u: goto L_0897B0D4;
    case 11u: goto L_0897B0E0;
    case 12u: goto L_0897B0E8;
    case 13u: goto L_0897B0F4;
    case 14u: goto L_0897B0FC;
    case 15u: goto L_0897B104;
    case 16u: goto L_0897B10C;
    case 17u: goto L_0897B128;
    case 18u: goto L_0897B13C;
    case 19u: goto L_0897B154;
    case 20u: goto L_0897B168;
    case 21u: goto L_0897B170;
    case 22u: goto L_0897B180;
    case 23u: goto L_0897B198;
    case 24u: goto L_0897B1A4;
    case 25u: goto L_0897B1B8;
    case 26u: goto L_0897B1C0;
    case 27u: goto L_0897B1C8;
    case 28u: goto L_0897B1CC;
    case 29u: goto L_0897B1D8;
    case 30u: goto L_0897B1E4;
    case 31u: goto L_0897B1EC;
    case 32u: goto L_0897B1FC;
    case 33u: goto L_0897B204;
    case 34u: goto L_0897B20C;
    case 35u: goto L_0897B214;
    case 36u: goto L_0897B234;
    case 37u: goto L_0897B238;
    case 38u: goto L_0897B258;
    case 39u: goto L_0897B264;
    case 40u: goto L_0897B26C;
    case 41u: goto L_0897B270;
    case 42u: goto L_0897B284;
    case 43u: goto L_0897B298;
    case 44u: goto L_0897B2AC;
    case 45u: goto L_0897B2B4;
    case 46u: goto L_0897B2BC;
    case 47u: goto L_0897B2C4;
    case 48u: goto L_0897B2E8;
    case 49u: goto L_0897B2F8;
    case 50u: goto L_0897B308;
    case 51u: goto L_0897B314;
    case 52u: goto L_0897B334;
    case 53u: goto L_0897B344;
    case 54u: goto L_0897B34C;
    case 55u: goto L_0897B354;
    case 56u: goto L_0897B35C;
    case 57u: goto L_0897B360;
    case 58u: goto L_0897B36C;
    case 59u: goto L_0897B380;
    case 60u: goto L_0897B388;
    case 61u: goto L_0897B398;
    case 62u: goto L_0897B3A8;
    case 63u: goto L_0897B3B4;
    case 64u: goto L_0897B3CC;
    case 65u: goto L_0897B3E4;
    case 66u: goto L_0897B3EC;
    case 67u: goto L_0897B3F8;
    case 68u: goto L_0897B404;
    case 69u: goto L_0897B428;
    case 70u: goto L_0897B438;
    case 71u: goto L_0897B440;
    case 72u: goto L_0897B448;
    case 73u: goto L_0897B450;
    case 74u: goto L_0897B45C;
    case 75u: goto L_0897B464;
    case 76u: goto L_0897B470;
    case 77u: goto L_0897B480;
    case 78u: goto L_0897B488;
    case 79u: goto L_0897B490;
    case 80u: goto L_0897B4A0;
    case 81u: goto L_0897B4A4;
    case 82u: goto L_0897B4AC;
    case 83u: goto L_0897B4B8;
    case 84u: goto L_0897B4C8;
    case 85u: goto L_0897B4DC;
    case 86u: goto L_0897B4E4;
    case 87u: goto L_0897B4F0;
    case 88u: goto L_0897B4FC;
    case 89u: goto L_0897B504;
    case 90u: goto L_0897B50C;
    case 91u: goto L_0897B510;
    case 92u: goto L_0897B524;
    case 93u: goto L_0897B538;
    case 94u: goto L_0897B554;
    case 95u: goto L_0897B560;
    case 96u: goto L_0897B56C;
    case 97u: goto L_0897B574;
    case 98u: goto L_0897B57C;
    case 99u: goto L_0897B590;
    case 100u: goto L_0897B5A0;
    case 101u: goto L_0897B5B0;
    case 102u: goto L_0897B5BC;
    case 103u: goto L_0897B5C8;
    case 104u: goto L_0897B5F4;
    case 105u: goto L_0897B600;
    case 106u: goto L_0897B60C;
    case 107u: goto L_0897B614;
    case 108u: goto L_0897B61C;
    case 109u: goto L_0897B634;
    case 110u: goto L_0897B648;
    case 111u: goto L_0897B650;
    case 112u: goto L_0897B658;
    case 113u: goto L_0897B660;
    case 114u: goto L_0897B674;
    case 115u: goto L_0897B678;
    case 116u: goto L_0897B684;
    case 117u: goto L_0897B694;
    case 118u: goto L_0897B69C;
    case 119u: goto L_0897B6A4;
    case 120u: goto L_0897B6AC;
    case 121u: goto L_0897B6B8;
    case 122u: goto L_0897B6C8;
    case 123u: goto L_0897B6D0;
    case 124u: goto L_0897B6D8;
    case 125u: goto L_0897B6E0;
    case 126u: goto L_0897B6EC;
    case 127u: goto L_0897B6FC;
    case 128u: goto L_0897B710;
    case 129u: goto L_0897B71C;
    case 130u: goto L_0897B720;
    case 131u: goto L_0897B728;
    case 132u: goto L_0897B738;
    case 133u: goto L_0897B74C;
    case 134u: goto L_0897B750;
    case 135u: goto L_0897B75C;
    case 136u: goto L_0897B76C;
    case 137u: goto L_0897B774;
    case 138u: goto L_0897B77C;
    case 139u: goto L_0897B78C;
    case 140u: goto L_0897B794;
    case 141u: goto L_0897B7A4;
    case 142u: goto L_0897B7B4;
    case 143u: goto L_0897B7C0;
    case 144u: goto L_0897B7D4;
    case 145u: goto L_0897B7DC;
    case 146u: goto L_0897B7EC;
    case 147u: goto L_0897B7F4;
    case 148u: goto L_0897B7F8;
    case 149u: goto L_0897B818;
    case 150u: goto L_0897B82C;
    case 151u: goto L_0897B858;
    case 152u: goto L_0897B874;
    case 153u: goto L_0897B88C;
    case 154u: goto L_0897B898;
    case 155u: goto L_0897B8A0;
    case 156u: goto L_0897B8B4;
    case 157u: goto L_0897B8C8;
    case 158u: goto L_0897B8EC;
    case 159u: goto L_0897B908;
    case 160u: goto L_0897B920;
    case 161u: goto L_0897B92C;
    case 162u: goto L_0897B934;
    case 163u: goto L_0897B948;
    case 164u: goto L_0897B960;
    case 165u: goto L_0897B978;
    case 166u: goto L_0897B980;
    case 167u: goto L_0897B98C;
    case 168u: goto L_0897B99C;
    case 169u: goto L_0897B9B0;
    case 170u: goto L_0897B9C4;
    case 171u: goto L_0897B9D0;
    case 172u: goto L_0897B9DC;
    case 173u: goto L_0897B9EC;
    case 174u: goto L_0897BA00;
    case 175u: goto L_0897BA08;
    case 176u: goto L_0897BA10;
    case 177u: goto L_0897BA18;
    case 178u: goto L_0897BA20;
    case 179u: goto L_0897BA28;
    case 180u: goto L_0897BA2C;
    case 181u: goto L_0897BA40;
    case 182u: goto L_0897BA60;
    case 183u: goto L_0897BA6C;
    case 184u: goto L_0897BA7C;
    case 185u: goto L_0897BA88;
    case 186u: goto L_0897BA90;
    case 187u: goto L_0897BA98;
    case 188u: goto L_0897BAA0;
    case 189u: goto L_0897BAAC;
    case 190u: goto L_0897BAB8;
    case 191u: goto L_0897BAC4;
    case 192u: goto L_0897BACC;
    case 193u: goto L_0897BAE4;
    case 194u: goto L_0897BB0C;
    case 195u: goto L_0897BB18;
    case 196u: goto L_0897BB24;
    case 197u: goto L_0897BB2C;
    case 198u: goto L_0897BB34;
    case 199u: goto L_0897BB4C;
    case 200u: goto L_0897BB64;
    case 201u: goto L_0897BB74;
    case 202u: goto L_0897BB7C;
    case 203u: goto L_0897BB84;
    case 204u: goto L_0897BB8C;
    case 205u: goto L_0897BB94;
    case 206u: goto L_0897BB9C;
    case 207u: goto L_0897BBA8;
    case 208u: goto L_0897BBC4;
    case 209u: goto L_0897BBDC;
    case 210u: goto L_0897BBE4;
    case 211u: goto L_0897BBF4;
    case 212u: goto L_0897BC00;
    case 213u: goto L_0897BC08;
    case 214u: goto L_0897BC10;
    case 215u: goto L_0897BC18;
    case 216u: goto L_0897BC20;
    case 217u: goto L_0897BC28;
    case 218u: goto L_0897BC30;
    case 219u: goto L_0897BC38;
    case 220u: goto L_0897BC40;
    case 221u: goto L_0897BC44;
    case 222u: goto L_0897BC60;
    case 223u: goto L_0897BC74;
    case 224u: goto L_0897BC88;
    case 225u: goto L_0897BCBC;
    case 226u: goto L_0897BCCC;
    case 227u: goto L_0897BCE0;
    case 228u: goto L_0897BCFC;
    case 229u: goto L_0897BD18;
    case 230u: goto L_0897BD30;
    case 231u: goto L_0897BD3C;
    case 232u: goto L_0897BD44;
    case 233u: goto L_0897BD58;
    case 234u: goto L_0897BD84;
    case 235u: goto L_0897BD8C;
    case 236u: goto L_0897BDB0;
    case 237u: goto L_0897BDBC;
    case 238u: goto L_0897BDE0;
    case 239u: goto L_0897BDEC;
    case 240u: goto L_0897BDF4;
    case 241u: goto L_0897BE04;
    case 242u: goto L_0897BE18;
    case 243u: goto L_0897BE20;
    case 244u: goto L_0897BE2C;
    case 245u: goto L_0897BE48;
    case 246u: goto L_0897BE5C;
    case 247u: goto L_0897BE68;
    case 248u: goto L_0897BE70;
    case 249u: goto L_0897BE78;
    case 250u: goto L_0897BE88;
    case 251u: goto L_0897BE90;
    case 252u: goto L_0897BE98;
    case 253u: goto L_0897BEAC;
    case 254u: goto L_0897BEBC;
    case 255u: goto L_0897BED0;
    case 256u: goto L_0897BED8;
    case 257u: goto L_0897BEE0;
    case 258u: goto L_0897BF14;
    case 259u: goto L_0897BF1C;
    case 260u: goto L_0897BF30;
    case 261u: goto L_0897BF44;
    case 262u: goto L_0897BF50;
    case 263u: goto L_0897BF60;
    case 264u: goto L_0897BF68;
    case 265u: goto L_0897BF70;
    case 266u: goto L_0897BF78;
    case 267u: goto L_0897BF8C;
    case 268u: goto L_0897BF9C;
    case 269u: goto L_0897BFA4;
    case 270u: goto L_0897BFBC;
    case 271u: goto L_0897BFC8;
    case 272u: goto L_0897BFD4;
    case 273u: goto L_0897BFDC;
    case 274u: goto L_0897BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897B000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897B020u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B020u) goto L_0897B020;
    return;
L_0897B020:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x0897B030u);
    aot_gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x0897B030u) goto L_0897B030;
    return;
L_0897B030:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0897B104;
      }
      goto L_0897B040;
    }
L_0897B040:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(252));
    aot_gpr[8] = (2200u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 1024u);
    aot_gpr[9] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897B064u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-19720));
    ctx.pc = 0x08A5AE0Cu;
    return;
L_0897B064:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0FC;
      }
      goto L_0897B06C;
    }
L_0897B06C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(248)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897B08Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B08Cu) goto L_0897B08C;
    return;
L_0897B08C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (0u | 512u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x0897B0ACu);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = 0x08A5AEACu;
    return;
L_0897B0AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B0F4;
      }
      goto L_0897B0B4;
    }
L_0897B0B4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897B0D4u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AE6Cu;
    return;
L_0897B0D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_0897B10C;
      }
      goto L_0897B0E0;
    }
L_0897B0E0:
    aot_gpr[31] = (0x0897B0E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5AE2Cu;
    return;
L_0897B0E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(248), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B10C;
      }
      goto L_0897B0F4;
    }
L_0897B0F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B10C;
      }
      goto L_0897B0FC;
    }
L_0897B0FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B10C;
      }
      goto L_0897B104;
    }
L_0897B104:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B10C;
      }
      goto L_0897B10C;
    }
L_0897B10C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B128:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(432)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B170;
      }
      goto L_0897B13C;
    }
L_0897B13C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(436), aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897B154u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B154u) goto L_0897B154;
    return;
L_0897B154:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(436)));
    aot_gpr[31] = (0x0897B168u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x0897B168u) goto L_0897B168;
    return;
L_0897B168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(432), aot_gpr[2]);
    goto L_0897B170;
L_0897B170:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(432)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B180:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0897B198u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 242u, 0x0897AEA0u>(ctx, &aot_mem) && ctx.pc == 0x0897B198u) goto L_0897B198;
    return;
L_0897B198:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B1C0;
      }
      goto L_0897B1A4;
    }
L_0897B1A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897B1C8;
      }
      goto L_0897B1B8;
    }
L_0897B1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B1FC;
      }
      goto L_0897B1C0;
    }
L_0897B1C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_0897B270;
      }
      goto L_0897B1C8;
    }
L_0897B1C8:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0897B1CC;
L_0897B1CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B1EC;
      }
      goto L_0897B1D8;
    }
L_0897B1D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[9];
    // nop
      if (branch_taken) {
          goto L_0897B1EC;
      }
      goto L_0897B1E4;
    }
L_0897B1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B1FC;
      }
      goto L_0897B1EC;
    }
L_0897B1EC:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897B1CC;
      }
      goto L_0897B1FC;
    }
L_0897B1FC:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0897B26C;
      }
      goto L_0897B204;
    }
L_0897B204:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897B238;
      }
      goto L_0897B20C;
    }
L_0897B20C:
    aot_gpr[5] = (aot_gpr[8] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    goto L_0897B214;
L_0897B214:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897B214;
      }
      goto L_0897B234;
    }
L_0897B234:
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_0897B238;
L_0897B238:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(268)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897B258u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B258u) goto L_0897B258;
    return;
L_0897B258:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897B264u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B264u) goto L_0897B264;
    return;
L_0897B264:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B270;
      }
      goto L_0897B26C;
    }
L_0897B26C:
    aot_gpr[2] = (0u | 32u);
    goto L_0897B270;
L_0897B270:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B284:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26312)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26312), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B298:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26312)));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B2B4;
      }
      goto L_0897B2AC;
    }
L_0897B2AC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26312), 0u);
      if (branch_taken) {
          goto L_0897B2BC;
      }
      goto L_0897B2B4;
    }
L_0897B2B4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26312), aot_gpr[4]);
    goto L_0897B2BC;
L_0897B2BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B2C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(440)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897B2E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B2E8u) goto L_0897B2E8;
    return;
L_0897B2E8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B2F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B354;
      }
      goto L_0897B308;
    }
L_0897B308:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B34C;
      }
      goto L_0897B314;
    }
L_0897B314:
    aot_gpr[5] = (aot_gpr[5] << 11u);
    aot_gpr[8] = (0u + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0897B334u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 9u, 0x089760A4u>(ctx, &aot_mem) && ctx.pc == 0x0897B334u) goto L_0897B334;
    return;
L_0897B334:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[6] & 2047u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B35C;
      }
      goto L_0897B344;
    }
L_0897B344:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897B360;
      }
      goto L_0897B34C;
    }
L_0897B34C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B360;
      }
      goto L_0897B354;
    }
L_0897B354:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B360;
      }
      goto L_0897B35C;
    }
L_0897B35C:
    aot_gpr[2] = (aot_gpr[6] >> 11u);
    goto L_0897B360;
L_0897B360:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B36C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B388;
      }
      goto L_0897B380;
    }
L_0897B380:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 68u);
      if (branch_taken) {
          goto L_0897B3A8;
      }
      goto L_0897B388;
    }
L_0897B388:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897B398u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B398u) goto L_0897B398;
    return;
L_0897B398:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897B3A8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 183u, 0x0897AB2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B3A8u) goto L_0897B3A8;
    return;
L_0897B3A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B3B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0897B3CCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 195u, 0x08978A90u>(ctx, &aot_mem) && ctx.pc == 0x0897B3CCu) goto L_0897B3CC;
    return;
L_0897B3CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0897B3E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x0897B3E4u) goto L_0897B3E4;
    return;
L_0897B3E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(464), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897B440;
      }
      goto L_0897B3EC;
    }
L_0897B3EC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897B3F8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B3F8u) goto L_0897B3F8;
    return;
L_0897B3F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897B404u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B404u) goto L_0897B404;
    return;
L_0897B404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] ^ 8u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(460), aot_gpr[5]);
    aot_gpr[31] = (0x0897B428u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 245u, 0x08976EFCu>(ctx, &aot_mem) && ctx.pc == 0x0897B428u) goto L_0897B428;
    return;
L_0897B428:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0897B448;
      }
      goto L_0897B438;
    }
L_0897B438:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897B450;
      }
      goto L_0897B440;
    }
L_0897B440:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_0897B510;
      }
      goto L_0897B448;
    }
L_0897B448:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    goto L_0897B450;
L_0897B450:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[31] = (0x0897B45Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AE14u;
    return;
L_0897B45C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897B488;
      }
      goto L_0897B464;
    }
L_0897B464:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897B490;
      }
      goto L_0897B470;
    }
L_0897B470:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897B480u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AEC4u;
    return;
L_0897B480:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897B4A4;
      }
      goto L_0897B488;
    }
L_0897B488:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 70u);
      if (branch_taken) {
          goto L_0897B510;
      }
      goto L_0897B490;
    }
L_0897B490:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897B4A0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AE8Cu;
    return;
L_0897B4A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0897B4A4;
L_0897B4A4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B504;
      }
      goto L_0897B4AC;
    }
L_0897B4AC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897B4B8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B4B8u) goto L_0897B4B8;
    return;
L_0897B4B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897B4C8u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x0897B4C8u) goto L_0897B4C8;
    return;
L_0897B4C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897B4DCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5ADECu;
    return;
L_0897B4DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B50C;
      }
      goto L_0897B4E4;
    }
L_0897B4E4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897B4F0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B4F0u) goto L_0897B4F0;
    return;
L_0897B4F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    aot_gpr[31] = (0x0897B4FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B4FCu) goto L_0897B4FC;
    return;
L_0897B4FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 70u);
      if (branch_taken) {
          goto L_0897B510;
      }
      goto L_0897B504;
    }
L_0897B504:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 70u);
      if (branch_taken) {
          goto L_0897B510;
      }
      goto L_0897B50C;
    }
L_0897B50C:
    aot_gpr[2] = (0u | 0u);
    goto L_0897B510;
L_0897B510:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B524:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B574;
      }
      goto L_0897B538;
    }
L_0897B538:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(456), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(464), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897B554u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B554u) goto L_0897B554;
    return;
L_0897B554:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897B560u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B560u) goto L_0897B560;
    return;
L_0897B560:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897B57C;
      }
      goto L_0897B56C;
    }
L_0897B56C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B5BC;
      }
      goto L_0897B574;
    }
L_0897B574:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_0897B5BC;
      }
      goto L_0897B57C;
    }
L_0897B57C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897B590u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B590u) goto L_0897B590;
    return;
L_0897B590:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897B5A0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(448)));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B5A0u) goto L_0897B5A0;
    return;
L_0897B5A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0897B5B0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(380)));
    ctx.pc = 0x08A5AE24u;
    return;
L_0897B5B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), 0u);
    goto L_0897B5BC;
L_0897B5BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B5C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0897B5F4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B5F4u) goto L_0897B5F4;
    return;
L_0897B5F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897B600u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B600u) goto L_0897B600;
    return;
L_0897B600:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(464)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897B658;
      }
      goto L_0897B60C;
    }
L_0897B60C:
    aot_gpr[31] = (0x0897B614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 187u, 0x0897EDF4u>(ctx, &aot_mem) && ctx.pc == 0x0897B614u) goto L_0897B614;
    return;
L_0897B614:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B650;
      }
      goto L_0897B61C;
    }
L_0897B61C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(460)));
    aot_gpr[19] = (32866u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-32767));
      if (branch_taken) {
          goto L_0897B660;
      }
      goto L_0897B634;
    }
L_0897B634:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897B648u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5AEB4u;
    return;
L_0897B648:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897B678;
      }
      goto L_0897B650;
    }
L_0897B650:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B658;
    }
L_0897B658:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B660;
    }
L_0897B660:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897B674u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5AE64u;
    return;
L_0897B674:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0897B678;
L_0897B678:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (32866u << 16u);
      if (branch_taken) {
          goto L_0897B69C;
      }
      goto L_0897B684;
    }
L_0897B684:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32768));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B6D8;
      }
      goto L_0897B694;
    }
L_0897B694:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 153u);
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B69C;
    }
L_0897B69C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B694;
      }
      goto L_0897B6A4;
    }
L_0897B6A4:
    aot_gpr[31] = (0x0897B6ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 132u, 0x0897E9F4u>(ctx, &aot_mem) && ctx.pc == 0x0897B6ACu) goto L_0897B6AC;
    return;
L_0897B6AC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B6D0;
      }
      goto L_0897B6B8;
    }
L_0897B6B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0897B6E0;
      }
      goto L_0897B6C8;
    }
L_0897B6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B794;
      }
      goto L_0897B6D0;
    }
L_0897B6D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 46u);
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B6D8;
    }
L_0897B6D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 512u);
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B6E0;
    }
L_0897B6E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B728;
      }
      goto L_0897B6EC;
    }
L_0897B6EC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897B6FCu);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B6FCu) goto L_0897B6FC;
    return;
L_0897B6FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897B710u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5AE54u;
    return;
L_0897B710:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B720;
      }
      goto L_0897B71C;
    }
L_0897B71C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), 0u);
    goto L_0897B720;
L_0897B720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B750;
      }
      goto L_0897B728;
    }
L_0897B728:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897B738u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B738u) goto L_0897B738;
    return;
L_0897B738:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897B74Cu);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5AE54u;
    return;
L_0897B74C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0897B750;
L_0897B750:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (32866u << 16u);
      if (branch_taken) {
          goto L_0897B774;
      }
      goto L_0897B75C;
    }
L_0897B75C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32768));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B78C;
      }
      goto L_0897B76C;
    }
L_0897B76C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 155u);
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B774;
    }
L_0897B774:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897B76C;
      }
      goto L_0897B77C;
    }
L_0897B77C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(388)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B7C0;
      }
      goto L_0897B78C;
    }
L_0897B78C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897B7F8;
      }
      goto L_0897B794;
    }
L_0897B794:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897B7A4u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897B7A4u) goto L_0897B7A4;
    return;
L_0897B7A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(400)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(404)));
    aot_gpr[31] = (0x0897B7B4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0897B7B4u) goto L_0897B7B4;
    return;
L_0897B7B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(388)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    goto L_0897B7C0;
L_0897B7C0:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897B7D4u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 5u, 0x08979024u>(ctx, &aot_mem) && ctx.pc == 0x0897B7D4u) goto L_0897B7D4;
    return;
L_0897B7D4:
    aot_gpr[31] = (0x0897B7DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 4u, 0x08979018u>(ctx, &aot_mem) && ctx.pc == 0x0897B7DCu) goto L_0897B7DC;
    return;
L_0897B7DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[31] = (0x0897B7ECu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(464)));
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 155u, 0x0897EB78u>(ctx, &aot_mem) && ctx.pc == 0x0897B7ECu) goto L_0897B7EC;
    return;
L_0897B7EC:
    aot_gpr[31] = (0x0897B7F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 198u, 0x08978AB4u>(ctx, &aot_mem) && ctx.pc == 0x0897B7F4u) goto L_0897B7F4;
    return;
L_0897B7F4:
    aot_gpr[2] = (0u | 0u);
    goto L_0897B7F8;
L_0897B7F8:
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
L_0897B818:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897B82Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0897B8B4;
L_0897B82C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7632));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(460), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B858:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897B8A0;
      }
      goto L_0897B874;
    }
L_0897B874:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7632));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897B88Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_0897B8EC;
L_0897B88C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B8A0;
      }
      goto L_0897B898;
    }
L_0897B898:
    aot_gpr[31] = (0x0897B8A0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897B8A0u) goto L_0897B8A0;
    return;
L_0897B8A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B8B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897B8C8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 186u, 0x089789CCu>(ctx, &aot_mem) && ctx.pc == 0x0897B8C8u) goto L_0897B8C8;
    return;
L_0897B8C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7688));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), 0u);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B8EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897B934;
      }
      goto L_0897B908;
    }
L_0897B908:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7688));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897B920u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 189u, 0x08978A24u>(ctx, &aot_mem) && ctx.pc == 0x0897B920u) goto L_0897B920;
    return;
L_0897B920:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897B934;
      }
      goto L_0897B92C;
    }
L_0897B92C:
    aot_gpr[31] = (0x0897B934u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897B934u) goto L_0897B934;
    return;
L_0897B934:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897B948:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0897B960u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 195u, 0x08978A90u>(ctx, &aot_mem) && ctx.pc == 0x0897B960u) goto L_0897B960;
    return;
L_0897B960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0897B978u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x0897B978u) goto L_0897B978;
    return;
L_0897B978:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897BA20;
      }
      goto L_0897B980;
    }
L_0897B980:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897B98Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897B98Cu) goto L_0897B98C;
    return;
L_0897B98C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897B99Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897B99Cu) goto L_0897B99C;
    return;
L_0897B99C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(504)));
    aot_gpr[31] = (0x0897B9B0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 234u, 0x0897AE24u>(ctx, &aot_mem) && ctx.pc == 0x0897B9B0u) goto L_0897B9B0;
    return;
L_0897B9B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(452), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897B9C4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5AE14u;
    return;
L_0897B9C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897BA18;
      }
      goto L_0897B9D0;
    }
L_0897B9D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[31] = (0x0897B9DCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    ctx.pc = 0x08A5AE74u;
    return;
L_0897B9DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(448), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897BA10;
      }
      goto L_0897B9EC;
    }
L_0897B9EC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    aot_gpr[31] = (0x0897BA00u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = 0x08A5ADECu;
    return;
L_0897BA00:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BA28;
      }
      goto L_0897BA08;
    }
L_0897BA08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 70u);
      if (branch_taken) {
          goto L_0897BA2C;
      }
      goto L_0897BA10;
    }
L_0897BA10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 70u);
      if (branch_taken) {
          goto L_0897BA2C;
      }
      goto L_0897BA18;
    }
L_0897BA18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 70u);
      if (branch_taken) {
          goto L_0897BA2C;
      }
      goto L_0897BA20;
    }
L_0897BA20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 64u);
      if (branch_taken) {
          goto L_0897BA2C;
      }
      goto L_0897BA28;
    }
L_0897BA28:
    aot_gpr[2] = (0u | 0u);
    goto L_0897BA2C;
L_0897BA2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BA40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897BA90;
      }
      goto L_0897BA60;
    }
L_0897BA60:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897BA6Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897BA6Cu) goto L_0897BA6C;
    return;
L_0897BA6C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897BA7Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BA7Cu) goto L_0897BA7C;
    return;
L_0897BA7C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BA98;
      }
      goto L_0897BA88;
    }
L_0897BA88:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897BACC;
      }
      goto L_0897BA90;
    }
L_0897BA90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 44u);
      if (branch_taken) {
          goto L_0897BACC;
      }
      goto L_0897BA98;
    }
L_0897BA98:
    aot_gpr[31] = (0x0897BAA0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AE1Cu;
    return;
L_0897BAA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(452)));
    aot_gpr[31] = (0x0897BAACu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 240u, 0x0897AE84u>(ctx, &aot_mem) && ctx.pc == 0x0897BAACu) goto L_0897BAAC;
    return;
L_0897BAAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(448)));
    aot_gpr[31] = (0x0897BAB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AE9Cu;
    return;
L_0897BAB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[31] = (0x0897BAC4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5AE24u;
    return;
L_0897BAC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), 0u);
    aot_gpr[2] = (0u | 0u);
    goto L_0897BACC;
L_0897BACC:
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
L_0897BAE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0897BB0Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897BB0Cu) goto L_0897BB0C;
    return;
L_0897BB0C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897BB18u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BB18u) goto L_0897BB18;
    return;
L_0897BB18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897BB84;
      }
      goto L_0897BB24;
    }
L_0897BB24:
    aot_gpr[31] = (0x0897BB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 187u, 0x0897EDF4u>(ctx, &aot_mem) && ctx.pc == 0x0897BB2Cu) goto L_0897BB2C;
    return;
L_0897BB2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB7C;
      }
      goto L_0897BB34;
    }
L_0897BB34:
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(384));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897BB4Cu);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5AECCu;
    return;
L_0897BB4C:
    aot_gpr[5] = (32866u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32767));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (32866u << 16u);
      if (branch_taken) {
          goto L_0897BB8C;
      }
      goto L_0897BB64;
    }
L_0897BB64:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-32768));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC18;
      }
      goto L_0897BB74;
    }
L_0897BB74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 153u);
      if (branch_taken) {
          goto L_0897BC44;
      }
      goto L_0897BB7C;
    }
L_0897BB7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897BC44;
      }
      goto L_0897BB84;
    }
L_0897BB84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_0897BC44;
      }
      goto L_0897BB8C;
    }
L_0897BB8C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BB74;
      }
      goto L_0897BB94;
    }
L_0897BB94:
    aot_gpr[31] = (0x0897BB9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 132u, 0x0897E9F4u>(ctx, &aot_mem) && ctx.pc == 0x0897BB9Cu) goto L_0897BB9C;
    return;
L_0897BB9C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC10;
      }
      goto L_0897BBA8;
    }
L_0897BBA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897BBC4u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897BBC4u) goto L_0897BBC4;
    return;
L_0897BBC4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897BBDCu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AEBCu;
    return;
L_0897BBDC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC08;
      }
      goto L_0897BBE4;
    }
L_0897BBE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(388)));
    aot_gpr[31] = (0x0897BBF4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 5u, 0x08979024u>(ctx, &aot_mem) && ctx.pc == 0x0897BBF4u) goto L_0897BBF4;
    return;
L_0897BBF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC20;
      }
      goto L_0897BC00;
    }
L_0897BC00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BC30;
      }
      goto L_0897BC08;
    }
L_0897BC08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 155u);
      if (branch_taken) {
          goto L_0897BC44;
      }
      goto L_0897BC10;
    }
L_0897BC10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 46u);
      if (branch_taken) {
          goto L_0897BC44;
      }
      goto L_0897BC18;
    }
L_0897BC18:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 512u);
      if (branch_taken) {
          goto L_0897BC44;
      }
      goto L_0897BC20;
    }
L_0897BC20:
    aot_gpr[31] = (0x0897BC28u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 4u, 0x08979018u>(ctx, &aot_mem) && ctx.pc == 0x0897BC28u) goto L_0897BC28;
    return;
L_0897BC28:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_0897BC30;
L_0897BC30:
    aot_gpr[31] = (0x0897BC38u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(456)));
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 155u, 0x0897EB78u>(ctx, &aot_mem) && ctx.pc == 0x0897BC38u) goto L_0897BC38;
    return;
L_0897BC38:
    aot_gpr[31] = (0x0897BC40u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 198u, 0x08978AB4u>(ctx, &aot_mem) && ctx.pc == 0x0897BC40u) goto L_0897BC40;
    return;
L_0897BC40:
    aot_gpr[2] = (0u | 0u);
    goto L_0897BC44;
L_0897BC44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BC60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897BC74u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_0897B8B4;
L_0897BC74:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7744));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[31] = (0x0897BC88u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), 0u);
    ctx.pc = 0x08A5AF4Cu;
    return;
L_0897BC88:
    aot_gpr[4] = (18351u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 51200u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[12] / aot_fpr[0];
    aot_gpr[4] = (16384u << 16u);
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_0897BCCC;
    }
    goto L_0897BCBC;
L_0897BCBC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0897BCE0;
      }
      goto L_0897BCCC;
    }
L_0897BCCC:
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    goto L_0897BCE0;
L_0897BCE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(468), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(464), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BCFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897BD44;
      }
      goto L_0897BD18;
    }
L_0897BD18:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7744));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897BD30u);
    aot_gpr[5] = (0u | 0u);
    goto L_0897B8EC;
L_0897BD30:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BD44;
      }
      goto L_0897BD3C;
    }
L_0897BD3C:
    aot_gpr[31] = (0x0897BD44u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897BD44u) goto L_0897BD44;
    return;
L_0897BD44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BD58:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20388)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-20392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BD84:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BD8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897BDB0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897BDB0u) goto L_0897BDB0;
    return;
L_0897BDB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BDBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897BDE0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897BDE0u) goto L_0897BDE0;
    return;
L_0897BDE0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BDEC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BDF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BE04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BE20;
      }
      goto L_0897BE18;
    }
L_0897BE18:
    aot_gpr[31] = (0x0897BE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BE20u) goto L_0897BE20;
    return;
L_0897BE20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BE2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897BE98;
      }
      goto L_0897BE48;
    }
L_0897BE48:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26032));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897BE70;
      }
      goto L_0897BE5C;
    }
L_0897BE5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BE70;
      }
      goto L_0897BE68;
    }
L_0897BE68:
    aot_gpr[31] = (0x0897BE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 94u, 0x0897E76Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BE70u) goto L_0897BE70;
    return;
L_0897BE70:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_0897BE88;
      }
      goto L_0897BE78;
    }
L_0897BE78:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26000));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_0897BE88;
L_0897BE88:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BE98;
      }
      goto L_0897BE90;
    }
L_0897BE90:
    aot_gpr[31] = (0x0897BE98u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897BE98u) goto L_0897BE98;
    return;
L_0897BE98:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BEAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897BEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 190u, 0x0897EE3Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BEBCu) goto L_0897BEBC;
    return;
L_0897BEBC:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BED0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1408)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BED8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897BEE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897BF14u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897BF14u) goto L_0897BF14;
    return;
L_0897BF14:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897BF68;
      }
      goto L_0897BF1C;
    }
L_0897BF1C:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1408), aot_gpr[18]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897BF30u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897BF30u) goto L_0897BF30;
    return;
L_0897BF30:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(1440));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897BF44u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 134u, 0x0897A824u>(ctx, &aot_mem) && ctx.pc == 0x0897BF44u) goto L_0897BF44;
    return;
L_0897BF44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1408)));
    aot_gpr[31] = (0x0897BF50u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 138u, 0x0897A878u>(ctx, &aot_mem) && ctx.pc == 0x0897BF50u) goto L_0897BF50;
    return;
L_0897BF50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1660), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(668)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897BF70;
      }
      goto L_0897BF60;
    }
L_0897BF60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 32u, 0x0897C140u>(ctx, &aot_mem); return;
      }
      goto L_0897BF68;
    }
L_0897BF68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 256u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 33u, 0x0897C144u>(ctx, &aot_mem); return;
      }
      goto L_0897BF70;
    }
L_0897BF70:
    aot_gpr[31] = (0x0897BF78u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897B128;
L_0897BF78:
    aot_gpr[17] = (0u | 4u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897BF8Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 64u, 0x08A473A8u>(ctx, &aot_mem) && ctx.pc == 0x0897BF8Cu) goto L_0897BF8C;
    return;
L_0897BF8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1408)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
        goto L_0897BFD4;
    }
    goto L_0897BF9C;
L_0897BF9C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 2u, 0x0897C010u>(ctx, &aot_mem); return;
      }
      goto L_0897BFA4;
    }
L_0897BFA4:
    aot_gpr[6] = (9u << 16u);
    aot_gpr[4] = (0u | 480u);
    aot_gpr[5] = (0u | 272u);
    aot_gpr[7] = (0u | 512u);
    aot_gpr[31] = (0x0897BFBCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 197u, 0x08A47F0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BFBCu) goto L_0897BFBC;
    return;
L_0897BFBC:
    aot_gpr[5] = (0u | 512u);
    aot_gpr[31] = (0x0897BFC8u);
    aot_gpr[4] = (17u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 201u, 0x08A47F80u>(ctx, &aot_mem) && ctx.pc == 0x0897BFC8u) goto L_0897BFC8;
    return;
L_0897BFC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1408)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u | 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 3u, 0x0897C018u>(ctx, &aot_mem); return;
      }
      goto L_0897BFD4;
    }
L_0897BFD4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0376_entry, 376u, 2u, 0x0897C010u>(ctx, &aot_mem); return;
      }
      goto L_0897BFDC;
    }
L_0897BFDC:
    aot_gpr[6] = (4u << 16u);
    aot_gpr[4] = (0u | 480u);
    aot_gpr[5] = (0u | 272u);
    aot_gpr[7] = (0u | 512u);
    aot_gpr[31] = (0x0897BFF4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16384));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 197u, 0x08A47F0Cu>(ctx, &aot_mem) && ctx.pc == 0x0897BFF4u) goto L_0897BFF4;
    return;
L_0897BFF4:
    aot_gpr[4] = (9u << 16u);
    aot_gpr[5] = (0u | 512u);
    aot_gpr[31] = (0x0897C004u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32768));
    (void)rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 201u, 0x08A47F80u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0375(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0375_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_375(Runtime &runtime) {
    runtime.register_generated_unit(375u, 0x0897B000u, 4096u, &recomp_unit_0375, &recomp_unit_0375_entry);
    runtime.register_function(0x0897B000u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B020u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B030u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B040u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B064u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B06Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B08Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B0ACu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B0B4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B0D4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B0E0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B0E8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B0F4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B0FCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B104u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B10Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B128u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B13Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B154u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B168u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B170u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B180u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B198u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1A4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1B8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1C0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1C8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1CCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1D8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1E4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1ECu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B1FCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B204u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B20Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B214u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B234u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B238u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B258u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B264u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B26Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B270u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B284u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B298u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B2ACu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B2B4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B2BCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B2C4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B2E8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B2F8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B308u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B314u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B334u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B344u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B34Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B354u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B35Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B360u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B36Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B380u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B388u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B398u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B3A8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B3B4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B3CCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B3E4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B3ECu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B3F8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B404u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B428u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B438u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B440u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B448u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B450u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B45Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B464u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B470u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B480u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B488u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B490u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4A0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4A4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4ACu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4B8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4C8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4DCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4E4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4F0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B4FCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B504u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B50Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B510u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B524u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B538u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B554u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B560u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B56Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B574u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B57Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B590u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B5A0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B5B0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B5BCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B5C8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B5F4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B600u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B60Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B614u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B61Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B634u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B648u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B650u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B658u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B660u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B674u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B678u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B684u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B694u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B69Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6A4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6ACu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6B8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6C8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6D0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6D8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6E0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6ECu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B6FCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B710u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B71Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B720u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B728u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B738u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B74Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B750u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B75Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B76Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B774u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B77Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B78Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B794u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B7A4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B7B4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B7C0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B7D4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B7DCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B7ECu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B7F4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B7F8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B818u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B82Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B858u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B874u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B88Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B898u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B8A0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B8B4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B8C8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B8ECu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B908u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B920u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B92Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B934u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B948u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B960u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B978u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B980u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B98Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B99Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B9B0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B9C4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B9D0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B9DCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897B9ECu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA00u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA08u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA10u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA18u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA20u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA28u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA2Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA40u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA60u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA6Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA7Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA88u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA90u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BA98u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BAA0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BAACu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BAB8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BAC4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BACCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BAE4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB0Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB18u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB24u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB2Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB34u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB4Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB64u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB74u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB7Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB84u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB8Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB94u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BB9Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BBA8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BBC4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BBDCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BBE4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BBF4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC00u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC08u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC10u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC18u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC20u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC28u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC30u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC38u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC40u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC44u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC60u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC74u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BC88u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BCBCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BCCCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BCE0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BCFCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BD18u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BD30u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BD3Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BD44u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BD58u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BD84u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BD8Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BDB0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BDBCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BDE0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BDECu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BDF4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE04u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE18u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE20u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE2Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE48u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE5Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE68u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE70u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE78u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE88u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE90u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BE98u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BEACu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BEBCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BED0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BED8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BEE0u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF14u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF1Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF30u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF44u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF50u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF60u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF68u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF70u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF78u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF8Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BF9Cu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BFA4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BFBCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BFC8u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BFD4u, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BFDCu, &recomp_unit_0375, "recomp_unit_0375");
    runtime.register_function(0x0897BFF4u, &recomp_unit_0375, "recomp_unit_0375");
}
} // namespace psprecomp
