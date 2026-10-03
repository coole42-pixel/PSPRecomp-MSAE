#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0351[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0,
    34, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0,
    43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 65, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0,
    73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 0, 88, 0, 89, 0, 90, 0, 0, 91, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109,
    0, 110, 0, 111, 0, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121,
    0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 125, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 138, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0,
    145, 0, 0, 0, 146, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 184, 185, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 208, 209, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 237, 238, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 0, 245, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 255, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 268,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 280, 0, 281, 0, 282, 283, 0, 0, 0, 0, 0, 284,
};
void recomp_unit_0351_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08963000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0351[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08963000;
    case 2u: goto L_08963020;
    case 3u: goto L_0896303C;
    case 4u: goto L_08963054;
    case 5u: goto L_08963060;
    case 6u: goto L_08963070;
    case 7u: goto L_0896308C;
    case 8u: goto L_08963094;
    case 9u: goto L_0896309C;
    case 10u: goto L_089630B0;
    case 11u: goto L_089630C0;
    case 12u: goto L_089630CC;
    case 13u: goto L_089630DC;
    case 14u: goto L_089630E8;
    case 15u: goto L_08963104;
    case 16u: goto L_0896310C;
    case 17u: goto L_08963114;
    case 18u: goto L_08963120;
    case 19u: goto L_08963128;
    case 20u: goto L_08963134;
    case 21u: goto L_0896313C;
    case 22u: goto L_08963144;
    case 23u: goto L_08963154;
    case 24u: goto L_0896316C;
    case 25u: goto L_08963194;
    case 26u: goto L_089631A0;
    case 27u: goto L_089631B4;
    case 28u: goto L_089631BC;
    case 29u: goto L_089631C4;
    case 30u: goto L_089631CC;
    case 31u: goto L_089631D8;
    case 32u: goto L_089631E4;
    case 33u: goto L_089631F8;
    case 34u: goto L_08963200;
    case 35u: goto L_08963208;
    case 36u: goto L_08963210;
    case 37u: goto L_0896321C;
    case 38u: goto L_08963228;
    case 39u: goto L_08963244;
    case 40u: goto L_0896325C;
    case 41u: goto L_08963268;
    case 42u: goto L_08963274;
    case 43u: goto L_08963280;
    case 44u: goto L_08963288;
    case 45u: goto L_0896329C;
    case 46u: goto L_089632B8;
    case 47u: goto L_089632C8;
    case 48u: goto L_089632D8;
    case 49u: goto L_089632EC;
    case 50u: goto L_08963300;
    case 51u: goto L_08963308;
    case 52u: goto L_0896331C;
    case 53u: goto L_08963330;
    case 54u: goto L_0896333C;
    case 55u: goto L_08963348;
    case 56u: goto L_08963358;
    case 57u: goto L_08963360;
    case 58u: goto L_08963374;
    case 59u: goto L_0896338C;
    case 60u: goto L_08963394;
    case 61u: goto L_0896339C;
    case 62u: goto L_089633A8;
    case 63u: goto L_089633BC;
    case 64u: goto L_089633F8;
    case 65u: goto L_0896340C;
    case 66u: goto L_08963410;
    case 67u: goto L_0896341C;
    case 68u: goto L_0896342C;
    case 69u: goto L_08963448;
    case 70u: goto L_08963454;
    case 71u: goto L_08963468;
    case 72u: goto L_08963478;
    case 73u: goto L_08963480;
    case 74u: goto L_08963488;
    case 75u: goto L_08963490;
    case 76u: goto L_08963498;
    case 77u: goto L_089634A0;
    case 78u: goto L_089634AC;
    case 79u: goto L_089634B8;
    case 80u: goto L_089634C0;
    case 81u: goto L_089634CC;
    case 82u: goto L_089634EC;
    case 83u: goto L_08963524;
    case 84u: goto L_0896353C;
    case 85u: goto L_08963558;
    case 86u: goto L_08963564;
    case 87u: goto L_08963578;
    case 88u: goto L_08963588;
    case 89u: goto L_08963590;
    case 90u: goto L_08963598;
    case 91u: goto L_089635A4;
    case 92u: goto L_089635A8;
    case 93u: goto L_089635B0;
    case 94u: goto L_089635BC;
    case 95u: goto L_089635C4;
    case 96u: goto L_089635D0;
    case 97u: goto L_089635F0;
    case 98u: goto L_08963614;
    case 99u: goto L_08963620;
    case 100u: goto L_08963628;
    case 101u: goto L_08963634;
    case 102u: goto L_0896363C;
    case 103u: goto L_0896364C;
    case 104u: goto L_08963654;
    case 105u: goto L_0896365C;
    case 106u: goto L_08963664;
    case 107u: goto L_0896366C;
    case 108u: goto L_08963674;
    case 109u: goto L_0896367C;
    case 110u: goto L_08963684;
    case 111u: goto L_0896368C;
    case 112u: goto L_08963698;
    case 113u: goto L_089636A4;
    case 114u: goto L_089636AC;
    case 115u: goto L_089636B8;
    case 116u: goto L_089636C4;
    case 117u: goto L_089636CC;
    case 118u: goto L_089636DC;
    case 119u: goto L_089636E4;
    case 120u: goto L_089636EC;
    case 121u: goto L_089636FC;
    case 122u: goto L_08963704;
    case 123u: goto L_0896371C;
    case 124u: goto L_08963728;
    case 125u: goto L_0896372C;
    case 126u: goto L_08963734;
    case 127u: goto L_0896373C;
    case 128u: goto L_08963750;
    case 129u: goto L_08963760;
    case 130u: goto L_0896376C;
    case 131u: goto L_0896377C;
    case 132u: goto L_08963788;
    case 133u: goto L_08963790;
    case 134u: goto L_08963798;
    case 135u: goto L_089637A4;
    case 136u: goto L_089637B0;
    case 137u: goto L_089637C0;
    case 138u: goto L_089637C4;
    case 139u: goto L_089637CC;
    case 140u: goto L_089637D4;
    case 141u: goto L_089637DC;
    case 142u: goto L_089637E8;
    case 143u: goto L_089637F0;
    case 144u: goto L_089637F8;
    case 145u: goto L_08963800;
    case 146u: goto L_08963810;
    case 147u: goto L_08963814;
    case 148u: goto L_0896381C;
    case 149u: goto L_08963828;
    case 150u: goto L_08963840;
    case 151u: goto L_0896384C;
    case 152u: goto L_08963868;
    case 153u: goto L_08963874;
    case 154u: goto L_0896388C;
    case 155u: goto L_08963898;
    case 156u: goto L_089638B4;
    case 157u: goto L_089638C0;
    case 158u: goto L_089638D4;
    case 159u: goto L_089638E0;
    case 160u: goto L_089638EC;
    case 161u: goto L_08963914;
    case 162u: goto L_0896391C;
    case 163u: goto L_08963928;
    case 164u: goto L_08963934;
    case 165u: goto L_08963940;
    case 166u: goto L_0896395C;
    case 167u: goto L_08963984;
    case 168u: goto L_0896398C;
    case 169u: goto L_08963994;
    case 170u: goto L_0896399C;
    case 171u: goto L_089639A4;
    case 172u: goto L_089639AC;
    case 173u: goto L_089639B4;
    case 174u: goto L_089639BC;
    case 175u: goto L_089639D4;
    case 176u: goto L_08963A08;
    case 177u: goto L_08963A14;
    case 178u: goto L_08963A20;
    case 179u: goto L_08963A28;
    case 180u: goto L_08963A34;
    case 181u: goto L_08963A3C;
    case 182u: goto L_08963A50;
    case 183u: goto L_08963A58;
    case 184u: goto L_08963A60;
    case 185u: goto L_08963A64;
    case 186u: goto L_08963A80;
    case 187u: goto L_08963A94;
    case 188u: goto L_08963AAC;
    case 189u: goto L_08963ABC;
    case 190u: goto L_08963AD0;
    case 191u: goto L_08963AD8;
    case 192u: goto L_08963AE4;
    case 193u: goto L_08963B08;
    case 194u: goto L_08963B14;
    case 195u: goto L_08963B1C;
    case 196u: goto L_08963B24;
    case 197u: goto L_08963B2C;
    case 198u: goto L_08963B34;
    case 199u: goto L_08963B3C;
    case 200u: goto L_08963B44;
    case 201u: goto L_08963B4C;
    case 202u: goto L_08963B50;
    case 203u: goto L_08963B64;
    case 204u: goto L_08963B84;
    case 205u: goto L_08963B90;
    case 206u: goto L_08963B9C;
    case 207u: goto L_08963BA4;
    case 208u: goto L_08963BC0;
    case 209u: goto L_08963BC4;
    case 210u: goto L_08963BCC;
    case 211u: goto L_08963BD8;
    case 212u: goto L_08963BE4;
    case 213u: goto L_08963BF0;
    case 214u: goto L_08963C18;
    case 215u: goto L_08963C20;
    case 216u: goto L_08963C2C;
    case 217u: goto L_08963C38;
    case 218u: goto L_08963C44;
    case 219u: goto L_08963C60;
    case 220u: goto L_08963C88;
    case 221u: goto L_08963C90;
    case 222u: goto L_08963C98;
    case 223u: goto L_08963CA0;
    case 224u: goto L_08963CA8;
    case 225u: goto L_08963CB0;
    case 226u: goto L_08963CB8;
    case 227u: goto L_08963CC0;
    case 228u: goto L_08963CD8;
    case 229u: goto L_08963D0C;
    case 230u: goto L_08963D1C;
    case 231u: goto L_08963D28;
    case 232u: goto L_08963D30;
    case 233u: goto L_08963D3C;
    case 234u: goto L_08963D44;
    case 235u: goto L_08963D58;
    case 236u: goto L_08963D60;
    case 237u: goto L_08963D68;
    case 238u: goto L_08963D6C;
    case 239u: goto L_08963D88;
    case 240u: goto L_08963D9C;
    case 241u: goto L_08963DB4;
    case 242u: goto L_08963DC4;
    case 243u: goto L_08963DD8;
    case 244u: goto L_08963DE0;
    case 245u: goto L_08963DEC;
    case 246u: goto L_08963E14;
    case 247u: goto L_08963E20;
    case 248u: goto L_08963E28;
    case 249u: goto L_08963E30;
    case 250u: goto L_08963E38;
    case 251u: goto L_08963E40;
    case 252u: goto L_08963E48;
    case 253u: goto L_08963E50;
    case 254u: goto L_08963E58;
    case 255u: goto L_08963E5C;
    case 256u: goto L_08963E70;
    case 257u: goto L_08963E98;
    case 258u: goto L_08963EA0;
    case 259u: goto L_08963EAC;
    case 260u: goto L_08963EBC;
    case 261u: goto L_08963EC8;
    case 262u: goto L_08963ED0;
    case 263u: goto L_08963ED8;
    case 264u: goto L_08963EE0;
    case 265u: goto L_08963EE8;
    case 266u: goto L_08963EF0;
    case 267u: goto L_08963EF8;
    case 268u: goto L_08963EFC;
    case 269u: goto L_08963F10;
    case 270u: goto L_08963F2C;
    case 271u: goto L_08963F34;
    case 272u: goto L_08963F40;
    case 273u: goto L_08963F48;
    case 274u: goto L_08963F7C;
    case 275u: goto L_08963F88;
    case 276u: goto L_08963F94;
    case 277u: goto L_08963FB8;
    case 278u: goto L_08963FC4;
    case 279u: goto L_08963FCC;
    case 280u: goto L_08963FD0;
    case 281u: goto L_08963FD8;
    case 282u: goto L_08963FE0;
    case 283u: goto L_08963FE4;
    case 284u: goto L_08963FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08963000:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4992));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963020:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896309C;
      }
      goto L_0896303C;
    }
