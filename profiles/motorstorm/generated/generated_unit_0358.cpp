#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0358[1023] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 12,
    0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18,
    0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 26, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54,
    0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 68, 0, 69, 0, 70, 0,
    71, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79,
    0, 80, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0,
    90, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 98, 0, 99, 100, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 111,
    112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135,
    0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0,
    144, 0, 145, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160,
    0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 165, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    169, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196,
    0, 197, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 207, 0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0,
    219, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0,
    0, 0, 0, 0, 241, 0, 242, 0, 243, 244, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 251, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 259, 0, 260, 0, 0,
    261, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 273, 274,
};
void recomp_unit_0358_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0896A000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0358[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896A000;
    case 2u: goto L_0896A00C;
    case 3u: goto L_0896A01C;
    case 4u: goto L_0896A034;
    case 5u: goto L_0896A040;
    case 6u: goto L_0896A048;
    case 7u: goto L_0896A050;
    case 8u: goto L_0896A058;
    case 9u: goto L_0896A064;
    case 10u: goto L_0896A06C;
    case 11u: goto L_0896A074;
    case 12u: goto L_0896A07C;
    case 13u: goto L_0896A090;
    case 14u: goto L_0896A0AC;
    case 15u: goto L_0896A0C4;
    case 16u: goto L_0896A0D0;
    case 17u: goto L_0896A0E0;
    case 18u: goto L_0896A0FC;
    case 19u: goto L_0896A104;
    case 20u: goto L_0896A10C;
    case 21u: goto L_0896A120;
    case 22u: goto L_0896A144;
    case 23u: goto L_0896A150;
    case 24u: goto L_0896A158;
    case 25u: goto L_0896A184;
    case 26u: goto L_0896A19C;
    case 27u: goto L_0896A1A0;
    case 28u: goto L_0896A1A8;
    case 29u: goto L_0896A1D0;
    case 30u: goto L_0896A1DC;
    case 31u: goto L_0896A1F8;
    case 32u: goto L_0896A218;
    case 33u: goto L_0896A22C;
    case 34u: goto L_0896A23C;
    case 35u: goto L_0896A244;
    case 36u: goto L_0896A254;
    case 37u: goto L_0896A274;
    case 38u: goto L_0896A284;
    case 39u: goto L_0896A290;
    case 40u: goto L_0896A2A0;
    case 41u: goto L_0896A2A8;
    case 42u: goto L_0896A2B0;
    case 43u: goto L_0896A2B8;
    case 44u: goto L_0896A2C4;
    case 45u: goto L_0896A2DC;
    case 46u: goto L_0896A2EC;
    case 47u: goto L_0896A310;
    case 48u: goto L_0896A334;
    case 49u: goto L_0896A34C;
    case 50u: goto L_0896A354;
    case 51u: goto L_0896A35C;
    case 52u: goto L_0896A364;
    case 53u: goto L_0896A374;
    case 54u: goto L_0896A37C;
    case 55u: goto L_0896A384;
    case 56u: goto L_0896A38C;
    case 57u: goto L_0896A3A4;
    case 58u: goto L_0896A3B4;
    case 59u: goto L_0896A3D4;
    case 60u: goto L_0896A3E0;
    case 61u: goto L_0896A3E8;
    case 62u: goto L_0896A3F8;
    case 63u: goto L_0896A410;
    case 64u: goto L_0896A42C;
    case 65u: goto L_0896A450;
    case 66u: goto L_0896A45C;
    case 67u: goto L_0896A464;
    case 68u: goto L_0896A468;
    case 69u: goto L_0896A470;
    case 70u: goto L_0896A478;
    case 71u: goto L_0896A480;
    case 72u: goto L_0896A488;
    case 73u: goto L_0896A494;
    case 74u: goto L_0896A49C;
    case 75u: goto L_0896A4A4;
    case 76u: goto L_0896A4B0;
    case 77u: goto L_0896A4CC;
    case 78u: goto L_0896A4F0;
    case 79u: goto L_0896A4FC;
    case 80u: goto L_0896A504;
    case 81u: goto L_0896A508;
    case 82u: goto L_0896A510;
    case 83u: goto L_0896A518;
    case 84u: goto L_0896A520;
    case 85u: goto L_0896A528;
    case 86u: goto L_0896A534;
    case 87u: goto L_0896A550;
    case 88u: goto L_0896A56C;
    case 89u: goto L_0896A578;
    case 90u: goto L_0896A580;
    case 91u: goto L_0896A58C;
    case 92u: goto L_0896A594;
    case 93u: goto L_0896A59C;
    case 94u: goto L_0896A5A4;
    case 95u: goto L_0896A5AC;
    case 96u: goto L_0896A5C4;
    case 97u: goto L_0896A5D8;
    case 98u: goto L_0896A5E0;
    case 99u: goto L_0896A5E8;
    case 100u: goto L_0896A5EC;
    case 101u: goto L_0896A5FC;
    case 102u: goto L_0896A60C;
    case 103u: goto L_0896A620;
    case 104u: goto L_0896A62C;
    case 105u: goto L_0896A634;
    case 106u: goto L_0896A644;
    case 107u: goto L_0896A654;
    case 108u: goto L_0896A660;
    case 109u: goto L_0896A668;
    case 110u: goto L_0896A674;
    case 111u: goto L_0896A67C;
    case 112u: goto L_0896A680;
    case 113u: goto L_0896A688;
    case 114u: goto L_0896A690;
    case 115u: goto L_0896A6A0;
    case 116u: goto L_0896A6AC;
    case 117u: goto L_0896A6E4;
    case 118u: goto L_0896A6F8;
    case 119u: goto L_0896A720;
    case 120u: goto L_0896A728;
    case 121u: goto L_0896A73C;
    case 122u: goto L_0896A758;
    case 123u: goto L_0896A77C;
    case 124u: goto L_0896A784;
    case 125u: goto L_0896A78C;
    case 126u: goto L_0896A794;
    case 127u: goto L_0896A79C;
    case 128u: goto L_0896A7AC;
    case 129u: goto L_0896A7B4;
    case 130u: goto L_0896A7C0;
    case 131u: goto L_0896A7C8;
    case 132u: goto L_0896A7D4;
    case 133u: goto L_0896A7EC;
    case 134u: goto L_0896A7F4;
    case 135u: goto L_0896A7FC;
    case 136u: goto L_0896A804;
    case 137u: goto L_0896A80C;
    case 138u: goto L_0896A814;
    case 139u: goto L_0896A81C;
    case 140u: goto L_0896A824;
    case 141u: goto L_0896A83C;
    case 142u: goto L_0896A850;
    case 143u: goto L_0896A874;
    case 144u: goto L_0896A880;
    case 145u: goto L_0896A888;
    case 146u: goto L_0896A894;
    case 147u: goto L_0896A89C;
    case 148u: goto L_0896A8AC;
    case 149u: goto L_0896A8C4;
    case 150u: goto L_0896A8EC;
    case 151u: goto L_0896A8F4;
    case 152u: goto L_0896A8FC;
    case 153u: goto L_0896A924;
    case 154u: goto L_0896A930;
    case 155u: goto L_0896A938;
    case 156u: goto L_0896A944;
    case 157u: goto L_0896A958;
    case 158u: goto L_0896A964;
    case 159u: goto L_0896A970;
    case 160u: goto L_0896A97C;
    case 161u: goto L_0896A98C;
    case 162u: goto L_0896A998;
    case 163u: goto L_0896A9A4;
    case 164u: goto L_0896A9AC;
    case 165u: goto L_0896A9B8;
    case 166u: goto L_0896A9BC;
    case 167u: goto L_0896A9C4;
    case 168u: goto L_0896A9EC;
    case 169u: goto L_0896AA00;
    case 170u: goto L_0896AA08;
    case 171u: goto L_0896AA10;
    case 172u: goto L_0896AA24;
    case 173u: goto L_0896AAAC;
    case 174u: goto L_0896AAC0;
    case 175u: goto L_0896AAC8;
    case 176u: goto L_0896AAD0;
    case 177u: goto L_0896AAE8;
    case 178u: goto L_0896AB14;
    case 179u: goto L_0896AB28;
    case 180u: goto L_0896AB3C;
    case 181u: goto L_0896AB48;
    case 182u: goto L_0896AB50;
    case 183u: goto L_0896AB58;
    case 184u: goto L_0896AB70;
    case 185u: goto L_0896AB94;
    case 186u: goto L_0896AB9C;
    case 187u: goto L_0896ABA4;
    case 188u: goto L_0896ABAC;
    case 189u: goto L_0896ABB8;
    case 190u: goto L_0896ABC4;
    case 191u: goto L_0896ABCC;
    case 192u: goto L_0896ABD4;
    case 193u: goto L_0896ABDC;
    case 194u: goto L_0896ABE4;
    case 195u: goto L_0896ABEC;
    case 196u: goto L_0896ABFC;
    case 197u: goto L_0896AC04;
    case 198u: goto L_0896AC0C;
    case 199u: goto L_0896AC14;
    case 200u: goto L_0896AC28;
    case 201u: goto L_0896AC3C;
    case 202u: goto L_0896AC44;
    case 203u: goto L_0896AC58;
    case 204u: goto L_0896AC6C;
    case 205u: goto L_0896ACAC;
    case 206u: goto L_0896ACC0;
    case 207u: goto L_0896AD04;
    case 208u: goto L_0896AD0C;
    case 209u: goto L_0896AD18;
    case 210u: goto L_0896AD28;
    case 211u: goto L_0896AD34;
    case 212u: goto L_0896AD3C;
    case 213u: goto L_0896AD48;
    case 214u: goto L_0896AD50;
    case 215u: goto L_0896AD58;
    case 216u: goto L_0896AD64;
    case 217u: goto L_0896AD6C;
    case 218u: goto L_0896AD74;
    case 219u: goto L_0896AD80;
    case 220u: goto L_0896AD8C;
    case 221u: goto L_0896AD94;
    case 222u: goto L_0896ADA0;
    case 223u: goto L_0896ADAC;
    case 224u: goto L_0896ADB4;
    case 225u: goto L_0896ADBC;
    case 226u: goto L_0896ADC4;
    case 227u: goto L_0896ADE4;
    case 228u: goto L_0896ADEC;
    case 229u: goto L_0896AE0C;
    case 230u: goto L_0896AE18;
    case 231u: goto L_0896AE24;
    case 232u: goto L_0896AE28;
    case 233u: goto L_0896AE30;
    case 234u: goto L_0896AE38;
    case 235u: goto L_0896AE40;
    case 236u: goto L_0896AE48;
    case 237u: goto L_0896AE5C;
    case 238u: goto L_0896AE68;
    case 239u: goto L_0896AE70;
    case 240u: goto L_0896AE78;
    case 241u: goto L_0896AE90;
    case 242u: goto L_0896AE98;
    case 243u: goto L_0896AEA0;
    case 244u: goto L_0896AEA4;
    case 245u: goto L_0896AEBC;
    case 246u: goto L_0896AEC4;
    case 247u: goto L_0896AECC;
    case 248u: goto L_0896AED4;
    case 249u: goto L_0896AEDC;
    case 250u: goto L_0896AEE4;
    case 251u: goto L_0896AEF0;
    case 252u: goto L_0896AF00;
    case 253u: goto L_0896AF1C;
    case 254u: goto L_0896AF30;
    case 255u: goto L_0896AF38;
    case 256u: goto L_0896AF50;
    case 257u: goto L_0896AF5C;
    case 258u: goto L_0896AF68;
    case 259u: goto L_0896AF6C;
    case 260u: goto L_0896AF74;
    case 261u: goto L_0896AF80;
    case 262u: goto L_0896AF8C;
    case 263u: goto L_0896AF94;
    case 264u: goto L_0896AFA4;
    case 265u: goto L_0896AFB0;
    case 266u: goto L_0896AFB8;
    case 267u: goto L_0896AFC0;
    case 268u: goto L_0896AFC8;
    case 269u: goto L_0896AFD0;
    case 270u: goto L_0896AFD8;
    case 271u: goto L_0896AFE0;
    case 272u: goto L_0896AFEC;
    case 273u: goto L_0896AFF4;
    case 274u: goto L_0896AFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896A000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A074;
      }
      goto L_0896A00C;
    }
