#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0511[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35,
    0, 36, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0,
    48, 0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62,
    0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 74, 0, 75, 0,
    76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90,
    0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 106, 0, 0, 0, 107, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0,
    0, 123, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 127, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0,
    0, 0, 0, 133, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 154, 0, 0, 155,
    0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0,
    0, 164, 0, 165, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    171, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0,
    0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 205, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222,
    0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238,
    0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0,
    0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 254,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261,
};
void recomp_unit_0511_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A03000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0511[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A03000;
    case 2u: goto L_08A03010;
    case 3u: goto L_08A03028;
    case 4u: goto L_08A03030;
    case 5u: goto L_08A03038;
    case 6u: goto L_08A03044;
    case 7u: goto L_08A0304C;
    case 8u: goto L_08A03054;
    case 9u: goto L_08A03070;
    case 10u: goto L_08A03074;
    case 11u: goto L_08A03088;
    case 12u: goto L_08A0309C;
    case 13u: goto L_08A030A8;
    case 14u: goto L_08A030B8;
    case 15u: goto L_08A030CC;
    case 16u: goto L_08A030F4;
    case 17u: goto L_08A03100;
    case 18u: goto L_08A0310C;
    case 19u: goto L_08A03114;
    case 20u: goto L_08A03120;
    case 21u: goto L_08A03130;
    case 22u: goto L_08A03138;
    case 23u: goto L_08A03140;
    case 24u: goto L_08A03148;
    case 25u: goto L_08A03164;
    case 26u: goto L_08A0316C;
    case 27u: goto L_08A03198;
    case 28u: goto L_08A031B8;
    case 29u: goto L_08A031C4;
    case 30u: goto L_08A031CC;
    case 31u: goto L_08A031D4;
    case 32u: goto L_08A031E0;
    case 33u: goto L_08A031E8;
    case 34u: goto L_08A031F4;
    case 35u: goto L_08A031FC;
    case 36u: goto L_08A03204;
    case 37u: goto L_08A03210;
    case 38u: goto L_08A03218;
    case 39u: goto L_08A03220;
    case 40u: goto L_08A03228;
    case 41u: goto L_08A03234;
    case 42u: goto L_08A0323C;
    case 43u: goto L_08A03248;
    case 44u: goto L_08A03250;
    case 45u: goto L_08A03258;
    case 46u: goto L_08A03264;
    case 47u: goto L_08A0326C;
    case 48u: goto L_08A03280;
    case 49u: goto L_08A03288;
    case 50u: goto L_08A03290;
    case 51u: goto L_08A0329C;
    case 52u: goto L_08A032A4;
    case 53u: goto L_08A032C0;
    case 54u: goto L_08A032E0;
    case 55u: goto L_08A032F0;
    case 56u: goto L_08A0330C;
    case 57u: goto L_08A0331C;
    case 58u: goto L_08A03324;
    case 59u: goto L_08A03330;
    case 60u: goto L_08A0336C;
    case 61u: goto L_08A03374;
    case 62u: goto L_08A0337C;
    case 63u: goto L_08A03388;
    case 64u: goto L_08A03394;
    case 65u: goto L_08A033AC;
    case 66u: goto L_08A033E0;
    case 67u: goto L_08A033E8;
    case 68u: goto L_08A03400;
    case 69u: goto L_08A03414;
    case 70u: goto L_08A03430;
    case 71u: goto L_08A03438;
    case 72u: goto L_08A03454;
    case 73u: goto L_08A0346C;
    case 74u: goto L_08A03470;
    case 75u: goto L_08A03478;
    case 76u: goto L_08A03480;
    case 77u: goto L_08A03490;
    case 78u: goto L_08A034B4;
    case 79u: goto L_08A034BC;
    case 80u: goto L_08A034E4;
    case 81u: goto L_08A034EC;
    case 82u: goto L_08A034F4;
    case 83u: goto L_08A03500;
    case 84u: goto L_08A03528;
    case 85u: goto L_08A0352C;
    case 86u: goto L_08A0353C;
    case 87u: goto L_08A03564;
    case 88u: goto L_08A0356C;
    case 89u: goto L_08A03574;
    case 90u: goto L_08A0357C;
    case 91u: goto L_08A03584;
    case 92u: goto L_08A0358C;
    case 93u: goto L_08A035AC;
    case 94u: goto L_08A035B4;
    case 95u: goto L_08A035BC;
    case 96u: goto L_08A035D0;
    case 97u: goto L_08A035D8;
    case 98u: goto L_08A035F4;
    case 99u: goto L_08A03600;
    case 100u: goto L_08A03614;
    case 101u: goto L_08A03630;
    case 102u: goto L_08A03648;
    case 103u: goto L_08A03650;
    case 104u: goto L_08A03658;
    case 105u: goto L_08A03664;
    case 106u: goto L_08A03668;
    case 107u: goto L_08A03678;
    case 108u: goto L_08A0368C;
    case 109u: goto L_08A036A0;
    case 110u: goto L_08A036A8;
    case 111u: goto L_08A036B0;
    case 112u: goto L_08A036B8;
    case 113u: goto L_08A036C8;
    case 114u: goto L_08A036D0;
    case 115u: goto L_08A036E4;
    case 116u: goto L_08A036F8;
    case 117u: goto L_08A03704;
    case 118u: goto L_08A03718;
    case 119u: goto L_08A03734;
    case 120u: goto L_08A03754;
    case 121u: goto L_08A03764;
    case 122u: goto L_08A03770;
    case 123u: goto L_08A03784;
    case 124u: goto L_08A03794;
    case 125u: goto L_08A0379C;
    case 126u: goto L_08A037A4;
    case 127u: goto L_08A037B0;
    case 128u: goto L_08A037B4;
    case 129u: goto L_08A037C8;
    case 130u: goto L_08A037D0;
    case 131u: goto L_08A037E8;
    case 132u: goto L_08A037F4;
    case 133u: goto L_08A0380C;
    case 134u: goto L_08A03810;
    case 135u: goto L_08A0381C;
    case 136u: goto L_08A03830;
    case 137u: goto L_08A03850;
    case 138u: goto L_08A03860;
    case 139u: goto L_08A03874;
    case 140u: goto L_08A0389C;
    case 141u: goto L_08A038A8;
    case 142u: goto L_08A038C8;
    case 143u: goto L_08A038CC;
    case 144u: goto L_08A038D8;
    case 145u: goto L_08A038F4;
    case 146u: goto L_08A03908;
    case 147u: goto L_08A03914;
    case 148u: goto L_08A0391C;
    case 149u: goto L_08A03924;
    case 150u: goto L_08A0392C;
    case 151u: goto L_08A03938;
    case 152u: goto L_08A03958;
    case 153u: goto L_08A0396C;
    case 154u: goto L_08A03970;
    case 155u: goto L_08A0397C;
    case 156u: goto L_08A03988;
    case 157u: goto L_08A03994;
    case 158u: goto L_08A039A0;
    case 159u: goto L_08A039AC;
    case 160u: goto L_08A039BC;
    case 161u: goto L_08A039C8;
    case 162u: goto L_08A039E0;
    case 163u: goto L_08A039F8;
    case 164u: goto L_08A03A04;
    case 165u: goto L_08A03A0C;
    case 166u: goto L_08A03A10;
    case 167u: goto L_08A03A1C;
    case 168u: goto L_08A03A30;
    case 169u: goto L_08A03A58;
    case 170u: goto L_08A03A64;
    case 171u: goto L_08A03A80;
    case 172u: goto L_08A03A88;
    case 173u: goto L_08A03A90;
    case 174u: goto L_08A03A9C;
    case 175u: goto L_08A03ABC;
    case 176u: goto L_08A03AE4;
    case 177u: goto L_08A03AF0;
    case 178u: goto L_08A03B0C;
    case 179u: goto L_08A03B14;
    case 180u: goto L_08A03B1C;
    case 181u: goto L_08A03B28;
    case 182u: goto L_08A03B48;
    case 183u: goto L_08A03B78;
    case 184u: goto L_08A03B84;
    case 185u: goto L_08A03BA4;
    case 186u: goto L_08A03BAC;
    case 187u: goto L_08A03BB4;
    case 188u: goto L_08A03BC0;
    case 189u: goto L_08A03BE4;
    case 190u: goto L_08A03C14;
    case 191u: goto L_08A03C20;
    case 192u: goto L_08A03C44;
    case 193u: goto L_08A03C48;
    case 194u: goto L_08A03C54;
    case 195u: goto L_08A03C74;
    case 196u: goto L_08A03C94;
    case 197u: goto L_08A03CA0;
    case 198u: goto L_08A03CBC;
    case 199u: goto L_08A03CC0;
    case 200u: goto L_08A03CCC;
    case 201u: goto L_08A03CE4;
    case 202u: goto L_08A03D04;
    case 203u: goto L_08A03D10;
    case 204u: goto L_08A03D2C;
    case 205u: goto L_08A03D30;
    case 206u: goto L_08A03D3C;
    case 207u: goto L_08A03D54;
    case 208u: goto L_08A03D68;
    case 209u: goto L_08A03D7C;
    case 210u: goto L_08A03D8C;
    case 211u: goto L_08A03DA4;
    case 212u: goto L_08A03DAC;
    case 213u: goto L_08A03DB4;
    case 214u: goto L_08A03DBC;
    case 215u: goto L_08A03DC4;
    case 216u: goto L_08A03DCC;
    case 217u: goto L_08A03DD4;
    case 218u: goto L_08A03DDC;
    case 219u: goto L_08A03DE4;
    case 220u: goto L_08A03DEC;
    case 221u: goto L_08A03DF4;
    case 222u: goto L_08A03DFC;
    case 223u: goto L_08A03E04;
    case 224u: goto L_08A03E0C;
    case 225u: goto L_08A03E14;
    case 226u: goto L_08A03E1C;
    case 227u: goto L_08A03E24;
    case 228u: goto L_08A03E2C;
    case 229u: goto L_08A03E34;
    case 230u: goto L_08A03E3C;
    case 231u: goto L_08A03E44;
    case 232u: goto L_08A03E4C;
    case 233u: goto L_08A03E54;
    case 234u: goto L_08A03E5C;
    case 235u: goto L_08A03E64;
    case 236u: goto L_08A03E6C;
    case 237u: goto L_08A03E74;
    case 238u: goto L_08A03E7C;
    case 239u: goto L_08A03E84;
    case 240u: goto L_08A03E90;
    case 241u: goto L_08A03EAC;
    case 242u: goto L_08A03ECC;
    case 243u: goto L_08A03ED8;
    case 244u: goto L_08A03EE0;
    case 245u: goto L_08A03EF4;
    case 246u: goto L_08A03F18;
    case 247u: goto L_08A03F20;
    case 248u: goto L_08A03F2C;
    case 249u: goto L_08A03F34;
    case 250u: goto L_08A03F3C;
    case 251u: goto L_08A03F58;
    case 252u: goto L_08A03F60;
    case 253u: goto L_08A03F74;
    case 254u: goto L_08A03F7C;
    case 255u: goto L_08A03F98;
    case 256u: goto L_08A03FA8;
    case 257u: goto L_08A03FBC;
    case 258u: goto L_08A03FC4;
    case 259u: goto L_08A03FD0;
    case 260u: goto L_08A03FE0;
    case 261u: goto L_08A03FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A03000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03010:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A03028u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A03028u) goto L_08A03028;
    return;
