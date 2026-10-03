#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0383[1018] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 10,
    0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28,
    0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 45, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    48, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0, 53, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 59,
    0, 60, 0, 61, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 69, 70, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79,
    80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 86, 0, 87, 88, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 95, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0,
    104, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114,
    115, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 126,
    0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 136, 0,
    137, 0, 138, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160,
    0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0,
    0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198,
    0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216,
    0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238,
    0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245,
};
void recomp_unit_0383_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08983000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0383[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08983000;
    case 2u: goto L_08983010;
    case 3u: goto L_08983018;
    case 4u: goto L_08983034;
    case 5u: goto L_0898303C;
    case 6u: goto L_08983048;
    case 7u: goto L_0898305C;
    case 8u: goto L_08983064;
    case 9u: goto L_08983074;
    case 10u: goto L_0898307C;
    case 11u: goto L_08983084;
    case 12u: goto L_0898308C;
    case 13u: goto L_08983094;
    case 14u: goto L_0898309C;
    case 15u: goto L_089830B4;
    case 16u: goto L_089830D4;
    case 17u: goto L_089830DC;
    case 18u: goto L_089830F0;
    case 19u: goto L_08983104;
    case 20u: goto L_08983120;
    case 21u: goto L_08983128;
    case 22u: goto L_08983138;
    case 23u: goto L_0898314C;
    case 24u: goto L_08983154;
    case 25u: goto L_08983164;
    case 26u: goto L_0898316C;
    case 27u: goto L_08983174;
    case 28u: goto L_0898317C;
    case 29u: goto L_08983184;
    case 30u: goto L_0898318C;
    case 31u: goto L_089831A4;
    case 32u: goto L_089831B8;
    case 33u: goto L_089831C0;
    case 34u: goto L_089831C8;
    case 35u: goto L_089831D8;
    case 36u: goto L_089831E0;
    case 37u: goto L_089831E8;
    case 38u: goto L_089831F0;
    case 39u: goto L_08983204;
    case 40u: goto L_08983220;
    case 41u: goto L_08983228;
    case 42u: goto L_08983234;
    case 43u: goto L_0898323C;
    case 44u: goto L_08983244;
    case 45u: goto L_0898324C;
    case 46u: goto L_08983250;
    case 47u: goto L_08983264;
    case 48u: goto L_08983280;
    case 49u: goto L_08983288;
    case 50u: goto L_08983294;
    case 51u: goto L_0898329C;
    case 52u: goto L_089832A4;
    case 53u: goto L_089832AC;
    case 54u: goto L_089832B0;
    case 55u: goto L_089832C4;
    case 56u: goto L_089832E0;
    case 57u: goto L_089832E8;
    case 58u: goto L_089832F4;
    case 59u: goto L_089832FC;
    case 60u: goto L_08983304;
    case 61u: goto L_0898330C;
    case 62u: goto L_08983310;
    case 63u: goto L_08983324;
    case 64u: goto L_08983340;
    case 65u: goto L_08983348;
    case 66u: goto L_08983354;
    case 67u: goto L_0898335C;
    case 68u: goto L_08983364;
    case 69u: goto L_0898336C;
    case 70u: goto L_08983370;
    case 71u: goto L_08983384;
    case 72u: goto L_0898339C;
    case 73u: goto L_089833A4;
    case 74u: goto L_089833AC;
    case 75u: goto L_089833BC;
    case 76u: goto L_089833D0;
    case 77u: goto L_089833D8;
    case 78u: goto L_089833E0;
    case 79u: goto L_089833FC;
    case 80u: goto L_08983400;
    case 81u: goto L_08983414;
    case 82u: goto L_08983430;
    case 83u: goto L_08983438;
    case 84u: goto L_08983444;
    case 85u: goto L_0898344C;
    case 86u: goto L_08983454;
    case 87u: goto L_0898345C;
    case 88u: goto L_08983460;
    case 89u: goto L_08983474;
    case 90u: goto L_08983490;
    case 91u: goto L_08983498;
    case 92u: goto L_089834A4;
    case 93u: goto L_089834AC;
    case 94u: goto L_089834B4;
    case 95u: goto L_089834BC;
    case 96u: goto L_089834C0;
    case 97u: goto L_089834D4;
    case 98u: goto L_089834F4;
    case 99u: goto L_089834FC;
    case 100u: goto L_0898354C;
    case 101u: goto L_08983560;
    case 102u: goto L_08983570;
    case 103u: goto L_08983578;
    case 104u: goto L_08983580;
    case 105u: goto L_0898358C;
    case 106u: goto L_08983594;
    case 107u: goto L_0898359C;
    case 108u: goto L_089835A4;
    case 109u: goto L_089835B8;
    case 110u: goto L_089835CC;
    case 111u: goto L_089835D4;
    case 112u: goto L_089835DC;
    case 113u: goto L_089835F0;
    case 114u: goto L_089835FC;
    case 115u: goto L_08983600;
    case 116u: goto L_08983608;
    case 117u: goto L_08983610;
    case 118u: goto L_08983618;
    case 119u: goto L_08983624;
    case 120u: goto L_0898362C;
    case 121u: goto L_08983640;
    case 122u: goto L_08983648;
    case 123u: goto L_0898365C;
    case 124u: goto L_08983664;
    case 125u: goto L_0898366C;
    case 126u: goto L_0898367C;
    case 127u: goto L_08983684;
    case 128u: goto L_0898368C;
    case 129u: goto L_08983694;
    case 130u: goto L_089836A8;
    case 131u: goto L_089836C4;
    case 132u: goto L_089836CC;
    case 133u: goto L_089836D4;
    case 134u: goto L_089836E8;
    case 135u: goto L_089836F4;
    case 136u: goto L_089836F8;
    case 137u: goto L_08983700;
    case 138u: goto L_08983708;
    case 139u: goto L_0898370C;
    case 140u: goto L_08983720;
    case 141u: goto L_08983738;
    case 142u: goto L_08983740;
    case 143u: goto L_08983744;
    case 144u: goto L_08983750;
    case 145u: goto L_0898377C;
    case 146u: goto L_08983794;
    case 147u: goto L_089837AC;
    case 148u: goto L_089837B4;
    case 149u: goto L_089837BC;
    case 150u: goto L_089837C8;
    case 151u: goto L_089837D0;
    case 152u: goto L_089837E4;
    case 153u: goto L_089837EC;
    case 154u: goto L_0898380C;
    case 155u: goto L_0898382C;
    case 156u: goto L_08983834;
    case 157u: goto L_08983848;
    case 158u: goto L_08983858;
    case 159u: goto L_08983874;
    case 160u: goto L_0898387C;
    case 161u: goto L_0898388C;
    case 162u: goto L_08983894;
    case 163u: goto L_0898389C;
    case 164u: goto L_089838A4;
    case 165u: goto L_089838A8;
    case 166u: goto L_089838BC;
    case 167u: goto L_089838D8;
    case 168u: goto L_089838E0;
    case 169u: goto L_089838E8;
    case 170u: goto L_089838F8;
    case 171u: goto L_08983908;
    case 172u: goto L_08983910;
    case 173u: goto L_08983918;
    case 174u: goto L_0898392C;
    case 175u: goto L_0898393C;
    case 176u: goto L_08983958;
    case 177u: goto L_08983960;
    case 178u: goto L_08983994;
    case 179u: goto L_089839AC;
    case 180u: goto L_089839C8;
    case 181u: goto L_089839D0;
    case 182u: goto L_089839D8;
    case 183u: goto L_089839E8;
    case 184u: goto L_089839F0;
    case 185u: goto L_08983A04;
    case 186u: goto L_08983A0C;
    case 187u: goto L_08983A30;
    case 188u: goto L_08983A48;
    case 189u: goto L_08983A50;
    case 190u: goto L_08983A58;
    case 191u: goto L_08983A60;
    case 192u: goto L_08983A68;
    case 193u: goto L_08983A8C;
    case 194u: goto L_08983A90;
    case 195u: goto L_08983AA4;
    case 196u: goto L_08983ABC;
    case 197u: goto L_08983AF0;
    case 198u: goto L_08983AFC;
    case 199u: goto L_08983B14;
    case 200u: goto L_08983B40;
    case 201u: goto L_08983B78;
    case 202u: goto L_08983B94;
    case 203u: goto L_08983B9C;
    case 204u: goto L_08983BA4;
    case 205u: goto L_08983BAC;
    case 206u: goto L_08983BC8;
    case 207u: goto L_08983BD0;
    case 208u: goto L_08983BF0;
    case 209u: goto L_08983C28;
    case 210u: goto L_08983C30;
    case 211u: goto L_08983C38;
    case 212u: goto L_08983C48;
    case 213u: goto L_08983C50;
    case 214u: goto L_08983C5C;
    case 215u: goto L_08983C68;
    case 216u: goto L_08983C7C;
    case 217u: goto L_08983C84;
    case 218u: goto L_08983C90;
    case 219u: goto L_08983CBC;
    case 220u: goto L_08983CE0;
    case 221u: goto L_08983D00;
    case 222u: goto L_08983D08;
    case 223u: goto L_08983D24;
    case 224u: goto L_08983D6C;
    case 225u: goto L_08983DB8;
    case 226u: goto L_08983DDC;
    case 227u: goto L_08983E08;
    case 228u: goto L_08983E18;
    case 229u: goto L_08983EC0;
    case 230u: goto L_08983EDC;
    case 231u: goto L_08983EE8;
    case 232u: goto L_08983F00;
    case 233u: goto L_08983F1C;
    case 234u: goto L_08983F2C;
    case 235u: goto L_08983F38;
    case 236u: goto L_08983F50;
    case 237u: goto L_08983F70;
    case 238u: goto L_08983F7C;
    case 239u: goto L_08983F88;
    case 240u: goto L_08983F94;
    case 241u: goto L_08983FA0;
    case 242u: goto L_08983FB0;
    case 243u: goto L_08983FCC;
    case 244u: goto L_08983FD4;
    case 245u: goto L_08983FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08983000:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983010:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 52u, 0x08986384u>(ctx, &aot_mem); return;
L_08983018:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08983034u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983034u) goto L_08983034;
    return;