L_0896A00C:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2220u << 16u);
    aot_gpr[31] = (0x0896A01Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-28112));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896A01Cu) goto L_0896A01C;
    return;
L_0896A01C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896A034u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A034u) goto L_0896A034;
    return;
L_0896A034:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896A050;
      }
      goto L_0896A040;
    }
L_0896A040:
    aot_gpr[31] = (0x0896A048u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896A048u) goto L_0896A048;
    return;
L_0896A048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A06C;
      }
      goto L_0896A050;
    }
L_0896A050:
    aot_gpr[31] = (0x0896A058u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28112)));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 19u, 0x0896213Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A058u) goto L_0896A058;
    return;
L_0896A058:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896A06C;
      }
      goto L_0896A064;
    }
L_0896A064:
    aot_gpr[31] = (0x0896A06Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896A06Cu) goto L_0896A06C;
    return;
L_0896A06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A07C;
      }
      goto L_0896A074;
    }
L_0896A074:
    aot_gpr[31] = (0x0896A07Cu);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896A07Cu) goto L_0896A07C;
    return;
L_0896A07C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A090:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896A10C;
      }
      goto L_0896A0AC;
    }
L_0896A0AC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5552));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896A0C4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 181u, 0x08962CA4u>(ctx, &aot_mem) && ctx.pc == 0x0896A0C4u) goto L_0896A0C4;
    return;