L_0896303C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4992));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08963054u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 120u, 0x089EEA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08963054u) goto L_08963054;
    return;
L_08963054:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0896309C;
      }
      goto L_08963060;
    }
L_08963060:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963094;
      }
      goto L_08963070;
    }
L_08963070:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896308Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896308Cu) goto L_0896308C;
    return;
L_0896308C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896309C;
      }
      goto L_08963094;
    }
L_08963094:
    aot_gpr[31] = (0x0896309Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0896309Cu) goto L_0896309C;
    return;
L_0896309C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089630B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089630C0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 66u, 0x08962450u>(ctx, &aot_mem) && ctx.pc == 0x089630C0u) goto L_089630C0;
    return;
L_089630C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089630CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089630DCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x089630DCu) goto L_089630DC;
    return;
L_089630DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089630E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08963104u);
    aot_gpr[16] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08963104u) goto L_08963104;
    return;
L_08963104:
    aot_gpr[31] = (0x0896310Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 236u, 0x089EFEACu>(ctx, &aot_mem) && ctx.pc == 0x0896310Cu) goto L_0896310C;
    return;
L_0896310C:
    aot_gpr[31] = (0x08963114u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 164u, 0x0896F9D0u>(ctx, &aot_mem) && ctx.pc == 0x08963114u) goto L_08963114;
    return;
