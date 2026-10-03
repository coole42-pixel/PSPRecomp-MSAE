#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0527[1009] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 0, 22, 23, 0, 0, 24, 0, 0, 25, 0, 26,
    0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0,
    43, 0, 44, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 53, 54, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 65,
    0, 0, 66, 0, 0, 67, 0, 0, 68, 69, 0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 78, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 107, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 110, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0,
    119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128,
    0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 143,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0,
    150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160, 0,
    0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0,
    0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0,
    0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 212,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 224,
    0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 229, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233, 234, 0, 0, 235,
    0, 0, 0, 236, 237, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0,
    244, 0, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0,
    258, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262,
};
void recomp_unit_0527_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A13000u;
        entry_id = (entry_delta < 4036u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0527[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A13000;
    case 2u: goto L_08A13008;
    case 3u: goto L_08A1301C;
    case 4u: goto L_08A1303C;
    case 5u: goto L_08A13050;
    case 6u: goto L_08A1305C;
    case 7u: goto L_08A1306C;
    case 8u: goto L_08A13080;
    case 9u: goto L_08A130AC;
    case 10u: goto L_08A130B8;
    case 11u: goto L_08A130C0;
    case 12u: goto L_08A130C4;
    case 13u: goto L_08A130E4;
    case 14u: goto L_08A13100;
    case 15u: goto L_08A13114;
    case 16u: goto L_08A1311C;
    case 17u: goto L_08A13124;
    case 18u: goto L_08A13130;
    case 19u: goto L_08A1313C;
    case 20u: goto L_08A13144;
    case 21u: goto L_08A1314C;
    case 22u: goto L_08A13158;
    case 23u: goto L_08A1315C;
    case 24u: goto L_08A13168;
    case 25u: goto L_08A13174;
    case 26u: goto L_08A1317C;
    case 27u: goto L_08A13184;
    case 28u: goto L_08A13194;
    case 29u: goto L_08A1319C;
    case 30u: goto L_08A131A4;
    case 31u: goto L_08A131AC;
    case 32u: goto L_08A131B8;
    case 33u: goto L_08A131C0;
    case 34u: goto L_08A131C8;
    case 35u: goto L_08A131E0;
    case 36u: goto L_08A131EC;
    case 37u: goto L_08A131F4;
    case 38u: goto L_08A13208;
    case 39u: goto L_08A13250;
    case 40u: goto L_08A13258;
    case 41u: goto L_08A13264;
    case 42u: goto L_08A13278;
    case 43u: goto L_08A13280;
    case 44u: goto L_08A13288;
    case 45u: goto L_08A1328C;
    case 46u: goto L_08A1329C;
    case 47u: goto L_08A132BC;
    case 48u: goto L_08A132C4;
    case 49u: goto L_08A132D0;
    case 50u: goto L_08A132DC;
    case 51u: goto L_08A132E4;
    case 52u: goto L_08A13308;
    case 53u: goto L_08A13314;
    case 54u: goto L_08A13318;
    case 55u: goto L_08A13320;
    case 56u: goto L_08A13328;
    case 57u: goto L_08A13334;
    case 58u: goto L_08A1333C;
    case 59u: goto L_08A13348;
    case 60u: goto L_08A13350;
    case 61u: goto L_08A13358;
    case 62u: goto L_08A13364;
    case 63u: goto L_08A1336C;
    case 64u: goto L_08A13374;
    case 65u: goto L_08A1337C;
    case 66u: goto L_08A13388;
    case 67u: goto L_08A13394;
    case 68u: goto L_08A133A0;
    case 69u: goto L_08A133A4;
    case 70u: goto L_08A133AC;
    case 71u: goto L_08A133B4;
    case 72u: goto L_08A133C0;
    case 73u: goto L_08A133C8;
    case 74u: goto L_08A133D4;
    case 75u: goto L_08A133DC;
    case 76u: goto L_08A133E4;
    case 77u: goto L_08A133F0;
    case 78u: goto L_08A133F8;
    case 79u: goto L_08A13400;
    case 80u: goto L_08A13424;
    case 81u: goto L_08A13430;
    case 82u: goto L_08A13438;
    case 83u: goto L_08A13448;
    case 84u: goto L_08A13450;
    case 85u: goto L_08A13460;
    case 86u: goto L_08A13468;
    case 87u: goto L_08A13474;
    case 88u: goto L_08A13498;
    case 89u: goto L_08A134A4;
    case 90u: goto L_08A134C8;
    case 91u: goto L_08A134D0;
    case 92u: goto L_08A134F4;
    case 93u: goto L_08A13518;
    case 94u: goto L_08A1352C;
    case 95u: goto L_08A13538;
    case 96u: goto L_08A13548;
    case 97u: goto L_08A13550;
    case 98u: goto L_08A13560;
    case 99u: goto L_08A13570;
    case 100u: goto L_08A13578;
    case 101u: goto L_08A13588;
    case 102u: goto L_08A135A0;
    case 103u: goto L_08A135A8;
    case 104u: goto L_08A135B0;
    case 105u: goto L_08A135BC;
    case 106u: goto L_08A135C4;
    case 107u: goto L_08A135D4;
    case 108u: goto L_08A135D8;
    case 109u: goto L_08A135E4;
    case 110u: goto L_08A13610;
    case 111u: goto L_08A13614;
    case 112u: goto L_08A1361C;
    case 113u: goto L_08A13624;
    case 114u: goto L_08A13638;
    case 115u: goto L_08A13658;
    case 116u: goto L_08A13664;
    case 117u: goto L_08A1366C;
    case 118u: goto L_08A13674;
    case 119u: goto L_08A13680;
    case 120u: goto L_08A13688;
    case 121u: goto L_08A13690;
    case 122u: goto L_08A13698;
    case 123u: goto L_08A136A0;
    case 124u: goto L_08A136AC;
    case 125u: goto L_08A136B8;
    case 126u: goto L_08A136D4;
    case 127u: goto L_08A136E0;
    case 128u: goto L_08A136FC;
    case 129u: goto L_08A13704;
    case 130u: goto L_08A1370C;
    case 131u: goto L_08A13734;
    case 132u: goto L_08A1373C;
    case 133u: goto L_08A13740;
    case 134u: goto L_08A13748;
    case 135u: goto L_08A13758;
    case 136u: goto L_08A13788;
    case 137u: goto L_08A13790;
    case 138u: goto L_08A137BC;
    case 139u: goto L_08A137D0;
    case 140u: goto L_08A137D8;
    case 141u: goto L_08A137E4;
    case 142u: goto L_08A137F4;
    case 143u: goto L_08A137FC;
    case 144u: goto L_08A1381C;
    case 145u: goto L_08A13838;
    case 146u: goto L_08A13854;
    case 147u: goto L_08A13864;
    case 148u: goto L_08A1386C;
    case 149u: goto L_08A13878;
    case 150u: goto L_08A13880;
    case 151u: goto L_08A13890;
    case 152u: goto L_08A13898;
    case 153u: goto L_08A138A8;
    case 154u: goto L_08A138B0;
    case 155u: goto L_08A138C0;
    case 156u: goto L_08A138C8;
    case 157u: goto L_08A138D8;
    case 158u: goto L_08A138E0;
    case 159u: goto L_08A138F0;
    case 160u: goto L_08A138F8;
    case 161u: goto L_08A13908;
    case 162u: goto L_08A13910;
    case 163u: goto L_08A1391C;
    case 164u: goto L_08A13938;
    case 165u: goto L_08A13948;
    case 166u: goto L_08A13964;
    case 167u: goto L_08A1396C;
    case 168u: goto L_08A13988;
    case 169u: goto L_08A13990;
    case 170u: goto L_08A139AC;
    case 171u: goto L_08A139B4;
    case 172u: goto L_08A139D0;
    case 173u: goto L_08A139D8;
    case 174u: goto L_08A139F4;
    case 175u: goto L_08A139FC;
    case 176u: goto L_08A13A18;
    case 177u: goto L_08A13A38;
    case 178u: goto L_08A13A70;
    case 179u: goto L_08A13A78;
    case 180u: goto L_08A13A88;
    case 181u: goto L_08A13A90;
    case 182u: goto L_08A13AA0;
    case 183u: goto L_08A13AA8;
    case 184u: goto L_08A13AB8;
    case 185u: goto L_08A13AC0;
    case 186u: goto L_08A13AC4;
    case 187u: goto L_08A13AD4;
    case 188u: goto L_08A13AF0;
    case 189u: goto L_08A13B10;
    case 190u: goto L_08A13B30;
    case 191u: goto L_08A13B3C;
    case 192u: goto L_08A13B48;
    case 193u: goto L_08A13B50;
    case 194u: goto L_08A13B58;
    case 195u: goto L_08A13B60;
    case 196u: goto L_08A13B84;
    case 197u: goto L_08A13BB8;
    case 198u: goto L_08A13BC0;
    case 199u: goto L_08A13BD8;
    case 200u: goto L_08A13BE0;
    case 201u: goto L_08A13BE8;
    case 202u: goto L_08A13BF0;
    case 203u: goto L_08A13C14;
    case 204u: goto L_08A13C54;
    case 205u: goto L_08A13C68;
    case 206u: goto L_08A13C88;
    case 207u: goto L_08A13CAC;
    case 208u: goto L_08A13CB4;
    case 209u: goto L_08A13CBC;
    case 210u: goto L_08A13CE0;
    case 211u: goto L_08A13CE8;
    case 212u: goto L_08A13CFC;
    case 213u: goto L_08A13D04;
    case 214u: goto L_08A13D24;
    case 215u: goto L_08A13D44;
    case 216u: goto L_08A13D4C;
    case 217u: goto L_08A13D54;
    case 218u: goto L_08A13D78;
    case 219u: goto L_08A13D98;
    case 220u: goto L_08A13DB0;
    case 221u: goto L_08A13DC4;
    case 222u: goto L_08A13DE4;
    case 223u: goto L_08A13DF8;
    case 224u: goto L_08A13DFC;
    case 225u: goto L_08A13E0C;
    case 226u: goto L_08A13E18;
    case 227u: goto L_08A13E24;
    case 228u: goto L_08A13E34;
    case 229u: goto L_08A13E3C;
    case 230u: goto L_08A13E40;
    case 231u: goto L_08A13E50;
    case 232u: goto L_08A13E5C;
    case 233u: goto L_08A13E6C;
    case 234u: goto L_08A13E70;
    case 235u: goto L_08A13E7C;
    case 236u: goto L_08A13E8C;
    case 237u: goto L_08A13E90;
    case 238u: goto L_08A13E98;
    case 239u: goto L_08A13EAC;
    case 240u: goto L_08A13ED4;
    case 241u: goto L_08A13EE0;
    case 242u: goto L_08A13EEC;
    case 243u: goto L_08A13EF8;
    case 244u: goto L_08A13F00;
    case 245u: goto L_08A13F0C;
    case 246u: goto L_08A13F18;
    case 247u: goto L_08A13F20;
    case 248u: goto L_08A13F28;
    case 249u: goto L_08A13F34;
    case 250u: goto L_08A13F40;
    case 251u: goto L_08A13F44;
    case 252u: goto L_08A13F4C;
    case 253u: goto L_08A13F54;
    case 254u: goto L_08A13F5C;
    case 255u: goto L_08A13F64;
    case 256u: goto L_08A13F6C;
    case 257u: goto L_08A13F74;
    case 258u: goto L_08A13F80;
    case 259u: goto L_08A13F8C;
    case 260u: goto L_08A13F94;
    case 261u: goto L_08A13F9C;
    case 262u: goto L_08A13FC0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A13000:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13008:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A1301Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 221u, 0x089F2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A1301Cu) goto L_08A1301C;
    return;
L_08A1301C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14728));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1303C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A13050u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A13050u) goto L_08A13050;
    return;
