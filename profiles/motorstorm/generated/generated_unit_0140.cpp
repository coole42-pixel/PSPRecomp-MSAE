#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0140[1010] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 13, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 19, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0,
    0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0,
    44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 47, 0, 48, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 54, 0, 0, 55,
    0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0,
    64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 69, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76,
    0, 0, 77, 0, 78, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 86, 0, 0, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 0, 0, 93, 0, 94, 0, 0,
    0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103,
    0, 104, 0, 105, 0, 0, 106, 0, 0, 107, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0,
    115, 0, 116, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 124, 0, 0, 0, 0, 0,
    125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134,
    0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    141, 0, 142, 0, 143, 0, 144, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0,
    156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 162, 163, 0, 164, 0, 165, 0, 0, 166, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185,
    0, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0,
    0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205,
    0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0,
    215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233,
    0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0,
    0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251,
    0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
};
void recomp_unit_0140_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08890000u;
        entry_id = (entry_delta < 4040u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0140[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08890000;
    case 2u: goto L_0889005C;
    case 3u: goto L_08890064;
    case 4u: goto L_088900D8;
    case 5u: goto L_088900EC;
    case 6u: goto L_0889011C;
    case 7u: goto L_0889013C;
    case 8u: goto L_0889014C;
    case 9u: goto L_08890158;
    case 10u: goto L_08890170;
    case 11u: goto L_08890184;
    case 12u: goto L_088901A8;
    case 13u: goto L_088901AC;
    case 14u: goto L_088901B8;
    case 15u: goto L_088901C4;
    case 16u: goto L_088901CC;
    case 17u: goto L_088901DC;
    case 18u: goto L_088901E4;
    case 19u: goto L_088901E8;
    case 20u: goto L_08890200;
    case 21u: goto L_08890238;
    case 22u: goto L_08890250;
    case 23u: goto L_08890254;
    case 24u: goto L_0889025C;
    case 25u: goto L_08890264;
    case 26u: goto L_0889026C;
    case 27u: goto L_08890278;
    case 28u: goto L_08890288;
    case 29u: goto L_08890290;
    case 30u: goto L_08890298;
    case 31u: goto L_088902C0;
    case 32u: goto L_088902E8;
    case 33u: goto L_088902F0;
    case 34u: goto L_08890318;
    case 35u: goto L_0889032C;
    case 36u: goto L_08890398;
    case 37u: goto L_088903A4;
    case 38u: goto L_088903A8;
    case 39u: goto L_088903B4;
    case 40u: goto L_088903C4;
    case 41u: goto L_088903D8;
    case 42u: goto L_088903E8;
    case 43u: goto L_088903F8;
    case 44u: goto L_08890400;
    case 45u: goto L_0889041C;
    case 46u: goto L_08890424;
    case 47u: goto L_08890428;
    case 48u: goto L_08890430;
    case 49u: goto L_08890434;
    case 50u: goto L_0889043C;
    case 51u: goto L_08890458;
    case 52u: goto L_08890460;
    case 53u: goto L_0889046C;
    case 54u: goto L_08890470;
    case 55u: goto L_0889047C;
    case 56u: goto L_08890488;
    case 57u: goto L_08890490;
    case 58u: goto L_08890498;
    case 59u: goto L_088904B0;
    case 60u: goto L_088904D4;
    case 61u: goto L_088904E0;
    case 62u: goto L_088904E8;
    case 63u: goto L_088904F0;
    case 64u: goto L_08890500;
    case 65u: goto L_08890508;
    case 66u: goto L_08890510;
    case 67u: goto L_08890518;
    case 68u: goto L_08890520;
    case 69u: goto L_0889052C;
    case 70u: goto L_08890530;
    case 71u: goto L_0889053C;
    case 72u: goto L_08890548;
    case 73u: goto L_08890554;
    case 74u: goto L_0889055C;
    case 75u: goto L_08890574;
    case 76u: goto L_0889057C;
    case 77u: goto L_08890588;
    case 78u: goto L_08890590;
    case 79u: goto L_08890594;
    case 80u: goto L_088905A8;
    case 81u: goto L_088905B0;
    case 82u: goto L_088905BC;
    case 83u: goto L_088905C4;
    case 84u: goto L_088905D8;
    case 85u: goto L_088905EC;
    case 86u: goto L_088905F0;
    case 87u: goto L_08890608;
    case 88u: goto L_08890620;
    case 89u: goto L_08890628;
    case 90u: goto L_08890638;
    case 91u: goto L_08890658;
    case 92u: goto L_0889065C;
    case 93u: goto L_0889066C;
    case 94u: goto L_08890674;
    case 95u: goto L_08890684;
    case 96u: goto L_0889068C;
    case 97u: goto L_088906A4;
    case 98u: goto L_088906C8;
    case 99u: goto L_088906D4;
    case 100u: goto L_088906DC;
    case 101u: goto L_088906E4;
    case 102u: goto L_088906F4;
    case 103u: goto L_088906FC;
    case 104u: goto L_08890704;
    case 105u: goto L_0889070C;
    case 106u: goto L_08890718;
    case 107u: goto L_08890724;
    case 108u: goto L_08890728;
    case 109u: goto L_08890734;
    case 110u: goto L_08890740;
    case 111u: goto L_0889074C;
    case 112u: goto L_08890754;
    case 113u: goto L_0889076C;
    case 114u: goto L_08890774;
    case 115u: goto L_08890780;
    case 116u: goto L_08890788;
    case 117u: goto L_0889078C;
    case 118u: goto L_088907A0;
    case 119u: goto L_088907A8;
    case 120u: goto L_088907B4;
    case 121u: goto L_088907BC;
    case 122u: goto L_088907D0;
    case 123u: goto L_088907E4;
    case 124u: goto L_088907E8;
    case 125u: goto L_08890800;
    case 126u: goto L_0889080C;
    case 127u: goto L_08890818;
    case 128u: goto L_08890828;
    case 129u: goto L_08890848;
    case 130u: goto L_0889084C;
    case 131u: goto L_0889085C;
    case 132u: goto L_08890864;
    case 133u: goto L_08890874;
    case 134u: goto L_0889087C;
    case 135u: goto L_08890894;
    case 136u: goto L_088908A0;
    case 137u: goto L_088908B4;
    case 138u: goto L_088908C8;
    case 139u: goto L_088908D4;
    case 140u: goto L_088908E8;
    case 141u: goto L_08890900;
    case 142u: goto L_08890908;
    case 143u: goto L_08890910;
    case 144u: goto L_08890918;
    case 145u: goto L_0889091C;
    case 146u: goto L_08890958;
    case 147u: goto L_08890960;
    case 148u: goto L_08890970;
    case 149u: goto L_08890978;
    case 150u: goto L_08890990;
    case 151u: goto L_088909B4;
    case 152u: goto L_088909C0;
    case 153u: goto L_088909CC;
    case 154u: goto L_088909E0;
    case 155u: goto L_088909F4;
    case 156u: goto L_08890A00;
    case 157u: goto L_08890A14;
    case 158u: goto L_08890A28;
    case 159u: goto L_08890A40;
    case 160u: goto L_08890A48;
    case 161u: goto L_08890A50;
    case 162u: goto L_08890A58;
    case 163u: goto L_08890A5C;
    case 164u: goto L_08890A64;
    case 165u: goto L_08890A6C;
    case 166u: goto L_08890A78;
    case 167u: goto L_08890A7C;
    case 168u: goto L_08890ABC;
    case 169u: goto L_08890AC4;
    case 170u: goto L_08890AD4;
    case 171u: goto L_08890ADC;
    case 172u: goto L_08890B1C;
    case 173u: goto L_08890B7C;
    case 174u: goto L_08890B88;
    case 175u: goto L_08890B90;
    case 176u: goto L_08890B98;
    case 177u: goto L_08890BA0;
    case 178u: goto L_08890BA8;
    case 179u: goto L_08890BB0;
    case 180u: goto L_08890BB8;
    case 181u: goto L_08890BC0;
    case 182u: goto L_08890BC8;
    case 183u: goto L_08890BD8;
    case 184u: goto L_08890BF0;
    case 185u: goto L_08890BFC;
    case 186u: goto L_08890C08;
    case 187u: goto L_08890C10;
    case 188u: goto L_08890C18;
    case 189u: goto L_08890C24;
    case 190u: goto L_08890C34;
    case 191u: goto L_08890C3C;
    case 192u: goto L_08890C48;
    case 193u: goto L_08890C54;
    case 194u: goto L_08890C60;
    case 195u: goto L_08890C6C;
    case 196u: goto L_08890C78;
    case 197u: goto L_08890C8C;
    case 198u: goto L_08890C94;
    case 199u: goto L_08890CA8;
    case 200u: goto L_08890CB0;
    case 201u: goto L_08890CC4;
    case 202u: goto L_08890CCC;
    case 203u: goto L_08890CE0;
    case 204u: goto L_08890CE8;
    case 205u: goto L_08890CFC;
    case 206u: goto L_08890D04;
    case 207u: goto L_08890D18;
    case 208u: goto L_08890D20;
    case 209u: goto L_08890D30;
    case 210u: goto L_08890D3C;
    case 211u: goto L_08890D4C;
    case 212u: goto L_08890D5C;
    case 213u: goto L_08890D64;
    case 214u: goto L_08890D74;
    case 215u: goto L_08890D80;
    case 216u: goto L_08890D90;
    case 217u: goto L_08890DA0;
    case 218u: goto L_08890DA8;
    case 219u: goto L_08890DB4;
    case 220u: goto L_08890DC0;
    case 221u: goto L_08890DD4;
    case 222u: goto L_08890DE0;
    case 223u: goto L_08890DF0;
    case 224u: goto L_08890E00;
    case 225u: goto L_08890E08;
    case 226u: goto L_08890E14;
    case 227u: goto L_08890E20;
    case 228u: goto L_08890E34;
    case 229u: goto L_08890E40;
    case 230u: goto L_08890E50;
    case 231u: goto L_08890E60;
    case 232u: goto L_08890E68;
    case 233u: goto L_08890E7C;
    case 234u: goto L_08890E8C;
    case 235u: goto L_08890E94;
    case 236u: goto L_08890EA8;
    case 237u: goto L_08890EB8;
    case 238u: goto L_08890EC0;
    case 239u: goto L_08890ED4;
    case 240u: goto L_08890EE4;
    case 241u: goto L_08890EEC;
    case 242u: goto L_08890EF8;
    case 243u: goto L_08890F04;
    case 244u: goto L_08890F10;
    case 245u: goto L_08890F20;
    case 246u: goto L_08890F34;
    case 247u: goto L_08890F3C;
    case 248u: goto L_08890F48;
    case 249u: goto L_08890F54;
    case 250u: goto L_08890F6C;
    case 251u: goto L_08890F7C;
    case 252u: goto L_08890F90;
    case 253u: goto L_08890F98;
    case 254u: goto L_08890FC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08890000:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088900EC;
      }
      goto L_0889005C;
    }
