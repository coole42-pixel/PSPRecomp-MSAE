#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0061[1016] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22,
    0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0,
    44, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53,
    0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0,
    64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 72,
    0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0,
    81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0,
    108, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122,
    0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0,
    133, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 0, 0, 0, 142, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156,
    0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 165, 0, 166, 0, 0, 0,
    0, 167, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 175, 0, 176, 0, 177, 0, 178, 0, 0,
    0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    189, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0,
    0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0,
    228, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235,
};
void recomp_unit_0061_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08841004u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0061[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08841004;
    case 2u: goto L_08841014;
    case 3u: goto L_08841034;
    case 4u: goto L_08841044;
    case 5u: goto L_08841054;
    case 6u: goto L_08841064;
    case 7u: goto L_08841084;
    case 8u: goto L_088410B0;
    case 9u: goto L_088410B8;
    case 10u: goto L_088410CC;
    case 11u: goto L_088410DC;
    case 12u: goto L_088410E4;
    case 13u: goto L_088410FC;
    case 14u: goto L_08841110;
    case 15u: goto L_0884111C;
    case 16u: goto L_0884116C;
    case 17u: goto L_08841184;
    case 18u: goto L_08841194;
    case 19u: goto L_088411B4;
    case 20u: goto L_088411D8;
    case 21u: goto L_088411F8;
    case 22u: goto L_08841200;
    case 23u: goto L_0884120C;
    case 24u: goto L_08841224;
    case 25u: goto L_08841240;
    case 26u: goto L_08841258;
    case 27u: goto L_08841260;
    case 28u: goto L_0884126C;
    case 29u: goto L_08841278;
    case 30u: goto L_08841280;
    case 31u: goto L_088412A0;
    case 32u: goto L_088412C0;
    case 33u: goto L_088412E0;
    case 34u: goto L_088412E8;
    case 35u: goto L_088412F4;
    case 36u: goto L_0884130C;
    case 37u: goto L_08841328;
    case 38u: goto L_08841340;
    case 39u: goto L_08841348;
    case 40u: goto L_08841354;
    case 41u: goto L_0884135C;
    case 42u: goto L_08841370;
    case 43u: goto L_08841378;
    case 44u: goto L_08841384;
    case 45u: goto L_0884138C;
    case 46u: goto L_08841398;
    case 47u: goto L_088413A0;
    case 48u: goto L_088413B0;
    case 49u: goto L_088413B8;
    case 50u: goto L_088413C4;
    case 51u: goto L_088413D4;
    case 52u: goto L_088413F8;
    case 53u: goto L_08841400;
    case 54u: goto L_08841408;
    case 55u: goto L_08841410;
    case 56u: goto L_0884141C;
    case 57u: goto L_0884142C;
    case 58u: goto L_08841438;
    case 59u: goto L_0884144C;
    case 60u: goto L_0884145C;
    case 61u: goto L_08841464;
    case 62u: goto L_08841474;
    case 63u: goto L_0884147C;
    case 64u: goto L_08841484;
    case 65u: goto L_08841494;
    case 66u: goto L_088414A4;
    case 67u: goto L_088414BC;
    case 68u: goto L_088414D0;
    case 69u: goto L_088414D8;
    case 70u: goto L_088414E0;
    case 71u: goto L_088414F4;
    case 72u: goto L_08841500;
    case 73u: goto L_08841508;
    case 74u: goto L_08841510;
    case 75u: goto L_08841520;
    case 76u: goto L_08841534;
    case 77u: goto L_0884154C;
    case 78u: goto L_08841560;
    case 79u: goto L_08841570;
    case 80u: goto L_0884157C;
    case 81u: goto L_08841584;
    case 82u: goto L_0884158C;
    case 83u: goto L_0884159C;
    case 84u: goto L_088415A8;
    case 85u: goto L_088415B8;
    case 86u: goto L_088415C0;
    case 87u: goto L_088415D4;
    case 88u: goto L_088415F8;
    case 89u: goto L_08841604;
    case 90u: goto L_08841618;
    case 91u: goto L_08841620;
    case 92u: goto L_0884164C;
    case 93u: goto L_0884166C;
    case 94u: goto L_088416A0;
    case 95u: goto L_088416BC;
    case 96u: goto L_088416C4;
    case 97u: goto L_088416D0;
    case 98u: goto L_088416DC;
    case 99u: goto L_088416FC;
    case 100u: goto L_08841714;
    case 101u: goto L_0884171C;
    case 102u: goto L_08841768;
    case 103u: goto L_08841780;
    case 104u: goto L_08841798;
    case 105u: goto L_088417B0;
    case 106u: goto L_088417F4;
    case 107u: goto L_088417FC;
    case 108u: goto L_08841804;
    case 109u: goto L_0884180C;
    case 110u: goto L_08841814;
    case 111u: goto L_0884181C;
    case 112u: goto L_0884182C;
    case 113u: goto L_08841834;
    case 114u: goto L_0884183C;
    case 115u: goto L_08841850;
    case 116u: goto L_08841858;
    case 117u: goto L_08841864;
    case 118u: goto L_08841870;
    case 119u: goto L_088418BC;
    case 120u: goto L_088418E0;
    case 121u: goto L_088418F8;
    case 122u: goto L_08841900;
    case 123u: goto L_0884190C;
    case 124u: goto L_08841914;
    case 125u: goto L_0884191C;
    case 126u: goto L_08841924;
    case 127u: goto L_0884192C;
    case 128u: goto L_08841934;
    case 129u: goto L_08841940;
    case 130u: goto L_08841948;
    case 131u: goto L_08841964;
    case 132u: goto L_0884196C;
    case 133u: goto L_08841984;
    case 134u: goto L_0884198C;
    case 135u: goto L_0884199C;
    case 136u: goto L_088419A8;
    case 137u: goto L_088419BC;
    case 138u: goto L_088419C4;
    case 139u: goto L_088419DC;
    case 140u: goto L_08841A00;
    case 141u: goto L_08841A10;
    case 142u: goto L_08841A24;
    case 143u: goto L_08841A28;
    case 144u: goto L_08841A30;
    case 145u: goto L_08841A44;
    case 146u: goto L_08841A58;
    case 147u: goto L_08841A60;
    case 148u: goto L_08841A68;
    case 149u: goto L_08841A70;
    case 150u: goto L_08841A94;
    case 151u: goto L_08841A9C;
    case 152u: goto L_08841AA4;
    case 153u: goto L_08841AAC;
    case 154u: goto L_08841AC8;
    case 155u: goto L_08841AE4;
    case 156u: goto L_08841B00;
    case 157u: goto L_08841B08;
    case 158u: goto L_08841B14;
    case 159u: goto L_08841B20;
    case 160u: goto L_08841B2C;
    case 161u: goto L_08841B40;
    case 162u: goto L_08841B4C;
    case 163u: goto L_08841B58;
    case 164u: goto L_08841B68;
    case 165u: goto L_08841B6C;
    case 166u: goto L_08841B74;
    case 167u: goto L_08841B88;
    case 168u: goto L_08841B8C;
    case 169u: goto L_08841B94;
    case 170u: goto L_08841BA8;
    case 171u: goto L_08841BB0;
    case 172u: goto L_08841BB8;
    case 173u: goto L_08841BC0;
    case 174u: goto L_08841BDC;
    case 175u: goto L_08841BE0;
    case 176u: goto L_08841BE8;
    case 177u: goto L_08841BF0;
    case 178u: goto L_08841BF8;
    case 179u: goto L_08841C08;
    case 180u: goto L_08841C14;
    case 181u: goto L_08841C20;
    case 182u: goto L_08841C28;
    case 183u: goto L_08841C34;
    case 184u: goto L_08841C3C;
    case 185u: goto L_08841C4C;
    case 186u: goto L_08841C54;
    case 187u: goto L_08841C5C;
    case 188u: goto L_08841C70;
    case 189u: goto L_08841C84;
    case 190u: goto L_08841C8C;
    case 191u: goto L_08841C94;
    case 192u: goto L_08841CA8;
    case 193u: goto L_08841CBC;
    case 194u: goto L_08841CC4;
    case 195u: goto L_08841CCC;
    case 196u: goto L_08841CD4;
    case 197u: goto L_08841CDC;
    case 198u: goto L_08841CF0;
    case 199u: goto L_08841D08;
    case 200u: goto L_08841D1C;
    case 201u: goto L_08841D30;
    case 202u: goto L_08841D38;
    case 203u: goto L_08841D40;
    case 204u: goto L_08841D48;
    case 205u: goto L_08841D50;
    case 206u: goto L_08841D5C;
    case 207u: goto L_08841D8C;
    case 208u: goto L_08841DCC;
    case 209u: goto L_08841DDC;
    case 210u: goto L_08841DE4;
    case 211u: goto L_08841E0C;
    case 212u: goto L_08841E2C;
    case 213u: goto L_08841E6C;
    case 214u: goto L_08841E90;
    case 215u: goto L_08841EB0;
    case 216u: goto L_08841ED0;
    case 217u: goto L_08841ED8;
    case 218u: goto L_08841EE8;
    case 219u: goto L_08841EF0;
    case 220u: goto L_08841F0C;
    case 221u: goto L_08841F14;
    case 222u: goto L_08841F44;
    case 223u: goto L_08841F54;
    case 224u: goto L_08841F60;
    case 225u: goto L_08841F68;
    case 226u: goto L_08841F70;
    case 227u: goto L_08841F7C;
    case 228u: goto L_08841F84;
    case 229u: goto L_08841F9C;
    case 230u: goto L_08841FA8;
    case 231u: goto L_08841FB0;
    case 232u: goto L_08841FB8;
    case 233u: goto L_08841FC0;
    case 234u: goto L_08841FC8;
    case 235u: goto L_08841FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08841004:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841014:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08841034u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6328));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08841034u) goto L_08841034;
    return;