L_0896A0C4:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0896A10C;
      }
      goto L_0896A0D0;
    }
L_0896A0D0:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A104;
      }
      goto L_0896A0E0;
    }
L_0896A0E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896A0FCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A0FCu) goto L_0896A0FC;
    return;
L_0896A0FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A10C;
      }
      goto L_0896A104;
    }
L_0896A104:
    aot_gpr[31] = (0x0896A10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0896A10Cu) goto L_0896A10C;
    return;
L_0896A10C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A120:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-28104));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896A144u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26984), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A144u) goto L_0896A144;
    return;
L_0896A144:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A158;
      }
      goto L_0896A150;
    }
L_0896A150:
    aot_gpr[31] = (0x0896A158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 61u, 0x089643C4u>(ctx, &aot_mem) && ctx.pc == 0x0896A158u) goto L_0896A158;
    return;
L_0896A158:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (0u | 28000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    aot_gpr[4] = (0u | 25000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A184:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26984)));
    aot_gpr[6] = (2220u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-28104));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896A1A0;
      }
      goto L_0896A19C;
    }
L_0896A19C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26984), 0u);
    goto L_0896A1A0;
L_0896A1A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A1A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896A1D0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 34u, 0x0896D1B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A1D0u) goto L_0896A1D0;
    return;
L_0896A1D0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896A1DCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 38u, 0x0896D20Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A1DCu) goto L_0896A1DC;
    return;
L_0896A1DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(288), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A1F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896A218u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 36u, 0x0896D1E0u>(ctx, &aot_mem) && ctx.pc == 0x0896A218u) goto L_0896A218;
    return;
L_0896A218:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A22C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896A23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A23Cu) goto L_0896A23C;
    return;
L_0896A23C:
    aot_gpr[31] = (0x0896A244u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896A244u) goto L_0896A244;
    return;
L_0896A244:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x0896A274u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A274u) goto L_0896A274;
    return;
L_0896A274:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[31] = (0x0896A284u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 79u, 0x0896F37Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A284u) goto L_0896A284;
    return;
L_0896A284:
    aot_gpr[17] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896A290u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0896A290u) goto L_0896A290;
    return;
L_0896A290:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(55) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A2A8;
      }
      goto L_0896A2A0;
    }
L_0896A2A0:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-54));
    goto L_0896A2A8;
L_0896A2A8:
    aot_gpr[31] = (0x0896A2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x0896A2B0u) goto L_0896A2B0;
    return;
L_0896A2B0:
    aot_gpr[31] = (0x0896A2B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 235u, 0x089EFEA4u>(ctx, &aot_mem) && ctx.pc == 0x0896A2B8u) goto L_0896A2B8;
    return;
L_0896A2B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A2DC;
      }
      goto L_0896A2C4;
    }
L_0896A2C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0896A2DCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A2DCu) goto L_0896A2DC;
    return;