L_08983034:
    aot_gpr[31] = (0x0898303Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898303Cu) goto L_0898303C;
    return;
L_0898303C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898305C;
      }
      goto L_08983048;
    }
L_08983048:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898305C:
    aot_gpr[31] = (0x08983064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0390_entry, 390u, 48u, 0x0898A26Cu>(ctx, &aot_mem) && ctx.pc == 0x08983064u) goto L_08983064;
    return;
L_08983064:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(364)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898308C;
      }
      goto L_08983074;
    }
L_08983074:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_0898308C;
      }
      goto L_0898307C;
    }
L_0898307C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_0898308C;
      }
      goto L_08983084;
    }
L_08983084:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4228), 0u);
    goto L_0898308C;
L_0898308C:
    aot_gpr[31] = (0x08983094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983094u) goto L_08983094;
    return;
L_08983094:
    aot_gpr[31] = (0x0898309Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898309Cu) goto L_0898309C;
    return;
L_0898309C:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089830B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(72));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089830F0;
      }
      goto L_089830D4;
    }
L_089830D4:
    aot_gpr[31] = (0x089830DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089830DCu) goto L_089830DC;
    return;
L_089830DC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    goto L_089830F0;
L_089830F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983104:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08983120u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983120u) goto L_08983120;
    return;
L_08983120:
    aot_gpr[31] = (0x08983128u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983128u) goto L_08983128;
    return;