L_08841034:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08841044u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6316));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08841044u) goto L_08841044;
    return;
L_08841044:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08841054u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6300));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08841054u) goto L_08841054;
    return;
L_08841054:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841064:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23856), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841084:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088410B0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6276));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088410B0u) goto L_088410B0;
    return;
L_088410B0:
    aot_gpr[31] = (0x088410B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x088410B8u) goto L_088410B8;
    return;
L_088410B8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x088410CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 211u, 0x0896EC8Cu>(ctx, &aot_mem) && ctx.pc == 0x088410CCu) goto L_088410CC;
    return;
L_088410CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088410DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088410E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-26500)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841110;
      }
      goto L_088410FC;
    }
L_088410FC:
    aot_gpr[4] = (17228u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17106u << 16u);
    aot_gpr[31] = (0x08841110u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 103u, 0x0889A594u>(ctx, &aot_mem) && ctx.pc == 0x08841110u) goto L_08841110;
    return;
L_08841110:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884111C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[19]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6288));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[31]);
    aot_gpr[31] = (0x0884116Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6276));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884116Cu) goto L_0884116C;
    return;
L_0884116C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08841184u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6268));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841184u) goto L_08841184;
    return;
L_08841184:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-26500)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08841280;
      }
      goto L_08841194;
    }