L_0889005C:
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(56));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08890064;
L_08890064:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(70)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(69)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088900D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 102u, 0x0888FDD4u>(ctx, &aot_mem) && ctx.pc == 0x088900D8u) goto L_088900D8;
    return;
L_088900D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(60)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08890064;
    }
    goto L_088900EC;
L_088900EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889011C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889014C;
      }
      goto L_0889013C;
    }
L_0889013C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0889014Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 9u, 0x0891F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0889014Cu) goto L_0889014C;
    return;
L_0889014C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08890158:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08890170u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890170u) goto L_08890170;
    return;
L_08890170:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08890184:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088901E4;
      }
      goto L_088901A8;
    }
L_088901A8:
    aot_gpr[18] = (0u | 54u);
    goto L_088901AC;
L_088901AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_088901CC;
      }
      goto L_088901B8;
    }
L_088901B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_088901CC;
      }
      goto L_088901C4;
    }
L_088901C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088901E8;
      }
      goto L_088901CC;
    }
L_088901CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088901DCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 26u, 0x088942BCu>(ctx, &aot_mem) && ctx.pc == 0x088901DCu) goto L_088901DC;
    return;
L_088901DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088901AC;
      }
      goto L_088901E4;
    }
L_088901E4:
    aot_gpr[2] = (0u | 0u);
    goto L_088901E8;
