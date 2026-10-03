#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0516[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0,
    19, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0,
    30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64,
    0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0,
    78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0,
    87, 88, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108,
    0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0,
    122, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0,
    159, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 167,
    0, 0, 168, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183,
    0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195,
    0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 207, 208, 209, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 216,
    217, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231,
};
void recomp_unit_0516_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A08004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0516[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A08004;
    case 2u: goto L_08A08044;
    case 3u: goto L_08A08050;
    case 4u: goto L_08A08054;
    case 5u: goto L_08A08064;
    case 6u: goto L_08A0806C;
    case 7u: goto L_08A08074;
    case 8u: goto L_08A0807C;
    case 9u: goto L_08A08084;
    case 10u: goto L_08A080A4;
    case 11u: goto L_08A080C8;
    case 12u: goto L_08A080EC;
    case 13u: goto L_08A08124;
    case 14u: goto L_08A08138;
    case 15u: goto L_08A08154;
    case 16u: goto L_08A08160;
    case 17u: goto L_08A0816C;
    case 18u: goto L_08A08178;
    case 19u: goto L_08A08184;
    case 20u: goto L_08A0818C;
    case 21u: goto L_08A08194;
    case 22u: goto L_08A0819C;
    case 23u: goto L_08A081B4;
    case 24u: goto L_08A081D0;
    case 25u: goto L_08A081DC;
    case 26u: goto L_08A081E4;
    case 27u: goto L_08A081EC;
    case 28u: goto L_08A081F4;
    case 29u: goto L_08A081FC;
    case 30u: goto L_08A08204;
    case 31u: goto L_08A08244;
    case 32u: goto L_08A08278;
    case 33u: goto L_08A08288;
    case 34u: goto L_08A08298;
    case 35u: goto L_08A082B8;
    case 36u: goto L_08A082D0;
    case 37u: goto L_08A082E4;
    case 38u: goto L_08A08314;
    case 39u: goto L_08A08324;
    case 40u: goto L_08A0832C;
    case 41u: goto L_08A08334;
    case 42u: goto L_08A0834C;
    case 43u: goto L_08A08354;
    case 44u: goto L_08A0835C;
    case 45u: goto L_08A0837C;
    case 46u: goto L_08A083A8;
    case 47u: goto L_08A083B8;
    case 48u: goto L_08A083D4;
    case 49u: goto L_08A083E0;
    case 50u: goto L_08A083EC;
    case 51u: goto L_08A08408;
    case 52u: goto L_08A08434;
    case 53u: goto L_08A08444;
    case 54u: goto L_08A08460;
    case 55u: goto L_08A0846C;
    case 56u: goto L_08A08478;
    case 57u: goto L_08A08494;
    case 58u: goto L_08A084C0;
    case 59u: goto L_08A084D0;
    case 60u: goto L_08A084D8;
    case 61u: goto L_08A084E0;
    case 62u: goto L_08A084EC;
    case 63u: goto L_08A084F4;
    case 64u: goto L_08A08500;
    case 65u: goto L_08A08518;
    case 66u: goto L_08A08528;
    case 67u: goto L_08A08530;
    case 68u: goto L_08A08538;
    case 69u: goto L_08A08554;
    case 70u: goto L_08A0855C;
    case 71u: goto L_08A08594;
    case 72u: goto L_08A085A0;
    case 73u: goto L_08A085C4;
    case 74u: goto L_08A085D0;
    case 75u: goto L_08A085D8;
    case 76u: goto L_08A085E0;
    case 77u: goto L_08A085EC;
    case 78u: goto L_08A08604;
    case 79u: goto L_08A0860C;
    case 80u: goto L_08A0861C;
    case 81u: goto L_08A08634;
    case 82u: goto L_08A08644;
    case 83u: goto L_08A0864C;
    case 84u: goto L_08A0865C;
    case 85u: goto L_08A08664;
    case 86u: goto L_08A08674;
    case 87u: goto L_08A08684;
    case 88u: goto L_08A08688;
    case 89u: goto L_08A08690;
    case 90u: goto L_08A0869C;
    case 91u: goto L_08A086BC;
    case 92u: goto L_08A0870C;
    case 93u: goto L_08A08718;
    case 94u: goto L_08A08724;
    case 95u: goto L_08A08730;
    case 96u: goto L_08A08740;
    case 97u: goto L_08A08748;
    case 98u: goto L_08A08750;
    case 99u: goto L_08A0875C;
    case 100u: goto L_08A0876C;
    case 101u: goto L_08A08774;
    case 102u: goto L_08A08794;
    case 103u: goto L_08A0879C;
    case 104u: goto L_08A087AC;
    case 105u: goto L_08A087C0;
    case 106u: goto L_08A087D0;
    case 107u: goto L_08A087F8;
    case 108u: goto L_08A08800;
    case 109u: goto L_08A08814;
    case 110u: goto L_08A0881C;
    case 111u: goto L_08A0882C;
    case 112u: goto L_08A08854;
    case 113u: goto L_08A08868;
    case 114u: goto L_08A08890;
    case 115u: goto L_08A08898;
    case 116u: goto L_08A088A0;
    case 117u: goto L_08A088A8;
    case 118u: goto L_08A088B0;
    case 119u: goto L_08A088D8;
    case 120u: goto L_08A088F0;
    case 121u: goto L_08A088F8;
    case 122u: goto L_08A08904;
    case 123u: goto L_08A0890C;
    case 124u: goto L_08A08914;
    case 125u: goto L_08A0891C;
    case 126u: goto L_08A08938;
    case 127u: goto L_08A08940;
    case 128u: goto L_08A08954;
    case 129u: goto L_08A08998;
    case 130u: goto L_08A089A4;
    case 131u: goto L_08A089AC;
    case 132u: goto L_08A089B4;
    case 133u: goto L_08A089C0;
    case 134u: goto L_08A089DC;
    case 135u: goto L_08A089E8;
    case 136u: goto L_08A08A04;
    case 137u: goto L_08A08A10;
    case 138u: goto L_08A08A30;
    case 139u: goto L_08A08A38;
    case 140u: goto L_08A08A48;
    case 141u: goto L_08A08A60;
    case 142u: goto L_08A08A6C;
    case 143u: goto L_08A08A84;
    case 144u: goto L_08A08AA4;
    case 145u: goto L_08A08AAC;
    case 146u: goto L_08A08ABC;
    case 147u: goto L_08A08AD8;
    case 148u: goto L_08A08AE4;
    case 149u: goto L_08A08AEC;
    case 150u: goto L_08A08AF4;
    case 151u: goto L_08A08B1C;
    case 152u: goto L_08A08B2C;
    case 153u: goto L_08A08B3C;
    case 154u: goto L_08A08B4C;
    case 155u: goto L_08A08B54;
    case 156u: goto L_08A08B68;
    case 157u: goto L_08A08B70;
    case 158u: goto L_08A08B78;
    case 159u: goto L_08A08B84;
    case 160u: goto L_08A08B88;
    case 161u: goto L_08A08B9C;
    case 162u: goto L_08A08BB8;
    case 163u: goto L_08A08BC4;
    case 164u: goto L_08A08BE8;
    case 165u: goto L_08A08BF0;
    case 166u: goto L_08A08BF8;
    case 167u: goto L_08A08C00;
    case 168u: goto L_08A08C0C;
    case 169u: goto L_08A08C10;
    case 170u: goto L_08A08C18;
    case 171u: goto L_08A08C20;
    case 172u: goto L_08A08C44;
    case 173u: goto L_08A08C4C;
    case 174u: goto L_08A08C54;
    case 175u: goto L_08A08C64;
    case 176u: goto L_08A08C78;
    case 177u: goto L_08A08C80;
    case 178u: goto L_08A08CA0;
    case 179u: goto L_08A08CB8;
    case 180u: goto L_08A08CE4;
    case 181u: goto L_08A08CEC;
    case 182u: goto L_08A08CF8;
    case 183u: goto L_08A08D00;
    case 184u: goto L_08A08D08;
    case 185u: goto L_08A08D10;
    case 186u: goto L_08A08D1C;
    case 187u: goto L_08A08D34;
    case 188u: goto L_08A08D3C;
    case 189u: goto L_08A08D44;
    case 190u: goto L_08A08D58;
    case 191u: goto L_08A08D60;
    case 192u: goto L_08A08D68;
    case 193u: goto L_08A08D70;
    case 194u: goto L_08A08D78;
    case 195u: goto L_08A08D80;
    case 196u: goto L_08A08D98;
    case 197u: goto L_08A08DA0;
    case 198u: goto L_08A08DA8;
    case 199u: goto L_08A08DB0;
    case 200u: goto L_08A08DCC;
    case 201u: goto L_08A08DEC;
    case 202u: goto L_08A08E14;
    case 203u: goto L_08A08E1C;
    case 204u: goto L_08A08E28;
    case 205u: goto L_08A08E50;
    case 206u: goto L_08A08E5C;
    case 207u: goto L_08A08E68;
    case 208u: goto L_08A08E6C;
    case 209u: goto L_08A08E70;
    case 210u: goto L_08A08E84;
    case 211u: goto L_08A08EAC;
    case 212u: goto L_08A08EB4;
    case 213u: goto L_08A08EC0;
    case 214u: goto L_08A08EE8;
    case 215u: goto L_08A08EF4;
    case 216u: goto L_08A08F00;
    case 217u: goto L_08A08F04;
    case 218u: goto L_08A08F08;
    case 219u: goto L_08A08F1C;
    case 220u: goto L_08A08F24;
    case 221u: goto L_08A08F50;
    case 222u: goto L_08A08F60;
    case 223u: goto L_08A08F68;
    case 224u: goto L_08A08F84;
    case 225u: goto L_08A08FA8;
    case 226u: goto L_08A08FB0;
    case 227u: goto L_08A08FC0;
    case 228u: goto L_08A08FC8;
    case 229u: goto L_08A08FD8;
    case 230u: goto L_08A08FE0;
    case 231u: goto L_08A08FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A08004:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08044u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08044u) goto L_08A08044;
    return;