L_08963114:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896313C;
      }
      goto L_08963120;
    }
L_08963120:
    aot_gpr[31] = (0x08963128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 194u, 0x0896EB44u>(ctx, &aot_mem) && ctx.pc == 0x08963128u) goto L_08963128;
    return;
L_08963128:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896313C;
      }
      goto L_08963134;
    }
L_08963134:
    aot_gpr[31] = (0x0896313Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 171u, 0x0896FA48u>(ctx, &aot_mem) && ctx.pc == 0x0896313Cu) goto L_0896313C;
    return;
L_0896313C:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963154;
      }
      goto L_08963144;
    }
L_08963144:
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x08963154u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12772));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x08963154u) goto L_08963154;
    return;
L_08963154:
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
L_0896316C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4536));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(476)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08963194u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963194u) goto L_08963194;
    return;
L_08963194:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089631A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089631B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 69u, 0x0896F2F0u>(ctx, &aot_mem) && ctx.pc == 0x089631B4u) goto L_089631B4;
    return;
L_089631B4:
    aot_gpr[31] = (0x089631BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 171u, 0x0896FA48u>(ctx, &aot_mem) && ctx.pc == 0x089631BCu) goto L_089631BC;
    return;
L_089631BC:
    aot_gpr[31] = (0x089631C4u);
    // nop
    goto L_0896381C;