L_088901E8:
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
L_08890200:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (8192u << 16u);
    aot_gpr[7] = (aot_gpr[6] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[7] & 255u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-6996)));
      if (branch_taken) {
          goto L_08890254;
      }
      goto L_08890238;
    }
L_08890238:
    aot_gpr[8] = (32u << 16u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[8]);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08890254;
      }
      goto L_08890250;
    }
L_08890250:
    aot_gpr[5] = (0u | 0u);
    goto L_08890254;
L_08890254:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890318;
      }
      goto L_0889025C;
    }
L_0889025C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890318;
      }
      goto L_08890264;
    }
L_08890264:
    aot_gpr[31] = (0x0889026Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08890184;
L_0889026C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08890290;
    }
    goto L_08890278;
L_08890278:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08890288u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 223u, 0x08893E94u>(ctx, &aot_mem) && ctx.pc == 0x08890288u) goto L_08890288;
    return;
L_08890288:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08890290;
      }
      goto L_08890290;
    }
L_08890290:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_08890318;
      }
      goto L_08890298;
    }
L_08890298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] << 4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(6))))));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-6996)));
      if (branch_taken) {
          goto L_088902F0;
      }
      goto L_088902C0;
    }
L_088902C0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x088902E8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[9]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088902E8u) goto L_088902E8;
    return;