L_08A08044:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A08050u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A08050u) goto L_08A08050;
    return;
L_08A08050:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08A08054;
L_08A08054:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A08064u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A08064u) goto L_08A08064;
    return;
L_08A08064:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] - aot_gpr[20]);
      if (branch_taken) {
          goto L_08A08054;
      }
      goto L_08A0806C;
    }
L_08A0806C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A080C8;
      }
      goto L_08A08074;
    }
L_08A08074:
    aot_gpr[31] = (0x08A0807Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 154u, 0x08A06990u>(ctx, &aot_mem) && ctx.pc == 0x08A0807Cu) goto L_08A0807C;
    return;
L_08A0807C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A080C8;
      }
      goto L_08A08084;
    }
L_08A08084:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-24844)));
    aot_gpr[17] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-24844), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A080A4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 9u, 0x08A0106Cu>(ctx, &aot_mem) && ctx.pc == 0x08A080A4u) goto L_08A080A4;
    return;
L_08A080A4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A080C8:
    aot_gpr[2] = (0u | 0u);
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
L_08A080EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A08244;
      }
      goto L_08A08124;
    }
L_08A08124:
    aot_gpr[22] = (1u << 16u);
    aot_gpr[22] = (aot_gpr[20] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-24844)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08244;
      }
      goto L_08A08138;
    }