L_0896A2DC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x0896A2ECu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-21656));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 113u, 0x08A3A594u>(ctx, &aot_mem) && ctx.pc == 0x0896A2ECu) goto L_0896A2EC;
    return;
L_0896A2EC:
    aot_gpr[4] = (1526u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7936));
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 64u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[8] = (ctx.hi);
    aot_gpr[31] = (0x0896A310u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x0896A310u) goto L_0896A310;
    return;
L_0896A310:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(0u));
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A334:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896A34Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem) && ctx.pc == 0x0896A34Cu) goto L_0896A34C;
    return;
L_0896A34C:
    aot_gpr[31] = (0x0896A354u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A354u) goto L_0896A354;
    return;
L_0896A354:
    aot_gpr[31] = (0x0896A35Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896A35Cu) goto L_0896A35C;
    return;
L_0896A35C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896A3A4;
      }
      goto L_0896A364;
    }
L_0896A364:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(440)));
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A3A4;
      }
      goto L_0896A374;
    }
L_0896A374:
    aot_gpr[31] = (0x0896A37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A37Cu) goto L_0896A37C;
    return;
L_0896A37C:
    aot_gpr[31] = (0x0896A384u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x0896A384u) goto L_0896A384;
    return;
L_0896A384:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A3A4;
      }
      goto L_0896A38C;
    }
L_0896A38C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896A3A4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A3A4u) goto L_0896A3A4;
    return;
L_0896A3A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A3B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(452), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(456), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(460), aot_gpr[31]);
    aot_gpr[31] = (0x0896A3D4u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A3D4u) goto L_0896A3D4;
    return;
L_0896A3D4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A410;
      }
      goto L_0896A3E0;
    }
L_0896A3E0:
    aot_gpr[31] = (0x0896A3E8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896A3E8u) goto L_0896A3E8;
    return;
L_0896A3E8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896A3F8u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896A3F8u) goto L_0896A3F8;
    return;
L_0896A3F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[16]);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(436), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896A410u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 201u, 0x08964E40u>(ctx, &aot_mem) && ctx.pc == 0x0896A410u) goto L_0896A410;
    return;
L_0896A410:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(88), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(456)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A42C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0896A450u);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A450u) goto L_0896A450;
    return;
L_0896A450:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A468;
      }
      goto L_0896A45C;
    }
L_0896A45C:
    aot_gpr[31] = (0x0896A464u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896A464u) goto L_0896A464;
    return;
L_0896A464:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0896A468;
L_0896A468:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A4B0;
      }
      goto L_0896A470;
    }
L_0896A470:
    aot_gpr[31] = (0x0896A478u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 125u, 0x089FB920u>(ctx, &aot_mem) && ctx.pc == 0x0896A478u) goto L_0896A478;
    return;
L_0896A478:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A4A4;
      }
      goto L_0896A480;
    }
L_0896A480:
    aot_gpr[31] = (0x0896A488u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0503_entry, 503u, 126u, 0x089FB928u>(ctx, &aot_mem) && ctx.pc == 0x0896A488u) goto L_0896A488;
    return;
L_0896A488:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896A494u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_0896A3B4;
L_0896A494:
    aot_gpr[31] = (0x0896A49Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x0896A49Cu) goto L_0896A49C;
    return;
L_0896A49C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A4B0;
      }
      goto L_0896A4A4;
    }
L_0896A4A4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896A4B0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A4B0u) goto L_0896A4B0;
    return;
L_0896A4B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), 0u);
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
L_0896A4CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0896A4F0u);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A4F0u) goto L_0896A4F0;
    return;
L_0896A4F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A508;
      }
      goto L_0896A4FC;
    }
L_0896A4FC:
    aot_gpr[31] = (0x0896A504u);
    aot_gpr[5] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896A504u) goto L_0896A504;
    return;
L_0896A504:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0896A508;
L_0896A508:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A534;
      }
      goto L_0896A510;
    }
L_0896A510:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A528;
      }
      goto L_0896A518;
    }
L_0896A518:
    aot_gpr[31] = (0x0896A520u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x0896A520u) goto L_0896A520;
    return;
L_0896A520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A534;
      }
      goto L_0896A528;
    }
L_0896A528:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896A534u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A534u) goto L_0896A534;
    return;
L_0896A534:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), 0u);
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
L_0896A550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896A56Cu);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A56Cu) goto L_0896A56C;
    return;
L_0896A56C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5AC;
      }
      goto L_0896A578;
    }
L_0896A578:
    aot_gpr[31] = (0x0896A580u);
    aot_gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896A580u) goto L_0896A580;
    return;
L_0896A580:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5AC;
      }
      goto L_0896A58C;
    }
L_0896A58C:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5A4;
      }
      goto L_0896A594;
    }
L_0896A594:
    aot_gpr[31] = (0x0896A59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x0896A59Cu) goto L_0896A59C;
    return;
L_0896A59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5AC;
      }
      goto L_0896A5A4;
    }
L_0896A5A4:
    aot_gpr[31] = (0x0896A5ACu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-985));
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A5ACu) goto L_0896A5AC;
    return;
L_0896A5AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(104), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A5C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896A5D8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A5D8u) goto L_0896A5D8;
    return;
L_0896A5D8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5E8;
      }
      goto L_0896A5E0;
    }
L_0896A5E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0896A5EC;
      }
      goto L_0896A5E8;
    }
L_0896A5E8:
    aot_gpr[2] = (0u | 1u);
    goto L_0896A5EC;
L_0896A5EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A5FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A60C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(452), aot_gpr[31]);
    aot_gpr[31] = (0x0896A620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A620u) goto L_0896A620;
    return;