L_089631C4:
    aot_gpr[31] = (0x089631CCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08963750;
L_089631CC:
    aot_gpr[4] = (0u | 4u);
    aot_gpr[31] = (0x089631D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 102u, 0x08962774u>(ctx, &aot_mem) && ctx.pc == 0x089631D8u) goto L_089631D8;
    return;
L_089631D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089631E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089631F8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x089631F8u) goto L_089631F8;
    return;
L_089631F8:
    aot_gpr[31] = (0x08963200u);
    // nop
    goto L_0896381C;
L_08963200:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896321C;
      }
      goto L_08963208;
    }
L_08963208:
    aot_gpr[31] = (0x08963210u);
    // nop
    goto L_0896381C;
L_08963210:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896321Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_089635F0;
L_0896321C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963228:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08963288;
      }
      goto L_08963244;
    }
L_08963244:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5048));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(476), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(484));
    aot_gpr[31] = (0x0896325Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 63u, 0x08971364u>(ctx, &aot_mem) && ctx.pc == 0x0896325Cu) goto L_0896325C;
    return;
L_0896325C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(480));
    aot_gpr[31] = (0x08963268u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 14u, 0x0897109Cu>(ctx, &aot_mem) && ctx.pc == 0x08963268u) goto L_08963268;
    return;
L_08963268:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08963274u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 143u, 0x0895F8D4u>(ctx, &aot_mem) && ctx.pc == 0x08963274u) goto L_08963274;
    return;
L_08963274:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963288;
      }
      goto L_08963280;
    }
L_08963280:
    aot_gpr[31] = (0x08963288u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08963288u) goto L_08963288;
    return;
L_08963288:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896329C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089632B8u);
    aot_gpr[5] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x089632B8u) goto L_089632B8;
    return;
L_089632B8:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089632C8u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 266u, 0x0895FFACu>(ctx, &aot_mem) && ctx.pc == 0x089632C8u) goto L_089632C8;
    return;
L_089632C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089632D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089632ECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 267u, 0x0895FFBCu>(ctx, &aot_mem) && ctx.pc == 0x089632ECu) goto L_089632EC;
    return;
L_089632EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5048));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(476), aot_gpr[4]);
    aot_gpr[31] = (0x08963300u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 13u, 0x08971088u>(ctx, &aot_mem) && ctx.pc == 0x08963300u) goto L_08963300;
    return;
L_08963300:
    aot_gpr[31] = (0x08963308u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(484));
    if (rt.invoke_chained_direct<&recomp_unit_0365_entry, 365u, 62u, 0x08971350u>(ctx, &aot_mem) && ctx.pc == 0x08963308u) goto L_08963308;
    return;
L_08963308:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896331C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08963330u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4536));
    goto L_089632D8;
L_08963330:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896333Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26960));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896333Cu) goto L_0896333C;
    return;
L_0896333C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963348:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0896339C;
      }
      goto L_08963358;
    }
L_08963358:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896339C;
      }
      goto L_08963360;
    }
L_08963360:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963394;
      }
      goto L_08963374;
    }
L_08963374:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896338Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896338Cu) goto L_0896338C;
    return;
L_0896338C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896339C;
      }
      goto L_08963394;
    }
L_08963394:
    aot_gpr[31] = (0x0896339Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0896339Cu) goto L_0896339C;
    return;
L_0896339C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089633A8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089633BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-480));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(452), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(456), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(460), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(464), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(404));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(468), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(472), aot_gpr[31]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(400));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x089633F8u);
    aot_gpr[5] = (0u | 100u);
    goto L_08963F10;
L_089633F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[20] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896341C;
      }
      goto L_0896340C;
    }
L_0896340C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08963410;
L_08963410:
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08963410;
      }
      goto L_0896341C;
    }
L_0896341C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896342Cu);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896342Cu) goto L_0896342C;
    return;
L_0896342C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(444), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08963448u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08963448u) goto L_08963448;
    return;
L_08963448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08963480;
      }
      goto L_08963454;
    }
L_08963454:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08963468u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14376));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 38u, 0x089AB2A0u>(ctx, &aot_mem) && ctx.pc == 0x08963468u) goto L_08963468;
    return;
L_08963468:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 15u);
    aot_gpr[31] = (0x08963478u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08963478u) goto L_08963478;
    return;
L_08963478:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08963480;
L_08963480:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089634A0;
      }
      goto L_08963488;
    }
L_08963488:
    aot_gpr[31] = (0x08963490u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x08963490u) goto L_08963490;
    return;
L_08963490:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089634A0;
      }
      goto L_08963498;
    }
L_08963498:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_089634A0;
L_089634A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089634B8;
      }
      goto L_089634AC;
    }
L_089634AC:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089634B8;
L_089634B8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089634CC;
      }
      goto L_089634C0;
    }
L_089634C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_089634CC;
L_089634CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(456)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089634EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[31]);
    aot_gpr[31] = (0x08963524u);
    aot_gpr[5] = (0u | 30u);
    goto L_08963B64;