L_08841194:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-6288));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-6256));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088411B4u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088411B4u) goto L_088411B4;
    return;
L_088411B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[22] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088411D8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088411D8u) goto L_088411D8;
    return;
L_088411D8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[23] = (aot_gpr[4] + static_cast<std::uint32_t>(-6244));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088411F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6232));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088411F8u) goto L_088411F8;
    return;
L_088411F8:
    aot_gpr[31] = (0x08841200u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08841200u) goto L_08841200;
    return;
L_08841200:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0884120Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x0884120Cu) goto L_0884120C;
    return;
L_0884120C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-6212));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08841224u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841224u) goto L_08841224;
    return;
L_08841224:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08841240u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841240u) goto L_08841240;
    return;
L_08841240:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08841258u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6200));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841258u) goto L_08841258;
    return;
L_08841258:
    aot_gpr[31] = (0x08841260u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08841260u) goto L_08841260;
    return;
L_08841260:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0884126Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x0884126Cu) goto L_0884126C;
    return;
L_0884126C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884135C;
      }
      goto L_08841278;
    }
L_08841278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841620;
      }
      goto L_08841280;
    }
L_08841280:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-6288));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6256));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088412A0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088412A0u) goto L_088412A0;
    return;
L_088412A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088412C0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088412C0u) goto L_088412C0;
    return;
L_088412C0:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-6244));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088412E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6232));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088412E0u) goto L_088412E0;
    return;
L_088412E0:
    aot_gpr[31] = (0x088412E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088412E8u) goto L_088412E8;
    return;
L_088412E8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088412F4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088412F4u) goto L_088412F4;
    return;