L_08A13050:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1305Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1305Cu) goto L_08A1305C;
    return;
L_08A1305C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1306Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2740));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1306Cu) goto L_08A1306C;
    return;
L_08A1306C:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13080:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A130ACu);
    aot_gpr[4] = (0u | 296u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 225u, 0x08A00E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A130ACu) goto L_08A130AC;
    return;
L_08A130AC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A130C4;
      }
      goto L_08A130B8;
    }
L_08A130B8:
    aot_gpr[31] = (0x08A130C0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0544_entry, 544u, 77u, 0x08A24544u>(ctx, &aot_mem) && ctx.pc == 0x08A130C0u) goto L_08A130C0;
    return;
L_08A130C0:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_08A130C4;
L_08A130C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A130E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A131F4;
      }
      goto L_08A13100;
    }
L_08A13100:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14792));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A13114u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A135E4;
L_08A13114:
    aot_gpr[31] = (0x08A1311Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1311Cu) goto L_08A1311C;
    return;
L_08A1311C:
    aot_gpr[31] = (0x08A13124u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13124u) goto L_08A13124;
    return;
L_08A13124:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr[31] = (0x08A13130u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A13130u) goto L_08A13130;
    return;
L_08A13130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(352), 0u);
      if (branch_taken) {
          goto L_08A1315C;
      }
      goto L_08A1313C;
    }