L_088902E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890318;
      }
      goto L_088902F0;
    }
L_088902F0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08890318u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08890318u) goto L_08890318;
    return;
L_08890318:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889032C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[26]));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[10] | 0u);
    aot_gpr[23] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x08890398u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890398u) goto L_08890398;
    return;
L_08890398:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088903A8;
      }
      goto L_088903A4;
    }
L_088903A4:
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088903A8;
L_088903A8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088903B4u);
    aot_gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088903B4u) goto L_088903B4;
    return;
L_088903B4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088903C4u);
    aot_gpr[5] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088903C4u) goto L_088903C4;
    return;
L_088903C4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088903D8u);
    aot_gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088903D8u) goto L_088903D8;
    return;
L_088903D8:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088903E8u);
    aot_gpr[5] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088903E8u) goto L_088903E8;
    return;
L_088903E8:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088903F8u);
    aot_gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088903F8u) goto L_088903F8;
    return;
L_088903F8:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08890424;
      }
      goto L_08890400;
    }
L_08890400:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08890428;
      }
      goto L_0889041C;
    }
L_0889041C:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08890434;
      }
      goto L_08890424;
    }
L_08890424:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08890428;
L_08890428:
    aot_gpr[31] = (0x08890430u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 39u, 0x0888D26Cu>(ctx, &aot_mem) && ctx.pc == 0x08890430u) goto L_08890430;
    return;
L_08890430:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08890434;
L_08890434:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08890460;
      }
      goto L_0889043C;
    }
L_0889043C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08890460;
      }
      goto L_08890458;
    }
L_08890458:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08890470;
      }
      goto L_08890460;
    }
L_08890460:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0889046Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 61u, 0x0888D3F8u>(ctx, &aot_mem) && ctx.pc == 0x0889046Cu) goto L_0889046C;
    return;
L_0889046C:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08890470;
L_08890470:
    aot_gpr[4] = (1u << 16u);
    { const bool branch_taken = aot_gpr[30] == aot_gpr[4];
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08890978;
      }
      goto L_0889047C;
    }
L_0889047C:
    aot_gpr[4] = (0u | 32768u);
    { const bool branch_taken = aot_gpr[30] == aot_gpr[4];
    aot_gpr[4] = (0u | 16384u);
      if (branch_taken) {
          goto L_0889087C;
      }
      goto L_08890488;
    }
L_08890488:
    { const bool branch_taken = aot_gpr[30] == aot_gpr[4];
    aot_gpr[4] = (0u | 8192u);
      if (branch_taken) {
          goto L_0889068C;
      }
      goto L_08890490;
    }
L_08890490:
    { const bool branch_taken = aot_gpr[30] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08890ADC;
      }
      goto L_08890498;
    }
L_08890498:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088904E8;
      }
      goto L_088904B0;
    }
L_088904B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[26] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[26] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[26])));
      if (branch_taken) {
          goto L_088904E0;
      }
      goto L_088904D4;
    }
L_088904D4:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[26] = aot_fpr[26] + aot_fpr[13];
    goto L_088904E0;
L_088904E0:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[26] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_088905F0;
      }
      goto L_088904E8;
    }
L_088904E8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08890500;
      }
      goto L_088904F0;
    }
L_088904F0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_08890510;
      }
      goto L_08890500;
    }
L_08890500:
    aot_gpr[31] = (0x08890508u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 39u, 0x0888D26Cu>(ctx, &aot_mem) && ctx.pc == 0x08890508u) goto L_08890508;
    return;
L_08890508:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    goto L_08890510;
L_08890510:
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08890520;
      }
      goto L_08890518;
    }
L_08890518:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08890530;
      }
      goto L_08890520;
    }
L_08890520:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889052Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 61u, 0x0888D3F8u>(ctx, &aot_mem) && ctx.pc == 0x0889052Cu) goto L_0889052C;
    return;
L_0889052C:
    aot_fpr[26] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08890530;
L_08890530:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0889053Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 29u, 0x0888C174u>(ctx, &aot_mem) && ctx.pc == 0x0889053Cu) goto L_0889053C;
    return;
L_0889053C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088905EC;
      }
      goto L_08890548;
    }
L_08890548:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890554u);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890554u) goto L_08890554;
    return;
L_08890554:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088905EC;
      }
      goto L_0889055C;
    }
L_0889055C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08890594;
    }
    goto L_08890574;
L_08890574:
    aot_gpr[31] = (0x0889057Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0889057Cu) goto L_0889057C;
    return;