L_0896A620:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A660;
      }
      goto L_0896A62C;
    }
L_0896A62C:
    aot_gpr[31] = (0x0896A634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896A634u) goto L_0896A634;
    return;
L_0896A634:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896A644u);
    aot_gpr[6] = (0u | 448u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896A644u) goto L_0896A644;
    return;
L_0896A644:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0896A654u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(436), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A654u) goto L_0896A654;
    return;
L_0896A654:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896A660u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 201u, 0x08964E40u>(ctx, &aot_mem) && ctx.pc == 0x0896A660u) goto L_0896A660;
    return;
L_0896A660:
    aot_gpr[31] = (0x0896A668u);
    aot_gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A668u) goto L_0896A668;
    return;
L_0896A668:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A680;
      }
      goto L_0896A674;
    }
L_0896A674:
    aot_gpr[31] = (0x0896A67Cu);
    aot_gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896A67Cu) goto L_0896A67C;
    return;
L_0896A67C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_0896A680;
L_0896A680:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A690;
      }
      goto L_0896A688;
    }
L_0896A688:
    aot_gpr[31] = (0x0896A690u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x0896A690u) goto L_0896A690;
    return;
L_0896A690:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A6A0:
    aot_gpr[5] = (0u | 4u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A6AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    aot_gpr[31] = (0x0896A6E4u);
    aot_gpr[6] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A6E4u) goto L_0896A6E4;
    return;
L_0896A6E4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896A6F8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 38u, 0x0896D20Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A6F8u) goto L_0896A6F8;
    return;
L_0896A6F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(296)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[7] = (1u << 16u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(17796));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[6] = (0u | 36u);
    aot_gpr[31] = (0x0896A720u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896A720u) goto L_0896A720;
    return;
L_0896A720:
    aot_gpr[31] = (0x0896A728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A728u) goto L_0896A728;
    return;
L_0896A728:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896A73Cu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 66u, 0x08964438u>(ctx, &aot_mem) && ctx.pc == 0x0896A73Cu) goto L_0896A73C;
    return;
L_0896A73C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A758:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896A824;
      }
      goto L_0896A77C;
    }
L_0896A77C:
    aot_gpr[31] = (0x0896A784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem) && ctx.pc == 0x0896A784u) goto L_0896A784;
    return;
L_0896A784:
    aot_gpr[31] = (0x0896A78Cu);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A78Cu) goto L_0896A78C;
    return;
L_0896A78C:
    aot_gpr[31] = (0x0896A794u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896A794u) goto L_0896A794;
    return;
L_0896A794:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896A80C;
      }
      goto L_0896A79C;
    }
L_0896A79C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(440)));
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A80C;
      }
      goto L_0896A7AC;
    }
L_0896A7AC:
    aot_gpr[31] = (0x0896A7B4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A7B4u) goto L_0896A7B4;
    return;
L_0896A7B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x0896A7C0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 63u, 0x08983324u>(ctx, &aot_mem) && ctx.pc == 0x0896A7C0u) goto L_0896A7C0;
    return;
L_0896A7C0:
    aot_gpr[31] = (0x0896A7C8u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A7C8u) goto L_0896A7C8;
    return;
L_0896A7C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896A7F4;
      }
      goto L_0896A7D4;
    }
L_0896A7D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896A7ECu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A7ECu) goto L_0896A7EC;
    return;
L_0896A7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A804;
      }
      goto L_0896A7F4;
    }
L_0896A7F4:
    aot_gpr[31] = (0x0896A7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A7FCu) goto L_0896A7FC;
    return;
L_0896A7FC:
    aot_gpr[31] = (0x0896A804u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 85u, 0x08964564u>(ctx, &aot_mem) && ctx.pc == 0x0896A804u) goto L_0896A804;
    return;
L_0896A804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A81C;
      }
      goto L_0896A80C;
    }
L_0896A80C:
    aot_gpr[31] = (0x0896A814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A814u) goto L_0896A814;
    return;
L_0896A814:
    aot_gpr[31] = (0x0896A81Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 85u, 0x08964564u>(ctx, &aot_mem) && ctx.pc == 0x0896A81Cu) goto L_0896A81C;
    return;
L_0896A81C:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    goto L_0896A824;
L_0896A824:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A83C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A850:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0896A874u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A874u) goto L_0896A874;
    return;
L_0896A874:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896A880u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 201u, 0x08964E40u>(ctx, &aot_mem) && ctx.pc == 0x0896A880u) goto L_0896A880;
    return;
L_0896A880:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A89C;
      }
      goto L_0896A888;
    }
L_0896A888:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896A894u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_0896A83C;
L_0896A894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A8AC;
      }
      goto L_0896A89C;
    }
L_0896A89C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896A8ACu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0896A83C;
L_0896A8AC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A8C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896A8ECu);
    aot_gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A8ECu) goto L_0896A8EC;
    return;
L_0896A8EC:
    aot_gpr[31] = (0x0896A8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896A8F4u) goto L_0896A8F4;
    return;
L_0896A8F4:
    aot_gpr[31] = (0x0896A8FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896A8FCu) goto L_0896A8FC;
    return;
L_0896A8FC:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(440)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(444)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0896A938;
      }
      goto L_0896A924;
    }
L_0896A924:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(364));
    aot_gpr[31] = (0x0896A930u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x0896A930u) goto L_0896A930;
    return;
L_0896A930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A944;
      }
      goto L_0896A938;
    }
L_0896A938:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(396));
    aot_gpr[31] = (0x0896A944u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x0896A944u) goto L_0896A944;
    return;