L_08983128:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898314C;
      }
      goto L_08983138;
    }
L_08983138:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898314C:
    aot_gpr[31] = (0x08983154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 181u, 0x08988C94u>(ctx, &aot_mem) && ctx.pc == 0x08983154u) goto L_08983154;
    return;
L_08983154:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898317C;
      }
      goto L_08983164;
    }
L_08983164:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_0898317C;
      }
      goto L_0898316C;
    }
L_0898316C:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[2] = (2216u << 16u);
      if (branch_taken) {
          goto L_0898317C;
      }
      goto L_08983174;
    }
L_08983174:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4228), 0u);
    goto L_0898317C;
L_0898317C:
    aot_gpr[31] = (0x08983184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983184u) goto L_08983184;
    return;
L_08983184:
    aot_gpr[31] = (0x0898318Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898318Cu) goto L_0898318C;
    return;
L_0898318C:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089831A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089831B8u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089831B8u) goto L_089831B8;
    return;
L_089831B8:
    aot_gpr[31] = (0x089831C0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089831C0u) goto L_089831C0;
    return;
L_089831C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089831D8;
      }
      goto L_089831C8;
    }
L_089831C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089831D8:
    aot_gpr[31] = (0x089831E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 32u, 0x089891ECu>(ctx, &aot_mem) && ctx.pc == 0x089831E0u) goto L_089831E0;
    return;
L_089831E0:
    aot_gpr[31] = (0x089831E8u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089831E8u) goto L_089831E8;
    return;
L_089831E8:
    aot_gpr[31] = (0x089831F0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089831F0u) goto L_089831F0;
    return;
L_089831F0:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983204:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08983220u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983220u) goto L_08983220;
    return;
L_08983220:
    aot_gpr[31] = (0x08983228u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983228u) goto L_08983228;
    return;
L_08983228:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08983250;
      }
      goto L_08983234;
    }