L_08A1313C:
    aot_gpr[31] = (0x08A13144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A13144u) goto L_08A13144;
    return;
L_08A13144:
    aot_gpr[31] = (0x08A1314Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1314Cu) goto L_08A1314C;
    return;
L_08A1314C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(384)));
    aot_gpr[31] = (0x08A13158u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A13158u) goto L_08A13158;
    return;
L_08A13158:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(384), 0u);
    goto L_08A1315C;
L_08A1315C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(528)));
        goto L_08A131C0;
    }
    goto L_08A13168;
L_08A13168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1319C;
      }
      goto L_08A13174;
    }
L_08A13174:
    aot_gpr[31] = (0x08A1317Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1317Cu) goto L_08A1317C;
    return;
L_08A1317C:
    aot_gpr[31] = (0x08A13184u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13184u) goto L_08A13184;
    return;
L_08A13184:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A13194u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A13194u) goto L_08A13194;
    return;
L_08A13194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_08A1319C;
L_08A1319C:
    aot_gpr[31] = (0x08A131A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A131A4u) goto L_08A131A4;
    return;
L_08A131A4:
    aot_gpr[31] = (0x08A131ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A131ACu) goto L_08A131AC;
    return;
L_08A131AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[31] = (0x08A131B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A131B8u) goto L_08A131B8;
    return;
