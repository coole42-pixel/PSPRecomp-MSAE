#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0593[1021] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0,
    0, 6, 7, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0,
    0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 22, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 28, 29,
    0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0,
    38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 44, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 50, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0,
    54, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 59, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 64, 0, 65, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 67, 68, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0,
    80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86,
    0, 0, 0, 0, 87, 88, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0,
    0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    107, 108, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 112, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0,
    122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 128, 0, 0,
    129, 0, 0, 0, 130, 0, 131, 0, 132, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0,
    154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 159, 0, 0, 160, 0,
    0, 0, 161, 0, 162, 0, 163, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184,
    0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 194,
    0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202,
    0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0,
    0, 211, 212, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0,
    0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 227, 0, 228,
};
void recomp_unit_0593_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A55000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0593[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A55000;
    case 2u: goto L_08A5501C;
    case 3u: goto L_08A5503C;
    case 4u: goto L_08A55064;
    case 5u: goto L_08A55070;
    case 6u: goto L_08A55084;
    case 7u: goto L_08A55088;
    case 8u: goto L_08A5509C;
    case 9u: goto L_08A550A4;
    case 10u: goto L_08A550AC;
    case 11u: goto L_08A550C0;
    case 12u: goto L_08A550D0;
    case 13u: goto L_08A550EC;
    case 14u: goto L_08A550F4;
    case 15u: goto L_08A55104;
    case 16u: goto L_08A5510C;
    case 17u: goto L_08A55114;
    case 18u: goto L_08A55130;
    case 19u: goto L_08A55144;
    case 20u: goto L_08A55154;
    case 21u: goto L_08A55164;
    case 22u: goto L_08A55168;
    case 23u: goto L_08A55170;
    case 24u: goto L_08A55190;
    case 25u: goto L_08A551B0;
    case 26u: goto L_08A551D8;
    case 27u: goto L_08A551E4;
    case 28u: goto L_08A551F8;
    case 29u: goto L_08A551FC;
    case 30u: goto L_08A55210;
    case 31u: goto L_08A55218;
    case 32u: goto L_08A55220;
    case 33u: goto L_08A55234;
    case 34u: goto L_08A55244;
    case 35u: goto L_08A55260;
    case 36u: goto L_08A55268;
    case 37u: goto L_08A55278;
    case 38u: goto L_08A55280;
    case 39u: goto L_08A55288;
    case 40u: goto L_08A552A4;
    case 41u: goto L_08A552B8;
    case 42u: goto L_08A552C8;
    case 43u: goto L_08A552D8;
    case 44u: goto L_08A552DC;
    case 45u: goto L_08A552E4;
    case 46u: goto L_08A55304;
    case 47u: goto L_08A55324;
    case 48u: goto L_08A5533C;
    case 49u: goto L_08A55350;
    case 50u: goto L_08A55354;
    case 51u: goto L_08A55360;
    case 52u: goto L_08A55370;
    case 53u: goto L_08A55378;
    case 54u: goto L_08A55380;
    case 55u: goto L_08A55384;
    case 56u: goto L_08A5538C;
    case 57u: goto L_08A553A4;
    case 58u: goto L_08A553B8;
    case 59u: goto L_08A553BC;
    case 60u: goto L_08A553C8;
    case 61u: goto L_08A553D8;
    case 62u: goto L_08A553E0;
    case 63u: goto L_08A553E8;
    case 64u: goto L_08A553EC;
    case 65u: goto L_08A553F4;
    case 66u: goto L_08A5540C;
    case 67u: goto L_08A55420;
    case 68u: goto L_08A55424;
    case 69u: goto L_08A55430;
    case 70u: goto L_08A55440;
    case 71u: goto L_08A55448;
    case 72u: goto L_08A55450;
    case 73u: goto L_08A55454;
    case 74u: goto L_08A5545C;
    case 75u: goto L_08A554BC;
    case 76u: goto L_08A554D0;
    case 77u: goto L_08A554D8;
    case 78u: goto L_08A554E0;
    case 79u: goto L_08A554F4;
    case 80u: goto L_08A55500;
    case 81u: goto L_08A55514;
    case 82u: goto L_08A55520;
    case 83u: goto L_08A55528;
    case 84u: goto L_08A55538;
    case 85u: goto L_08A55564;
    case 86u: goto L_08A5557C;
    case 87u: goto L_08A55590;
    case 88u: goto L_08A55594;
    case 89u: goto L_08A555A0;
    case 90u: goto L_08A555B0;
    case 91u: goto L_08A555B8;
    case 92u: goto L_08A555C0;
    case 93u: goto L_08A555C4;
    case 94u: goto L_08A555CC;
    case 95u: goto L_08A5562C;
    case 96u: goto L_08A55640;
    case 97u: goto L_08A55648;
    case 98u: goto L_08A55650;
    case 99u: goto L_08A55664;
    case 100u: goto L_08A55670;
    case 101u: goto L_08A55684;
    case 102u: goto L_08A55690;
    case 103u: goto L_08A55698;
    case 104u: goto L_08A556A8;
    case 105u: goto L_08A556D4;
    case 106u: goto L_08A556EC;
    case 107u: goto L_08A55700;
    case 108u: goto L_08A55704;
    case 109u: goto L_08A55710;
    case 110u: goto L_08A55720;
    case 111u: goto L_08A55728;
    case 112u: goto L_08A55730;
    case 113u: goto L_08A55734;
    case 114u: goto L_08A5573C;
    case 115u: goto L_08A5579C;
    case 116u: goto L_08A557B0;
    case 117u: goto L_08A557B8;
    case 118u: goto L_08A557C0;
    case 119u: goto L_08A557D4;
    case 120u: goto L_08A557E0;
    case 121u: goto L_08A557F4;
    case 122u: goto L_08A55800;
    case 123u: goto L_08A55808;
    case 124u: goto L_08A55818;
    case 125u: goto L_08A55844;
    case 126u: goto L_08A5585C;
    case 127u: goto L_08A55870;
    case 128u: goto L_08A55874;
    case 129u: goto L_08A55880;
    case 130u: goto L_08A55890;
    case 131u: goto L_08A55898;
    case 132u: goto L_08A558A0;
    case 133u: goto L_08A558A4;
    case 134u: goto L_08A558AC;
    case 135u: goto L_08A5590C;
    case 136u: goto L_08A55920;
    case 137u: goto L_08A55928;
    case 138u: goto L_08A55930;
    case 139u: goto L_08A55944;
    case 140u: goto L_08A55950;
    case 141u: goto L_08A55964;
    case 142u: goto L_08A55970;
    case 143u: goto L_08A55978;
    case 144u: goto L_08A55988;
    case 145u: goto L_08A559B4;
    case 146u: goto L_08A55A14;
    case 147u: goto L_08A55A28;
    case 148u: goto L_08A55A30;
    case 149u: goto L_08A55A38;
    case 150u: goto L_08A55A4C;
    case 151u: goto L_08A55A58;
    case 152u: goto L_08A55A6C;
    case 153u: goto L_08A55A78;
    case 154u: goto L_08A55A80;
    case 155u: goto L_08A55A90;
    case 156u: goto L_08A55ABC;
    case 157u: goto L_08A55AD4;
    case 158u: goto L_08A55AE8;
    case 159u: goto L_08A55AEC;
    case 160u: goto L_08A55AF8;
    case 161u: goto L_08A55B08;
    case 162u: goto L_08A55B10;
    case 163u: goto L_08A55B18;
    case 164u: goto L_08A55B1C;
    case 165u: goto L_08A55B24;
    case 166u: goto L_08A55B84;
    case 167u: goto L_08A55B98;
    case 168u: goto L_08A55BA0;
    case 169u: goto L_08A55BA8;
    case 170u: goto L_08A55BBC;
    case 171u: goto L_08A55BC8;
    case 172u: goto L_08A55BDC;
    case 173u: goto L_08A55BE8;
    case 174u: goto L_08A55BF0;
    case 175u: goto L_08A55C00;
    case 176u: goto L_08A55C2C;
    case 177u: goto L_08A55C44;
    case 178u: goto L_08A55CA4;
    case 179u: goto L_08A55CB8;
    case 180u: goto L_08A55CC0;
    case 181u: goto L_08A55CC8;
    case 182u: goto L_08A55CDC;
    case 183u: goto L_08A55CE8;
    case 184u: goto L_08A55CFC;
    case 185u: goto L_08A55D08;
    case 186u: goto L_08A55D10;
    case 187u: goto L_08A55D20;
    case 188u: goto L_08A55D4C;
    case 189u: goto L_08A55D64;
    case 190u: goto L_08A55DC4;
    case 191u: goto L_08A55DD8;
    case 192u: goto L_08A55DE0;
    case 193u: goto L_08A55DE8;
    case 194u: goto L_08A55DFC;
    case 195u: goto L_08A55E08;
    case 196u: goto L_08A55E1C;
    case 197u: goto L_08A55E28;
    case 198u: goto L_08A55E30;
    case 199u: goto L_08A55E40;
    case 200u: goto L_08A55E6C;
    case 201u: goto L_08A55E74;
    case 202u: goto L_08A55E7C;
    case 203u: goto L_08A55E84;
    case 204u: goto L_08A55E8C;
    case 205u: goto L_08A55E94;
    case 206u: goto L_08A55E9C;
    case 207u: goto L_08A55EAC;
    case 208u: goto L_08A55EBC;
    case 209u: goto L_08A55EE4;
    case 210u: goto L_08A55EF0;
    case 211u: goto L_08A55F04;
    case 212u: goto L_08A55F08;
    case 213u: goto L_08A55F1C;
    case 214u: goto L_08A55F24;
    case 215u: goto L_08A55F2C;
    case 216u: goto L_08A55F40;
    case 217u: goto L_08A55F50;
    case 218u: goto L_08A55F6C;
    case 219u: goto L_08A55F74;
    case 220u: goto L_08A55F84;
    case 221u: goto L_08A55F8C;
    case 222u: goto L_08A55F94;
    case 223u: goto L_08A55FB0;
    case 224u: goto L_08A55FC4;
    case 225u: goto L_08A55FD4;
    case 226u: goto L_08A55FE4;
    case 227u: goto L_08A55FE8;
    case 228u: goto L_08A55FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A55000:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A5501Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5501Cu) goto L_08A5501C;
    return;