L_08A03028:
    aot_gpr[31] = (0x08A03030u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 81u, 0x089FE658u>(ctx, &aot_mem) && ctx.pc == 0x08A03030u) goto L_08A03030;
    return;
L_08A03030:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A03074;
      }
      goto L_08A03038;
    }
L_08A03038:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18380)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03074;
      }
      goto L_08A03044;
    }
L_08A03044:
    aot_gpr[31] = (0x08A0304Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0304Cu) goto L_08A0304C;
    return;
L_08A0304C:
    aot_gpr[31] = (0x08A03054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A03054u) goto L_08A03054;
    return;
L_08A03054:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A03070u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03070u) goto L_08A03070;
    return;
L_08A03070:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-18380), 0u);
    goto L_08A03074;
L_08A03074:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03088:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0309Cu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0309Cu) goto L_08A0309C;
    return;
L_08A0309C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A030A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A030A8u) goto L_08A030A8;
    return;
L_08A030A8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A030B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5660));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A030B8u) goto L_08A030B8;
    return;
L_08A030B8:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A030CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A030F4u);
    aot_gpr[19] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A030F4u) goto L_08A030F4;
    return;
L_08A030F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A03100u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03100u) goto L_08A03100;
    return;
L_08A03100:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A03140;
      }
      goto L_08A0310C;
    }