L_088412F4:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6212));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0884130Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884130Cu) goto L_0884130C;
    return;
L_0884130C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08841328u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841328u) goto L_08841328;
    return;
L_08841328:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08841340u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6200));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841340u) goto L_08841340;
    return;
L_08841340:
    aot_gpr[31] = (0x08841348u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08841348u) goto L_08841348;
    return;
L_08841348:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08841354u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08841354u) goto L_08841354;
    return;
L_08841354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841620;
      }
      goto L_0884135C;
    }
L_0884135C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088413C4;
      }
      goto L_08841370;
    }
L_08841370:
    aot_gpr[31] = (0x08841378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08841378u) goto L_08841378;
    return;
L_08841378:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_08841398;
    }
    goto L_08841384;
L_08841384:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884144C;
      }
      goto L_0884138C;
    }
L_0884138C:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_0884144C;
      }
      goto L_08841398;
    }
L_08841398:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884144C;
      }
      goto L_088413A0;
    }
L_088413A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088413B0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 191u, 0x0888CC68u>(ctx, &aot_mem) && ctx.pc == 0x088413B0u) goto L_088413B0;
    return;
L_088413B0:
    aot_gpr[31] = (0x088413B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 187u, 0x08963A94u>(ctx, &aot_mem) && ctx.pc == 0x088413B8u) goto L_088413B8;
    return;
L_088413B8:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_0884144C;
      }
      goto L_088413C4;
    }
L_088413C4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884144C;
      }
      goto L_088413D4;
    }
L_088413D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884144C;
      }
      goto L_088413F8;
    }
L_088413F8:
    aot_gpr[31] = (0x08841400u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08841400u) goto L_08841400;
    return;
L_08841400:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884144C;
      }
      goto L_08841408;
    }
L_08841408:
    aot_gpr[31] = (0x08841410u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08841410u) goto L_08841410;
    return;
L_08841410:
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x0884141Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884141Cu) goto L_0884141C;
    return;
L_0884141C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884144C;
      }
      goto L_0884142C;
    }
L_0884142C:
    aot_gpr[4] = (0u | 65u);
    aot_gpr[31] = (0x08841438u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08841438u) goto L_08841438;
    return;
L_08841438:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884144Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x0884144Cu) goto L_0884144C;
    return;
L_0884144C:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(120));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884145Cu);
    aot_gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 203u, 0x08963B64u>(ctx, &aot_mem) && ctx.pc == 0x0884145Cu) goto L_0884145C;
    return;
L_0884145C:
    aot_gpr[31] = (0x08841464u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08841464u) goto L_08841464;
    return;
L_08841464:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08841484;
      }
      goto L_08841474;
    }
L_08841474:
    aot_gpr[31] = (0x0884147Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x0884147Cu) goto L_0884147C;
    return;
L_0884147C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841520;
      }
      goto L_08841484;
    }
L_08841484:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841520;
      }
      goto L_08841494;
    }
L_08841494:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088414A4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 191u, 0x0888CC68u>(ctx, &aot_mem) && ctx.pc == 0x088414A4u) goto L_088414A4;
    return;
L_088414A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088414F4;
      }
      goto L_088414BC;
    }
L_088414BC:
    aot_gpr[4] = (aot_gpr[23] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088414D0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088414D0u) goto L_088414D0;
    return;
L_088414D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088414E0;
      }
      goto L_088414D8;
    }
L_088414D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_088414F4;
      }
      goto L_088414E0;
    }
L_088414E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088414BC;
      }
      goto L_088414F4;
    }
L_088414F4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[22] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08841510;
      }
      goto L_08841500;
    }
L_08841500:
    aot_gpr[31] = (0x08841508u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08841508u) goto L_08841508;
    return;
L_08841508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841520;
      }
      goto L_08841510;
    }
L_08841510:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841494;
      }
      goto L_08841520;
    }
L_08841520:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088415D4;
      }
      goto L_08841534;
    }
L_08841534:
    aot_gpr[4] = (aot_gpr[19] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0884154Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x0884154Cu) goto L_0884154C;
    return;
L_0884154C:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[23] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884159C;
      }
      goto L_08841560;
    }
L_08841560:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08841570u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 191u, 0x0888CC68u>(ctx, &aot_mem) && ctx.pc == 0x08841570u) goto L_08841570;
    return;
L_08841570:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884157Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884157Cu) goto L_0884157C;
    return;