L_08A5501C:
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
L_08A5503C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A55190;
      }
      goto L_08A55064;
    }
L_08A55064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A55168;
      }
      goto L_08A55070;
    }
L_08A55070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A55144;
      }
      goto L_08A55084;
    }
L_08A55084:
    aot_gpr[19] = (0u | 0u);
    goto L_08A55088;
L_08A55088:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55130;
      }
      goto L_08A5509C;
    }
L_08A5509C:
    aot_gpr[31] = (0x08A550A4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 112u, 0x08A54764u>(ctx, &aot_mem) && ctx.pc == 0x08A550A4u) goto L_08A550A4;
    return;
L_08A550A4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55130;
      }
      goto L_08A550AC;
    }
L_08A550AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A550F4;
      }
      goto L_08A550C0;
    }
L_08A550C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A55130;
      }
      goto L_08A550D0;
    }
L_08A550D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A550ECu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A550ECu) goto L_08A550EC;
    return;
L_08A550EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55130;
      }
      goto L_08A550F4;
    }
L_08A550F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5510C;
      }
      goto L_08A55104;
    }
L_08A55104:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A55130;
      }
      goto L_08A5510C;
    }
L_08A5510C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55130;
      }
      goto L_08A55114;
    }
L_08A55114:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A55130u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55130u) goto L_08A55130;
    return;