L_08963524:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(124));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896353Cu);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896353Cu) goto L_0896353C;
    return;
L_0896353C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08963558u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x08963558u) goto L_08963558;
    return;
L_08963558:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08963590;
      }
      goto L_08963564;
    }
L_08963564:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2198u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08963578u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(14452));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 43u, 0x089AB344u>(ctx, &aot_mem) && ctx.pc == 0x08963578u) goto L_08963578;
    return;
L_08963578:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 15u);
    aot_gpr[31] = (0x08963588u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 166u, 0x08962BFCu>(ctx, &aot_mem) && ctx.pc == 0x08963588u) goto L_08963588;
    return;
L_08963588:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08963590;
L_08963590:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089635A8;
      }
      goto L_08963598;
    }
L_08963598:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089635A4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 156u, 0x08962B94u>(ctx, &aot_mem) && ctx.pc == 0x089635A4u) goto L_089635A4;
    return;
L_089635A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089635A8;
L_089635A8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089635BC;
      }
      goto L_089635B0;
    }
L_089635B0:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089635BC;
L_089635BC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089635D0;
      }
      goto L_089635C4;
    }
L_089635C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_089635D0;
L_089635D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089635F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-24824));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08963614u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 20u, 0x08967120u>(ctx, &aot_mem) && ctx.pc == 0x08963614u) goto L_08963614;
    return;
L_08963614:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896367C;
      }
      goto L_08963620;
    }
L_08963620:
    aot_gpr[31] = (0x08963628u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 26u, 0x08967154u>(ctx, &aot_mem) && ctx.pc == 0x08963628u) goto L_08963628;
    return;
L_08963628:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896367C;
      }
      goto L_08963634;
    }
L_08963634:
    aot_gpr[31] = (0x0896363Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896363Cu) goto L_0896363C;
    return;
L_0896363C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0896373C;
      }
      goto L_0896364C;
    }
L_0896364C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08963684;
      }
      goto L_08963654;
    }
L_08963654:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089636CC;
      }
      goto L_0896365C;
    }
L_0896365C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089636EC;
      }
      goto L_08963664;
    }
L_08963664:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08963734;
      }
      goto L_0896366C;
    }
L_0896366C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089636E4;
      }
      goto L_08963674;
    }
L_08963674:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08963704;
      }
      goto L_0896367C;
    }
L_0896367C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896373C;
      }
      goto L_08963684;
    }
L_08963684:
    aot_gpr[31] = (0x0896368Cu);
    // nop
    goto L_08963F88;
L_0896368C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089636A4;
      }
      goto L_08963698;
    }
L_08963698:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089636C4;
      }
      goto L_089636A4;
    }
L_089636A4:
    aot_gpr[31] = (0x089636ACu);
    // nop
    goto L_08963BCC;
L_089636AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089636C4;
      }
      goto L_089636B8;
    }
L_089636B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_089636C4;
L_089636C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896373C;
      }
      goto L_089636CC;
    }
L_089636CC:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089636DCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_089633BC;
L_089636DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896373C;
      }
      goto L_089636E4;
    }
L_089636E4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_0896373C;
      }
      goto L_089636EC;
    }
L_089636EC:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089636FCu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_089634EC;
L_089636FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896373C;
      }
      goto L_08963704;
    }
L_08963704:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963728;
      }
      goto L_0896371C;
    }
L_0896371C:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896372C;
      }
      goto L_08963728;
    }
L_08963728:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_0896372C;
L_0896372C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896373C;
      }
      goto L_08963734;
    }
L_08963734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896373C;
      }
      goto L_0896373C;
    }
L_0896373C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963750:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08963760u);
    // nop
    goto L_089633A8;
L_08963760:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896376C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896377Cu);
    aot_gpr[2] = (aot_gpr[4] | 0u);
    goto L_089633A8;
L_0896377C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963788:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089637A4;
      }
      goto L_08963790;
    }
L_08963790:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089637C0;
      }
      goto L_08963798;
    }
L_08963798:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089637C0;
      }
      goto L_089637A4;
    }
L_089637A4:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-966));
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
        goto L_089637B0;
    }
    goto L_089637B0;
L_089637B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_089637C4;
      }
      goto L_089637C0;
    }
L_089637C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_089637C4;
L_089637C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089637CC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_089637D4;
    }
L_089637D4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963810;
      }
      goto L_089637DC;
    }
L_089637DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963810;
      }
      goto L_089637E8;
    }
L_089637E8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-966));
      if (branch_taken) {
          goto L_089637F8;
      }
      goto L_089637F0;
    }
L_089637F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08963800;
      }
      goto L_089637F8;
    }
L_089637F8:
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
        goto L_08963800;
    }
    goto L_08963800;
L_08963800:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
      if (branch_taken) {
          goto L_08963814;
      }
      goto L_08963810;
    }