L_0896A944:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A958:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A964:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(88), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A970:
    aot_gpr[2] = (2220u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-28104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A97C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (0u | 5u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[6];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0896A9A4;
      }
      goto L_0896A98C;
    }
L_0896A98C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A9A4;
      }
      goto L_0896A998;
    }
L_0896A998:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[5]);
      if (branch_taken) {
          goto L_0896A9BC;
      }
      goto L_0896A9A4;
    }
L_0896A9A4:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A9BC;
      }
      goto L_0896A9AC;
    }
L_0896A9AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896A9BC;
      }
      goto L_0896A9B8;
    }
L_0896A9B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), 0u);
    goto L_0896A9BC;
L_0896A9BC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A9C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-400));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[31]);
    aot_gpr[31] = (0x0896A9ECu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x0896A9ECu) goto L_0896A9EC;
    return;
L_0896A9EC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896AA00u);
    aot_gpr[6] = (0u | 384u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896AA00u) goto L_0896AA00;
    return;
L_0896AA00:
    aot_gpr[31] = (0x0896AA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896AA08u) goto L_0896AA08;
    return;
L_0896AA08:
    aot_gpr[31] = (0x0896AA10u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896AA10u) goto L_0896AA10;
    return;
L_0896AA10:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(52));
    aot_gpr[31] = (0x0896AA24u);
    aot_gpr[6] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896AA24u) goto L_0896AA24;
    return;
L_0896AA24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(436)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(380), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (0x0896AAACu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896AAACu) goto L_0896AAAC;
    return;
L_0896AAAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(428)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[5]);
    aot_gpr[31] = (0x0896AAC0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 53u, 0x089AB460u>(ctx, &aot_mem) && ctx.pc == 0x0896AAC0u) goto L_0896AAC0;
    return;
L_0896AAC0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AAD0;
      }
      goto L_0896AAC8;
    }
L_0896AAC8:
    aot_gpr[31] = (0x0896AAD0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896AAD0u) goto L_0896AAD0;
    return;
L_0896AAD0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896AAE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-304));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[31]);
    aot_gpr[31] = (0x0896AB14u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x0896AB14u) goto L_0896AB14;
    return;
L_0896AB14:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896AB28u);
    aot_gpr[6] = (0u | 280u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896AB28u) goto L_0896AB28;
    return;
L_0896AB28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[31] = (0x0896AB3Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 34u, 0x0896D1B8u>(ctx, &aot_mem) && ctx.pc == 0x0896AB3Cu) goto L_0896AB3C;
    return;
L_0896AB3C:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896AB48u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 48u, 0x089AB3E8u>(ctx, &aot_mem) && ctx.pc == 0x0896AB48u) goto L_0896AB48;
    return;
L_0896AB48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB58;
      }
      goto L_0896AB50;
    }
L_0896AB50:
    aot_gpr[31] = (0x0896AB58u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896AB58u) goto L_0896AB58;
    return;
L_0896AB58:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896AB70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
        goto L_0896ABD4;
    }
    goto L_0896AB94;
L_0896AB94:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896ABCC;
      }
      goto L_0896AB9C;
    }
L_0896AB9C:
    aot_gpr[31] = (0x0896ABA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896ABA4u) goto L_0896ABA4;
    return;
L_0896ABA4:
    aot_gpr[31] = (0x0896ABACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x0896ABACu) goto L_0896ABAC;
    return;
L_0896ABAC:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896ABC4;
      }
      goto L_0896ABB8;
    }
L_0896ABB8:
    aot_gpr[4] = (2218u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
      if (branch_taken) {
          goto L_0896AC0C;
      }
      goto L_0896ABC4;
    }
L_0896ABC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC44;
      }
      goto L_0896ABCC;
    }
L_0896ABCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC44;
      }
      goto L_0896ABD4;
    }
L_0896ABD4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ABCC;
      }
      goto L_0896ABDC;
    }
L_0896ABDC:
    aot_gpr[31] = (0x0896ABE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896ABE4u) goto L_0896ABE4;
    return;
L_0896ABE4:
    aot_gpr[31] = (0x0896ABECu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896ABECu) goto L_0896ABEC;
    return;
L_0896ABEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC04;
      }
      goto L_0896ABFC;
    }
L_0896ABFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC44;
      }
      goto L_0896AC04;
    }
L_0896AC04:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    goto L_0896AC0C;
L_0896AC0C:
    aot_gpr[31] = (0x0896AC14u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x0896AC14u) goto L_0896AC14;
    return;
L_0896AC14:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896AC28u);
    aot_gpr[6] = (0u | 124u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896AC28u) goto L_0896AC28;
    return;
L_0896AC28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[31] = (0x0896AC3Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 58u, 0x089AB4DCu>(ctx, &aot_mem) && ctx.pc == 0x0896AC3Cu) goto L_0896AC3C;
    return;
L_0896AC3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC44;
      }
      goto L_0896AC44;
    }
L_0896AC44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896AC58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896AC6Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 188u, 0x08962D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896AC6Cu) goto L_0896AC6C;
    return;
L_0896AC6C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5552));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), 0u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(116), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896ACACu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896ACACu) goto L_0896ACAC;
    return;
L_0896ACAC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896ACC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[20]);
    aot_gpr[20] = (0u | 5u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == aot_gpr[20];
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0896AF94;
      }
      goto L_0896AD04;
    }
L_0896AD04:
    aot_gpr[31] = (0x0896AD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896AD0Cu) goto L_0896AD0C;
    return;