L_08A55130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55088;
      }
      goto L_08A55144;
    }
L_08A55144:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A55168;
      }
      goto L_08A55154;
    }
L_08A55154:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A55164u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A55164u) goto L_08A55164;
    return;
L_08A55164:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A55168;
L_08A55168:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A55190;
      }
      goto L_08A55170;
    }
L_08A55170:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A55190u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55190u) goto L_08A55190;
    return;
L_08A55190:
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
L_08A551B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A55304;
      }
      goto L_08A551D8;
    }
L_08A551D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A552DC;
      }
      goto L_08A551E4;
    }
L_08A551E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A552B8;
      }
      goto L_08A551F8;
    }
L_08A551F8:
    aot_gpr[19] = (0u | 0u);
    goto L_08A551FC;
L_08A551FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A552A4;
      }
      goto L_08A55210;
    }
L_08A55210:
    aot_gpr[31] = (0x08A55218u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 113u, 0x08A54774u>(ctx, &aot_mem) && ctx.pc == 0x08A55218u) goto L_08A55218;
    return;
L_08A55218:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A552A4;
      }
      goto L_08A55220;
    }
L_08A55220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A55268;
      }
      goto L_08A55234;
    }
L_08A55234:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A552A4;
      }
      goto L_08A55244;
    }
