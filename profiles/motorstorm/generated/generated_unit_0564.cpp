#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0564[1021] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 9, 0, 10, 0, 11,
    0, 0, 0, 0, 0, 0, 12, 0, 13, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    19, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 54, 55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0,
    66, 0, 67, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0,
    0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 79, 0, 80, 0, 81, 0, 82, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 90, 91, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 96, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 105, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    126, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 135, 0, 0, 0, 136,
    0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0,
    0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0,
    0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0,
    167, 0, 168, 0, 169, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 182, 0, 0, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187,
    0, 188, 0, 189, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 194, 195, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0,
    198, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203, 204, 0, 0, 0, 0, 0, 205, 206, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 0, 0, 209, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0,
    0, 217, 0, 0, 218, 0, 219, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 0, 229, 0, 0, 230, 231, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 239,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 243, 0, 0, 244, 245, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 253, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256,
    0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265,
};
void recomp_unit_0564_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A38000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0564[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A38000;
    case 2u: goto L_08A38010;
    case 3u: goto L_08A38018;
    case 4u: goto L_08A38020;
    case 5u: goto L_08A38040;
    case 6u: goto L_08A38054;
    case 7u: goto L_08A3805C;
    case 8u: goto L_08A38068;
    case 9u: goto L_08A3806C;
    case 10u: goto L_08A38074;
    case 11u: goto L_08A3807C;
    case 12u: goto L_08A38098;
    case 13u: goto L_08A380A0;
    case 14u: goto L_08A380A4;
    case 15u: goto L_08A380B0;
    case 16u: goto L_08A380BC;
    case 17u: goto L_08A380D8;
    case 18u: goto L_08A380F8;
    case 19u: goto L_08A38100;
    case 20u: goto L_08A3810C;
    case 21u: goto L_08A38118;
    case 22u: goto L_08A3812C;
    case 23u: goto L_08A38140;
    case 24u: goto L_08A381A8;
    case 25u: goto L_08A381B4;
    case 26u: goto L_08A381C0;
    case 27u: goto L_08A381C8;
    case 28u: goto L_08A381CC;
    case 29u: goto L_08A381DC;
    case 30u: goto L_08A38244;
    case 31u: goto L_08A38258;
    case 32u: goto L_08A38260;
    case 33u: goto L_08A3829C;
    case 34u: goto L_08A382E4;
    case 35u: goto L_08A382F4;
    case 36u: goto L_08A38318;
    case 37u: goto L_08A38320;
    case 38u: goto L_08A38330;
    case 39u: goto L_08A3833C;
    case 40u: goto L_08A3834C;
    case 41u: goto L_08A38380;
    case 42u: goto L_08A38398;
    case 43u: goto L_08A383A0;
    case 44u: goto L_08A383C8;
    case 45u: goto L_08A383E0;
    case 46u: goto L_08A38404;
    case 47u: goto L_08A38410;
    case 48u: goto L_08A38420;
    case 49u: goto L_08A3842C;
    case 50u: goto L_08A3843C;
    case 51u: goto L_08A38450;
    case 52u: goto L_08A3845C;
    case 53u: goto L_08A38470;
    case 54u: goto L_08A38484;
    case 55u: goto L_08A38488;
    case 56u: goto L_08A38490;
    case 57u: goto L_08A384A4;
    case 58u: goto L_08A384AC;
    case 59u: goto L_08A384C4;
    case 60u: goto L_08A384CC;
    case 61u: goto L_08A384D4;
    case 62u: goto L_08A384DC;
    case 63u: goto L_08A384E4;
    case 64u: goto L_08A384EC;
    case 65u: goto L_08A384F8;
    case 66u: goto L_08A38500;
    case 67u: goto L_08A38508;
    case 68u: goto L_08A38514;
    case 69u: goto L_08A38520;
    case 70u: goto L_08A38528;
    case 71u: goto L_08A3853C;
    case 72u: goto L_08A38544;
    case 73u: goto L_08A3854C;
    case 74u: goto L_08A385E0;
    case 75u: goto L_08A385F4;
    case 76u: goto L_08A38604;
    case 77u: goto L_08A38610;
    case 78u: goto L_08A38624;
    case 79u: goto L_08A38628;
    case 80u: goto L_08A38630;
    case 81u: goto L_08A38638;
    case 82u: goto L_08A38640;
    case 83u: goto L_08A38644;
    case 84u: goto L_08A3865C;
    case 85u: goto L_08A3867C;
    case 86u: goto L_08A38684;
    case 87u: goto L_08A38690;
    case 88u: goto L_08A386A0;
    case 89u: goto L_08A386AC;
    case 90u: goto L_08A386C4;
    case 91u: goto L_08A386C8;
    case 92u: goto L_08A386D4;
    case 93u: goto L_08A386E0;
    case 94u: goto L_08A386E8;
    case 95u: goto L_08A386F0;
    case 96u: goto L_08A386F4;
    case 97u: goto L_08A38704;
    case 98u: goto L_08A3872C;
    case 99u: goto L_08A38734;
    case 100u: goto L_08A38740;
    case 101u: goto L_08A3874C;
    case 102u: goto L_08A38758;
    case 103u: goto L_08A38764;
    case 104u: goto L_08A38780;
    case 105u: goto L_08A3878C;
    case 106u: goto L_08A38790;
    case 107u: goto L_08A387A4;
    case 108u: goto L_08A387BC;
    case 109u: goto L_08A387C8;
    case 110u: goto L_08A387CC;
    case 111u: goto L_08A387E0;
    case 112u: goto L_08A387F8;
    case 113u: goto L_08A38814;
    case 114u: goto L_08A38820;
    case 115u: goto L_08A3882C;
    case 116u: goto L_08A38838;
    case 117u: goto L_08A3884C;
    case 118u: goto L_08A3885C;
    case 119u: goto L_08A38878;
    case 120u: goto L_08A38884;
    case 121u: goto L_08A38894;
    case 122u: goto L_08A388A4;
    case 123u: goto L_08A388B0;
    case 124u: goto L_08A388C0;
    case 125u: goto L_08A388CC;
    case 126u: goto L_08A38900;
    case 127u: goto L_08A38904;
    case 128u: goto L_08A38918;
    case 129u: goto L_08A38928;
    case 130u: goto L_08A38930;
    case 131u: goto L_08A38938;
    case 132u: goto L_08A38940;
    case 133u: goto L_08A3894C;
    case 134u: goto L_08A38968;
    case 135u: goto L_08A3896C;
    case 136u: goto L_08A3897C;
    case 137u: goto L_08A38988;
    case 138u: goto L_08A38990;
    case 139u: goto L_08A38998;
    case 140u: goto L_08A389B4;
    case 141u: goto L_08A389B8;
    case 142u: goto L_08A389C0;
    case 143u: goto L_08A389CC;
    case 144u: goto L_08A389D4;
    case 145u: goto L_08A389DC;
    case 146u: goto L_08A389E4;
    case 147u: goto L_08A389F0;
    case 148u: goto L_08A389F8;
    case 149u: goto L_08A38A08;
    case 150u: goto L_08A38A10;
    case 151u: goto L_08A38A28;
    case 152u: goto L_08A38A30;
    case 153u: goto L_08A38A38;
    case 154u: goto L_08A38A40;
    case 155u: goto L_08A38A54;
    case 156u: goto L_08A38A60;
    case 157u: goto L_08A38A78;
    case 158u: goto L_08A38A84;
    case 159u: goto L_08A38A98;
    case 160u: goto L_08A38AB4;
    case 161u: goto L_08A38ABC;
    case 162u: goto L_08A38AC4;
    case 163u: goto L_08A38AC8;
    case 164u: goto L_08A38AE4;
    case 165u: goto L_08A38AF0;
    case 166u: goto L_08A38AF8;
    case 167u: goto L_08A38B00;
    case 168u: goto L_08A38B08;
    case 169u: goto L_08A38B10;
    case 170u: goto L_08A38B14;
    case 171u: goto L_08A38B28;
    case 172u: goto L_08A38B30;
    case 173u: goto L_08A38B38;
    case 174u: goto L_08A38B4C;
    case 175u: goto L_08A38B50;
    case 176u: goto L_08A38B78;
    case 177u: goto L_08A38B84;
    case 178u: goto L_08A38B8C;
    case 179u: goto L_08A38B94;
    case 180u: goto L_08A38B9C;
    case 181u: goto L_08A38BA4;
    case 182u: goto L_08A38BA8;
    case 183u: goto L_08A38BBC;
    case 184u: goto L_08A38BC0;
    case 185u: goto L_08A38BC8;
    case 186u: goto L_08A38BDC;
    case 187u: goto L_08A38BFC;
    case 188u: goto L_08A38C04;
    case 189u: goto L_08A38C0C;
    case 190u: goto L_08A38C10;
    case 191u: goto L_08A38C2C;
    case 192u: goto L_08A38C38;
    case 193u: goto L_08A38C40;
    case 194u: goto L_08A38C48;
    case 195u: goto L_08A38C4C;
    case 196u: goto L_08A38C64;
    case 197u: goto L_08A38C6C;
    case 198u: goto L_08A38C80;
    case 199u: goto L_08A38C84;
    case 200u: goto L_08A38CAC;
    case 201u: goto L_08A38CB8;
    case 202u: goto L_08A38CC0;
    case 203u: goto L_08A38CC8;
    case 204u: goto L_08A38CCC;
    case 205u: goto L_08A38CE4;
    case 206u: goto L_08A38CE8;
    case 207u: goto L_08A38D00;
    case 208u: goto L_08A38D10;
    case 209u: goto L_08A38D20;
    case 210u: goto L_08A38D24;
    case 211u: goto L_08A38D34;
    case 212u: goto L_08A38D40;
    case 213u: goto L_08A38D4C;
    case 214u: goto L_08A38D68;
    case 215u: goto L_08A38D70;
    case 216u: goto L_08A38D78;
    case 217u: goto L_08A38D84;
    case 218u: goto L_08A38D90;
    case 219u: goto L_08A38D98;
    case 220u: goto L_08A38D9C;
    case 221u: goto L_08A38DA4;
    case 222u: goto L_08A38DAC;
    case 223u: goto L_08A38DB4;
    case 224u: goto L_08A38DBC;
    case 225u: goto L_08A38DC8;
    case 226u: goto L_08A38DD4;
    case 227u: goto L_08A38DDC;
    case 228u: goto L_08A38DF4;
    case 229u: goto L_08A38E0C;
    case 230u: goto L_08A38E18;
    case 231u: goto L_08A38E1C;
    case 232u: goto L_08A38E24;
    case 233u: goto L_08A38E30;
    case 234u: goto L_08A38E3C;
    case 235u: goto L_08A38E4C;
    case 236u: goto L_08A38E54;
    case 237u: goto L_08A38E60;
    case 238u: goto L_08A38E74;
    case 239u: goto L_08A38E7C;
    case 240u: goto L_08A38E94;
    case 241u: goto L_08A38EA4;
    case 242u: goto L_08A38EAC;
    case 243u: goto L_08A38EB4;
    case 244u: goto L_08A38EC0;
    case 245u: goto L_08A38EC4;
    case 246u: goto L_08A38ECC;
    case 247u: goto L_08A38ED8;
    case 248u: goto L_08A38EE4;
    case 249u: goto L_08A38F18;
    case 250u: goto L_08A38F28;
    case 251u: goto L_08A38F34;
    case 252u: goto L_08A38F40;
    case 253u: goto L_08A38F44;
    case 254u: goto L_08A38F50;
    case 255u: goto L_08A38F68;
    case 256u: goto L_08A38F7C;
    case 257u: goto L_08A38F8C;
    case 258u: goto L_08A38F98;
    case 259u: goto L_08A38FA8;
    case 260u: goto L_08A38FB0;
    case 261u: goto L_08A38FC0;
    case 262u: goto L_08A38FC8;
    case 263u: goto L_08A38FD4;
    case 264u: goto L_08A38FDC;
    case 265u: goto L_08A38FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A38000:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38010:
    aot_gpr[31] = (0x08A38018u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 103u, 0x08A37910u>(ctx, &aot_mem) && ctx.pc == 0x08A38018u) goto L_08A38018;
    return;
L_08A38018:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38040;
      }
      goto L_08A38020;
    }