L_0896AD0C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD28;
      }
      goto L_0896AD18;
    }
L_0896AD18:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896AD28u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 154u, 0x08964B48u>(ctx, &aot_mem) && ctx.pc == 0x0896AD28u) goto L_0896AD28;
    return;
L_0896AD28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD3C;
      }
      goto L_0896AD34;
    }
L_0896AD34:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    goto L_0896AD3C;
L_0896AD3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 67u, 0x0896B2ACu>(ctx, &aot_mem); return;
      }
      goto L_0896AD48;
    }
L_0896AD48:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF94;
      }
      goto L_0896AD50;
    }
L_0896AD50:
    aot_gpr[31] = (0x0896AD58u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896AD58u) goto L_0896AD58;
    return;
L_0896AD58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[22] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896AD74;
      }
      goto L_0896AD64;
    }
L_0896AD64:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896AF94;
      }
      goto L_0896AD6C;
    }
L_0896AD6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AEE4;
      }
      goto L_0896AD74;
    }
L_0896AD74:
    aot_gpr[23] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896AF94;
      }
      goto L_0896AD80;
    }
L_0896AD80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE5C;
      }
      goto L_0896AD8C;
    }
L_0896AD8C:
    aot_gpr[31] = (0x0896AD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0357_entry, 357u, 54u, 0x08969378u>(ctx, &aot_mem) && ctx.pc == 0x0896AD94u) goto L_0896AD94;
    return;
L_0896AD94:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ADEC;
      }
      goto L_0896ADA0;
    }
L_0896ADA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896ADEC;
      }
      goto L_0896ADAC;
    }
L_0896ADAC:
    aot_gpr[31] = (0x0896ADB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896ADB4u) goto L_0896ADB4;
    return;
L_0896ADB4:
    aot_gpr[31] = (0x0896ADBCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x0896ADBCu) goto L_0896ADBC;
    return;
L_0896ADBC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ADEC;
      }
      goto L_0896ADC4;
    }
L_0896ADC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896ADE4u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896ADE4u) goto L_0896ADE4;
    return;
L_0896ADE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE48;
      }
      goto L_0896ADEC;
    }
L_0896ADEC:
    aot_gpr[4] = (0u | 30u);
    aot_gpr[5] = (0u | 29u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 40u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0896AE0Cu);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896AE0Cu) goto L_0896AE0C;
    return;
L_0896AE0C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE28;
      }
      goto L_0896AE18;
    }
L_0896AE18:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896AE24u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 250u, 0x0895FEE8u>(ctx, &aot_mem) && ctx.pc == 0x0896AE24u) goto L_0896AE24;
    return;
L_0896AE24:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0896AE28;
L_0896AE28:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE40;
      }
      goto L_0896AE30;
    }
L_0896AE30:
    aot_gpr[31] = (0x0896AE38u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x0896AE38u) goto L_0896AE38;
    return;
L_0896AE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE48;
      }
      goto L_0896AE40;
    }
L_0896AE40:
    aot_gpr[31] = (0x0896AE48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896A758;
L_0896AE48:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), 0u);
      if (branch_taken) {
          goto L_0896AEDC;
      }
      goto L_0896AE5C;
    }
L_0896AE5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AED4;
      }
      goto L_0896AE68;
    }
L_0896AE68:
    aot_gpr[31] = (0x0896AE70u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 146u, 0x08964AB8u>(ctx, &aot_mem) && ctx.pc == 0x0896AE70u) goto L_0896AE70;
    return;
L_0896AE70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896AEA4;
      }
      goto L_0896AE78;
    }
L_0896AE78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE98;
      }
      goto L_0896AE90;
    }
L_0896AE90:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AEA4;
      }
      goto L_0896AE98;
    }
L_0896AE98:
    aot_gpr[31] = (0x0896AEA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896A9C4;
L_0896AEA0:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0896AEA4;
L_0896AEA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AEC4;
      }
      goto L_0896AEBC;
    }
L_0896AEBC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AEDC;
      }
      goto L_0896AEC4;
    }
L_0896AEC4:
    aot_gpr[31] = (0x0896AECCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896AAE8;
L_0896AECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AEDC;
      }
      goto L_0896AED4;
    }
L_0896AED4:
    aot_gpr[31] = (0x0896AEDCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896AEDCu) goto L_0896AEDC;
    return;
L_0896AEDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF94;
      }
      goto L_0896AEE4;
    }
L_0896AEE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896AF8C;
      }
      goto L_0896AEF0;
    }
L_0896AEF0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896AF00u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 29u, 0x0896D174u>(ctx, &aot_mem) && ctx.pc == 0x0896AF00u) goto L_0896AF00;
    return;
L_0896AF00:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896AF1Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 90u, 0x089AABF0u>(ctx, &aot_mem) && ctx.pc == 0x0896AF1Cu) goto L_0896AF1C;
    return;
L_0896AF1C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0896AF30u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0422_entry, 422u, 90u, 0x089AABF0u>(ctx, &aot_mem) && ctx.pc == 0x0896AF30u) goto L_0896AF30;
    return;
L_0896AF30:
    aot_gpr[31] = (0x0896AF38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896AB70;
L_0896AF38:
    aot_gpr[4] = (0u | 30u);
    aot_gpr[5] = (0u | 29u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[31] = (0x0896AF50u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896AF50u) goto L_0896AF50;
    return;
L_0896AF50:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF6C;
      }
      goto L_0896AF5C;
    }
L_0896AF5C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[31] = (0x0896AF68u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 250u, 0x0895FEE8u>(ctx, &aot_mem) && ctx.pc == 0x0896AF68u) goto L_0896AF68;
    return;