L_08A55244:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A55260u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55260u) goto L_08A55260;
    return;
L_08A55260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A552A4;
      }
      goto L_08A55268;
    }
L_08A55268:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55280;
      }
      goto L_08A55278;
    }
L_08A55278:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A552A4;
      }
      goto L_08A55280;
    }
L_08A55280:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A552A4;
      }
      goto L_08A55288;
    }
L_08A55288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A552A4u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A552A4u) goto L_08A552A4;
    return;
L_08A552A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A551FC;
      }
      goto L_08A552B8;
    }
L_08A552B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A552DC;
      }
      goto L_08A552C8;
    }
L_08A552C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A552D8u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A552D8u) goto L_08A552D8;
    return;
L_08A552D8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A552DC;
L_08A552DC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A55304;
      }
      goto L_08A552E4;
    }
L_08A552E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A55304u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55304u) goto L_08A55304;
    return;
L_08A55304:
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
L_08A55324:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5533C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55380;
      }
      goto L_08A55350;
    }
L_08A55350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A55354;
L_08A55354:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55378;
      }
      goto L_08A55360;
    }
L_08A55360:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55354;
      }
      goto L_08A55370;
    }
L_08A55370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55380;
      }
      goto L_08A55378;
    }
L_08A55378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55384;
      }
      goto L_08A55380;
    }
L_08A55380:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A55384;
L_08A55384:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5538C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A553A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A553E8;
      }
      goto L_08A553B8;
    }
L_08A553B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A553BC;
L_08A553BC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A553E0;
      }
      goto L_08A553C8;
    }
L_08A553C8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A553BC;
      }
      goto L_08A553D8;
    }
L_08A553D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A553E8;
      }
      goto L_08A553E0;
    }
L_08A553E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A553EC;
      }
      goto L_08A553E8;
    }
L_08A553E8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A553EC;
L_08A553EC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A553F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5540C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55450;
      }
      goto L_08A55420;
    }
L_08A55420:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A55424;
L_08A55424:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55448;
      }
      goto L_08A55430;
    }
L_08A55430:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55424;
      }
      goto L_08A55440;
    }
L_08A55440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55450;
      }
      goto L_08A55448;
    }
L_08A55448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55454;
      }
      goto L_08A55450;
    }
L_08A55450:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A55454;
L_08A55454:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5545C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55538;
      }
      goto L_08A554BC;
    }
L_08A554BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A554D0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 106u, 0x08A54704u>(ctx, &aot_mem) && ctx.pc == 0x08A554D0u) goto L_08A554D0;
    return;
L_08A554D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A554F4;
      }
      goto L_08A554D8;
    }
L_08A554D8:
    aot_gpr[31] = (0x08A554E0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A554E0u) goto L_08A554E0;
    return;
L_08A554E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55528;
      }
      goto L_08A554F4;
    }
L_08A554F4:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55520;
      }
      goto L_08A55500;
    }
L_08A55500:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A55514u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0308_entry, 308u, 70u, 0x089384E0u>(ctx, &aot_mem) && ctx.pc == 0x08A55514u) goto L_08A55514;
    return;
L_08A55514:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A55520;
L_08A55520:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A55528;
L_08A55528:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A554BC;
      }
      goto L_08A55538;
    }
L_08A55538:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A55564:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5557C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A555C0;
      }
      goto L_08A55590;
    }
L_08A55590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A55594;
L_08A55594:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A555B8;
      }
      goto L_08A555A0;
    }
L_08A555A0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55594;
      }
      goto L_08A555B0;
    }
L_08A555B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A555C0;
      }
      goto L_08A555B8;
    }
L_08A555B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A555C4;
      }
      goto L_08A555C0;
    }
L_08A555C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A555C4;
L_08A555C4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A555CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A556A8;
      }
      goto L_08A5562C;
    }
L_08A5562C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A55640u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 107u, 0x08A54714u>(ctx, &aot_mem) && ctx.pc == 0x08A55640u) goto L_08A55640;
    return;
L_08A55640:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55664;
      }
      goto L_08A55648;
    }
L_08A55648:
    aot_gpr[31] = (0x08A55650u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A55650u) goto L_08A55650;
    return;