L_08A08138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08154u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08154u) goto L_08A08154;
    return;
L_08A08154:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A08160u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A08160u) goto L_08A08160;
    return;
L_08A08160:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    aot_gpr[17] = (0u | 1u);
    goto L_08A0816C;
L_08A0816C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A08178u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A08178u) goto L_08A08178;
    return;
L_08A08178:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A08244;
      }
      goto L_08A08184;
    }
L_08A08184:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08244;
      }
      goto L_08A0818C;
    }
L_08A0818C:
    aot_gpr[31] = (0x08A08194u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 10u, 0x08A01074u>(ctx, &aot_mem) && ctx.pc == 0x08A08194u) goto L_08A08194;
    return;
L_08A08194:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A081F4;
      }
      goto L_08A0819C;
    }
L_08A0819C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A081B4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A081B4u) goto L_08A081B4;
    return;
L_08A081B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(292)));
    aot_gpr[30] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A081D0u);
    aot_gpr[4] = (aot_gpr[23] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A081D0u) goto L_08A081D0;
    return;
L_08A081D0:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08A081DCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A081DCu) goto L_08A081DC;
    return;
L_08A081DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[23] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A081F4;
      }
      goto L_08A081E4;
    }
L_08A081E4:
    aot_gpr[31] = (0x08A081ECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A081ECu) goto L_08A081EC;
    return;
L_08A081EC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A081FC;
      }
      goto L_08A081F4;
    }
L_08A081F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0816C;
      }
      goto L_08A081FC;
    }
L_08A081FC:
    aot_gpr[31] = (0x08A08204u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 160u, 0x08A069D4u>(ctx, &aot_mem) && ctx.pc == 0x08A08204u) goto L_08A08204;
    return;
L_08A08204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-24844)));
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-24844), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08244:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08278:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26172)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08288:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26172), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08298:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (1u << 16u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A082D0;
      }
      goto L_08A082B8;
    }
L_08A082B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A082D0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A082D0u) goto L_08A082D0;
    return;
L_08A082D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26172), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A082E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-688));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(668), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(680), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(684), aot_gpr[31]);
    aot_gpr[31] = (0x08A08314u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A08314u) goto L_08A08314;
    return;