L_08A38020:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 191u, 0x08A37FF0u>(ctx, &aot_mem); return;
      }
      goto L_08A38040;
    }
L_08A38040:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38054:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08A3806C;
    }
    goto L_08A3805C;
L_08A3805C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3807C;
      }
      goto L_08A38068;
    }
L_08A38068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A3806C;
L_08A3806C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38098;
      }
      goto L_08A38074;
    }
L_08A38074:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08A380A4;
      }
      goto L_08A3807C;
    }
L_08A3807C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38098:
    aot_gpr[31] = (0x08A380A0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 155u, 0x08A37D94u>(ctx, &aot_mem) && ctx.pc == 0x08A380A0u) goto L_08A380A0;
    return;
L_08A380A0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08A380A4;
L_08A380A4:
    aot_gpr[4] = (aot_gpr[4] & 3u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2211u << 16u);
      if (branch_taken) {
          goto L_08A380BC;
      }
      goto L_08A380B0;
    }
L_08A380B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (0x08A380BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32592));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 146u, 0x08A37D04u>(ctx, &aot_mem) && ctx.pc == 0x08A380BCu) goto L_08A380BC;
    return;
L_08A380BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A380D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A380D8u) goto L_08A380D8;
    return;
L_08A380D8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3812C;
      }
      goto L_08A380F8;
    }