L_08A55650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55698;
      }
      goto L_08A55664;
    }
L_08A55664:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55690;
      }
      goto L_08A55670;
    }
L_08A55670:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A55684u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0311_entry, 311u, 6u, 0x0893B088u>(ctx, &aot_mem) && ctx.pc == 0x08A55684u) goto L_08A55684;
    return;
L_08A55684:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A55690;
L_08A55690:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A55698;
L_08A55698:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5562C;
      }
      goto L_08A556A8;
    }
L_08A556A8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A556D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A556EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55730;
      }
      goto L_08A55700;
    }
L_08A55700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A55704;
L_08A55704:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55728;
      }
      goto L_08A55710;
    }
L_08A55710:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55704;
      }
      goto L_08A55720;
    }
L_08A55720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55730;
      }
      goto L_08A55728;
    }
L_08A55728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55734;
      }
      goto L_08A55730;
    }
L_08A55730:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A55734;
L_08A55734:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5573C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55818;
      }
      goto L_08A5579C;
    }
L_08A5579C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A557B0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 108u, 0x08A54724u>(ctx, &aot_mem) && ctx.pc == 0x08A557B0u) goto L_08A557B0;
    return;
L_08A557B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A557D4;
      }
      goto L_08A557B8;
    }
L_08A557B8:
    aot_gpr[31] = (0x08A557C0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A557C0u) goto L_08A557C0;
    return;
L_08A557C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55808;
      }
      goto L_08A557D4;
    }
L_08A557D4:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55800;
      }
      goto L_08A557E0;
    }
L_08A557E0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A557F4u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 7u, 0x089410B0u>(ctx, &aot_mem) && ctx.pc == 0x08A557F4u) goto L_08A557F4;
    return;
L_08A557F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A55800;
L_08A55800:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A55808;
L_08A55808:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5579C;
      }
      goto L_08A55818;
    }
L_08A55818:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A55844:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5585C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A558A0;
      }
      goto L_08A55870;
    }
L_08A55870:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A55874;
L_08A55874:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55898;
      }
      goto L_08A55880;
    }
L_08A55880:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55874;
      }
      goto L_08A55890;
    }
L_08A55890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A558A0;
      }
      goto L_08A55898;
    }
L_08A55898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A558A4;
      }
      goto L_08A558A0;
    }
L_08A558A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A558A4;
L_08A558A4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A558AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55988;
      }
      goto L_08A5590C;
    }
L_08A5590C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A55920u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 109u, 0x08A54734u>(ctx, &aot_mem) && ctx.pc == 0x08A55920u) goto L_08A55920;
    return;
L_08A55920:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55944;
      }
      goto L_08A55928;
    }
L_08A55928:
    aot_gpr[31] = (0x08A55930u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A55930u) goto L_08A55930;
    return;
L_08A55930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55978;
      }
      goto L_08A55944;
    }
L_08A55944:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55970;
      }
      goto L_08A55950;
    }
L_08A55950:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A55964u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 112u, 0x08941DD8u>(ctx, &aot_mem) && ctx.pc == 0x08A55964u) goto L_08A55964;
    return;
L_08A55964:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A55970;
L_08A55970:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A55978;
L_08A55978:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A5590C;
      }
      goto L_08A55988;
    }
L_08A55988:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A559B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55A90;
      }
      goto L_08A55A14;
    }
L_08A55A14:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A55A28u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 110u, 0x08A54744u>(ctx, &aot_mem) && ctx.pc == 0x08A55A28u) goto L_08A55A28;
    return;
L_08A55A28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55A4C;
      }
      goto L_08A55A30;
    }
L_08A55A30:
    aot_gpr[31] = (0x08A55A38u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A55A38u) goto L_08A55A38;
    return;
L_08A55A38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55A80;
      }
      goto L_08A55A4C;
    }
L_08A55A4C:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55A78;
      }
      goto L_08A55A58;
    }
L_08A55A58:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A55A6Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0311_entry, 311u, 60u, 0x0893B544u>(ctx, &aot_mem) && ctx.pc == 0x08A55A6Cu) goto L_08A55A6C;
    return;
L_08A55A6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A55A78;
L_08A55A78:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A55A80;
L_08A55A80:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55A14;
      }
      goto L_08A55A90;
    }