L_08A08314:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(756));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A08324u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x08A08324u) goto L_08A08324;
    return;
L_08A08324:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A08354;
      }
      goto L_08A0832C;
    }
L_08A0832C:
    aot_gpr[31] = (0x08A08334u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A08334u) goto L_08A08334;
    return;
L_08A08334:
    aot_gpr[6] = (aot_gpr[16] - aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08A0834Cu);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1432));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 40u, 0x08A002B4u>(ctx, &aot_mem) && ctx.pc == 0x08A0834Cu) goto L_08A0834C;
    return;
L_08A0834C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    goto L_08A08354;
L_08A08354:
    aot_gpr[31] = (0x08A0835Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0835Cu) goto L_08A0835C;
    return;
L_08A0835C:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(668)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(672)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(676)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(680)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(684)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0837C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A083A8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 10u, 0x08A0C098u>(ctx, &aot_mem) && ctx.pc == 0x08A083A8u) goto L_08A083A8;
    return;
L_08A083A8:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A083B8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 121u, 0x08A06760u>(ctx, &aot_mem) && ctx.pc == 0x08A083B8u) goto L_08A083B8;
    return;
L_08A083B8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A083D4u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    goto L_08A086BC;
L_08A083D4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A083E0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 128u, 0x08A067ECu>(ctx, &aot_mem) && ctx.pc == 0x08A083E0u) goto L_08A083E0;
    return;
L_08A083E0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A083ECu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 12u, 0x08A0C0CCu>(ctx, &aot_mem) && ctx.pc == 0x08A083ECu) goto L_08A083EC;
    return;
L_08A083EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08408:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x08A08434u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 22u, 0x08A0C1B0u>(ctx, &aot_mem) && ctx.pc == 0x08A08434u) goto L_08A08434;
    return;
L_08A08434:
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A08444u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 121u, 0x08A06760u>(ctx, &aot_mem) && ctx.pc == 0x08A08444u) goto L_08A08444;
    return;
L_08A08444:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A08460u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    goto L_08A086BC;
L_08A08460:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A0846Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 128u, 0x08A067ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0846Cu) goto L_08A0846C;
    return;
L_08A0846C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A08478u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 24u, 0x08A0C1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A08478u) goto L_08A08478;
    return;
L_08A08478:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08494:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A084C0u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4744));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A084C0u) goto L_08A084C0;
    return;
L_08A084C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A084D0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A084D0u) goto L_08A084D0;
    return;
L_08A084D0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (0u | 0u);
    goto L_08A084D8;
L_08A084D8:
    aot_gpr[31] = (0x08A084E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A084E0u) goto L_08A084E0;
    return;
L_08A084E0:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08538;
      }
      goto L_08A084EC;
    }
L_08A084EC:
    aot_gpr[31] = (0x08A084F4u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A084F4u) goto L_08A084F4;
    return;
L_08A084F4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08554;
      }
      goto L_08A08500;
    }
L_08A08500:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08518u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08518u) goto L_08A08518;
    return;
L_08A08518:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A08528u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A08528u) goto L_08A08528;
    return;
L_08A08528:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08554;
      }
      goto L_08A08530;
    }
L_08A08530:
    aot_gpr[31] = (0x08A08538u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 160u, 0x08A069D4u>(ctx, &aot_mem) && ctx.pc == 0x08A08538u) goto L_08A08538;
    return;
L_08A08538:
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
L_08A08554:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A084D8;
      }
      goto L_08A0855C;
    }
L_08A0855C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26040), 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26036), 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(752), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26032), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A08594u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 11u, 0x08A07064u>(ctx, &aot_mem) && ctx.pc == 0x08A08594u) goto L_08A08594;
    return;
L_08A08594:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A085A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1216));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1424)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1184), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1188), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1192), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1196), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1200), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0869C;
      }
      goto L_08A085C4;
    }
L_08A085C4:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A085D0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 130u, 0x089F075Cu>(ctx, &aot_mem) && ctx.pc == 0x08A085D0u) goto L_08A085D0;
    return;
L_08A085D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0869C;
      }
      goto L_08A085D8;
    }
L_08A085D8:
    aot_gpr[31] = (0x08A085E0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A085E0u) goto L_08A085E0;
    return;
L_08A085E0:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A085ECu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A085ECu) goto L_08A085EC;
    return;
L_08A085EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08604u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08604u) goto L_08A08604;
    return;
L_08A08604:
    aot_gpr[31] = (0x08A0860Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 168u, 0x08A00B34u>(ctx, &aot_mem) && ctx.pc == 0x08A0860Cu) goto L_08A0860C;
    return;