L_08A0310C:
    aot_gpr[31] = (0x08A03114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A03114u) goto L_08A03114;
    return;
L_08A03114:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A03120u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03120u) goto L_08A03120;
    return;
L_08A03120:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A03130u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5648));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03130u) goto L_08A03130;
    return;
L_08A03130:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A03140;
      }
      goto L_08A03138;
    }
L_08A03138:
    aot_gpr[19] = (0u | 2u);
    aot_gpr[4] = (0u | 2u);
    goto L_08A03140;
L_08A03140:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A03164;
      }
      goto L_08A03148;
    }
L_08A03148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A03164u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03164u) goto L_08A03164;
    return;
L_08A03164:
    aot_gpr[31] = (0x08A0316Cu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 294u, 0x089FDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A0316Cu) goto L_08A0316C;
    return;
L_08A0316C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-18380), aot_gpr[4]);
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
L_08A03198:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A031B8u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A031B8u) goto L_08A031B8;
    return;
L_08A031B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A031C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A031C4u) goto L_08A031C4;
    return;
L_08A031C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A031FC;
      }
      goto L_08A031CC;
    }
L_08A031CC:
    aot_gpr[31] = (0x08A031D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A031D4u) goto L_08A031D4;
    return;
L_08A031D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A031E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A031E0u) goto L_08A031E0;
    return;