L_0884157C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884158C;
      }
      goto L_08841584;
    }
L_08841584:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_0884159C;
      }
      goto L_0884158C;
    }
L_0884158C:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841560;
      }
      goto L_0884159C;
    }
L_0884159C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[21] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088415C0;
      }
      goto L_088415A8;
    }
L_088415A8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088415B8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x088415B8u) goto L_088415B8;
    return;
L_088415B8:
    aot_gpr[31] = (0x088415C0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x088415C0u) goto L_088415C0;
    return;
L_088415C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841534;
      }
      goto L_088415D4;
    }
L_088415D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841618;
      }
      goto L_088415F8;
    }
L_088415F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (0x08841604u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 88u, 0x088936C4u>(ctx, &aot_mem) && ctx.pc == 0x08841604u) goto L_08841604;
    return;
L_08841604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_08841618;
L_08841618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841278;
      }
      goto L_08841620;
    }
L_08841620:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884164C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23864), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884166C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088416A0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6160));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088416A0u) goto L_088416A0;
    return;
L_088416A0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22476)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088416BCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x088416BCu) goto L_088416BC;
    return;
L_088416BC:
    aot_gpr[31] = (0x088416C4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088416C4u) goto L_088416C4;
    return;
L_088416C4:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088416DC;
      }
      goto L_088416D0;
    }
L_088416D0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088416DCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x088416DCu) goto L_088416DC;
    return;
L_088416DC:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x088416FCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x088416FCu) goto L_088416FC;
    return;
L_088416FC:
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
L_08841714:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884171C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-6176));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08841768u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6148));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841768u) goto L_08841768;
    return;
L_08841768:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08841780u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6132));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841780u) goto L_08841780;
    return;
L_08841780:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08841798u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6112));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841798u) goto L_08841798;
    return;
L_08841798:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088417B0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6100));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088417B0u) goto L_088417B0;
    return;
L_088417B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08841804;
      }
      goto L_088417F4;
    }
L_088417F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08841DE4;
      }
      goto L_088417FC;
    }
L_088417FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841814;
      }
      goto L_08841804;
    }
L_08841804:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08841CD4;
      }
      goto L_0884180C;
    }
L_0884180C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841DE4;
      }
      goto L_08841814;
    }
L_08841814:
    aot_gpr[31] = (0x0884181Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x0884181Cu) goto L_0884181C;
    return;
L_0884181C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 40u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08841A70;
      }
      goto L_0884182C;
    }
L_0884182C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08841A30;
      }
      goto L_08841834;
    }
L_08841834:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841CCC;
      }
      goto L_0884183C;
    }
L_0884183C:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2196)));
    aot_gpr[4] = (0u | 5u);
    if (aot_gpr[5] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08841870;
    }
    goto L_08841850;
L_08841850:
    aot_gpr[31] = (0x08841858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08841858u) goto L_08841858;
    return;
L_08841858:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08841A28;
      }
      goto L_08841864;
    }
L_08841864:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_08841A28;
      }
      goto L_08841870;
    }
L_08841870:
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6176));
    aot_gpr[31] = (0x088418BCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6080));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088418BCu) goto L_088418BC;
    return;
L_088418BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088419C4;
      }
      goto L_088418E0;
    }
L_088418E0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6176));
    aot_gpr[31] = (0x088418F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6068));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088418F8u) goto L_088418F8;
    return;
L_088418F8:
    aot_gpr[31] = (0x08841900u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08841900u) goto L_08841900;
    return;
L_08841900:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0884191C;
      }
      goto L_0884190C;
    }
L_0884190C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08841948;
      }
      goto L_08841914;
    }
L_08841914:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08841948;
      }
      goto L_0884191C;
    }
L_0884191C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08841934;
      }
      goto L_08841924;
    }
L_08841924:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841940;
      }
      goto L_0884192C;
    }
L_0884192C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841948;
      }
      goto L_08841934;
    }
L_08841934:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08841948;
      }
      goto L_08841940;
    }
L_08841940:
    aot_gpr[4] = (0u | 6u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08841948;
L_08841948:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-6176));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08841964u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6160));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841964u) goto L_08841964;
    return;
L_08841964:
    aot_gpr[31] = (0x0884196Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0884196Cu) goto L_0884196C;
    return;
L_0884196C:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08841984u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6052));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841984u) goto L_08841984;
    return;