L_08A0860C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(668));
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(925));
      if (branch_taken) {
          goto L_08A08664;
      }
      goto L_08A0861C;
    }
L_08A0861C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08634u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08634u) goto L_08A08634;
    return;
L_08A08634:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A08644u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A08644u) goto L_08A08644;
    return;
L_08A08644:
    aot_gpr[31] = (0x08A0864Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A0864Cu) goto L_08A0864C;
    return;
L_08A0864C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0865Cu);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A0865Cu) goto L_08A0865C;
    return;
L_08A0865C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1432));
      if (branch_taken) {
          goto L_08A08688;
      }
      goto L_08A08664;
    }
L_08A08664:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A08674u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08674u) goto L_08A08674;
    return;
L_08A08674:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A08684u);
    aot_gpr[6] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08684u) goto L_08A08684;
    return;
L_08A08684:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1432));
    goto L_08A08688;
L_08A08688:
    aot_gpr[31] = (0x08A08690u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 202u, 0x089FFCF4u>(ctx, &aot_mem) && ctx.pc == 0x08A08690u) goto L_08A08690;
    return;
L_08A08690:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A0869Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0869Cu) goto L_08A0869C;
    return;
L_08A0869C:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1184)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1188)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1192)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1196)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1200)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1216));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A086BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0870Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0870Cu) goto L_08A0870C;
    return;
L_08A0870C:
    aot_gpr[21] = (1u << 16u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[20] + aot_gpr[21]);
      if (branch_taken) {
          goto L_08A08724;
      }
      goto L_08A08718;
    }
L_08A08718:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A08724u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 110u, 0x08A07684u>(ctx, &aot_mem) && ctx.pc == 0x08A08724u) goto L_08A08724;
    return;
L_08A08724:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A08730u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 109u, 0x08A0767Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08730u) goto L_08A08730;
    return;
L_08A08730:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26044)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08748;
      }
      goto L_08A08740;
    }
L_08A08740:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A087F8;
      }
      goto L_08A08748;
    }
L_08A08748:
    aot_gpr[31] = (0x08A08750u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08A08A10;
L_08A08750:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26044)));
    aot_gpr[31] = (0x08A0875Cu);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0875Cu) goto L_08A0875C;
    return;
L_08A0875C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0876Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0876Cu) goto L_08A0876C;
    return;
L_08A0876C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A087C0;
      }
      goto L_08A08774;
    }
L_08A08774:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26044)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08794u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08794u) goto L_08A08794;
    return;
L_08A08794:
    aot_gpr[31] = (0x08A0879Cu);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0879Cu) goto L_08A0879C;
    return;
L_08A0879C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A087ACu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A087ACu) goto L_08A087AC;
    return;
L_08A087AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26044)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26044)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A087F8;
      }
      goto L_08A087C0;
    }
L_08A087C0:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A087D0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 97u, 0x08A0964Cu>(ctx, &aot_mem) && ctx.pc == 0x08A087D0u) goto L_08A087D0;
    return;
L_08A087D0:
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
L_08A087F8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A08854;
      }
      goto L_08A08800;
    }
L_08A08800:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08A08814u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 43u, 0x08A0726Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08814u) goto L_08A08814;
    return;
L_08A08814:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A08890;
      }
      goto L_08A0881C;
    }
L_08A0881C:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A0882Cu);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 97u, 0x08A0964Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0882Cu) goto L_08A0882C;
    return;
L_08A0882C:
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
L_08A08854:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A08868u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 97u, 0x08A0964Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08868u) goto L_08A08868;
    return;
L_08A08868:
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
L_08A08890:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A088A8;
      }
      goto L_08A08898;
    }
L_08A08898:
    aot_gpr[31] = (0x08A088A0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08A08954;
L_08A088A0:
    aot_gpr[31] = (0x08A088A8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08A08ABC;
L_08A088A8:
    aot_gpr[31] = (0x08A088B0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    goto L_08A08CB8;
L_08A088B0:
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
L_08A088D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    goto L_08A088F0;
L_08A088F0:
    aot_gpr[31] = (0x08A088F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A089C0;
L_08A088F8:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08940;
      }
      goto L_08A08904;
    }
L_08A08904:
    aot_gpr[31] = (0x08A0890Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A089E8;
L_08A0890C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08940;
      }
      goto L_08A08914;
    }
L_08A08914:
    aot_gpr[31] = (0x08A0891Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A089E8;
L_08A0891C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A08938u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08938u) goto L_08A08938;
    return;
L_08A08938:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A088F0;
      }
      goto L_08A08940;
    }