L_08963810:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_08963814;
L_08963814:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896381C:
    aot_gpr[2] = (2220u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-29160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08963840u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896381C;
L_08963840:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963868;
      }
      goto L_0896384C;
    }
L_0896384C:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08963868u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08963788;
L_08963868:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896388Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_0896381C;
L_0896388C:
    aot_gpr[7] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089638B4;
      }
      goto L_08963898;
    }
L_08963898:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x089638B4u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_089637CC;
L_089638B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089638C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089638D4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-29160));
    goto L_0896376C;
L_089638D4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x089638E0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26944));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089638E0u) goto L_089638E0;
    return;
L_089638E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089638EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08963914u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08963914u) goto L_08963914;
    return;
L_08963914:
    aot_gpr[31] = (0x0896391Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    ctx.pc = 0x08A5AD04u;
    return;
L_0896391C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089639AC;
      }
      goto L_08963928;
    }
L_08963928:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08963934u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5ACFCu;
    return;
L_08963934:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896399C;
      }
      goto L_08963940;
    }
L_08963940:
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-26924), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896395Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896395Cu) goto L_0896395C;
    return;
L_0896395C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26924)));
    aot_gpr[9] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[18] + static_cast<std::uint32_t>(-26924));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08963984u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-8948));
    ctx.pc = 0x08A5ACCCu;
    return;
L_08963984:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089639B4;
      }
      goto L_0896398C;
    }
L_0896398C:
    aot_gpr[31] = (0x08963994u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089639BC;
      }
      goto L_0896399C;
    }
L_0896399C:
    aot_gpr[31] = (0x089639A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_089639A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089639BC;
      }
      goto L_089639AC;
    }
L_089639AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089639BC;
      }
      goto L_089639B4;
    }
L_089639B4:
    aot_gpr[31] = (0x089639BCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_089639BC:
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
L_089639D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26924)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2217u << 16u);
      if (branch_taken) {
          goto L_08963A60;
      }
      goto L_08963A08;
    }
L_08963A08:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8948));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    goto L_08963A14;
L_08963A14:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 50 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963A28;
      }
      goto L_08963A20;
    }
L_08963A20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08963A64;
      }
      goto L_08963A28;
    }
L_08963A28:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08963A34u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08963A34u) goto L_08963A34;
    return;
L_08963A34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963A58;
      }
      goto L_08963A3C;
    }
L_08963A3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26924)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08963A14;
      }
      goto L_08963A50;
    }
L_08963A50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963A60;
      }
      goto L_08963A58;
    }
L_08963A58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08963A64;
      }
      goto L_08963A60;
    }
L_08963A60:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08963A64;
L_08963A64:
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
L_08963A80:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26928)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26928), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963A94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08963AACu);
    // nop
    goto L_089639D4;
L_08963AAC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08963B2C;
      }
      goto L_08963ABC;
    }
L_08963ABC:
    aot_gpr[17] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08963AD0u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08963AD0u) goto L_08963AD0;
    return;
L_08963AD0:
    aot_gpr[31] = (0x08963AD8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    ctx.pc = 0x08A5AD04u;
    return;
L_08963AD8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963B24;
      }
      goto L_08963AE4;
    }
L_08963AE4:
    aot_gpr[4] = (aot_gpr[16] << 5u);
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8948));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08963B08u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5ACBCu;
    return;
L_08963B08:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08963B34;
      }
      goto L_08963B14;
    }
L_08963B14:
    aot_gpr[31] = (0x08963B1Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963B1C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08963B50;
      }
      goto L_08963B24;
    }
L_08963B24:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08963B50;
      }
      goto L_08963B2C;
    }
L_08963B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B50;
      }
      goto L_08963B34;
    }
L_08963B34:
    aot_gpr[31] = (0x08963B3Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963B3C:
    aot_gpr[31] = (0x08963B44u);
    // nop
    goto L_089638EC;
L_08963B44:
    aot_gpr[31] = (0x08963B4Cu);
    // nop
    goto L_08963A80;
L_08963B4C:
    aot_gpr[2] = (0u | 1u);
    goto L_08963B50;
L_08963B50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963B64:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-26924)));
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[9] = (2217u << 16u);
      if (branch_taken) {
          goto L_08963BC0;
      }
      goto L_08963B84;
    }
L_08963B84:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-8948));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[9]);
    goto L_08963B90;
L_08963B90:
    aot_gpr[9] = (aot_gpr[8] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963BA4;
      }
      goto L_08963B9C;
    }
L_08963B9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26928)));
      if (branch_taken) {
          goto L_08963BC4;
      }
      goto L_08963BA4;
    }
L_08963BA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(36));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08963B90;
      }
      goto L_08963BC0;
    }
L_08963BC0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26928)));
    goto L_08963BC4;
L_08963BC4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963BCC:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26928)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963BD8:
    aot_gpr[2] = (2217u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-7148));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963BE4:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26916)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963BF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08963C18u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08963C18u) goto L_08963C18;
    return;