L_08A031E0:
    aot_gpr[31] = (0x08A031E8u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A031E8u) goto L_08A031E8;
    return;
L_08A031E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A031F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A031F4u) goto L_08A031F4;
    return;
L_08A031F4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 1u);
    goto L_08A031FC;
L_08A031FC:
    aot_gpr[31] = (0x08A03204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A03204u) goto L_08A03204;
    return;
L_08A03204:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A03210u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03210u) goto L_08A03210;
    return;
L_08A03210:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032A4;
      }
      goto L_08A03218;
    }
L_08A03218:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032A4;
      }
      goto L_08A03220;
    }
L_08A03220:
    aot_gpr[31] = (0x08A03228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A03228u) goto L_08A03228;
    return;
L_08A03228:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A03234u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03234u) goto L_08A03234;
    return;
L_08A03234:
    aot_gpr[31] = (0x08A0323Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0323Cu) goto L_08A0323C;
    return;
L_08A0323C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A03248u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03248u) goto L_08A03248;
    return;
L_08A03248:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (0u | 0u);
        goto L_08A03288;
    }
    goto L_08A03250;
L_08A03250:
    aot_gpr[31] = (0x08A03258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A03258u) goto L_08A03258;
    return;
L_08A03258:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A03264u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03264u) goto L_08A03264;
    return;
L_08A03264:
    aot_gpr[31] = (0x08A0326Cu);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 56u, 0x089F3390u>(ctx, &aot_mem) && ctx.pc == 0x08A0326Cu) goto L_08A0326C;
    return;