L_0889057C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08890588u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 95u, 0x0888C570u>(ctx, &aot_mem) && ctx.pc == 0x08890588u) goto L_08890588;
    return;
L_08890588:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088905C4;
      }
      goto L_08890590;
    }
L_08890590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08890594;
L_08890594:
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088905D8;
      }
      goto L_088905A8;
    }
L_088905A8:
    aot_gpr[31] = (0x088905B0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x088905B0u) goto L_088905B0;
    return;
L_088905B0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088905BCu);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 95u, 0x0888C570u>(ctx, &aot_mem) && ctx.pc == 0x088905BCu) goto L_088905BC;
    return;
L_088905BC:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088905D8;
      }
      goto L_088905C4;
    }
L_088905C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088905EC;
      }
      goto L_088905D8;
    }
L_088905D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088905EC;
L_088905EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088905F0;
L_088905F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    aot_fpr[20] = aot_fpr[24] + aot_fpr[20];
        goto L_08890620;
    }
    goto L_08890608;
L_08890608:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[20] + aot_fpr[12];
    aot_fpr[20] = aot_fpr[12] + aot_fpr[24];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[13] - aot_fpr[20];
      if (branch_taken) {
          goto L_08890628;
      }
      goto L_08890620;
    }
L_08890620:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[20] = aot_fpr[12] - aot_fpr[20];
    goto L_08890628;
L_08890628:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08890658;
      }
      goto L_08890638;
    }
L_08890638:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[26]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[22] = aot_fpr[14] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = aot_fpr[13] + aot_fpr[22];
      if (branch_taken) {
          goto L_0889065C;
      }
      goto L_08890658;
    }
L_08890658:
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    goto L_0889065C;
L_0889065C:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889066Cu);
    aot_gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 252u, 0x0888BF9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889066Cu) goto L_0889066C;
    return;
L_0889066C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890684;
      }
      goto L_08890674;
    }
L_08890674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08890684;
L_08890684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890ADC;
      }
      goto L_0889068C;
    }
L_0889068C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088906DC;
      }
      goto L_088906A4;
    }
L_088906A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[20] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[20])));
      if (branch_taken) {
          goto L_088906D4;
      }
      goto L_088906C8;
    }
L_088906C8:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[20] = aot_fpr[20] + aot_fpr[13];
    goto L_088906D4;
L_088906D4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[20] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088907E8;
      }
      goto L_088906DC;
    }
L_088906DC:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088906F4;
      }
      goto L_088906E4;
    }
L_088906E4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_08890704;
      }
      goto L_088906F4;
    }
L_088906F4:
    aot_gpr[31] = (0x088906FCu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 39u, 0x0888D26Cu>(ctx, &aot_mem) && ctx.pc == 0x088906FCu) goto L_088906FC;
    return;
L_088906FC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[0];
    goto L_08890704;
L_08890704:
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08890718;
      }
      goto L_0889070C;
    }
L_0889070C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = aot_fpr[26] + aot_fpr[20];
      if (branch_taken) {
          goto L_08890728;
      }
      goto L_08890718;
    }
L_08890718:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890724u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 61u, 0x0888D3F8u>(ctx, &aot_mem) && ctx.pc == 0x08890724u) goto L_08890724;
    return;
L_08890724:
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08890728;
L_08890728:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08890734u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 29u, 0x0888C174u>(ctx, &aot_mem) && ctx.pc == 0x08890734u) goto L_08890734;
    return;
L_08890734:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088907E4;
      }
      goto L_08890740;
    }
L_08890740:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889074Cu);
    aot_gpr[5] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x0889074Cu) goto L_0889074C;
    return;
L_0889074C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088907E4;
      }
      goto L_08890754;
    }
L_08890754:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0889078C;
    }
    goto L_0889076C;
L_0889076C:
    aot_gpr[31] = (0x08890774u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08890774u) goto L_08890774;
    return;
L_08890774:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08890780u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x08890780u) goto L_08890780;
    return;
L_08890780:
    { const bool branch_taken = aot_gpr[17] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088907BC;
      }
      goto L_08890788;
    }
L_08890788:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0889078C;
L_0889078C:
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088907D0;
      }
      goto L_088907A0;
    }
L_088907A0:
    aot_gpr[31] = (0x088907A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 91u, 0x0888C524u>(ctx, &aot_mem) && ctx.pc == 0x088907A8u) goto L_088907A8;
    return;
L_088907A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088907B4u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 95u, 0x0888C570u>(ctx, &aot_mem) && ctx.pc == 0x088907B4u) goto L_088907B4;
    return;