L_08A55A90:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A55ABC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55AD4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55B18;
      }
      goto L_08A55AE8;
    }
L_08A55AE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A55AEC;
L_08A55AEC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55B10;
      }
      goto L_08A55AF8;
    }
L_08A55AF8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55AEC;
      }
      goto L_08A55B08;
    }
L_08A55B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55B18;
      }
      goto L_08A55B10;
    }
L_08A55B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55B1C;
      }
      goto L_08A55B18;
    }
L_08A55B18:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A55B1C;
L_08A55B1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55B24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55C00;
      }
      goto L_08A55B84;
    }
L_08A55B84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A55B98u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 111u, 0x08A54754u>(ctx, &aot_mem) && ctx.pc == 0x08A55B98u) goto L_08A55B98;
    return;
L_08A55B98:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55BBC;
      }
      goto L_08A55BA0;
    }
L_08A55BA0:
    aot_gpr[31] = (0x08A55BA8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A55BA8u) goto L_08A55BA8;
    return;
L_08A55BA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55BF0;
      }
      goto L_08A55BBC;
    }
L_08A55BBC:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55BE8;
      }
      goto L_08A55BC8;
    }
L_08A55BC8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A55BDCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 205u, 0x08922F14u>(ctx, &aot_mem) && ctx.pc == 0x08A55BDCu) goto L_08A55BDC;
    return;
L_08A55BDC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A55BE8;
L_08A55BE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A55BF0;
L_08A55BF0:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55B84;
      }
      goto L_08A55C00;
    }
L_08A55C00:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A55C2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55C44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55D20;
      }
      goto L_08A55CA4;
    }
L_08A55CA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A55CB8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 112u, 0x08A54764u>(ctx, &aot_mem) && ctx.pc == 0x08A55CB8u) goto L_08A55CB8;
    return;
L_08A55CB8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55CDC;
      }
      goto L_08A55CC0;
    }
L_08A55CC0:
    aot_gpr[31] = (0x08A55CC8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A55CC8u) goto L_08A55CC8;
    return;
L_08A55CC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55D10;
      }
      goto L_08A55CDC;
    }
L_08A55CDC:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55D08;
      }
      goto L_08A55CE8;
    }
L_08A55CE8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A55CFCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 57u, 0x08945B68u>(ctx, &aot_mem) && ctx.pc == 0x08A55CFCu) goto L_08A55CFC;
    return;
L_08A55CFC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A55D08;
L_08A55D08:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A55D10;
L_08A55D10:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55CA4;
      }
      goto L_08A55D20;
    }
L_08A55D20:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A55D4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55D64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[20] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55E40;
      }
      goto L_08A55DC4;
    }
L_08A55DC4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A55DD8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 113u, 0x08A54774u>(ctx, &aot_mem) && ctx.pc == 0x08A55DD8u) goto L_08A55DD8;
    return;
L_08A55DD8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55DFC;
      }
      goto L_08A55DE0;
    }
L_08A55DE0:
    aot_gpr[31] = (0x08A55DE8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 25u, 0x0891C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A55DE8u) goto L_08A55DE8;
    return;
L_08A55DE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55E30;
      }
      goto L_08A55DFC;
    }
L_08A55DFC:
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55E28;
      }
      goto L_08A55E08;
    }
L_08A55E08:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A55E1Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0287_entry, 287u, 57u, 0x089233A4u>(ctx, &aot_mem) && ctx.pc == 0x08A55E1Cu) goto L_08A55E1C;
    return;
L_08A55E1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[21]);
    goto L_08A55E28;
L_08A55E28:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A55E30;
L_08A55E30:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55DC4;
      }
      goto L_08A55E40;
    }
L_08A55E40:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A55E6C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55E74:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55E7C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55E84:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55E8C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55E94:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55E9C:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55EAC:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[2] = (aot_gpr[4] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55EBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 2u, 0x08A56010u>(ctx, &aot_mem); return;
      }
      goto L_08A55EE4;
    }
L_08A55EE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A55FE8;
      }
      goto L_08A55EF0;
    }
L_08A55EF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A55FC4;
      }
      goto L_08A55F04;
    }
L_08A55F04:
    aot_gpr[19] = (0u | 0u);
    goto L_08A55F08;
L_08A55F08:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FB0;
      }
      goto L_08A55F1C;
    }