L_08A0326C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A03280u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0495_entry, 495u, 65u, 0x089F342Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03280u) goto L_08A03280;
    return;
L_08A03280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03288;
      }
      goto L_08A03288;
    }
L_08A03288:
    aot_gpr[31] = (0x08A03290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A03290u) goto L_08A03290;
    return;
L_08A03290:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0329Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0329Cu) goto L_08A0329C;
    return;
L_08A0329C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A031FC;
      }
      goto L_08A032A4;
    }
L_08A032A4:
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
L_08A032C0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(11776));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A032E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A03324;
      }
      goto L_08A032F0;
    }
L_08A032F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11776));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x08A0330Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A03630;
L_08A0330C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A03324;
      }
      goto L_08A0331C;
    }
L_08A0331C:
    aot_gpr[31] = (0x08A03324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A03324u) goto L_08A03324;
    return;
L_08A03324:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03330:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0336Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0336Cu) goto L_08A0336C;
    return;
L_08A0336C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03394;
      }
      goto L_08A03374;
    }
L_08A03374:
    aot_gpr[31] = (0x08A0337Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A03490;
L_08A0337C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A03394;
      }
      goto L_08A03388;
    }
L_08A03388:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A03394u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A036F8;
L_08A03394:
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
L_08A033AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A033E0u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_08A03718;
L_08A033E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03438;
      }
      goto L_08A033E8;
    }
L_08A033E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x08A03400u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A036D0;
L_08A03400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[31] = (0x08A03414u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_08A03704;
L_08A03414:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A03430;
    }
    goto L_08A03430;
L_08A03430:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[18] = (0u | 1u);
    goto L_08A03438;
L_08A03438:
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
L_08A03454:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A0346Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08A03678;
L_08A0346C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A03470;
L_08A03470:
    aot_gpr[31] = (0x08A03478u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08A033AC;
L_08A03478:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A03470;
      }
      goto L_08A03480;
    }
L_08A03480:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03490:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A034B4u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_08A03718;
L_08A034B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A034EC;
      }
      goto L_08A034BC;
    }
L_08A034BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A034E4;
    }
    goto L_08A034E4;
L_08A034E4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A0352C;
      }
      goto L_08A034EC;
    }
L_08A034EC:
    aot_gpr[31] = (0x08A034F4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08A03678;
L_08A034F4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A03500u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08A033AC;
L_08A03500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A03528;
    }
    goto L_08A03528;
L_08A03528:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08A0352C;
L_08A0352C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0353C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 32u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[6] = (aot_gpr[5] | 0u);
        goto L_08A03564;
    }
    goto L_08A03564;
L_08A03564:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A0357C;
      }
      goto L_08A0356C;
    }
L_08A0356C:
    aot_gpr[31] = (0x08A03574u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A03454;
L_08A03574:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A035B4;
      }
      goto L_08A0357C;
    }
L_08A0357C:
    aot_gpr[31] = (0x08A03584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A03584u) goto L_08A03584;
    return;
L_08A03584:
    aot_gpr[31] = (0x08A0358Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0358Cu) goto L_08A0358C;
    return;
L_08A0358C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 124u);
    aot_gpr[31] = (0x08A035ACu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5640));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A035ACu) goto L_08A035AC;
    return;
L_08A035AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A035B4;
L_08A035B4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A035D8;
      }
      goto L_08A035BC;
    }
L_08A035BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A035F4;
      }
      goto L_08A035D0;
    }
L_08A035D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03614;
      }
      goto L_08A035D8;
    }
L_08A035D8:
    aot_gpr[2] = (0u | 0u);
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
L_08A035F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A03600u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    goto L_08A03704;
L_08A03600:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A035F4;
      }
      goto L_08A03614;
    }
L_08A03614:
    aot_gpr[2] = (0u | 1u);
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
L_08A03630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A03668;
      }
      goto L_08A03648;
    }
L_08A03648:
    aot_gpr[31] = (0x08A03650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A03650u) goto L_08A03650;
    return;