L_08983234:
    aot_gpr[31] = (0x0898323Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0388_entry, 388u, 67u, 0x08988540u>(ctx, &aot_mem) && ctx.pc == 0x0898323Cu) goto L_0898323C;
    return;
L_0898323C:
    aot_gpr[31] = (0x08983244u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983244u) goto L_08983244;
    return;
L_08983244:
    aot_gpr[31] = (0x0898324Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898324Cu) goto L_0898324C;
    return;
L_0898324C:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_08983250;
L_08983250:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983264:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08983280u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983280u) goto L_08983280;
    return;
L_08983280:
    aot_gpr[31] = (0x08983288u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983288u) goto L_08983288;
    return;
L_08983288:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089832B0;
      }
      goto L_08983294;
    }
L_08983294:
    aot_gpr[31] = (0x0898329Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 61u, 0x089863E0u>(ctx, &aot_mem) && ctx.pc == 0x0898329Cu) goto L_0898329C;
    return;
L_0898329C:
    aot_gpr[31] = (0x089832A4u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089832A4u) goto L_089832A4;
    return;
L_089832A4:
    aot_gpr[31] = (0x089832ACu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089832ACu) goto L_089832AC;
    return;
L_089832AC:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_089832B0;
L_089832B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089832C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089832E0u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089832E0u) goto L_089832E0;
    return;
L_089832E0:
    aot_gpr[31] = (0x089832E8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089832E8u) goto L_089832E8;
    return;
L_089832E8:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08983310;
      }
      goto L_089832F4;
    }
L_089832F4:
    aot_gpr[31] = (0x089832FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 30u, 0x0898624Cu>(ctx, &aot_mem) && ctx.pc == 0x089832FCu) goto L_089832FC;
    return;
L_089832FC:
    aot_gpr[31] = (0x08983304u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983304u) goto L_08983304;
    return;
L_08983304:
    aot_gpr[31] = (0x0898330Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898330Cu) goto L_0898330C;
    return;
L_0898330C:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_08983310;
L_08983310:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08983340u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983340u) goto L_08983340;
    return;
L_08983340:
    aot_gpr[31] = (0x08983348u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983348u) goto L_08983348;
    return;
L_08983348:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08983370;
      }
      goto L_08983354;
    }
L_08983354:
    aot_gpr[31] = (0x0898335Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 34u, 0x0898627Cu>(ctx, &aot_mem) && ctx.pc == 0x0898335Cu) goto L_0898335C;
    return;
L_0898335C:
    aot_gpr[31] = (0x08983364u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983364u) goto L_08983364;
    return;
L_08983364:
    aot_gpr[31] = (0x0898336Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898336Cu) goto L_0898336C;
    return;
L_0898336C:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_08983370;
L_08983370:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089833AC;
      }
      goto L_0898339C;
    }
L_0898339C:
    aot_gpr[31] = (0x089833A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 82u, 0x08986574u>(ctx, &aot_mem) && ctx.pc == 0x089833A4u) goto L_089833A4;
    return;
L_089833A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    goto L_089833AC;
L_089833AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089833BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_089833FC;
      }
      goto L_089833D0;
    }
L_089833D0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08983400;
      }
      goto L_089833D8;
    }
L_089833D8:
    aot_gpr[31] = (0x089833E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 84u, 0x08986594u>(ctx, &aot_mem) && ctx.pc == 0x089833E0u) goto L_089833E0;
    return;
L_089833E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089833FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08983400;
L_08983400:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08983430u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983430u) goto L_08983430;
    return;
L_08983430:
    aot_gpr[31] = (0x08983438u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983438u) goto L_08983438;
    return;
L_08983438:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_08983460;
      }
      goto L_08983444;
    }
L_08983444:
    aot_gpr[31] = (0x0898344Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 90u, 0x089865E8u>(ctx, &aot_mem) && ctx.pc == 0x0898344Cu) goto L_0898344C;
    return;
L_0898344C:
    aot_gpr[31] = (0x08983454u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983454u) goto L_08983454;
    return;
L_08983454:
    aot_gpr[31] = (0x0898345Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898345Cu) goto L_0898345C;
    return;
L_0898345C:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_08983460;
L_08983460:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983474:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08983490u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983490u) goto L_08983490;
    return;
L_08983490:
    aot_gpr[31] = (0x08983498u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983498u) goto L_08983498;
    return;
L_08983498:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089834C0;
      }
      goto L_089834A4;
    }
L_089834A4:
    aot_gpr[31] = (0x089834ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 98u, 0x08986644u>(ctx, &aot_mem) && ctx.pc == 0x089834ACu) goto L_089834AC;
    return;