L_08963C18:
    aot_gpr[31] = (0x08963C20u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    ctx.pc = 0x08A5AD04u;
    return;
L_08963C20:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963CB0;
      }
      goto L_08963C2C;
    }
L_08963C2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08963C38u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5ACD4u;
    return;
L_08963C38:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963CA0;
      }
      goto L_08963C44;
    }
L_08963C44:
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-26916), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08963C60u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08963C60u) goto L_08963C60;
    return;
L_08963C60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26916)));
    aot_gpr[9] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[18] + static_cast<std::uint32_t>(-26916));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08963C88u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-7148));
    ctx.pc = 0x08A5ACC4u;
    return;
L_08963C88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08963CB8;
      }
      goto L_08963C90;
    }
L_08963C90:
    aot_gpr[31] = (0x08963C98u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963CC0;
      }
      goto L_08963CA0;
    }
L_08963CA0:
    aot_gpr[31] = (0x08963CA8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963CC0;
      }
      goto L_08963CB0;
    }
L_08963CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963CC0;
      }
      goto L_08963CB8;
    }
L_08963CB8:
    aot_gpr[31] = (0x08963CC0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963CC0:
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
L_08963CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26916)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2217u << 16u);
      if (branch_taken) {
          goto L_08963D68;
      }
      goto L_08963D0C;
    }
L_08963D0C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7148));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    goto L_08963D1C;
L_08963D1C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 100 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963D30;
      }
      goto L_08963D28;
    }
L_08963D28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08963D6C;
      }
      goto L_08963D30;
    }
L_08963D30:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08963D3Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08963D3Cu) goto L_08963D3C;
    return;
L_08963D3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963D60;
      }
      goto L_08963D44;
    }
L_08963D44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26916)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08963D1C;
      }
      goto L_08963D58;
    }
L_08963D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963D68;
      }
      goto L_08963D60;
    }
L_08963D60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08963D6C;
      }
      goto L_08963D68;
    }
L_08963D68:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08963D6C;
L_08963D6C:
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
L_08963D88:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26920)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26920), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963D9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08963DB4u);
    // nop
    goto L_08963CD8;
L_08963DB4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08963E38;
      }
      goto L_08963DC4;
    }
L_08963DC4:
    aot_gpr[17] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08963DD8u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08963DD8u) goto L_08963DD8;
    return;
L_08963DD8:
    aot_gpr[31] = (0x08963DE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    ctx.pc = 0x08A5AD04u;
    return;
L_08963DE0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963E30;
      }
      goto L_08963DEC;
    }
L_08963DEC:
    aot_gpr[4] = (aot_gpr[16] << 5u);
    aot_gpr[5] = (aot_gpr[16] << 3u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7148));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08963E14u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5ACE4u;
    return;
L_08963E14:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08963E40;
      }
      goto L_08963E20;
    }
L_08963E20:
    aot_gpr[31] = (0x08963E28u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963E28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08963E5C;
      }
      goto L_08963E30;
    }
L_08963E30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08963E5C;
      }
      goto L_08963E38;
    }
L_08963E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E5C;
      }
      goto L_08963E40;
    }
L_08963E40:
    aot_gpr[31] = (0x08963E48u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963E48:
    aot_gpr[31] = (0x08963E50u);
    // nop
    goto L_08963BF0;
L_08963E50:
    aot_gpr[31] = (0x08963E58u);
    // nop
    goto L_08963D88;
L_08963E58:
    aot_gpr[2] = (0u | 1u);
    goto L_08963E5C;
L_08963E5C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963E70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08963E98u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08963E98u) goto L_08963E98;
    return;
L_08963E98:
    aot_gpr[31] = (0x08963EA0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    ctx.pc = 0x08A5AD04u;
    return;
L_08963EA0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963ED8;
      }
      goto L_08963EAC;
    }
L_08963EAC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08963EBCu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5ACECu;
    return;
L_08963EBC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08963EE0;
      }
      goto L_08963EC8;
    }
L_08963EC8:
    aot_gpr[31] = (0x08963ED0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963ED0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08963EFC;
      }
      goto L_08963ED8;
    }
L_08963ED8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08963EFC;
      }
      goto L_08963EE0;
    }
L_08963EE0:
    aot_gpr[31] = (0x08963EE8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x08A5ACDCu;
    return;
L_08963EE8:
    aot_gpr[31] = (0x08963EF0u);
    // nop
    goto L_08963BF0;
L_08963EF0:
    aot_gpr[31] = (0x08963EF8u);
    // nop
    goto L_08963D88;
L_08963EF8:
    aot_gpr[2] = (0u | 1u);
    goto L_08963EFC;
L_08963EFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963F10:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-26916)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2217u << 16u);
      if (branch_taken) {
          goto L_08963F7C;
      }
      goto L_08963F2C;
    }