L_08A03650:
    aot_gpr[31] = (0x08A03658u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03658u) goto L_08A03658;
    return;
L_08A03658:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A03664u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A03664u) goto L_08A03664;
    return;
L_08A03664:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A03668;
L_08A03668:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03678:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A0368Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A03704;
L_08A0368C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A036A0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A036A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A036B0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A036C8;
      }
      goto L_08A036B8;
    }
L_08A036B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A036C8;
L_08A036C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A036D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A036E4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A036B0;
L_08A036E4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A036F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03704:
    aot_gpr[5] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03718:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (256u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03734:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28968)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(28972));
      if (branch_taken) {
          goto L_08A03770;
      }
      goto L_08A03754;
    }
L_08A03754:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28968), aot_gpr[5]);
    aot_gpr[31] = (0x08A03764u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A03D54;
L_08A03764:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x08A03770u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18376));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03770u) goto L_08A03770;
    return;
L_08A03770:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03784:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A037A4;
      }
      goto L_08A03794;
    }
L_08A03794:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A037A4;
      }
      goto L_08A0379C;
    }
L_08A0379C:
    aot_gpr[31] = (0x08A037A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A037A4u) goto L_08A037A4;
    return;
L_08A037A4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A037B0:
    aot_gpr[5] = (0u | 0u);
    goto L_08A037B4;
L_08A037B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A037B4;
      }
      goto L_08A037C8;
    }
L_08A037C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A037D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_08A037E8;
L_08A037E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A03810;
    }
    goto L_08A037F4;
L_08A037F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0380Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0380Cu) goto L_08A0380C;
    return;
L_08A0380C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A03810;
L_08A03810:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A037E8;
      }
      goto L_08A0381C;
    }
L_08A0381C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03830:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A03850u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A03D7C;
L_08A03850:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A03860u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    goto L_08A03874;
L_08A03860:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_08A0389C;
L_08A0389C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A038CC;
    }
    goto L_08A038A8;
L_08A038A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A038C8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A038C8u) goto L_08A038C8;
    return;
L_08A038C8:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A038CC;
L_08A038CC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0389C;
      }
      goto L_08A038D8;
    }
L_08A038D8:
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
L_08A038F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A03908;
L_08A03908:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A03908;
      }
      goto L_08A03914;
    }
L_08A03914:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    goto L_08A0391C;
L_08A0391C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0397C;
      }
      goto L_08A03924;
    }
L_08A03924:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0397C;
      }
      goto L_08A0392C;
    }
L_08A0392C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[7] != 0u) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08A03970;
    }
    goto L_08A03938;
L_08A03938:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A03958u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A0353C;
L_08A03958:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A0397C;
      }
      goto L_08A0396C;
    }
L_08A0396C:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A03970;
L_08A03970:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[8]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A0391C;
      }
      goto L_08A0397C;
    }
L_08A0397C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03988:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    goto L_08A03994;
L_08A03994:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A039BC;
      }
      goto L_08A039A0;
    }
L_08A039A0:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03994;
      }
      goto L_08A039AC;
    }
L_08A039AC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A039BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08A039C8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A03630;
L_08A039C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A039E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_08A039F8;
L_08A039F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A03A10;
    }
    goto L_08A03A04;
L_08A03A04:
    aot_gpr[31] = (0x08A03A0Cu);
    // nop
    goto L_08A03454;
L_08A03A0C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A03A10;
L_08A03A10:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A039F8;
      }
      goto L_08A03A1C;
    }
L_08A03A1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_08A03A58;
L_08A03A58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A03A90;
    }
    goto L_08A03A64;
L_08A03A64:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A03A80u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03A80u) goto L_08A03A80;
    return;
L_08A03A80:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A03A90;
    }
    goto L_08A03A88;
L_08A03A88:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A03A90;
L_08A03A90:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03A58;
      }
      goto L_08A03A9C;
    }