L_08A380F8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08A3810C;
      }
      goto L_08A38100;
    }
L_08A38100:
    aot_gpr[4] = (aot_gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08A38118;
      }
      goto L_08A3810C;
    }
L_08A3810C:
    aot_gpr[4] = (aot_gpr[4] | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08A38118;
L_08A38118:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3812C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38140:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[11]);
    aot_gpr[5] = (0u | 520u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[5] = (0u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x08A381A8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 44u, 0x08A33324u>(ctx, &aot_mem) && ctx.pc == 0x08A381A8u) goto L_08A381A8;
    return;
L_08A381A8:
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A381C0;
      }
      goto L_08A381B4;
    }
L_08A381B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A381CC;
      }
      goto L_08A381C0;
    }
L_08A381C0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A381CC;
      }
      goto L_08A381C8;
    }
L_08A381C8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A381CC;
L_08A381CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A381DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[11]);
    aot_gpr[6] = (0u | 520u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (0u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    aot_gpr[31] = (0x08A38244u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 44u, 0x08A33324u>(ctx, &aot_mem) && ctx.pc == 0x08A38244u) goto L_08A38244;
    return;
L_08A38244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38258:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38260:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[11]);
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    aot_gpr[31] = (0x08A3829Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A3829Cu) goto L_08A3829C;
    return;
L_08A3829C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (2212u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-32168));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), 0u);
    aot_gpr[5] = (0u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A382E4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A3854C;
L_08A382E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A382F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A38318u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 38u, 0x08A3D2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A38318u) goto L_08A38318;
    return;
L_08A38318:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08A38330;
    }
    goto L_08A38320;
L_08A38320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A3833C;
      }
      goto L_08A38330;
    }