L_08841984:
    aot_gpr[31] = (0x0884198Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0884198Cu) goto L_0884198C;
    return;
L_0884198C:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[31] = (0x0884199Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 14u, 0x0889B0E0u>(ctx, &aot_mem) && ctx.pc == 0x0884199Cu) goto L_0884199C;
    return;
L_0884199C:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x088419A8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088419A8u) goto L_088419A8;
    return;
L_088419A8:
    aot_gpr[4] = (0u | 6u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088419BCu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x088419BCu) goto L_088419BC;
    return;
L_088419BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841A28;
      }
      goto L_088419C4;
    }
L_088419C4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6176));
    aot_gpr[31] = (0x088419DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6036));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088419DCu) goto L_088419DC;
    return;
L_088419DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841A28;
      }
      goto L_08841A00;
    }
L_08841A00:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08841A10u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6024));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08841A10u) goto L_08841A10;
    return;
L_08841A10:
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[31] = (0x08841A24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x08841A24u) goto L_08841A24;
    return;
L_08841A24:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[18]));
    goto L_08841A28;
L_08841A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841CCC;
      }
      goto L_08841A30;
    }
L_08841A30:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 74u);
    aot_gpr[31] = (0x08841A44u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08841A44u) goto L_08841A44;
    return;
L_08841A44:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08841A58u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08841A58u) goto L_08841A58;
    return;
L_08841A58:
    aot_gpr[31] = (0x08841A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x08841A60u) goto L_08841A60;
    return;
L_08841A60:
    aot_gpr[31] = (0x08841A68u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08841A68u) goto L_08841A68;
    return;
L_08841A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841CCC;
      }
      goto L_08841A70;
    }
L_08841A70:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841AAC;
      }
      goto L_08841A94;
    }
L_08841A94:
    aot_gpr[31] = (0x08841A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x08841A9Cu) goto L_08841A9C;
    return;
L_08841A9C:
    aot_gpr[31] = (0x08841AA4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08841AA4u) goto L_08841AA4;
    return;
L_08841AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841CCC;
      }
      goto L_08841AAC;
    }
L_08841AAC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (16544u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08841CCC;
      }
      goto L_08841AC8;
    }
L_08841AC8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (16840u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08841C94;
      }
      goto L_08841AE4;
    }
L_08841AE4:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[17] = (32768u << 16u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08841C4C;
      }
      goto L_08841B00;
    }
L_08841B00:
    aot_gpr[31] = (0x08841B08u);
    aot_gpr[4] = (aot_gpr[20] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 190u, 0x0889AB48u>(ctx, &aot_mem) && ctx.pc == 0x08841B08u) goto L_08841B08;
    return;
L_08841B08:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841B14;
    }
L_08841B14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841B20;
    }
L_08841B20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841B2C;
    }
L_08841B2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841B40;
    }
L_08841B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841B4C;
    }
L_08841B4C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(9))))));
        goto L_08841B6C;
    }
    goto L_08841B58;
L_08841B58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841B68;
    }
L_08841B68:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(9))))));
    goto L_08841B6C;
L_08841B6C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(10))))));
        goto L_08841B8C;
    }
    goto L_08841B74;
L_08841B74:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(9))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841B88;
    }
L_08841B88:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(10))))));
    goto L_08841B8C;
L_08841B8C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841BA8;
      }
      goto L_08841B94;
    }
L_08841B94:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841BA8;
    }
L_08841BA8:
    aot_gpr[31] = (0x08841BB0u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 247u, 0x0889AE24u>(ctx, &aot_mem) && ctx.pc == 0x08841BB0u) goto L_08841BB0;
    return;
L_08841BB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841BC0;
      }
      goto L_08841BB8;
    }
L_08841BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841BC0;
    }
L_08841BC0:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(7976)));
    aot_gpr[22] = (aot_gpr[22] - aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08841BE0;
      }
      goto L_08841BDC;
    }
L_08841BDC:
    aot_gpr[22] = (0u - aot_gpr[22]);
    goto L_08841BE0;
L_08841BE0:
    aot_gpr[31] = (0x08841BE8u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 11u, 0x0889B0ACu>(ctx, &aot_mem) && ctx.pc == 0x08841BE8u) goto L_08841BE8;
    return;
L_08841BE8:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08841C20;
      }
      goto L_08841BF0;
    }