L_08A03A9C:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A03ABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 1u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_08A03AE4;
L_08A03AE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A03B1C;
    }
    goto L_08A03AF0;
L_08A03AF0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A03B0Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03B0Cu) goto L_08A03B0C;
    return;
L_08A03B0C:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A03B1C;
    }
    goto L_08A03B14;
L_08A03B14:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A03B1C;
L_08A03B1C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03AE4;
      }
      goto L_08A03B28;
    }
L_08A03B28:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A03B48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A03B78;
L_08A03B78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A03BB4;
    }
    goto L_08A03B84;
L_08A03B84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A03BA4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03BA4u) goto L_08A03BA4;
    return;
L_08A03BA4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A03BB4;
    }
    goto L_08A03BAC;
L_08A03BAC:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A03BB4;
L_08A03BB4:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03B78;
      }
      goto L_08A03BC0;
    }
L_08A03BC0:
    aot_gpr[2] = (aot_gpr[20] | 0u);
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
L_08A03BE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A03C14;
L_08A03C14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A03C48;
    }
    goto L_08A03C20;
L_08A03C20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A03C44u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03C44u) goto L_08A03C44;
    return;
L_08A03C44:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A03C48;
L_08A03C48:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03C14;
      }
      goto L_08A03C54;
    }
L_08A03C54:
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
L_08A03C74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_08A03C94;
L_08A03C94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A03CC0;
    }
    goto L_08A03CA0;
L_08A03CA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A03CBCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03CBCu) goto L_08A03CBC;
    return;
L_08A03CBC:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A03CC0;
L_08A03CC0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03C94;
      }
      goto L_08A03CCC;
    }
L_08A03CCC:
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
L_08A03CE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_08A03D04;
L_08A03D04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A03D30;
    }
    goto L_08A03D10;
L_08A03D10:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A03D2Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A03D2Cu) goto L_08A03D2C;
    return;
L_08A03D2C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A03D30;
L_08A03D30:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03D04;
      }
      goto L_08A03D3C;
    }
L_08A03D3C:
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
L_08A03D54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A03D68u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A037B0;
L_08A03D68:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03D7C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(28) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (256u << 16u);
      if (branch_taken) {
          goto L_08A03E84;
      }
      goto L_08A03D8C;
    }
L_08A03D8C:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-5608)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DA4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DAC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DB4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DBC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DC4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DCC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 5u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DD4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 6u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DDC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 7u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DE4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 8u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DEC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 9u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DF4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 10u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03DFC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 11u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E04:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 12u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E0C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 13u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E14:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 14u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E1C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 15u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E24:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 16u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E2C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 17u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E34:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 18u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E3C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 19u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 20u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 21u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E54:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 22u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E5C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 23u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E64:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 24u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E6C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 25u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E74:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 26u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E7C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 27u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E84:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03E90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A03EE0;
      }
      goto L_08A03EAC;
    }
L_08A03EAC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11864));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18360), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A03ECCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 222u, 0x089F2E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03ECCu) goto L_08A03ECC;
    return;
L_08A03ECC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03EE0;
      }
      goto L_08A03ED8;
    }
L_08A03ED8:
    aot_gpr[31] = (0x08A03EE0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A03FA8;
L_08A03EE0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03EF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03F3C;
      }
      goto L_08A03F18;
    }
L_08A03F18:
    aot_gpr[31] = (0x08A03F20u);
    aot_gpr[4] = (0u | 36u);
    goto L_08A03F60;
L_08A03F20:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18360), aot_gpr[17]);
        goto L_08A03F3C;
    }
    goto L_08A03F2C;
L_08A03F2C:
    aot_gpr[31] = (0x08A03F34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A03FE0;
L_08A03F34:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-18360), aot_gpr[17]);
    goto L_08A03F3C;
L_08A03F3C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18360)));
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
L_08A03F58:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03F60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A03F74u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A03F74u) goto L_08A03F74;
    return;
L_08A03F74:
    aot_gpr[31] = (0x08A03F7Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03F7Cu) goto L_08A03F7C;
    return;