L_08A38330:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08A3833C;
L_08A3833C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3834C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] & 256u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(14))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A383A0;
      }
      goto L_08A38380;
    }
L_08A38380:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A38398u);
    aot_gpr[7] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 33u, 0x08A3D24Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38398u) goto L_08A38398;
    return;
L_08A38398:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08A383A0;
L_08A383A0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A383C8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 48u, 0x08A3D358u>(ctx, &aot_mem) && ctx.pc == 0x08A383C8u) goto L_08A383C8;
    return;
L_08A383C8:
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
L_08A383E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A38404u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 33u, 0x08A3D24Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38404u) goto L_08A38404;
    return;
L_08A38404:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[5];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08A38420;
      }
      goto L_08A38410;
    }
L_08A38410:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08A3842C;
      }
      goto L_08A38420;
    }
L_08A38420:
    aot_gpr[4] = (aot_gpr[4] | 4096u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    goto L_08A3842C;
L_08A3842C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3843C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(14))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A38450u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 23u, 0x08A3D1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A38450u) goto L_08A38450;
    return;
L_08A38450:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3845C:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u | 94u);
    { const bool branch_taken = aot_gpr[9] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A38484;
      }
      goto L_08A38470;
    }
L_08A38470:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A38488;
      }
      goto L_08A38484;
    }
L_08A38484:
    aot_gpr[8] = (0u | 0u);
    goto L_08A38488;
L_08A38488:
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[4]);
    goto L_08A38490;
L_08A38490:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[10]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38490;
      }
      goto L_08A384A4;
    }
L_08A384A4:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A384C4;
      }
      goto L_08A384AC;
    }
L_08A384AC:
    aot_gpr[8] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[7] = (0u | 93u);
    aot_gpr[6] = (0u | 45u);
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A384CC;
      }
      goto L_08A384C4;
    }
L_08A384C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A384CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08A384D4;
L_08A384D4:
    { const bool branch_taken = aot_gpr[10] == aot_gpr[7];
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A38544;
      }
      goto L_08A384DC;
    }
L_08A384DC:
    if (aot_gpr[10] == aot_gpr[6]) {
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08A38500;
    }
    goto L_08A384E4;
L_08A384E4:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[9] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A384F8;
      }
      goto L_08A384EC;
    }
L_08A384EC:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A384CC;
      }
      goto L_08A384F8;
    }
L_08A384F8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38500:
    { const bool branch_taken = aot_gpr[10] == aot_gpr[7];
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38514;
      }
      goto L_08A38508;
    }
L_08A38508:
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    if (aot_gpr[11] == 0u) {
    aot_gpr[5] = (aot_gpr[2] | 0u);
        goto L_08A38520;
    }
    goto L_08A38514;
L_08A38514:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(45));
      if (branch_taken) {
          goto L_08A384CC;
      }
      goto L_08A38520;
    }
L_08A38520:
    aot_gpr[2] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A38528;
L_08A38528:
    aot_gpr[11] = (aot_gpr[4] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE8(aot_gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    if (aot_gpr[11] != 0u) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08A38528;
    }
    goto L_08A3853C;
L_08A3853C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A384D4;
      }
      goto L_08A38544;
    }
L_08A38544:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3854C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-688));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(648), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(612), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[4]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8696));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(616), aot_gpr[4]);
    aot_gpr[4] = (2211u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25708));
    aot_gpr[5] = (2212u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(636), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-22660));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(632), aot_gpr[5]);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(8160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[6]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(656), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[20] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(660), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(664), aot_gpr[22]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-17480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(640), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(644), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(652), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[31]);
    goto L_08A385E0;
L_08A385E0:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(612));
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A385F4u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 119u, 0x08A3963Cu>(ctx, &aot_mem) && ctx.pc == 0x08A385F4u) goto L_08A385F4;
    return;
L_08A385F4:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08A38EE4;
      }
      goto L_08A38604;
    }
L_08A38604:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[20] != aot_gpr[5];
    aot_gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08A3867C;
      }
      goto L_08A38610;
    }
L_08A38610:
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08A3867C;
      }
      goto L_08A38624;
    }
L_08A38624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A38628;
L_08A38628:
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A38644;
    }
    goto L_08A38630;
L_08A38630:
    aot_gpr[31] = (0x08A38638u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38638u) goto L_08A38638;
    return;
L_08A38638:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38EE4;
      }
      goto L_08A38640;
    }
L_08A38640:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A38644;
L_08A38644:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (2216u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 55u, 0x08A39240u>(ctx, &aot_mem); return;
    }
    goto L_08A3865C;
L_08A3865C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A38628;
      }
      goto L_08A3867C;
    }
L_08A3867C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A386C8;
      }
      goto L_08A38684;
    }
L_08A38684:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08A38690;
L_08A38690:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[23] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A38900;
      }
      goto L_08A386A0;
    }
L_08A386A0:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 121 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[4]);
        goto L_08A38904;
    }
    goto L_08A386AC;
L_08A386AC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(8736)));
    jump_target = aot_gpr[1];
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A386C4:
    aot_gpr[16] = (0u | 0u);
    goto L_08A386C8;
L_08A386C8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[23] - aot_gpr[20]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A386D4;
    }