L_089834AC:
    aot_gpr[31] = (0x089834B4u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x089834B4u) goto L_089834B4;
    return;
L_089834B4:
    aot_gpr[31] = (0x089834BCu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089834BCu) goto L_089834BC;
    return;
L_089834BC:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_089834C0;
L_089834C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089834D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(116));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898354C;
      }
      goto L_089834F4;
    }
L_089834F4:
    aot_gpr[31] = (0x089834FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089834FCu) goto L_089834FC;
    return;
L_089834FC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(8192));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8000));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2500));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[3]);
    goto L_0898354C;
L_0898354C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983560:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08983570u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983570u) goto L_08983570;
    return;
L_08983570:
    aot_gpr[31] = (0x08983578u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983578u) goto L_08983578;
    return;
L_08983578:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0898358C;
      }
      goto L_08983580;
    }
L_08983580:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898358C:
    aot_gpr[31] = (0x08983594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 287u, 0x08989F88u>(ctx, &aot_mem) && ctx.pc == 0x08983594u) goto L_08983594;
    return;
L_08983594:
    aot_gpr[31] = (0x0898359Cu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x0898359Cu) goto L_0898359C;
    return;
L_0898359C:
    aot_gpr[31] = (0x089835A4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089835A4u) goto L_089835A4;
    return;
L_089835A4:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089835B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089835CCu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089835CCu) goto L_089835CC;
    return;
L_089835CC:
    aot_gpr[31] = (0x089835D4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089835D4u) goto L_089835D4;
    return;
L_089835D4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08983618;
      }
      goto L_089835DC;
    }
L_089835DC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_08983600;
      }
      goto L_089835F0;
    }
L_089835F0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089835FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089835FCu) goto L_089835FC;
    return;
L_089835FC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_08983600;
L_08983600:
    aot_gpr[31] = (0x08983608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983608u) goto L_08983608;
    return;
L_08983608:
    aot_gpr[31] = (0x08983610u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983610u) goto L_08983610;
    return;
L_08983610:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08983618;
L_08983618:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983624:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08983640;
      }
      goto L_0898362C;
    }
L_0898362C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08983640;
L_08983640:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983648:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x0898365Cu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x0898365Cu) goto L_0898365C;
    return;
L_0898365C:
    aot_gpr[31] = (0x08983664u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983664u) goto L_08983664;
    return;
L_08983664:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0898367C;
      }
      goto L_0898366C;
    }
L_0898366C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898367C:
    aot_gpr[31] = (0x08983684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0389_entry, 389u, 147u, 0x0898987Cu>(ctx, &aot_mem) && ctx.pc == 0x08983684u) goto L_08983684;
    return;
L_08983684:
    aot_gpr[31] = (0x0898368Cu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x0898368Cu) goto L_0898368C;
    return;
L_0898368C:
    aot_gpr[31] = (0x08983694u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983694u) goto L_08983694;
    return;
L_08983694:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089836A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x089836C4u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089836C4u) goto L_089836C4;
    return;
L_089836C4:
    aot_gpr[31] = (0x089836CCu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089836CCu) goto L_089836CC;
    return;
L_089836CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_0898370C;
      }
      goto L_089836D4;
    }
L_089836D4:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2800)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_089836F8;
      }
      goto L_089836E8;
    }
L_089836E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089836F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089836F4u) goto L_089836F4;
    return;
L_089836F4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_089836F8;
L_089836F8:
    aot_gpr[31] = (0x08983700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983700u) goto L_08983700;
    return;
L_08983700:
    aot_gpr[31] = (0x08983708u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983708u) goto L_08983708;
    return;
L_08983708:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_0898370C;
L_0898370C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983720:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(276));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08983744;
      }
      goto L_08983738;
    }
L_08983738:
    aot_gpr[31] = (0x08983740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08983740u) goto L_08983740;
    return;
L_08983740:
    aot_gpr[2] = (0u + 0u);
    goto L_08983744;
L_08983744:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983750:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-1508)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08983794;
      }
      goto L_0898377C;
    }
L_0898377C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2000));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[7];
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089837AC;
      }
      goto L_08983794;
    }
L_08983794:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089837AC:
    aot_gpr[31] = (0x089837B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 89u, 0x08990908u>(ctx, &aot_mem) && ctx.pc == 0x089837B4u) goto L_089837B4;
    return;
L_089837B4:
    aot_gpr[31] = (0x089837BCu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089837BCu) goto L_089837BC;
    return;
L_089837BC:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08983794;
      }
      goto L_089837C8;
    }