L_08A03F7C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 30u);
    aot_gpr[31] = (0x08A03F98u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-5496));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A03F98u) goto L_08A03F98;
    return;
L_08A03F98:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03FA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A03FBCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A03FBCu) goto L_08A03FBC;
    return;
L_08A03FBC:
    aot_gpr[31] = (0x08A03FC4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03FC4u) goto L_08A03FC4;
    return;
L_08A03FC4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A03FD0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A03FD0u) goto L_08A03FD0;
    return;
L_08A03FD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03FE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A03FF4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A03FF4u) goto L_08A03FF4;
    return;
L_08A03FF4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(11864));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    ctx.pc = 0x08A04000u; return;
}

void recomp_unit_0511(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0511_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_511(Runtime &runtime) {
    runtime.register_generated_unit(511u, 0x08A03000u, 4096u, &recomp_unit_0511, &recomp_unit_0511_entry);
    runtime.register_function(0x08A03000u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03010u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03028u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03030u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03038u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03044u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0304Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03054u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03070u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03074u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03088u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0309Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A030A8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A030B8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A030CCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A030F4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03100u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0310Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03114u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03120u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03130u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03138u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03140u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03148u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03164u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0316Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03198u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A031B8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A031C4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A031CCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A031D4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A031E0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A031E8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A031F4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A031FCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03204u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03210u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03218u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03220u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03228u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03234u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0323Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03248u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03250u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03258u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03264u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0326Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03280u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03288u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03290u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0329Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A032A4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A032C0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A032E0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A032F0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0330Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0331Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03324u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03330u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0336Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03374u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0337Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03388u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03394u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A033ACu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A033E0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A033E8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03400u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03414u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03430u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03438u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03454u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0346Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03470u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03478u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03480u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03490u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A034B4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A034BCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A034E4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A034ECu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A034F4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03500u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03528u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0352Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0353Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03564u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0356Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03574u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0357Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03584u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0358Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A035ACu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A035B4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A035BCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A035D0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A035D8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A035F4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03600u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03614u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03630u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03648u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03650u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03658u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03664u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03668u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03678u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0368Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A036A0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A036A8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A036B0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A036B8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A036C8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A036D0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A036E4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A036F8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03704u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03718u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03734u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03754u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03764u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03770u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03784u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03794u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0379Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A037A4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A037B0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A037B4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A037C8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A037D0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A037E8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A037F4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0380Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03810u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0381Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03830u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03850u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03860u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03874u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0389Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A038A8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A038C8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A038CCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A038D8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A038F4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03908u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03914u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0391Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03924u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0392Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03938u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03958u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0396Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03970u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A0397Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03988u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03994u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A039A0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A039ACu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A039BCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A039C8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A039E0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A039F8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A04u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A0Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A10u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A1Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A30u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A58u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A64u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A80u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A88u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A90u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03A9Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03ABCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03AE4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03AF0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03B0Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03B14u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03B1Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03B28u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03B48u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03B78u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03B84u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03BA4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03BACu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03BB4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03BC0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03BE4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03C14u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03C20u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03C44u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03C48u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03C54u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03C74u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03C94u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03CA0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03CBCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03CC0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03CCCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03CE4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D04u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D10u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D2Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D30u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D3Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D54u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D68u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D7Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03D8Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DA4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DACu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DB4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DBCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DC4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DCCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DD4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DDCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DE4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DECu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DF4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03DFCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E04u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E0Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E14u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E1Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E24u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E2Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E34u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E3Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E44u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E4Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E54u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E5Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E64u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E6Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E74u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E7Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E84u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03E90u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03EACu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03ECCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03ED8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03EE0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03EF4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F18u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F20u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F2Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F34u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F3Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F58u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F60u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F74u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F7Cu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03F98u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03FA8u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03FBCu, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03FC4u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03FD0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03FE0u, &recomp_unit_0511, "recomp_unit_0511");
    runtime.register_function(0x08A03FF4u, &recomp_unit_0511, "recomp_unit_0511");
}
} // namespace psprecomp