L_08A386D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A386F4;
    }
    goto L_08A386E0;
L_08A386E0:
    aot_gpr[31] = (0x08A386E8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A386E8u) goto L_08A386E8;
    return;
L_08A386E8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
        (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 57u, 0x08A39254u>(ctx, &aot_mem); return;
    }
    goto L_08A386F0;
L_08A386F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A386F4;
L_08A386F4:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A38EE4;
      }
      goto L_08A38704;
    }
L_08A38704:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A386D4;
      }
      goto L_08A3872C;
    }
L_08A3872C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 55u, 0x08A39240u>(ctx, &aot_mem); return;
      }
      goto L_08A38734;
    }
L_08A38734:
    aot_gpr[16] = (aot_gpr[16] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38690;
      }
      goto L_08A38740;
    }
L_08A38740:
    aot_gpr[16] = (aot_gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38690;
      }
      goto L_08A3874C;
    }
L_08A3874C:
    aot_gpr[16] = (aot_gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38690;
      }
      goto L_08A38758;
    }
L_08A38758:
    aot_gpr[16] = (aot_gpr[16] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38690;
      }
      goto L_08A38764;
    }
L_08A38764:
    aot_gpr[5] = (aot_gpr[19] << 3u);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38690;
      }
      goto L_08A38780;
    }
L_08A38780:
    aot_gpr[16] = (aot_gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A38790;
      }
      goto L_08A3878C;
    }
L_08A3878C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A38790;
L_08A38790:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[17] = (0u | 3u);
    aot_gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A387A4;
    }
L_08A387A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 3u);
    aot_gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A387BC;
    }
L_08A387BC:
    aot_gpr[16] = (aot_gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A387CC;
      }
      goto L_08A387C8;
    }
L_08A387C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A387CC;
L_08A387CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[17] = (0u | 3u);
    aot_gpr[21] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A387E0;
    }
L_08A387E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[17] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[4]);
    aot_gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A387F8;
    }
L_08A387F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[16] = (aot_gpr[16] | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[4]);
    aot_gpr[17] = (0u | 3u);
    aot_gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A38814;
    }
L_08A38814:
    aot_gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A38820;
    }
L_08A38820:
    aot_gpr[17] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A3882C;
    }
L_08A3882C:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A38838u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    goto L_08A3845C;
L_08A38838:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[16] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A3884C;
    }
L_08A3884C:
    aot_gpr[16] = (aot_gpr[16] | 32u);
    aot_gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A3885C;
    }
L_08A3885C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(632)));
    aot_gpr[16] = (aot_gpr[16] | 272u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[4]);
    aot_gpr[17] = (0u | 3u);
    aot_gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A38928;
      }
      goto L_08A38878;
    }
L_08A38878:
    aot_gpr[4] = (aot_gpr[16] & 8u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 55u, 0x08A39240u>(ctx, &aot_mem); return;
      }
      goto L_08A38884;
    }
L_08A38884:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
    aot_gpr[5] = (aot_gpr[16] & 4u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A388A4;
      }
      goto L_08A38894;
    }
L_08A38894:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[22]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A388A4;
    }
L_08A388A4:
    aot_gpr[5] = (aot_gpr[16] & 1u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
        goto L_08A388C0;
    }
    goto L_08A388B0;
L_08A388B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A388C0;
    }
L_08A388C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A388CC;
    }
L_08A388CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(644)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(648)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(652)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(664)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38900:
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[4]);
    goto L_08A38904;
L_08A38904:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[16] = (aot_gpr[16] | 1u);
        goto L_08A38918;
    }
    goto L_08A38918;
L_08A38918:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(636)));
    aot_gpr[17] = (0u | 3u);
    aot_gpr[21] = (0u | 10u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(628), aot_gpr[5]);
    goto L_08A38928;
L_08A38928:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-449));
      if (branch_taken) {
          goto L_08A38940;
      }
      goto L_08A38930;
    }
L_08A38930:
    aot_gpr[31] = (0x08A38938u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38938u) goto L_08A38938;
    return;
L_08A38938:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
        (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 57u, 0x08A39254u>(ctx, &aot_mem); return;
    }
    goto L_08A38940;
L_08A38940:
    aot_gpr[4] = (aot_gpr[16] & 32u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A389B8;
      }
      goto L_08A3894C;
    }
L_08A3894C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
        goto L_08A389B8;
    }
    goto L_08A38968;
L_08A38968:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A3896C;
L_08A3896C:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A38988;
      }
      goto L_08A3897C;
    }
L_08A3897C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38998;
      }
      goto L_08A38988;
    }
L_08A38988:
    aot_gpr[31] = (0x08A38990u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38990u) goto L_08A38990;
    return;
L_08A38990:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
        (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 57u, 0x08A39254u>(ctx, &aot_mem); return;
    }
    goto L_08A38998;
L_08A38998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08A3896C;
    }
    goto L_08A389B4;
L_08A389B4:
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    goto L_08A389B8;
L_08A389B8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 55u, 0x08A39240u>(ctx, &aot_mem); return;
      }
      goto L_08A389C0;
    }
L_08A389C0:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A38A98;
      }
      goto L_08A389CC;
    }