L_08A08940:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08954:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-24840)));
    aot_gpr[8] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-24840), aot_gpr[6]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-26044)));
    aot_gpr[7] = (0u | 39448u);
    aot_gpr[6] = (0u | 39468u);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] != aot_gpr[7];
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A089A4;
      }
      goto L_08A08998;
    }
L_08A08998:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-26044), aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26048), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A089AC;
      }
      goto L_08A089A4;
    }
L_08A089A4:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(-26044), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26048), aot_gpr[6]);
    goto L_08A089AC;
L_08A089AC:
    aot_gpr[31] = (0x08A089B4u);
    // nop
    goto L_08A08A10;
L_08A089B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A089C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26048)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A089DCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A089DCu) goto L_08A089DC;
    return;
L_08A089DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A089E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26048)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A08A04u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A08A04u) goto L_08A08A04;
    return;
L_08A08A04:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08A10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A08A30u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26044)));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 179u, 0x08A06B58u>(ctx, &aot_mem) && ctx.pc == 0x08A08A30u) goto L_08A08A30;
    return;
L_08A08A30:
    aot_gpr[31] = (0x08A08A38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A08A48;
L_08A08A38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08A48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A08A60u);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A08A60u) goto L_08A08A60;
    return;
L_08A08A60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A08A6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08A6Cu) goto L_08A08A6C;
    return;
L_08A08A6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26044)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08A84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A08AA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26044)));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 179u, 0x08A06B58u>(ctx, &aot_mem) && ctx.pc == 0x08A08AA4u) goto L_08A08AA4;
    return;
L_08A08AA4:
    aot_gpr[31] = (0x08A08AACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0515_entry, 515u, 246u, 0x08A07E50u>(ctx, &aot_mem) && ctx.pc == 0x08A08AACu) goto L_08A08AAC;
    return;
L_08A08AAC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08ABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A08AD8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 39u, 0x08A09264u>(ctx, &aot_mem) && ctx.pc == 0x08A08AD8u) goto L_08A08AD8;
    return;
L_08A08AD8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08B88;
      }
      goto L_08A08AE4;
    }
L_08A08AE4:
    aot_gpr[31] = (0x08A08AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A08AECu) goto L_08A08AEC;
    return;
L_08A08AEC:
    aot_gpr[31] = (0x08A08AF4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08AF4u) goto L_08A08AF4;
    return;
L_08A08AF4:
    aot_gpr[4] = (aot_gpr[17] << 4u);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[8] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 2467u);
    aot_gpr[31] = (0x08A08B1Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4800));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A08B1Cu) goto L_08A08B1C;
    return;
L_08A08B1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A08B88;
      }
      goto L_08A08B2C;
    }
L_08A08B2C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A08B3Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08B3Cu) goto L_08A08B3C;
    return;
L_08A08B3C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A08B4Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 46u, 0x08A092C0u>(ctx, &aot_mem) && ctx.pc == 0x08A08B4Cu) goto L_08A08B4C;
    return;
L_08A08B4C:
    aot_gpr[31] = (0x08A08B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A08B54u) goto L_08A08B54;
    return;
L_08A08B54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A08B68u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0505_entry, 505u, 287u, 0x089FDF14u>(ctx, &aot_mem) && ctx.pc == 0x08A08B68u) goto L_08A08B68;
    return;
L_08A08B68:
    aot_gpr[31] = (0x08A08B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A08B70u) goto L_08A08B70;
    return;
L_08A08B70:
    aot_gpr[31] = (0x08A08B78u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08B78u) goto L_08A08B78;
    return;
L_08A08B78:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A08B84u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A08B84u) goto L_08A08B84;
    return;
L_08A08B84:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A08B88;
L_08A08B88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08B9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A08BB8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 39u, 0x08A09264u>(ctx, &aot_mem) && ctx.pc == 0x08A08BB8u) goto L_08A08BB8;
    return;
L_08A08BB8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A08CA0;
      }
      goto L_08A08BC4;
    }
L_08A08BC4:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-24840)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[17] = (1u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-24836)));
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-24832)));
      if (branch_taken) {
          goto L_08A08C4C;
      }
      goto L_08A08BE8;
    }
L_08A08BE8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-24836), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A08C10;
      }
      goto L_08A08BF0;
    }
L_08A08BF0:
    aot_gpr[31] = (0x08A08BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A08BF8u) goto L_08A08BF8;
    return;
L_08A08BF8:
    aot_gpr[31] = (0x08A08C00u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08C00u) goto L_08A08C00;
    return;
L_08A08C00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-24832)));
    aot_gpr[31] = (0x08A08C0Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A08C0Cu) goto L_08A08C0C;
    return;