L_08A131B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(528)));
    goto L_08A131C0;
L_08A131C0:
    aot_gpr[31] = (0x08A131C8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 6u, 0x08A4604Cu>(ctx, &aot_mem) && ctx.pc == 0x08A131C8u) goto L_08A131C8;
    return;
L_08A131C8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A131E0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A131E0u) goto L_08A131E0;
    return;
L_08A131E0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A131F4;
      }
      goto L_08A131EC;
    }
L_08A131EC:
    aot_gpr[31] = (0x08A131F4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A131F4u) goto L_08A131F4;
    return;
L_08A131F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13208:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A13250u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A13250u) goto L_08A13250;
    return;
L_08A13250:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A134F4;
      }
      goto L_08A13258;
    }
L_08A13258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1328C;
      }
      goto L_08A13264;
    }
L_08A13264:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A13278u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A13A38;
L_08A13278:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13400;
      }
      goto L_08A13280;
    }
L_08A13280:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
      if (branch_taken) {
          goto L_08A132BC;
      }
      goto L_08A13288;
    }
L_08A13288:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A1328C;
L_08A1328C:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A1329Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A13790;
L_08A1329C:
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
L_08A132BC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A132E4;
      }
      goto L_08A132C4;
    }
L_08A132C4:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A132D0u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A132D0u) goto L_08A132D0;
    return;
L_08A132D0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A13308;
      }
      goto L_08A132DC;
    }
L_08A132DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13318;
      }
      goto L_08A132E4;
    }
L_08A132E4:
    aot_gpr[2] = (0u | 1u);
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
L_08A13308:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13314u);
    aot_gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13314u) goto L_08A13314;
    return;
L_08A13314:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08A13318;
L_08A13318:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1337C;
      }
      goto L_08A13320;
    }
L_08A13320:
    aot_gpr[31] = (0x08A13328u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(528)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 32u, 0x08A461C4u>(ctx, &aot_mem) && ctx.pc == 0x08A13328u) goto L_08A13328;
    return;
L_08A13328:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1337C;
      }
      goto L_08A13334;
    }
L_08A13334:
    aot_gpr[31] = (0x08A1333Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 87u, 0x08A39434u>(ctx, &aot_mem) && ctx.pc == 0x08A1333Cu) goto L_08A1333C;
    return;
L_08A1333C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 46 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1337C;
      }
      goto L_08A13348;
    }
L_08A13348:
    aot_gpr[31] = (0x08A13350u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(528)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13350u) goto L_08A13350;
    return;
L_08A13350:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1336C;
      }
      goto L_08A13358;
    }
L_08A13358:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A13364u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 2u, 0x08A16030u>(ctx, &aot_mem) && ctx.pc == 0x08A13364u) goto L_08A13364;
    return;
L_08A13364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13400;
      }
      goto L_08A1336C;
    }
L_08A1336C:
    aot_gpr[31] = (0x08A13374u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 2u, 0x08A16030u>(ctx, &aot_mem) && ctx.pc == 0x08A13374u) goto L_08A13374;
    return;
L_08A13374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13400;
      }
      goto L_08A1337C;
    }
L_08A1337C:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13388u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13388u) goto L_08A13388;
    return;
L_08A13388:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A133A4;
      }
      goto L_08A13394;
    }
L_08A13394:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A133A0u);
    aot_gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A133A0u) goto L_08A133A0;
    return;
L_08A133A0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08A133A4;
L_08A133A4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A13424;
      }
      goto L_08A133AC;
    }
L_08A133AC:
    aot_gpr[31] = (0x08A133B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(528)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 32u, 0x08A461C4u>(ctx, &aot_mem) && ctx.pc == 0x08A133B4u) goto L_08A133B4;
    return;
L_08A133B4:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A13424;
      }
      goto L_08A133C0;
    }
L_08A133C0:
    aot_gpr[31] = (0x08A133C8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 87u, 0x08A39434u>(ctx, &aot_mem) && ctx.pc == 0x08A133C8u) goto L_08A133C8;
    return;
L_08A133C8:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 46 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A13424;
      }
      goto L_08A133D4;
    }
L_08A133D4:
    aot_gpr[31] = (0x08A133DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(528)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A133DCu) goto L_08A133DC;
    return;
L_08A133DC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) >= 0;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A133F8;
      }
      goto L_08A133E4;
    }
L_08A133E4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A133F0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 2u, 0x08A16030u>(ctx, &aot_mem) && ctx.pc == 0x08A133F0u) goto L_08A133F0;
    return;
L_08A133F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13400;
      }
      goto L_08A133F8;
    }