L_08841BF0:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841C08;
      }
      goto L_08841BF8;
    }
L_08841BF8:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841C08;
    }
L_08841C08:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841C14;
    }
L_08841C14:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841C20;
    }
L_08841C20:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841C28;
    }
L_08841C28:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841C3C;
      }
      goto L_08841C34;
    }
L_08841C34:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[17] = (aot_gpr[22] | 0u);
    goto L_08841C3C;
L_08841C3C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841B00;
      }
      goto L_08841C4C;
    }
L_08841C4C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08841C8C;
      }
      goto L_08841C54;
    }
L_08841C54:
    aot_gpr[31] = (0x08841C5Cu);
    aot_gpr[4] = (aot_gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 194u, 0x0889AB84u>(ctx, &aot_mem) && ctx.pc == 0x08841C5Cu) goto L_08841C5C;
    return;
L_08841C5C:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x08841C70u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08841C70u) goto L_08841C70;
    return;
L_08841C70:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08841C84u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08841C84u) goto L_08841C84;
    return;
L_08841C84:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08841C8C;
L_08841C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841CCC;
      }
      goto L_08841C94;
    }
L_08841C94:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 53u);
    aot_gpr[31] = (0x08841CA8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08841CA8u) goto L_08841CA8;
    return;
L_08841CA8:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08841CBCu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08841CBCu) goto L_08841CBC;
    return;
L_08841CBC:
    aot_gpr[31] = (0x08841CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x08841CC4u) goto L_08841CC4;
    return;
L_08841CC4:
    aot_gpr[31] = (0x08841CCCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08841CCCu) goto L_08841CCC;
    return;
L_08841CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841DE4;
      }
      goto L_08841CD4;
    }
L_08841CD4:
    aot_gpr[31] = (0x08841CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08841CDCu) goto L_08841CDC;
    return;
L_08841CDC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08841DE4;
      }
      goto L_08841CF0;
    }
L_08841CF0:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-5992)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841D08:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    aot_gpr[4] = (0u | 305u);
    aot_gpr[31] = (0x08841D1Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08841D1Cu) goto L_08841D1C;
    return;
L_08841D1C:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08841D30u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08841D30u) goto L_08841D30;
    return;
L_08841D30:
    aot_gpr[31] = (0x08841D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x08841D38u) goto L_08841D38;
    return;
L_08841D38:
    aot_gpr[31] = (0x08841D40u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08841D40u) goto L_08841D40;
    return;
L_08841D40:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08841DE4;
      }
      goto L_08841D48;
    }
L_08841D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841DE4;
      }
      goto L_08841D50;
    }
L_08841D50:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08841D5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 183u, 0x0889AB08u>(ctx, &aot_mem) && ctx.pc == 0x08841D5Cu) goto L_08841D5C;
    return;
L_08841D5C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(1904), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-7488), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(2168), aot_gpr[4]);
    aot_gpr[31] = (0x08841D8Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x0881CA68u>(ctx, &aot_mem) && ctx.pc == 0x08841D8Cu) goto L_08841D8C;
    return;
L_08841D8C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25340), aot_gpr[2]);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2176), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2172), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2192), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08841DCCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6008));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08841DCCu) goto L_08841DCC;
    return;
L_08841DCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08841DDCu);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 19u, 0x0889B120u>(ctx, &aot_mem) && ctx.pc == 0x08841DDCu) goto L_08841DDC;
    return;
L_08841DDC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08841DE4;
L_08841DE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841E0C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23872), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841E2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5808));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08841E6Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841E6Cu) goto L_08841E6C;
    return;
L_08841E6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08841E90u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5780));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841E90u) goto L_08841E90;
    return;
L_08841E90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08841EB0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5768));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841EB0u) goto L_08841EB0;
    return;
L_08841EB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08841ED0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5760));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841ED0u) goto L_08841ED0;
    return;
L_08841ED0:
    aot_gpr[31] = (0x08841ED8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08841ED8u) goto L_08841ED8;
    return;
L_08841ED8:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08841EE8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x0889AC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08841EE8u) goto L_08841EE8;
    return;
L_08841EE8:
    aot_gpr[31] = (0x08841EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 14u, 0x0889B0E0u>(ctx, &aot_mem) && ctx.pc == 0x08841EF0u) goto L_08841EF0;
    return;