L_0896AF68:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0896AF6C;
L_0896AF6C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF80;
      }
      goto L_0896AF74;
    }
L_0896AF74:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896AF80u);
    aot_gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 126u, 0x0895F79Cu>(ctx, &aot_mem) && ctx.pc == 0x0896AF80u) goto L_0896AF80;
    return;
L_0896AF80:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    goto L_0896AF8C;
L_0896AF8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF94;
      }
      goto L_0896AF94;
    }
L_0896AF94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 66u, 0x0896B2A4u>(ctx, &aot_mem); return;
      }
      goto L_0896AFA4;
    }
L_0896AFA4:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896AFD8;
      }
      goto L_0896AFB0;
    }
L_0896AFB0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 50u, 0x0896B200u>(ctx, &aot_mem); return;
      }
      goto L_0896AFB8;
    }
L_0896AFB8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 50u, 0x0896B200u>(ctx, &aot_mem); return;
      }
      goto L_0896AFC0;
    }
L_0896AFC0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 51u, 0x0896B208u>(ctx, &aot_mem); return;
      }
      goto L_0896AFC8;
    }
L_0896AFC8:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 62u, 0x0896B27Cu>(ctx, &aot_mem); return;
      }
      goto L_0896AFD0;
    }
L_0896AFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0359_entry, 359u, 66u, 0x0896B2A4u>(ctx, &aot_mem); return;
      }
      goto L_0896AFD8;
    }
L_0896AFD8:
    aot_gpr[31] = (0x0896AFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 60u, 0x089643B8u>(ctx, &aot_mem) && ctx.pc == 0x0896AFE0u) goto L_0896AFE0;
    return;
L_0896AFE0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0896AFF8;
      }
      goto L_0896AFEC;
    }
L_0896AFEC:
    aot_gpr[31] = (0x0896AFF4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0352_entry, 352u, 200u, 0x08964E38u>(ctx, &aot_mem) && ctx.pc == 0x0896AFF4u) goto L_0896AFF4;
    return;
L_0896AFF4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0896AFF8;
L_0896AFF8:
    aot_gpr[31] = (0x0896B000u);
    aot_gpr[18] = (0u | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0358(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0358_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_358(Runtime &runtime) {
    runtime.register_generated_unit(358u, 0x0896A000u, 4096u, &recomp_unit_0358, &recomp_unit_0358_entry);
    runtime.register_function(0x0896A000u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A00Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A01Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A034u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A040u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A048u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A050u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A058u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A064u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A06Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A074u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A07Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A090u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A0ACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A0C4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A0D0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A0E0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A0FCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A104u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A10Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A120u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A144u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A150u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A158u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A184u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A19Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A1A0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A1A8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A1D0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A1DCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A1F8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A218u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A22Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A23Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A244u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A254u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A274u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A284u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A290u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A2A0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A2A8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A2B0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A2B8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A2C4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A2DCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A2ECu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A310u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A334u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A34Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A354u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A35Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A364u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A374u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A37Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A384u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A38Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A3A4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A3B4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A3D4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A3E0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A3E8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A3F8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A410u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A42Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A450u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A45Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A464u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A468u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A470u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A478u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A480u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A488u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A494u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A49Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A4A4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A4B0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A4CCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A4F0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A4FCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A504u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A508u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A510u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A518u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A520u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A528u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A534u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A550u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A56Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A578u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A580u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A58Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A594u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A59Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A5A4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A5ACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A5C4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A5D8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A5E0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A5E8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A5ECu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A5FCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A60Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A620u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A62Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A634u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A644u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A654u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A660u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A668u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A674u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A67Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A680u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A688u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A690u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A6A0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A6ACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A6E4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A6F8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A720u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A728u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A73Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A758u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A77Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A784u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A78Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A794u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A79Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A7ACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A7B4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A7C0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A7C8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A7D4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A7ECu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A7F4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A7FCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A804u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A80Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A814u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A81Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A824u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A83Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A850u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A874u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A880u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A888u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A894u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A89Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A8ACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A8C4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A8ECu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A8F4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A8FCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A924u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A930u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A938u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A944u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A958u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A964u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A970u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A97Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A98Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A998u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A9A4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A9ACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A9B8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A9BCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A9C4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896A9ECu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AA00u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AA08u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AA10u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AA24u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AAACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AAC0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AAC8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AAD0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AAE8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB14u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB28u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB3Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB48u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB50u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB58u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB70u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB94u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AB9Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABA4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABB8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABC4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABCCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABD4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABDCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABE4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABECu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ABFCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AC04u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AC0Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AC14u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AC28u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AC3Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AC44u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AC58u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AC6Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ACACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ACC0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD04u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD0Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD18u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD28u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD34u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD3Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD48u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD50u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD58u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD64u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD6Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD74u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD80u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD8Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AD94u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ADA0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ADACu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ADB4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ADBCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ADC4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ADE4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896ADECu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE0Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE18u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE24u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE28u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE30u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE38u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE40u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE48u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE5Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE68u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE70u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE78u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE90u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AE98u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AEA0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AEA4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AEBCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AEC4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AECCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AED4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AEDCu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AEE4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AEF0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF00u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF1Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF30u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF38u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF50u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF5Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF68u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF6Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF74u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF80u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF8Cu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AF94u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFA4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFB0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFB8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFC0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFC8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFD0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFD8u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFE0u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFECu, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFF4u, &recomp_unit_0358, "recomp_unit_0358");
    runtime.register_function(0x0896AFF8u, &recomp_unit_0358, "recomp_unit_0358");
}
} // namespace psprecomp