L_089837C8:
    aot_gpr[31] = (0x089837D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 127u, 0x0898B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089837D0u) goto L_089837D0;
    return;
L_089837D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089837E4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 105u, 0x089909C0u>(ctx, &aot_mem) && ctx.pc == 0x089837E4u) goto L_089837E4;
    return;
L_089837E4:
    aot_gpr[31] = (0x089837ECu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089837ECu) goto L_089837EC;
    return;
L_089837EC:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) aot_gpr[6] = (aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898380C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08983848;
      }
      goto L_0898382C;
    }
L_0898382C:
    aot_gpr[31] = (0x08983834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08983834u) goto L_08983834;
    return;
L_08983834:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[3]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_08983848;
L_08983848:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983858:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x08983874u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983874u) goto L_08983874;
    return;
L_08983874:
    aot_gpr[31] = (0x0898387Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x0898387Cu) goto L_0898387C;
    return;
L_0898387C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089838A8;
      }
      goto L_0898388C;
    }
L_0898388C:
    aot_gpr[31] = (0x08983894u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 221u, 0x08986F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08983894u) goto L_08983894;
    return;
L_08983894:
    aot_gpr[31] = (0x0898389Cu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x0898389Cu) goto L_0898389C;
    return;
L_0898389C:
    aot_gpr[31] = (0x089838A4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089838A4u) goto L_089838A4;
    return;
L_089838A4:
    if (aot_gpr[2] == 0u) aot_gpr[2] = (aot_gpr[16]);
    goto L_089838A8;
L_089838A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089838BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089838D8u);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x089838D8u) goto L_089838D8;
    return;
L_089838D8:
    aot_gpr[31] = (0x089838E0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089838E0u) goto L_089838E0;
    return;
L_089838E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[16]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_08983918;
      }
      goto L_089838E8;
    }
L_089838E8:
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08983918;
      }
      goto L_089838F8;
    }
L_089838F8:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[31] = (0x08983908u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08983908u) goto L_08983908;
    return;
L_08983908:
    aot_gpr[31] = (0x08983910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983910u) goto L_08983910;
    return;
L_08983910:
    aot_gpr[31] = (0x08983918u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983918u) goto L_08983918;
    return;
L_08983918:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898392C:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[3] = (aot_gpr[5] | 11264u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08983958;
      }
      goto L_0898393C;
    }
L_0898393C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_08983958;
L_08983958:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983960:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-1508)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[7] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089839AC;
      }
      goto L_08983994;
    }
L_08983994:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2000));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[7];
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089839C8;
      }
      goto L_089839AC;
    }
L_089839AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089839C8:
    aot_gpr[31] = (0x089839D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 89u, 0x08990908u>(ctx, &aot_mem) && ctx.pc == 0x089839D0u) goto L_089839D0;
    return;
L_089839D0:
    aot_gpr[31] = (0x089839D8u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x089839D8u) goto L_089839D8;
    return;
L_089839D8:
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089839AC;
      }
      goto L_089839E8;
    }
L_089839E8:
    aot_gpr[31] = (0x089839F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 156u, 0x0898BBDCu>(ctx, &aot_mem) && ctx.pc == 0x089839F0u) goto L_089839F0;
    return;
L_089839F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x08983A04u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 105u, 0x089909C0u>(ctx, &aot_mem) && ctx.pc == 0x08983A04u) goto L_08983A04;
    return;
L_08983A04:
    aot_gpr[31] = (0x08983A0Cu);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983A0Cu) goto L_08983A0C;
    return;
L_08983A0C:
    aot_gpr[6] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] != 0u) aot_gpr[6] = (aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[9] = (aot_gpr[4] + 0u);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
      if (branch_taken) {
          goto L_08983A8C;
      }
      goto L_08983A48;
    }
L_08983A48:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_08983A90;
    }
    goto L_08983A50;
L_08983A50:
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_08983A90;
    }
    goto L_08983A58;
L_08983A58:
    if (aot_gpr[7] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_08983A90;
    }
    goto L_08983A60;
L_08983A60:
    if (aot_gpr[8] == 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
        goto L_08983A90;
    }
    goto L_08983A68;
L_08983A68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_08983AA4;
      }
      goto L_08983A8C;
    }
L_08983A8C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_08983A90;
L_08983A90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983AA4:
    aot_gpr[2] = (aot_gpr[5] << 2u);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-18780));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[4];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983ABC:
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[4]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983AF0:
    aot_gpr[5] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08983AFCu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x08983AFCu) goto L_08983AFC;
    return;