L_08A389CC:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A38BDC;
      }
      goto L_08A389D4;
    }
L_08A389D4:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A38D00;
      }
      goto L_08A389DC;
    }
L_08A389DC:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A38FDC;
      }
      goto L_08A389E4;
    }
L_08A389E4:
    aot_gpr[16] = (aot_gpr[16] & 8u);
    if (aot_gpr[19] == 0u) {
    aot_gpr[19] = (0u | 1u);
        goto L_08A389F0;
    }
    goto L_08A389F0;
L_08A389F0:
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
        goto L_08A38A60;
    }
    goto L_08A389F8;
L_08A389F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    goto L_08A38A08;
L_08A38A08:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[19]);
        goto L_08A38A40;
    }
    goto L_08A38A10;
L_08A38A10:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[31] = (0x08A38A28u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38A28u) goto L_08A38A28;
    return;
L_08A38A28:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08A38A54;
    }
    goto L_08A38A30;
L_08A38A30:
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
        (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 57u, 0x08A39254u>(ctx, &aot_mem); return;
    }
    goto L_08A38A38;
L_08A38A38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A38A40;
    }
L_08A38A40:
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A38A38;
      }
      goto L_08A38A54;
    }
L_08A38A54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A38A08;
      }
      goto L_08A38A60;
    }
L_08A38A60:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-4)));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A38A78u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 133u, 0x08A37BACu>(ctx, &aot_mem) && ctx.pc == 0x08A38A78u) goto L_08A38A78;
    return;
L_08A38A78:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 56u, 0x08A39250u>(ctx, &aot_mem); return;
      }
      goto L_08A38A84;
    }
L_08A38A84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A38A98;
    }
L_08A38A98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] & 8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4))))));
    if (aot_gpr[19] == 0u) {
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A38AB4;
    }
    goto L_08A38AB4;
L_08A38AB4:
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
        goto L_08A38B38;
    }
    goto L_08A38ABC;
L_08A38ABC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A38B28;
      }
      goto L_08A38AC4;
    }
L_08A38AC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A38AC8;
L_08A38AC8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38B28;
      }
      goto L_08A38AE4;
    }
L_08A38AE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A38B14;
    }
    goto L_08A38AF0;
L_08A38AF0:
    aot_gpr[31] = (0x08A38AF8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38AF8u) goto L_08A38AF8;
    return;
L_08A38AF8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A38B14;
    }
    goto L_08A38B00;
L_08A38B00:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
        (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 57u, 0x08A39254u>(ctx, &aot_mem); return;
    }
    goto L_08A38B08;
L_08A38B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38B30;
      }
      goto L_08A38B10;
    }
L_08A38B10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A38B14;
L_08A38B14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4))))));
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08A38AC8;
    }
    goto L_08A38B28;
L_08A38B28:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38EE4;
      }
      goto L_08A38B30;
    }
L_08A38B30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[17] + aot_gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A38B38;
    }
L_08A38B38:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A38BBC;
      }
      goto L_08A38B4C;
    }
L_08A38B4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A38B50;
L_08A38B50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38BBC;
      }
      goto L_08A38B78;
    }
L_08A38B78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A38BA8;
    }
    goto L_08A38B84;
L_08A38B84:
    aot_gpr[31] = (0x08A38B8Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38B8Cu) goto L_08A38B8C;
    return;
L_08A38B8C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A38BA8;
    }
    goto L_08A38B94;
L_08A38B94:
    if (aot_gpr[16] == aot_gpr[17]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
        (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 57u, 0x08A39254u>(ctx, &aot_mem); return;
    }
    goto L_08A38B9C;
L_08A38B9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[16] - aot_gpr[17]);
      if (branch_taken) {
          goto L_08A38BC0;
      }
      goto L_08A38BA4;
    }
L_08A38BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A38BA8;
L_08A38BA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4))))));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08A38B50;
    }
    goto L_08A38BBC;
L_08A38BBC:
    aot_gpr[17] = (aot_gpr[16] - aot_gpr[17]);
    goto L_08A38BC0;
L_08A38BC0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38EE4;
      }
      goto L_08A38BC8;
    }
L_08A38BC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38B30;
      }
      goto L_08A38BDC;
    }
L_08A38BDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] & 8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    if (aot_gpr[19] == 0u) {
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A38BFC;
    }
    goto L_08A38BFC;
L_08A38BFC:
    if (aot_gpr[16] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
        goto L_08A38C6C;
    }
    goto L_08A38C04;
L_08A38C04:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A38C64;
      }
      goto L_08A38C0C;
    }
L_08A38C0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A38C10;
L_08A38C10:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38C64;
      }
      goto L_08A38C2C;
    }
L_08A38C2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A38C4C;
    }
    goto L_08A38C38;
L_08A38C38:
    aot_gpr[31] = (0x08A38C40u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38C40u) goto L_08A38C40;
    return;
L_08A38C40:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38C64;
      }
      goto L_08A38C48;
    }
L_08A38C48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A38C4C;
L_08A38C4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[30] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] & 8u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08A38C10;
    }
    goto L_08A38C64;
L_08A38C64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A38C6C;
    }
L_08A38C6C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A38CE4;
      }
      goto L_08A38C80;
    }