L_08A133F8:
    aot_gpr[31] = (0x08A13400u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 2u, 0x08A16030u>(ctx, &aot_mem) && ctx.pc == 0x08A13400u) goto L_08A13400;
    return;
L_08A13400:
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
L_08A13424:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13430u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13430u) goto L_08A13430;
    return;
L_08A13430:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A134C8;
      }
      goto L_08A13438;
    }
L_08A13438:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13448u);
    aot_gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13448u) goto L_08A13448;
    return;
L_08A13448:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A13498;
      }
      goto L_08A13450;
    }
L_08A13450:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13460u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13460u) goto L_08A13460;
    return;
L_08A13460:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A134F4;
      }
      goto L_08A13468;
    }
L_08A13468:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08A13474u);
    aot_gpr[6] = (0u | 1u);
    goto L_08A136D4;
L_08A13474:
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
L_08A13498:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A134A4u);
    aot_gpr[6] = (0u | 1u);
    goto L_08A136D4;
L_08A134A4:
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
L_08A134C8:
    aot_gpr[31] = (0x08A134D0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_08A13B10;
L_08A134D0:
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
L_08A134F4:
    aot_gpr[2] = (0u | 1u);
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
L_08A13518:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A13538;
      }
      goto L_08A1352C;
    }
L_08A1352C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13550;
      }
      goto L_08A13538;
    }
L_08A13538:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[5] == aot_gpr[6]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
        goto L_08A13560;
    }
    goto L_08A13548;
L_08A13548:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_08A135A0;
      }
      goto L_08A13550;
    }
L_08A13550:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13560:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13578;
      }
      goto L_08A13570;
    }
L_08A13570:
    if (static_cast<std::int32_t>(aot_gpr[2]) >= 0) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
        goto L_08A13588;
    }
    goto L_08A13578;
L_08A13578:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13588:
    aot_gpr[5] = (aot_gpr[2] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A135A0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A135C4;
      }
      goto L_08A135A8;
    }
L_08A135A8:
    aot_gpr[31] = (0x08A135B0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08A13748;
L_08A135B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A135D4;
      }
      goto L_08A135BC;
    }
L_08A135BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A135D8;
      }
      goto L_08A135C4;
    }
L_08A135C4:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A135D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A135D8;
L_08A135D8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A135E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08A13658;
      }
      goto L_08A13610;
    }
L_08A13610:
    aot_gpr[17] = (0u | 0u);
    goto L_08A13614;
L_08A13614:
    aot_gpr[31] = (0x08A1361Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1361Cu) goto L_08A1361C;
    return;
L_08A1361C:
    aot_gpr[31] = (0x08A13624u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13624u) goto L_08A13624;
    return;
L_08A13624:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[31] = (0x08A13638u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A13638u) goto L_08A13638;
    return;
L_08A13638:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A13614;
      }
      goto L_08A13658;
    }
L_08A13658:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13688;
      }
      goto L_08A13664;
    }
L_08A13664:
    aot_gpr[31] = (0x08A1366Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1366Cu) goto L_08A1366C;
    return;
L_08A1366C:
    aot_gpr[31] = (0x08A13674u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13674u) goto L_08A13674;
    return;
L_08A13674:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[31] = (0x08A13680u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A13680u) goto L_08A13680;
    return;
L_08A13680:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    goto L_08A13688;
L_08A13688:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A136B8;
      }
      goto L_08A13690;
    }
L_08A13690:
    aot_gpr[31] = (0x08A13698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A13698u) goto L_08A13698;
    return;
L_08A13698:
    aot_gpr[31] = (0x08A136A0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A136A0u) goto L_08A136A0;
    return;
L_08A136A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[31] = (0x08A136ACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A136ACu) goto L_08A136AC;
    return;
L_08A136AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    goto L_08A136B8;
L_08A136B8:
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
L_08A136D4:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    aot_gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A13704;
      }
      goto L_08A136E0;
    }
L_08A136E0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    if (static_cast<std::int32_t>(aot_gpr[5]) > 0) {
    aot_gpr[6] = (aot_gpr[5] | 0u);
        goto L_08A136FC;
    }
    goto L_08A136FC;
L_08A136FC:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13704:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A13740;
      }
      goto L_08A1370C;
    }
L_08A1370C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    aot_gpr[8] = (ctx.lo);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1373C;
      }
      goto L_08A13734;
    }
L_08A13734:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A1373C;
      }
      goto L_08A1373C;
    }
L_08A1373C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), aot_gpr[5]);
    goto L_08A13740;
L_08A13740:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13748:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(372)));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (aot_gpr[6] == aot_gpr[7]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A13788;
    }
    goto L_08A13758;
L_08A13758:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13788:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(524)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A13854;
      }
      goto L_08A137BC;
    }
L_08A137BC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A137D0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A13A38;
L_08A137D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13838;
      }
      goto L_08A137D8;
    }