L_08983AFC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08983A90;
L_08983B14:
    aot_gpr[2] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[4]));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(22)));
    PSPRECOMP_AOT_STORE16(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_08983A90;
L_08983B40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_08983B94;
      }
      goto L_08983B78;
    }
L_08983B78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983B94:
    aot_gpr[31] = (0x08983B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983B9Cu) goto L_08983B9C;
    return;
L_08983B9C:
    aot_gpr[31] = (0x08983BA4u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983BA4u) goto L_08983BA4;
    return;
L_08983BA4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08983B78;
      }
      goto L_08983BAC;
    }
L_08983BAC:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(-26188), aot_gpr[16]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(2760), aot_gpr[18]);
    aot_gpr[31] = (0x08983BC8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(2764), aot_gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983BC8u) goto L_08983BC8;
    return;
L_08983BC8:
    aot_gpr[31] = (0x08983BD0u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983BD0u) goto L_08983BD0;
    return;
L_08983BD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983BF0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2792)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08983C30;
      }
      goto L_08983C28;
    }
L_08983C28:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(252)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    goto L_08983C30;
L_08983C30:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983C38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08983C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 112u, 0x0898B86Cu>(ctx, &aot_mem) && ctx.pc == 0x08983C48u) goto L_08983C48;
    return;
L_08983C48:
    aot_gpr[31] = (0x08983C50u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983C50u) goto L_08983C50;
    return;
L_08983C50:
    aot_gpr[4] = (2217u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(2744));
      if (branch_taken) {
          goto L_08983C68;
      }
      goto L_08983C5C;
    }
L_08983C5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983C68:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2744), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x08983C7Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0391_entry, 391u, 115u, 0x0898B898u>(ctx, &aot_mem) && ctx.pc == 0x08983C7Cu) goto L_08983C7C;
    return;
L_08983C7C:
    aot_gpr[31] = (0x08983C84u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0385_entry, 385u, 67u, 0x08985578u>(ctx, &aot_mem) && ctx.pc == 0x08983C84u) goto L_08983C84;
    return;
L_08983C84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983C90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(164));
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[31] = (0x08983CBCu);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08983CBCu) goto L_08983CBC;
    return;
L_08983CBC:
    aot_gpr[3] = (771u << 16u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12440));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[31] = (0x08983CE0u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08983CE0u) goto L_08983CE0;
    return;
L_08983CE0:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08983D00u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0386_entry, 386u, 61u, 0x089863E0u>(ctx, &aot_mem) && ctx.pc == 0x08983D00u) goto L_08983D00;
    return;
L_08983D00:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[12] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08983D24;
      }
      goto L_08983D08;
    }
L_08983D08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[12] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983D24:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[7] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(60));
    aot_gpr[2] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[2] = (aot_gpr[2] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (aot_gpr[3] + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_08983DDC;
      }
      goto L_08983D6C;
    }
L_08983D6C:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(11), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(15), aot_gpr[5]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[5]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-5), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(-1), aot_gpr[5]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08983D6C;
      }
      goto L_08983DB8;
    }
L_08983DB8:
    aot_gpr[2] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(3), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_left(aot_gpr[6] + static_cast<std::uint32_t>(7), aot_gpr[3]));
    aot_gpr[2] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]));
    aot_gpr[3] = (rt.memory().aot_load_word_right(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]));
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(3), aot_gpr[2]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    rt.memory().aot_store_word_left(aot_gpr[7] + static_cast<std::uint32_t>(7), aot_gpr[3]);
    rt.memory().aot_store_word_right(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    goto L_08983E18;
L_08983DDC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-12), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-8), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[8];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-4), aot_gpr[5]);
      if (branch_taken) {
          goto L_08983DDC;
      }
      goto L_08983E08;
    }
L_08983E08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_08983E18;
L_08983E18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26192)));
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(132));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(132));
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(19), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(23), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(27), aot_gpr[10]));
    aot_gpr[11] = (rt.memory().aot_load_word_left(aot_gpr[2] + static_cast<std::uint32_t>(31), aot_gpr[11]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[11] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(28), aot_gpr[11]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    aot_gpr[8] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]));
    aot_gpr[9] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[9]));
    aot_gpr[10] = (rt.memory().aot_load_word_right(aot_gpr[2] + static_cast<std::uint32_t>(24), aot_gpr[10]));
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[12] + 0u);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(19), aot_gpr[8]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(23), aot_gpr[9]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[9]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(27), aot_gpr[10]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(24), aot_gpr[10]);
    rt.memory().aot_store_word_left(aot_gpr[3] + static_cast<std::uint32_t>(31), aot_gpr[11]);
    rt.memory().aot_store_word_right(aot_gpr[3] + static_cast<std::uint32_t>(28), aot_gpr[11]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983EC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08983EDCu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08983EDCu) goto L_08983EDC;
    return;