L_08A38C80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A38C84;
L_08A38C84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38CE4;
      }
      goto L_08A38CAC;
    }
L_08A38CAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A38CCC;
    }
    goto L_08A38CB8;
L_08A38CB8:
    aot_gpr[31] = (0x08A38CC0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38CC0u) goto L_08A38CC0;
    return;
L_08A38CC0:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
        goto L_08A38CE8;
    }
    goto L_08A38CC8;
L_08A38CC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A38CCC;
L_08A38CCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[30] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] & 8u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08A38C84;
    }
    goto L_08A38CE4;
L_08A38CE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    goto L_08A38CE8;
L_08A38CE8:
    aot_gpr[5] = (aot_gpr[16] - aot_gpr[17]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 54u, 0x08A3923Cu>(ctx, &aot_mem); return;
      }
      goto L_08A38D00;
    }
L_08A38D00:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(349) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (0u | 348u);
        goto L_08A38D10;
    }
    goto L_08A38D10;
L_08A38D10:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[16] | 704u);
      if (branch_taken) {
          goto L_08A38EC0;
      }
      goto L_08A38D20;
    }
L_08A38D20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A38D24;
L_08A38D24:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 97 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(616)));
      if (branch_taken) {
          goto L_08A38D78;
      }
      goto L_08A38D34;
    }
L_08A38D34:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 71 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 88u);
      if (branch_taken) {
          goto L_08A38D68;
      }
      goto L_08A38D40;
    }
L_08A38D40:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 43 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38D4C;
    }
L_08A38D4C:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-43));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(9224)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38D68:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (aot_gpr[16] & 256u);
      if (branch_taken) {
          goto L_08A38E4C;
      }
      goto L_08A38D70;
    }
L_08A38D70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38D78;
    }
L_08A38D78:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 120 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 121 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A38D9C;
      }
      goto L_08A38D84;
    }
L_08A38D84:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 103 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A38E1C;
      }
      goto L_08A38D90;
    }
L_08A38D90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38D98;
    }
L_08A38D98:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < 121 ? 1u : 0u);
    goto L_08A38D9C;
L_08A38D9C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 256u);
      if (branch_taken) {
          goto L_08A38E4C;
      }
      goto L_08A38DA4;
    }
L_08A38DA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38DAC;
    }
L_08A38DAC:
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38DBC;
      }
      goto L_08A38DB4;
    }
L_08A38DB4:
    aot_gpr[21] = (0u | 8u);
    aot_gpr[16] = (aot_gpr[16] | 256u);
    goto L_08A38DBC;
L_08A38DBC:
    aot_gpr[4] = (aot_gpr[16] & 512u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & aot_gpr[20]);
      if (branch_taken) {
          goto L_08A38DD4;
      }
      goto L_08A38DC8;
    }
L_08A38DC8:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-705));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] & aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38DD4;
      }
      goto L_08A38DD4;
    }
L_08A38DD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A38E7C;
      }
      goto L_08A38DDC;
    }
L_08A38DDC:
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38E7C;
      }
      goto L_08A38DF4;
    }
L_08A38DF4:
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38E0C;
    }
L_08A38E0C:
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38E7C;
      }
      goto L_08A38E18;
    }
L_08A38E18:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 11 ? 1u : 0u);
    goto L_08A38E1C;
L_08A38E1C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38E24;
    }
L_08A38E24:
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38E7C;
      }
      goto L_08A38E30;
    }
L_08A38E30:
    aot_gpr[4] = (aot_gpr[16] & 64u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38E3C;
    }
L_08A38E3C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38E7C;
      }
      goto L_08A38E4C;
    }
L_08A38E4C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38E54;
    }
L_08A38E54:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(261));
    { const bool branch_taken = aot_gpr[17] != aot_gpr[4];
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38E60;
    }
L_08A38E60:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[21] = (0u | 16u);
    aot_gpr[16] = (aot_gpr[16] & aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A38E7C;
      }
      goto L_08A38E74;
    }
L_08A38E74:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38E7C;
    }
L_08A38E7C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38EA4;
      }
      goto L_08A38E94;
    }
L_08A38E94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38EB4;
      }
      goto L_08A38EA4;
    }
L_08A38EA4:
    aot_gpr[31] = (0x08A38EACu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 180u, 0x08A37F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38EACu) goto L_08A38EAC;
    return;
L_08A38EAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 128u);
      if (branch_taken) {
          goto L_08A38EC4;
      }
      goto L_08A38EB4;
    }
L_08A38EB4:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    if (aot_gpr[19] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A38D24;
    }
    goto L_08A38EC0;
L_08A38EC0:
    aot_gpr[4] = (aot_gpr[16] & 128u);
    goto L_08A38EC4;
L_08A38EC4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_08A38F18;
      }
      goto L_08A38ECC;
    }
L_08A38ECC:
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A38EE4;
      }
      goto L_08A38ED8;
    }
L_08A38ED8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A38EE4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 53u, 0x08A3D3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A38EE4u) goto L_08A38EE4;
    return;
L_08A38EE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(640)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(644)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(648)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(652)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(656)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(660)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(664)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38F18:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(-1))))));
    aot_gpr[5] = (0u | 120u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[19] = (aot_gpr[16] & 8u);
      if (branch_taken) {
          goto L_08A38F34;
      }
      goto L_08A38F28;
    }