L_08841EF0:
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
L_08841F0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841F14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08841F44u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x08841F44u) goto L_08841F44;
    return;
L_08841F44:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 40 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08841F68;
      }
      goto L_08841F54;
    }
L_08841F54:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08841FC8;
      }
      goto L_08841F60;
    }
L_08841F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 141u, 0x088428E4u>(ctx, &aot_mem); return;
      }
      goto L_08841F68;
    }
L_08841F68:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 66 ? 1u : 0u);
      if (branch_taken) {
          goto L_08841FB0;
      }
      goto L_08841F70;
    }
L_08841F70:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 47 ? 1u : 0u);
      if (branch_taken) {
          goto L_08841F9C;
      }
      goto L_08841F7C;
    }
L_08841F7C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 141u, 0x088428E4u>(ctx, &aot_mem); return;
      }
      goto L_08841F84;
    }
L_08841F84:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-5696)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08841F9C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 62 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 10u, 0x0884206Cu>(ctx, &aot_mem); return;
      }
      goto L_08841FA8;
    }
L_08841FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 141u, 0x088428E4u>(ctx, &aot_mem); return;
      }
      goto L_08841FB0;
    }
L_08841FB0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 67 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 133u, 0x088427E4u>(ctx, &aot_mem); return;
      }
      goto L_08841FB8;
    }
L_08841FB8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 137u, 0x0884285Cu>(ctx, &aot_mem); return;
      }
      goto L_08841FC0;
    }
L_08841FC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 141u, 0x088428E4u>(ctx, &aot_mem); return;
      }
      goto L_08841FC8;
    }
L_08841FC8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5808));
    aot_gpr[31] = (0x08841FE0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08841FE0u) goto L_08841FE0;
    return;
L_08841FE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 4u, 0x08842028u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 1u, 0x08842000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0061(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0061_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_61(Runtime &runtime) {
    runtime.register_generated_unit(61u, 0x08841000u, 4096u, &recomp_unit_0061, &recomp_unit_0061_entry);
    runtime.register_function(0x08841004u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841014u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841034u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841044u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841054u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841064u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841084u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088410B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088410B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088410CCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088410DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088410E4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088410FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841110u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884111Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884116Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841184u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841194u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088411B4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088411D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088411F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841200u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884120Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841224u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841240u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841258u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841260u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884126Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841278u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841280u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088412A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088412C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088412E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088412E8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088412F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884130Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841328u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841340u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841348u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841354u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884135Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841370u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841378u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841384u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884138Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841398u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088413A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088413B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088413B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088413C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088413D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088413F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841400u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841408u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841410u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884141Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884142Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841438u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884144Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884145Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841464u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841474u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884147Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841484u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841494u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088414A4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088414BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088414D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088414D8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088414E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088414F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841500u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841508u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841510u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841520u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841534u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884154Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841560u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841570u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884157Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841584u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884158Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884159Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088415A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088415B8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088415C0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088415D4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088415F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841604u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841618u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841620u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884164Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884166Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088416A0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088416BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088416C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088416D0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088416DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088416FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841714u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884171Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841768u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841780u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841798u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088417B0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088417F4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088417FCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841804u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884180Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841814u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884181Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884182Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841834u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884183Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841850u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841858u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841864u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841870u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088418BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088418E0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088418F8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841900u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884190Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841914u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884191Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841924u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884192Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841934u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841940u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841948u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841964u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884196Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841984u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884198Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x0884199Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088419A8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088419BCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088419C4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x088419DCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A10u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A24u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A28u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841A9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841AA4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841AACu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841AC8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841AE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B00u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B58u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B74u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B88u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841B94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BC0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BE0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841BF8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C20u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C28u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C34u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C3Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C4Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841C94u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841CA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841CBCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841CC4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841CCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841CD4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841CDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841CF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D08u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D1Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D30u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D38u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D40u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D48u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D50u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D5Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841D8Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841DCCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841DDCu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841DE4u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841E0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841E2Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841E6Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841E90u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841EB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841ED0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841ED8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841EE8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841EF0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F0Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F14u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F44u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F54u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F60u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F68u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F70u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F7Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F84u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841F9Cu, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841FA8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841FB0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841FB8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841FC0u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841FC8u, &recomp_unit_0061, "recomp_unit_0061");
    runtime.register_function(0x08841FE0u, &recomp_unit_0061, "recomp_unit_0061");
}
} // namespace psprecomp