L_08963F2C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7148));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08963F34;
L_08963F34:
    aot_gpr[9] = (aot_gpr[8] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[9] = (aot_gpr[8] << 5u);
      if (branch_taken) {
          goto L_08963F48;
      }
      goto L_08963F40;
    }
L_08963F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963F7C;
      }
      goto L_08963F48;
    }
L_08963F48:
    aot_gpr[10] = (aot_gpr[8] << 3u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-26916)));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963F34;
      }
      goto L_08963F7C;
    }
L_08963F7C:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26920)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963F88:
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26920)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963F94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08963FB8u);
    aot_gpr[4] = (0u | 744u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 41u, 0x08964240u>(ctx, &aot_mem) && ctx.pc == 0x08963FB8u) goto L_08963FB8;
    return;
L_08963FB8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08963FD0;
      }
      goto L_08963FC4;
    }
L_08963FC4:
    aot_gpr[31] = (0x08963FCCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 45u, 0x08964278u>(ctx, &aot_mem) && ctx.pc == 0x08963FCCu) goto L_08963FCC;
    return;
L_08963FCC:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_08963FD0;
L_08963FD0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963FE0;
      }
      goto L_08963FD8;
    }
L_08963FD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08963FE4;
      }
      goto L_08963FE0;
    }
L_08963FE0:
    aot_gpr[2] = (0u | 1u);
    goto L_08963FE4;
L_08963FE4:
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
L_08963FFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x08964000u; return;
}

void recomp_unit_0351(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0351_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_351(Runtime &runtime) {
    runtime.register_generated_unit(351u, 0x08963000u, 4096u, &recomp_unit_0351, &recomp_unit_0351_entry);
    runtime.register_function(0x08963000u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963020u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896303Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963054u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963060u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963070u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896308Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963094u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896309Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089630B0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089630C0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089630CCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089630DCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089630E8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963104u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896310Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963114u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963120u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963128u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963134u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896313Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963144u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963154u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896316Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963194u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089631A0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089631B4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089631BCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089631C4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089631CCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089631D8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089631E4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089631F8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963200u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963208u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963210u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896321Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963228u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963244u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896325Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963268u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963274u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963280u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963288u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896329Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089632B8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089632C8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089632D8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089632ECu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963300u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963308u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896331Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963330u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896333Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963348u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963358u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963360u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963374u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896338Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963394u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896339Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089633A8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089633BCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089633F8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896340Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963410u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896341Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896342Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963448u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963454u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963468u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963478u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963480u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963488u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963490u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963498u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089634A0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089634ACu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089634B8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089634C0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089634CCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089634ECu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963524u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896353Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963558u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963564u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963578u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963588u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963590u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963598u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089635A4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089635A8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089635B0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089635BCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089635C4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089635D0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089635F0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963614u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963620u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963628u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963634u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896363Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896364Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963654u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896365Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963664u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896366Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963674u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896367Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963684u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896368Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963698u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636A4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636ACu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636B8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636C4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636CCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636DCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636E4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636ECu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089636FCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963704u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896371Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963728u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896372Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963734u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896373Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963750u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963760u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896376Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896377Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963788u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963790u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963798u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637A4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637B0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637C0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637C4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637CCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637D4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637DCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637E8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637F0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089637F8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963800u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963810u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963814u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896381Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963828u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963840u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896384Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963868u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963874u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896388Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963898u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089638B4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089638C0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089638D4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089638E0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089638ECu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963914u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896391Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963928u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963934u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963940u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896395Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963984u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896398Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963994u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x0896399Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089639A4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089639ACu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089639B4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089639BCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x089639D4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A08u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A14u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A20u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A28u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A34u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A3Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A50u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A58u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A60u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A64u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A80u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963A94u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963AACu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963ABCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963AD0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963AD8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963AE4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B08u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B14u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B1Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B24u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B2Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B34u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B3Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B44u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B4Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B50u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B64u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B84u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B90u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963B9Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963BA4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963BC0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963BC4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963BCCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963BD8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963BE4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963BF0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C18u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C20u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C2Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C38u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C44u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C60u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C88u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C90u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963C98u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963CA0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963CA8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963CB0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963CB8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963CC0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963CD8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D0Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D1Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D28u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D30u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D3Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D44u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D58u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D60u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D68u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D6Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D88u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963D9Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963DB4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963DC4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963DD8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963DE0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963DECu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E14u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E20u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E28u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E30u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E38u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E40u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E48u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E50u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E58u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E5Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E70u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963E98u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EA0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EACu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EBCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EC8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963ED0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963ED8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EE0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EE8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EF0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EF8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963EFCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963F10u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963F2Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963F34u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963F40u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963F48u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963F7Cu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963F88u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963F94u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963FB8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963FC4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963FCCu, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963FD0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963FD8u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963FE0u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963FE4u, &recomp_unit_0351, "recomp_unit_0351");
    runtime.register_function(0x08963FFCu, &recomp_unit_0351, "recomp_unit_0351");
}
} // namespace psprecomp