L_088907B4:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_088907D0;
      }
      goto L_088907BC;
    }
L_088907BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088907E4;
      }
      goto L_088907D0;
    }
L_088907D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088907E4;
L_088907E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088907E8;
L_088907E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0889080C;
    }
    goto L_08890800;
L_08890800:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[24] = aot_fpr[12] + aot_fpr[24];
      if (branch_taken) {
          goto L_08890818;
      }
      goto L_0889080C;
    }
L_0889080C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[24] = aot_fpr[12] + aot_fpr[24];
    aot_fpr[24] = aot_fpr[24] + aot_fpr[13];
    goto L_08890818;
L_08890818:
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_08890848;
      }
      goto L_08890828;
    }
L_08890828:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr[22]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[22] = aot_fpr[14] - aot_fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = aot_fpr[13] + aot_fpr[22];
      if (branch_taken) {
          goto L_0889084C;
      }
      goto L_08890848;
    }
L_08890848:
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
    goto L_0889084C;
L_0889084C:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0889085Cu);
    aot_gpr[5] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 252u, 0x0888BF9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889085Cu) goto L_0889085C;
    return;
L_0889085C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890874;
      }
      goto L_08890864;
    }
L_08890864:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08890874;
L_08890874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890ADC;
      }
      goto L_0889087C;
    }
L_0889087C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08890900;
      }
      goto L_08890894;
    }
L_08890894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088908B4;
      }
      goto L_088908A0;
    }
L_088908A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088908C8;
      }
      goto L_088908B4;
    }
L_088908B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088908C8;
L_088908C8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088908E8;
      }
      goto L_088908D4;
    }
L_088908D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889091C;
      }
      goto L_088908E8;
    }
L_088908E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0889091C;
      }
      goto L_08890900;
    }
L_08890900:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08890910;
      }
      goto L_08890908;
    }
L_08890908:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0889091C;
      }
      goto L_08890910;
    }
L_08890910:
    aot_gpr[31] = (0x08890918u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 39u, 0x0888D26Cu>(ctx, &aot_mem) && ctx.pc == 0x08890918u) goto L_08890918;
    return;
L_08890918:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_0889091C;
L_0889091C:
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[16] = aot_fpr[22] + aot_fpr[24];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 32768u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[15] = aot_fpr[15] - aot_fpr[16];
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[31] = (0x08890958u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 252u, 0x0888BF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08890958u) goto L_08890958;
    return;
L_08890958:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890970;
      }
      goto L_08890960;
    }
L_08890960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08890970;
L_08890970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890ADC;
      }
      goto L_08890978;
    }
L_08890978:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08890A40;
      }
      goto L_08890990;
    }
L_08890990:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_088909C0;
      }
      goto L_088909B4;
    }
L_088909B4:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    goto L_088909C0;
L_088909C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088909E0;
      }
      goto L_088909CC;
    }
L_088909CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088909F4;
      }
      goto L_088909E0;
    }
L_088909E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088909F4;
L_088909F4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08890A28;
      }
      goto L_08890A00;
    }
L_08890A00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(28))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08890A28;
      }
      goto L_08890A14;
    }
L_08890A14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08890A7C;
      }
      goto L_08890A28;
    }
L_08890A28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08890A7C;
      }
      goto L_08890A40;
    }
L_08890A40:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08890A50;
      }
      goto L_08890A48;
    }
L_08890A48:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08890A5C;
      }
      goto L_08890A50;
    }
L_08890A50:
    aot_gpr[31] = (0x08890A58u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 39u, 0x0888D26Cu>(ctx, &aot_mem) && ctx.pc == 0x08890A58u) goto L_08890A58;
    return;
L_08890A58:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08890A5C;
L_08890A5C:
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08890A6C;
      }
      goto L_08890A64;
    }
L_08890A64:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08890A7C;
      }
      goto L_08890A6C;
    }
L_08890A6C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890A78u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 61u, 0x0888D3F8u>(ctx, &aot_mem) && ctx.pc == 0x08890A78u) goto L_08890A78;
    return;
L_08890A78:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    goto L_08890A7C;
L_08890A7C:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (16128u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[24] + aot_fpr[12];
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[5] = (1u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = aot_fpr[15] + aot_fpr[13];
    aot_gpr[31] = (0x08890ABCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 252u, 0x0888BF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08890ABCu) goto L_08890ABC;
    return;
L_08890ABC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890AD4;
      }
      goto L_08890AC4;
    }
L_08890AC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08890AD4;
L_08890AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890ADC;
      }
      goto L_08890ADC;
    }