L_08A137D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(332)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1381C;
      }
      goto L_08A137E4;
    }
L_08A137E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A137F4u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A137F4u) goto L_08A137F4;
    return;
L_08A137F4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1381C;
      }
      goto L_08A137FC;
    }
L_08A137FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(524), aot_gpr[18]);
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
L_08A1381C:
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
L_08A13838:
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
L_08A13854:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13864u);
    aot_gpr[6] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13864u) goto L_08A13864;
    return;
L_08A13864:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A13A18;
      }
      goto L_08A1386C;
    }
L_08A1386C:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13878u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13878u) goto L_08A13878;
    return;
L_08A13878:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A139F4;
      }
      goto L_08A13880;
    }
L_08A13880:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13890u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13890u) goto L_08A13890;
    return;
L_08A13890:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A139D0;
      }
      goto L_08A13898;
    }
L_08A13898:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A138A8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A138A8u) goto L_08A138A8;
    return;
L_08A138A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A139AC;
      }
      goto L_08A138B0;
    }
L_08A138B0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A138C0u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A138C0u) goto L_08A138C0;
    return;
L_08A138C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A13988;
      }
      goto L_08A138C8;
    }
L_08A138C8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A138D8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A138D8u) goto L_08A138D8;
    return;
L_08A138D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A13964;
      }
      goto L_08A138E0;
    }
L_08A138E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A138F0u);
    aot_gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A138F0u) goto L_08A138F0;
    return;
L_08A138F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A13938;
      }
      goto L_08A138F8;
    }
L_08A138F8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13908u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13908u) goto L_08A13908;
    return;
L_08A13908:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1381C;
      }
      goto L_08A13910;
    }
L_08A13910:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08A1391Cu);
    aot_gpr[6] = (0u | 1u);
    goto L_08A136D4;
L_08A1391C:
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
L_08A13938:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A13948u);
    aot_gpr[6] = (0u | 1u);
    goto L_08A136D4;
L_08A13948:
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
L_08A13964:
    aot_gpr[31] = (0x08A1396Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A13B10;
L_08A1396C:
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
L_08A13988:
    aot_gpr[31] = (0x08A13990u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 2u, 0x08A16030u>(ctx, &aot_mem) && ctx.pc == 0x08A13990u) goto L_08A13990;
    return;
L_08A13990:
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
L_08A139AC:
    aot_gpr[31] = (0x08A139B4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 2u, 0x08A16030u>(ctx, &aot_mem) && ctx.pc == 0x08A139B4u) goto L_08A139B4;
    return;
L_08A139B4:
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
L_08A139D0:
    aot_gpr[31] = (0x08A139D8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 2u, 0x08A16030u>(ctx, &aot_mem) && ctx.pc == 0x08A139D8u) goto L_08A139D8;
    return;
L_08A139D8:
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
L_08A139F4:
    aot_gpr[31] = (0x08A139FCu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 2u, 0x08A16030u>(ctx, &aot_mem) && ctx.pc == 0x08A139FCu) goto L_08A139FC;
    return;
L_08A139FC:
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
L_08A13A18:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(524), 0u);
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
L_08A13A38:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A13A70u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13A70u) goto L_08A13A70;
    return;
L_08A13A70:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A13AC4;
      }
      goto L_08A13A78;
    }
L_08A13A78:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13A88u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13A88u) goto L_08A13A88;
    return;
L_08A13A88:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A13AC4;
      }
      goto L_08A13A90;
    }
L_08A13A90:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13AA0u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13AA0u) goto L_08A13AA0;
    return;
L_08A13AA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A13AC4;
      }
      goto L_08A13AA8;
    }
L_08A13AA8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A13AB8u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A13AB8u) goto L_08A13AB8;
    return;
L_08A13AB8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13AF0;
      }
      goto L_08A13AC0;
    }
L_08A13AC0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A13AC4;
L_08A13AC4:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A13AD4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13AD4u) goto L_08A13AD4;
    return;
L_08A13AD4:
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
L_08A13AF0:
    aot_gpr[2] = (0u | 0u);
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
L_08A13B10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A13B30u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08A13748;
L_08A13B30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
        goto L_08A13BC0;
    }
    goto L_08A13B3C;
L_08A13B3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A13C54;
      }
      goto L_08A13B48;
    }
L_08A13B48:
    aot_gpr[31] = (0x08A13B50u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2724));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13B50u) goto L_08A13B50;
    return;
L_08A13B50:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13C54;
      }
      goto L_08A13B58;
    }
L_08A13B58:
    aot_gpr[31] = (0x08A13B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13B60u) goto L_08A13B60;
    return;
L_08A13B60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2728));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A13B84u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A13B84u) goto L_08A13B84;
    return;
L_08A13B84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A13BB8u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A13BB8u) goto L_08A13BB8;
    return;