L_08A08C0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-24832), 0u);
    goto L_08A08C10;
L_08A08C10:
    aot_gpr[31] = (0x08A08C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A08C18u) goto L_08A08C18;
    return;
L_08A08C18:
    aot_gpr[31] = (0x08A08C20u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08C20u) goto L_08A08C20;
    return;
L_08A08C20:
    aot_gpr[5] = (aot_gpr[18] << 4u);
    aot_gpr[4] = (aot_gpr[18] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 2514u);
    aot_gpr[31] = (0x08A08C44u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4800));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A08C44u) goto L_08A08C44;
    return;
L_08A08C44:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-24832), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A08C4C;
L_08A08C4C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[18] << 4u);
      if (branch_taken) {
          goto L_08A08CA0;
      }
      goto L_08A08C54;
    }
L_08A08C54:
    aot_gpr[5] = (aot_gpr[18] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[31] = (0x08A08C64u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08C64u) goto L_08A08C64;
    return;
L_08A08C64:
    aot_gpr[5] = (0u | 40704u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A08C78u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 46u, 0x08A092C0u>(ctx, &aot_mem) && ctx.pc == 0x08A08C78u) goto L_08A08C78;
    return;
L_08A08C78:
    aot_gpr[31] = (0x08A08C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A08C80u) goto L_08A08C80;
    return;
L_08A08C80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-24832)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A08CA0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08CA0u) goto L_08A08CA0;
    return;
L_08A08CA0:
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
L_08A08CB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A08CE4;
L_08A08CE4:
    aot_gpr[31] = (0x08A08CECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A089C0;
L_08A08CEC:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08DA0;
      }
      goto L_08A08CF8;
    }
L_08A08CF8:
    aot_gpr[31] = (0x08A08D00u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A089E8;
L_08A08D00:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08DA0;
      }
      goto L_08A08D08;
    }
L_08A08D08:
    aot_gpr[31] = (0x08A08D10u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A089E8;
L_08A08D10:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08D98;
      }
      goto L_08A08D1C;
    }
L_08A08D1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08D34u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08D34u) goto L_08A08D34;
    return;
L_08A08D34:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
        goto L_08A08D44;
    }
    goto L_08A08D3C;
L_08A08D3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A08D98;
      }
      goto L_08A08D44;
    }
L_08A08D44:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08D58u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08D58u) goto L_08A08D58;
    return;
L_08A08D58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08D78;
      }
      goto L_08A08D60;
    }
L_08A08D60:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08D78;
      }
      goto L_08A08D68;
    }
L_08A08D68:
    aot_gpr[31] = (0x08A08D70u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A089E8;
L_08A08D70:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A08D98;
      }
      goto L_08A08D78;
    }
L_08A08D78:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08D98;
      }
      goto L_08A08D80;
    }
L_08A08D80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A08D98u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08D98u) goto L_08A08D98;
    return;
L_08A08D98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A08CE4;
      }
      goto L_08A08DA0;
    }
L_08A08DA0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08DCC;
      }
      goto L_08A08DA8;
    }
L_08A08DA8:
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08DCC;
      }
      goto L_08A08DB0;
    }
L_08A08DB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A08DCCu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08DCCu) goto L_08A08DCC;
    return;
L_08A08DCC:
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
L_08A08DEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26092)));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A08E70;
      }
      goto L_08A08E14;
    }
L_08A08E14:
    aot_gpr[31] = (0x08A08E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A08E1Cu) goto L_08A08E1C;
    return;
L_08A08E1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A08E28u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 175u, 0x08A03ABCu>(ctx, &aot_mem) && ctx.pc == 0x08A08E28u) goto L_08A08E28;
    return;
L_08A08E28:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26096)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(200));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A08E50u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08E50u) goto L_08A08E50;
    return;
L_08A08E50:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08E6C;
      }
      goto L_08A08E5C;
    }
L_08A08E5C:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08E70;
      }
      goto L_08A08E68;
    }
L_08A08E68:
    aot_gpr[16] = (0u | 1u);
    goto L_08A08E6C;
L_08A08E6C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08A08E70;
L_08A08E70:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08E84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26092)));
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A08F08;
      }
      goto L_08A08EAC;
    }
L_08A08EAC:
    aot_gpr[31] = (0x08A08EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A08EB4u) goto L_08A08EB4;
    return;
L_08A08EB4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A08EC0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 168u, 0x08A03A30u>(ctx, &aot_mem) && ctx.pc == 0x08A08EC0u) goto L_08A08EC0;
    return;
L_08A08EC0:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26096)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(192));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A08EE8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08EE8u) goto L_08A08EE8;
    return;