L_08983EDC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08983EE8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08983EE8u) goto L_08983EE8;
    return;
L_08983EE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983F00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08983F1Cu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08983F1Cu) goto L_08983F1C;
    return;
L_08983F1C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08983F2Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x08983F2Cu) goto L_08983F2C;
    return;
L_08983F2C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08983F38u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08983F38u) goto L_08983F38;
    return;
L_08983F38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983F50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08983F70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08983F70u) goto L_08983F70;
    return;
L_08983F70:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08983F7Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08983F7Cu) goto L_08983F7C;
    return;
L_08983F7C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08983F88u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08983F88u) goto L_08983F88;
    return;
L_08983F88:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08983F94u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x08983F94u) goto L_08983F94;
    return;
L_08983F94:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08983FA0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08983F00;
L_08983FA0:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08983FCC;
      }
      goto L_08983FB0;
    }
L_08983FB0:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08983FCC:
    aot_gpr[31] = (0x08983FD4u);
    // nop
    goto L_08983EC0;
L_08983FD4:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(72));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0384_entry, 384u, 1u, 0x08984004u>(ctx, &aot_mem); return;
      }
      goto L_08983FE4;
    }
L_08983FE4:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0383(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0383_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_383(Runtime &runtime) {
    runtime.register_generated_unit(383u, 0x08983000u, 4096u, &recomp_unit_0383, &recomp_unit_0383_entry);
    runtime.register_function(0x08983000u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983010u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983018u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983034u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898303Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983048u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898305Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983064u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983074u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898307Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983084u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898308Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983094u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898309Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089830B4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089830D4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089830DCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089830F0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983104u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983120u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983128u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983138u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898314Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983154u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983164u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898316Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983174u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898317Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983184u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898318Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089831A4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089831B8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089831C0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089831C8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089831D8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089831E0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089831E8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089831F0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983204u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983220u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983228u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983234u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898323Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983244u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898324Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983250u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983264u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983280u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983288u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983294u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898329Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089832A4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089832ACu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089832B0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089832C4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089832E0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089832E8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089832F4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089832FCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983304u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898330Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983310u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983324u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983340u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983348u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983354u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898335Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983364u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898336Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983370u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983384u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898339Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089833A4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089833ACu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089833BCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089833D0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089833D8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089833E0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089833FCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983400u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983414u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983430u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983438u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983444u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898344Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983454u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898345Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983460u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983474u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983490u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983498u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089834A4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089834ACu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089834B4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089834BCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089834C0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089834D4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089834F4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089834FCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898354Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983560u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983570u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983578u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983580u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898358Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983594u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898359Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089835A4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089835B8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089835CCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089835D4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089835DCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089835F0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089835FCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983600u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983608u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983610u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983618u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983624u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898362Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983640u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983648u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898365Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983664u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898366Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898367Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983684u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898368Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983694u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089836A8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089836C4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089836CCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089836D4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089836E8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089836F4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089836F8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983700u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983708u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898370Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983720u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983738u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983740u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983744u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983750u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898377Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983794u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089837ACu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089837B4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089837BCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089837C8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089837D0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089837E4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089837ECu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898380Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898382Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983834u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983848u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983858u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983874u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898387Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898388Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983894u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898389Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089838A4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089838A8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089838BCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089838D8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089838E0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089838E8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089838F8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983908u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983910u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983918u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898392Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x0898393Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983958u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983960u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983994u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089839ACu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089839C8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089839D0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089839D8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089839E8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x089839F0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A04u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A0Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A30u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A48u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A50u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A58u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A60u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A68u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A8Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983A90u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983AA4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983ABCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983AF0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983AFCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983B14u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983B40u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983B78u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983B94u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983B9Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983BA4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983BACu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983BC8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983BD0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983BF0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C28u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C30u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C38u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C48u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C50u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C5Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C68u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C7Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C84u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983C90u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983CBCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983CE0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983D00u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983D08u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983D24u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983D6Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983DB8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983DDCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983E08u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983E18u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983EC0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983EDCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983EE8u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F00u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F1Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F2Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F38u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F50u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F70u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F7Cu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F88u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983F94u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983FA0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983FB0u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983FCCu, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983FD4u, &recomp_unit_0383, "recomp_unit_0383");
    runtime.register_function(0x08983FE4u, &recomp_unit_0383, "recomp_unit_0383");
}
} // namespace psprecomp