L_08890ADC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_fpr[26] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08890B1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[11] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(26068), 0u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (4096u << 16u);
    aot_gpr[11] = (aot_gpr[11] & aot_gpr[2]);
    aot_gpr[11] = (0u < aot_gpr[11] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (0u | 1u);
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[8] | 0u);
    aot_gpr[20] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[21] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890B7C;
    }
L_08890B7C:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890B88;
    }
L_08890B88:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890B90;
    }
L_08890B90:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890B98;
    }
L_08890B98:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890BA0;
    }
L_08890BA0:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890BA8;
    }
L_08890BA8:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890BB0;
    }
L_08890BB0:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890BB8;
    }
L_08890BB8:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08890BC8;
      }
      goto L_08890BC0;
    }
L_08890BC0:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    goto L_08890BC8;
L_08890BC8:
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890BD8;
    }
L_08890BD8:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(12704)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08890BF0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890BFCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890BFCu) goto L_08890BFC;
    return;
L_08890BFC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890C10;
      }
      goto L_08890C08;
    }
L_08890C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08890C10;
L_08890C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890C18;
    }
L_08890C18:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890C24u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890C24u) goto L_08890C24;
    return;
L_08890C24:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-4));
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08890C34;
    }
    goto L_08890C34;
L_08890C34:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890C3C;
    }
L_08890C3C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890C48u);
    aot_gpr[5] = (0u | 58u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890C48u) goto L_08890C48;
    return;
L_08890C48:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890C60;
      }
      goto L_08890C54;
    }
L_08890C54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(26068), aot_gpr[4]);
    goto L_08890C60;
L_08890C60:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890C6C;
    }
L_08890C6C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890C78;
    }
L_08890C78:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08890C8Cu);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 197u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08890C8Cu) goto L_08890C8C;
    return;
L_08890C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890C94;
    }
L_08890C94:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08890CA8u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 197u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08890CA8u) goto L_08890CA8;
    return;
L_08890CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890CB0;
    }
L_08890CB0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08890CC4u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 197u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08890CC4u) goto L_08890CC4;
    return;
L_08890CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890CCC;
    }
L_08890CCC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08890CE0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 197u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08890CE0u) goto L_08890CE0;
    return;
L_08890CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890CE8;
    }
L_08890CE8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08890CFCu);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 197u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08890CFCu) goto L_08890CFC;
    return;
L_08890CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890D04;
    }
L_08890D04:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08890D18u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 197u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08890D18u) goto L_08890D18;
    return;
L_08890D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890D20;
    }
L_08890D20:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08890D30u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 207u, 0x0888BCE8u>(ctx, &aot_mem) && ctx.pc == 0x08890D30u) goto L_08890D30;
    return;
L_08890D30:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890D5C;
      }
      goto L_08890D3C;
    }
L_08890D3C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x08890D4Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08890D4Cu) goto L_08890D4C;
    return;
L_08890D4C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 6u);
    aot_gpr[31] = (0x08890D5Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08890D5Cu) goto L_08890D5C;
    return;
L_08890D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890D64;
    }
L_08890D64:
    aot_gpr[6] = (0u - aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890D74u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 207u, 0x0888BCE8u>(ctx, &aot_mem) && ctx.pc == 0x08890D74u) goto L_08890D74;
    return;
L_08890D74:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890DA0;
      }
      goto L_08890D80;
    }
L_08890D80:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x08890D90u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08890D90u) goto L_08890D90;
    return;
L_08890D90:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[31] = (0x08890DA0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08890DA0u) goto L_08890DA0;
    return;
L_08890DA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890DA8;
    }
L_08890DA8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890DB4u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890DB4u) goto L_08890DB4;
    return;
L_08890DB4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890E00;
      }
      goto L_08890DC0;
    }
L_08890DC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890DD4u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 31u, 0x0888A244u>(ctx, &aot_mem) && ctx.pc == 0x08890DD4u) goto L_08890DD4;
    return;
L_08890DD4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890E00;
      }
      goto L_08890DE0;
    }
L_08890DE0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x08890DF0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08890DF0u) goto L_08890DF0;
    return;
L_08890DF0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[31] = (0x08890E00u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08890E00u) goto L_08890E00;
    return;
L_08890E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890E08;
    }
L_08890E08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890E14u);
    aot_gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890E14u) goto L_08890E14;
    return;
L_08890E14:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890E60;
      }
      goto L_08890E20;
    }
L_08890E20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u - aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08890E34u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 31u, 0x0888A244u>(ctx, &aot_mem) && ctx.pc == 0x08890E34u) goto L_08890E34;
    return;