L_08A08EE8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08F04;
      }
      goto L_08A08EF4;
    }
L_08A08EF4:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[2] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A08F08;
      }
      goto L_08A08F00;
    }
L_08A08F00:
    aot_gpr[16] = (0u | 1u);
    goto L_08A08F04;
L_08A08F04:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08A08F08;
L_08A08F08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08F1C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08F24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-4712));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A08F50u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A08F50u) goto L_08A08F50;
    return;
L_08A08F50:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A08F60u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 158u, 0x08A3A7ECu>(ctx, &aot_mem) && ctx.pc == 0x08A08F60u) goto L_08A08F60;
    return;
L_08A08F60:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (0u | 1u);
        goto L_08A08F68;
    }
    goto L_08A08F68;
L_08A08F68:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A08F84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 39324u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A08FA8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 38u, 0x08A46210u>(ctx, &aot_mem) && ctx.pc == 0x08A08FA8u) goto L_08A08FA8;
    return;
L_08A08FA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A08FF8;
      }
      goto L_08A08FB0;
    }
L_08A08FB0:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26200)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A08FF8;
      }
      goto L_08A08FC0;
    }
L_08A08FC0:
    aot_gpr[31] = (0x08A08FC8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 30u, 0x08A4619Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08FC8u) goto L_08A08FC8;
    return;
L_08A08FC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26200)));
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08FF8;
      }
      goto L_08A08FD8;
    }
L_08A08FD8:
    aot_gpr[31] = (0x08A08FE0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08FE0u) goto L_08A08FE0;
    return;
L_08A08FE0:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08FF8:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A09000u; return;
}

void recomp_unit_0516(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0516_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_516(Runtime &runtime) {
    runtime.register_generated_unit(516u, 0x08A08000u, 4096u, &recomp_unit_0516, &recomp_unit_0516_entry);
    runtime.register_function(0x08A08004u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08044u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08050u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08054u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08064u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0806Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08074u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0807Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08084u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A080A4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A080C8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A080ECu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08124u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08138u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08154u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08160u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0816Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08178u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08184u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0818Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08194u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0819Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A081B4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A081D0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A081DCu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A081E4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A081ECu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A081F4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A081FCu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08204u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08244u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08278u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08288u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08298u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A082B8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A082D0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A082E4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08314u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08324u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0832Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08334u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0834Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08354u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0835Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0837Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A083A8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A083B8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A083D4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A083E0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A083ECu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08408u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08434u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08444u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08460u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0846Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08478u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08494u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A084C0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A084D0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A084D8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A084E0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A084ECu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A084F4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08500u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08518u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08528u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08530u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08538u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08554u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0855Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08594u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A085A0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A085C4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A085D0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A085D8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A085E0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A085ECu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08604u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0860Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0861Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08634u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08644u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0864Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0865Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08664u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08674u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08684u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08688u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08690u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0869Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A086BCu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0870Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08718u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08724u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08730u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08740u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08748u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08750u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0875Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0876Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08774u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08794u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0879Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A087ACu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A087C0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A087D0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A087F8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08800u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08814u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0881Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0882Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08854u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08868u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08890u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08898u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A088A0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A088A8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A088B0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A088D8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A088F0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A088F8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08904u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0890Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08914u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A0891Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08938u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08940u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08954u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08998u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A089A4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A089ACu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A089B4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A089C0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A089DCu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A089E8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08A04u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08A10u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08A30u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08A38u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08A48u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08A60u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08A6Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08A84u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08AA4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08AACu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08ABCu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08AD8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08AE4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08AECu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08AF4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B1Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B2Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B3Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B4Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B54u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B68u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B70u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B78u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B84u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B88u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08B9Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08BB8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08BC4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08BE8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08BF0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08BF8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C00u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C0Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C10u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C18u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C20u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C44u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C4Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C54u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C64u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C78u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08C80u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08CA0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08CB8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08CE4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08CECu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08CF8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D00u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D08u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D10u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D1Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D34u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D3Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D44u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D58u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D60u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D68u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D70u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D78u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D80u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08D98u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08DA0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08DA8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08DB0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08DCCu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08DECu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E14u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E1Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E28u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E50u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E5Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E68u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E6Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E70u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08E84u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08EACu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08EB4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08EC0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08EE8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08EF4u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F00u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F04u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F08u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F1Cu, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F24u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F50u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F60u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F68u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08F84u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08FA8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08FB0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08FC0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08FC8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08FD8u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08FE0u, &recomp_unit_0516, "recomp_unit_0516");
    runtime.register_function(0x08A08FF8u, &recomp_unit_0516, "recomp_unit_0516");
}
} // namespace psprecomp