L_08A13BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13C54;
      }
      goto L_08A13BC0;
    }
L_08A13BC0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A13C54;
      }
      goto L_08A13BD8;
    }
L_08A13BD8:
    aot_gpr[31] = (0x08A13BE0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2724));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13BE0u) goto L_08A13BE0;
    return;
L_08A13BE0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13C54;
      }
      goto L_08A13BE8;
    }
L_08A13BE8:
    aot_gpr[31] = (0x08A13BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13BF0u) goto L_08A13BF0;
    return;
L_08A13BF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-2728));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A13C14u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A13C14u) goto L_08A13C14;
    return;
L_08A13C14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(352)));
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[7]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A13C54u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A13C54u) goto L_08A13C54;
    return;
L_08A13C54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13C68:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(320), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-18240)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-18240), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13C88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A13D24;
      }
      goto L_08A13CAC;
    }
L_08A13CAC:
    aot_gpr[31] = (0x08A13CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A13CB4u) goto L_08A13CB4;
    return;
L_08A13CB4:
    aot_gpr[31] = (0x08A13CBCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13CBCu) goto L_08A13CBC;
    return;
L_08A13CBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-2720));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 1001u);
    aot_gpr[31] = (0x08A13CE0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A13CE0u) goto L_08A13CE0;
    return;
L_08A13CE0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A13D04;
      }
      goto L_08A13CE8;
    }
L_08A13CE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A13D44;
      }
      goto L_08A13CFC;
    }
L_08A13CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13DC4;
      }
      goto L_08A13D04;
    }
L_08A13D04:
    aot_gpr[2] = (0u | 0u);
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
L_08A13D24:
    aot_gpr[2] = (0u | 1u);
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
L_08A13D44:
    aot_gpr[31] = (0x08A13D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A13D4Cu) goto L_08A13D4C;
    return;
L_08A13D4C:
    aot_gpr[31] = (0x08A13D54u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13D54u) goto L_08A13D54;
    return;
L_08A13D54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 1011u);
    aot_gpr[31] = (0x08A13D78u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A13D78u) goto L_08A13D78;
    return;
L_08A13D78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13D04;
      }
      goto L_08A13D98;
    }
L_08A13D98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[6] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[31] = (0x08A13DB0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13DB0u) goto L_08A13DB0;
    return;
L_08A13DB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A13D44;
      }
      goto L_08A13DC4;
    }
L_08A13DC4:
    aot_gpr[2] = (0u | 1u);
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
L_08A13DE4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_08A13E5C;
      }
      goto L_08A13DF8;
    }
L_08A13DF8:
    aot_gpr[7] = (0u | 0u);
    goto L_08A13DFC;
L_08A13DFC:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
        goto L_08A13E50;
    }
    goto L_08A13E0C;
L_08A13E0C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(348)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A13E18;
L_08A13E18:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[11] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), aot_gpr[10]);
        goto L_08A13E40;
    }
    goto L_08A13E24;
L_08A13E24:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A13E18;
      }
      goto L_08A13E34;
    }
L_08A13E34:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A13E50;
      }
      goto L_08A13E3C;
    }
L_08A13E3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), aot_gpr[10]);
    goto L_08A13E40;
L_08A13E40:
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[8]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13E50:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A13DFC;
      }
      goto L_08A13E5C;
    }
L_08A13E5C:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
        goto L_08A13E90;
    }
    goto L_08A13E6C;
L_08A13E6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    goto L_08A13E70;
L_08A13E70:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[8] != 0u) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A13E98;
    }
    goto L_08A13E7C;
L_08A13E7C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A13E70;
      }
      goto L_08A13E8C;
    }
L_08A13E8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_08A13E90;
L_08A13E90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13E98:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(372), aot_gpr[5]);
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A13EAC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A13ED4u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A13ED4u) goto L_08A13ED4;
    return;
L_08A13ED4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A13EE0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A13EE0u) goto L_08A13EE0;
    return;
L_08A13EE0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[18] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A13F8C;
      }
      goto L_08A13EEC;
    }
L_08A13EEC:
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-2692));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-2684));
    goto L_08A13EF8;
L_08A13EF8:
    aot_gpr[31] = (0x08A13F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A13F00u) goto L_08A13F00;
    return;
L_08A13F00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A13F0Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A13F0Cu) goto L_08A13F0C;
    return;
L_08A13F0C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A13F6C;
      }
      goto L_08A13F18;
    }
L_08A13F18:
    aot_gpr[31] = (0x08A13F20u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13F20u) goto L_08A13F20;
    return;
L_08A13F20:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A13F54;
      }
      goto L_08A13F28;
    }
L_08A13F28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A13F44;
      }
      goto L_08A13F34;
    }
L_08A13F34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A13F6C;
      }
      goto L_08A13F40;
    }