L_08A38F28:
    aot_gpr[5] = (0u | 88u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_08A38F44;
      }
      goto L_08A38F34;
    }
L_08A38F34:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08A38F40u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0569_entry, 569u, 53u, 0x08A3D3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A38F40u) goto L_08A38F40;
    return;
L_08A38F40:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
    goto L_08A38F44;
L_08A38F44:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[5]);
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38FD4;
      }
      goto L_08A38F50;
    }
L_08A38F50:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(628)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A38F68u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A38F68u) goto L_08A38F68;
    return;
L_08A38F68:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(620)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] & 16u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A38F8C;
      }
      goto L_08A38F7C;
    }
L_08A38F7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38FC8;
      }
      goto L_08A38F8C;
    }
L_08A38F8C:
    aot_gpr[5] = (aot_gpr[16] & 4u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A38FA8;
      }
      goto L_08A38F98;
    }
L_08A38F98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08A38FC8;
      }
      goto L_08A38FA8;
    }
L_08A38FA8:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4)));
        goto L_08A38FC0;
    }
    goto L_08A38FB0;
L_08A38FB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[17]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A38FC8;
      }
      goto L_08A38FC0;
    }
L_08A38FC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(620), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A38FC8;
L_08A38FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(624)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(624), aot_gpr[4]);
    goto L_08A38FD4;
L_08A38FD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 55u, 0x08A39240u>(ctx, &aot_mem); return;
      }
      goto L_08A38FDC;
    }
L_08A38FDC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(349) ? 1u : 0u);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-65));
    if (aot_gpr[4] == 0u) {
    aot_gpr[19] = (0u | 348u);
        goto L_08A38FF0;
    }
    goto L_08A38FF0;
L_08A38FF0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(260));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[16] | 960u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 30u, 0x08A39138u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 1u, 0x08A39000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0564(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0564_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_564(Runtime &runtime) {
    runtime.register_generated_unit(564u, 0x08A38000u, 4096u, &recomp_unit_0564, &recomp_unit_0564_entry);
    runtime.register_function(0x08A38000u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38010u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38018u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38020u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38040u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38054u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3805Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38068u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3806Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38074u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3807Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38098u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A380A0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A380A4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A380B0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A380BCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A380D8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A380F8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38100u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3810Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38118u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3812Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38140u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A381A8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A381B4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A381C0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A381C8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A381CCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A381DCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38244u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38258u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38260u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3829Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A382E4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A382F4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38318u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38320u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38330u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3833Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3834Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38380u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38398u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A383A0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A383C8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A383E0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38404u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38410u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38420u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3842Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3843Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38450u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3845Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38470u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38484u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38488u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38490u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384A4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384ACu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384C4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384CCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384D4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384DCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384E4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384ECu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A384F8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38500u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38508u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38514u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38520u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38528u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3853Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38544u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3854Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A385E0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A385F4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38604u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38610u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38624u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38628u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38630u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38638u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38640u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38644u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3865Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3867Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38684u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38690u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386A0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386ACu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386C4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386C8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386D4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386E0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386E8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386F0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A386F4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38704u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3872Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38734u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38740u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3874Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38758u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38764u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38780u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3878Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38790u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A387A4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A387BCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A387C8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A387CCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A387E0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A387F8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38814u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38820u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3882Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38838u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3884Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3885Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38878u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38884u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38894u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A388A4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A388B0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A388C0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A388CCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38900u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38904u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38918u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38928u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38930u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38938u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38940u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3894Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38968u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3896Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A3897Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38988u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38990u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38998u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389B4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389B8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389C0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389CCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389D4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389DCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389E4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389F0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A389F8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A08u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A10u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A28u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A30u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A38u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A40u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A54u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A60u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A78u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A84u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38A98u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38AB4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38ABCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38AC4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38AC8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38AE4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38AF0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38AF8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B00u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B08u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B10u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B14u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B28u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B30u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B38u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B4Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B50u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B78u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B84u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B8Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B94u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38B9Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38BA4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38BA8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38BBCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38BC0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38BC8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38BDCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38BFCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C04u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C0Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C10u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C2Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C38u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C40u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C48u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C4Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C64u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C6Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C80u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38C84u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38CACu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38CB8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38CC0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38CC8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38CCCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38CE4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38CE8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D00u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D10u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D20u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D24u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D34u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D40u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D4Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D68u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D70u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D78u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D84u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D90u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D98u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38D9Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38DA4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38DACu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38DB4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38DBCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38DC8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38DD4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38DDCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38DF4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E0Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E18u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E1Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E24u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E30u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E3Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E4Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E54u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E60u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E74u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E7Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38E94u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38EA4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38EACu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38EB4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38EC0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38EC4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38ECCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38ED8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38EE4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F18u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F28u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F34u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F40u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F44u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F50u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F68u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F7Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F8Cu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38F98u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38FA8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38FB0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38FC0u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38FC8u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38FD4u, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38FDCu, &recomp_unit_0564, "recomp_unit_0564");
    runtime.register_function(0x08A38FF0u, &recomp_unit_0564, "recomp_unit_0564");
}
} // namespace psprecomp