L_08A55F1C:
    aot_gpr[31] = (0x08A55F24u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    goto L_08A55EAC;
L_08A55F24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FB0;
      }
      goto L_08A55F2C;
    }
L_08A55F2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A55F74;
      }
      goto L_08A55F40;
    }
L_08A55F40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A55FB0;
      }
      goto L_08A55F50;
    }
L_08A55F50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A55F6Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55F6Cu) goto L_08A55F6C;
    return;
L_08A55F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FB0;
      }
      goto L_08A55F74;
    }
L_08A55F74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55F8C;
      }
      goto L_08A55F84;
    }
L_08A55F84:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A55FB0;
      }
      goto L_08A55F8C;
    }
L_08A55F8C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FB0;
      }
      goto L_08A55F94;
    }
L_08A55F94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A55FB0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A55FB0u) goto L_08A55FB0;
    return;
L_08A55FB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A55F08;
      }
      goto L_08A55FC4;
    }
L_08A55FC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A55FE8;
      }
      goto L_08A55FD4;
    }
L_08A55FD4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08A55FE4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08A55FE4u) goto L_08A55FE4;
    return;
L_08A55FE4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A55FE8;
L_08A55FE8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0594_entry, 594u, 2u, 0x08A56010u>(ctx, &aot_mem); return;
      }
      goto L_08A55FF0;
    }
L_08A55FF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    ctx.pc = 0x08A56000u; return;
}

void recomp_unit_0593(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0593_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_593(Runtime &runtime) {
    runtime.register_generated_unit(593u, 0x08A55000u, 4096u, &recomp_unit_0593, &recomp_unit_0593_entry);
    runtime.register_function(0x08A55000u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5501Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5503Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55064u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55070u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55084u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55088u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5509Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A550A4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A550ACu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A550C0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A550D0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A550ECu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A550F4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55104u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5510Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55114u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55130u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55144u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55154u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55164u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55168u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55170u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55190u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A551B0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A551D8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A551E4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A551F8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A551FCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55210u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55218u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55220u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55234u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55244u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55260u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55268u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55278u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55280u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55288u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A552A4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A552B8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A552C8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A552D8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A552DCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A552E4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55304u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55324u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5533Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55350u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55354u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55360u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55370u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55378u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55380u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55384u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5538Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553A4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553B8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553BCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553C8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553D8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553E0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553E8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553ECu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A553F4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5540Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55420u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55424u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55430u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55440u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55448u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55450u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55454u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5545Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A554BCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A554D0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A554D8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A554E0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A554F4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55500u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55514u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55520u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55528u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55538u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55564u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5557Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55590u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55594u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A555A0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A555B0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A555B8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A555C0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A555C4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A555CCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5562Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55640u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55648u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55650u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55664u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55670u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55684u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55690u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55698u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A556A8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A556D4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A556ECu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55700u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55704u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55710u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55720u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55728u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55730u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55734u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5573Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5579Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A557B0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A557B8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A557C0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A557D4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A557E0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A557F4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55800u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55808u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55818u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55844u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5585Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55870u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55874u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55880u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55890u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55898u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A558A0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A558A4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A558ACu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A5590Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55920u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55928u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55930u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55944u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55950u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55964u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55970u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55978u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55988u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A559B4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A14u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A28u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A30u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A38u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A4Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A58u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A6Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A78u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A80u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55A90u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55ABCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55AD4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55AE8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55AECu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55AF8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55B08u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55B10u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55B18u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55B1Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55B24u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55B84u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55B98u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55BA0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55BA8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55BBCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55BC8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55BDCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55BE8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55BF0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55C00u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55C2Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55C44u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55CA4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55CB8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55CC0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55CC8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55CDCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55CE8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55CFCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55D08u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55D10u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55D20u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55D4Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55D64u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55DC4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55DD8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55DE0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55DE8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55DFCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E08u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E1Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E28u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E30u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E40u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E6Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E74u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E7Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E84u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E8Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E94u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55E9Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55EACu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55EBCu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55EE4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55EF0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F04u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F08u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F1Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F24u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F2Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F40u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F50u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F6Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F74u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F84u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F8Cu, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55F94u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55FB0u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55FC4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55FD4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55FE4u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55FE8u, &recomp_unit_0593, "recomp_unit_0593");
    runtime.register_function(0x08A55FF0u, &recomp_unit_0593, "recomp_unit_0593");
}
} // namespace psprecomp