L_08A13F40:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A13F44;
L_08A13F44:
    aot_gpr[31] = (0x08A13F4Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_08A13FC0;
L_08A13F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A13F6C;
      }
      goto L_08A13F54;
    }
L_08A13F54:
    aot_gpr[31] = (0x08A13F5Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A13F5Cu) goto L_08A13F5C;
    return;
L_08A13F5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A13F6C;
      }
      goto L_08A13F64;
    }
L_08A13F64:
    aot_gpr[31] = (0x08A13F6Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 48u, 0x08A14294u>(ctx, &aot_mem) && ctx.pc == 0x08A13F6Cu) goto L_08A13F6C;
    return;
L_08A13F6C:
    aot_gpr[31] = (0x08A13F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A13F74u) goto L_08A13F74;
    return;
L_08A13F74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A13F80u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A13F80u) goto L_08A13F80;
    return;
L_08A13F80:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A13EF8;
      }
      goto L_08A13F8C;
    }
L_08A13F8C:
    aot_gpr[31] = (0x08A13F94u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 219u, 0x08A14E64u>(ctx, &aot_mem) && ctx.pc == 0x08A13F94u) goto L_08A13F94;
    return;
L_08A13F94:
    aot_gpr[31] = (0x08A13F9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 181u, 0x08A14C00u>(ctx, &aot_mem) && ctx.pc == 0x08A13F9Cu) goto L_08A13F9C;
    return;
L_08A13F9C:
    aot_gpr[2] = (0u | 1u);
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
L_08A13FC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[19] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 2u, 0x08A1400Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0528_entry, 528u, 1u, 0x08A14004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0527(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0527_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_527(Runtime &runtime) {
    runtime.register_generated_unit(527u, 0x08A13000u, 4096u, &recomp_unit_0527, &recomp_unit_0527_entry);
    runtime.register_function(0x08A13000u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13008u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1301Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1303Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13050u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1305Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1306Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13080u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A130ACu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A130B8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A130C0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A130C4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A130E4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13100u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13114u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1311Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13124u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13130u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1313Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13144u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1314Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13158u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1315Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13168u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13174u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1317Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13184u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13194u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1319Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A131A4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A131ACu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A131B8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A131C0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A131C8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A131E0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A131ECu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A131F4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13208u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13250u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13258u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13264u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13278u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13280u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13288u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1328Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1329Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A132BCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A132C4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A132D0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A132DCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A132E4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13308u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13314u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13318u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13320u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13328u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13334u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1333Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13348u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13350u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13358u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13364u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1336Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13374u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1337Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13388u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13394u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133A0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133A4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133ACu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133B4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133C0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133C8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133D4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133DCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133E4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133F0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A133F8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13400u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13424u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13430u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13438u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13448u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13450u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13460u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13468u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13474u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13498u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A134A4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A134C8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A134D0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A134F4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13518u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1352Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13538u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13548u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13550u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13560u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13570u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13578u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13588u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A135A0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A135A8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A135B0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A135BCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A135C4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A135D4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A135D8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A135E4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13610u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13614u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1361Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13624u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13638u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13658u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13664u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1366Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13674u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13680u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13688u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13690u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13698u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A136A0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A136ACu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A136B8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A136D4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A136E0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A136FCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13704u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1370Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13734u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1373Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13740u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13748u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13758u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13788u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13790u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A137BCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A137D0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A137D8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A137E4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A137F4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A137FCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1381Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13838u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13854u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13864u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1386Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13878u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13880u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13890u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13898u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A138A8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A138B0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A138C0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A138C8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A138D8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A138E0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A138F0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A138F8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13908u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13910u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1391Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13938u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13948u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13964u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A1396Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13988u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13990u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A139ACu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A139B4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A139D0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A139D8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A139F4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A139FCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13A18u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13A38u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13A70u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13A78u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13A88u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13A90u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13AA0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13AA8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13AB8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13AC0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13AC4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13AD4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13AF0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13B10u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13B30u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13B3Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13B48u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13B50u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13B58u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13B60u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13B84u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13BB8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13BC0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13BD8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13BE0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13BE8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13BF0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13C14u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13C54u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13C68u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13C88u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13CACu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13CB4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13CBCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13CE0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13CE8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13CFCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13D04u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13D24u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13D44u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13D4Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13D54u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13D78u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13D98u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13DB0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13DC4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13DE4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13DF8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13DFCu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E0Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E18u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E24u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E34u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E3Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E40u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E50u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E5Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E6Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E70u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E7Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E8Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E90u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13E98u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13EACu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13ED4u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13EE0u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13EECu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13EF8u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F00u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F0Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F18u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F20u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F28u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F34u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F40u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F44u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F4Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F54u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F5Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F64u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F6Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F74u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F80u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F8Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F94u, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13F9Cu, &recomp_unit_0527, "recomp_unit_0527");
    runtime.register_function(0x08A13FC0u, &recomp_unit_0527, "recomp_unit_0527");
}
} // namespace psprecomp