L_08890E34:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890E60;
      }
      goto L_08890E40;
    }
L_08890E40:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 5u);
    aot_gpr[31] = (0x08890E50u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08890E50u) goto L_08890E50;
    return;
L_08890E50:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[31] = (0x08890E60u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 169u, 0x08889954u>(ctx, &aot_mem) && ctx.pc == 0x08890E60u) goto L_08890E60;
    return;
L_08890E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890E68;
    }
L_08890E68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08890E8C;
      }
      goto L_08890E7C;
    }
L_08890E7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08890E8C;
L_08890E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890E94;
    }
L_08890E94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08890EB8;
      }
      goto L_08890EA8;
    }
L_08890EA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08890EB8;
L_08890EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890EC0;
    }
L_08890EC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08890EE4;
      }
      goto L_08890ED4;
    }
L_08890ED4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08890EE4;
L_08890EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890EEC;
    }
L_08890EEC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890EF8u);
    aot_gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890EF8u) goto L_08890EF8;
    return;
L_08890EF8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F34;
      }
      goto L_08890F04;
    }
L_08890F04:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08890F20;
      }
      goto L_08890F10;
    }
L_08890F10:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08890F34;
      }
      goto L_08890F20;
    }
L_08890F20:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08890F34u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 197u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08890F34u) goto L_08890F34;
    return;
L_08890F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890F3C;
    }
L_08890F3C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08890F48u);
    aot_gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08890F48u) goto L_08890F48;
    return;
L_08890F48:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F90;
      }
      goto L_08890F54;
    }
L_08890F54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F7C;
      }
      goto L_08890F6C;
    }
L_08890F6C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08890F90;
      }
      goto L_08890F7C;
    }
L_08890F7C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 7u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08890F90u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 197u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08890F90u) goto L_08890F90;
    return;
L_08890F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08890F98;
      }
      goto L_08890F98;
    }
L_08890F98:
    aot_gpr[2] = (aot_gpr[22] | 0u);
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
L_08890FC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[7] = (16384u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[20]);
    aot_gpr[5] = (aot_gpr[3] & aot_gpr[7]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08891000u; return;
}

void recomp_unit_0140(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0140_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_140(Runtime &runtime) {
    runtime.register_generated_unit(140u, 0x08890000u, 4096u, &recomp_unit_0140, &recomp_unit_0140_entry);
    runtime.register_function(0x08890000u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889005Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890064u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088900D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088900ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889011Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889013Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889014Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890158u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890170u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890184u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088901A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088901ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088901B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088901C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088901CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088901DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088901E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088901E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890200u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890238u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890250u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890254u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889025Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890264u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889026Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890278u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890288u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890290u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890298u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088902C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088902E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088902F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890318u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889032Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890398u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088903A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088903A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088903B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088903C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088903D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088903E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088903F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890400u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889041Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890424u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890428u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890430u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890434u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889043Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890458u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890460u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889046Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890470u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889047Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890488u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890490u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890498u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088904B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088904D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088904E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088904E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088904F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890500u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890508u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890510u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890518u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890520u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889052Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890530u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889053Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890548u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890554u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889055Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890574u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889057Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890588u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890590u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890594u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088905A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088905B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088905BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088905C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088905D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088905ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088905F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890608u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890620u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890628u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890638u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890658u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889065Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889066Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890674u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890684u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889068Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088906A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088906C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088906D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088906DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088906E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088906F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088906FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890704u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889070Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890718u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890724u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890728u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890734u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890740u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889074Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890754u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889076Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890774u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890780u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890788u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889078Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088907A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088907A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088907B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088907BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088907D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088907E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088907E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890800u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889080Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890818u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890828u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890848u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889084Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889085Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890864u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890874u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889087Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890894u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088908A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088908B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088908C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088908D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088908E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890900u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890908u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890910u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890918u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x0889091Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890958u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890960u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890970u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890978u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890990u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088909B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088909C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088909CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088909E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x088909F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A5Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A64u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890A7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890ABCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890AC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890AD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890ADCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890B1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890B7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890B88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890B90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890B98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BA8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BB0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890BFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C08u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C8Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890C94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890CA8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890CB0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890CC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890CCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890CE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890CE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890CFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D20u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D30u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D5Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D64u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890D90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890DA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890DA8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890DB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890DC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890DD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890DE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890DF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E08u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E20u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E8Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890E94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890EA8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890EB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890EC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890ED4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890EE4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890EECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890EF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F20u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890F98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08890FC4u, &recomp_unit_0140, "recomp_unit_0140");
}
} // namespace psprecomp
