#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0370[1009] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20,
    0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 40, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0,
    0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66,
    0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0, 0,
    76, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0, 0,
    86, 0, 87, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 97, 98, 0, 0,
    0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114,
    115, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 129, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 163, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 173,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0,
    0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0,
    0, 0, 0, 200, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0,
    0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 236, 0, 0, 0, 237, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0,
    0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 250, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257,
    0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 261,
};
void recomp_unit_0370_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08976004u;
        entry_id = (entry_delta < 4036u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0370[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08976004;
    case 2u: goto L_08976014;
    case 3u: goto L_08976030;
    case 4u: goto L_0897604C;
    case 5u: goto L_08976078;
    case 6u: goto L_08976084;
    case 7u: goto L_0897608C;
    case 8u: goto L_08976094;
    case 9u: goto L_089760A4;
    case 10u: goto L_089760C4;
    case 11u: goto L_089760D0;
    case 12u: goto L_089760DC;
    case 13u: goto L_089760E4;
    case 14u: goto L_089760F4;
    case 15u: goto L_089760FC;
    case 16u: goto L_08976140;
    case 17u: goto L_0897614C;
    case 18u: goto L_08976158;
    case 19u: goto L_08976178;
    case 20u: goto L_08976180;
    case 21u: goto L_08976198;
    case 22u: goto L_089761A0;
    case 23u: goto L_089761C8;
    case 24u: goto L_089761D0;
    case 25u: goto L_08976220;
    case 26u: goto L_08976228;
    case 27u: goto L_08976230;
    case 28u: goto L_08976238;
    case 29u: goto L_08976240;
    case 30u: goto L_08976248;
    case 31u: goto L_08976258;
    case 32u: goto L_08976270;
    case 33u: goto L_0897628C;
    case 34u: goto L_089762A8;
    case 35u: goto L_089762AC;
    case 36u: goto L_089762B4;
    case 37u: goto L_089762DC;
    case 38u: goto L_089762E4;
    case 39u: goto L_089762EC;
    case 40u: goto L_089762F0;
    case 41u: goto L_08976310;
    case 42u: goto L_08976318;
    case 43u: goto L_0897632C;
    case 44u: goto L_08976334;
    case 45u: goto L_08976344;
    case 46u: goto L_08976354;
    case 47u: goto L_0897635C;
    case 48u: goto L_08976370;
    case 49u: goto L_08976378;
    case 50u: goto L_08976388;
    case 51u: goto L_089763A4;
    case 52u: goto L_089763AC;
    case 53u: goto L_089763C0;
    case 54u: goto L_089763C8;
    case 55u: goto L_089763D8;
    case 56u: goto L_089763F0;
    case 57u: goto L_089763FC;
    case 58u: goto L_08976410;
    case 59u: goto L_08976418;
    case 60u: goto L_08976428;
    case 61u: goto L_08976438;
    case 62u: goto L_0897644C;
    case 63u: goto L_08976458;
    case 64u: goto L_08976464;
    case 65u: goto L_0897646C;
    case 66u: goto L_08976480;
    case 67u: goto L_08976488;
    case 68u: goto L_08976498;
    case 69u: goto L_089764A8;
    case 70u: goto L_089764B0;
    case 71u: goto L_089764C4;
    case 72u: goto L_089764CC;
    case 73u: goto L_089764DC;
    case 74u: goto L_089764E8;
    case 75u: goto L_089764F0;
    case 76u: goto L_08976504;
    case 77u: goto L_0897650C;
    case 78u: goto L_0897651C;
    case 79u: goto L_08976528;
    case 80u: goto L_08976530;
    case 81u: goto L_08976544;
    case 82u: goto L_0897654C;
    case 83u: goto L_0897655C;
    case 84u: goto L_08976568;
    case 85u: goto L_08976578;
    case 86u: goto L_08976584;
    case 87u: goto L_0897658C;
    case 88u: goto L_08976590;
    case 89u: goto L_089765A0;
    case 90u: goto L_089765A8;
    case 91u: goto L_089765B0;
    case 92u: goto L_089765BC;
    case 93u: goto L_089765C4;
    case 94u: goto L_089765D0;
    case 95u: goto L_089765E0;
    case 96u: goto L_089765EC;
    case 97u: goto L_089765F4;
    case 98u: goto L_089765F8;
    case 99u: goto L_08976608;
    case 100u: goto L_08976610;
    case 101u: goto L_08976624;
    case 102u: goto L_08976644;
    case 103u: goto L_08976650;
    case 104u: goto L_0897665C;
    case 105u: goto L_0897667C;
    case 106u: goto L_08976688;
    case 107u: goto L_0897669C;
    case 108u: goto L_089766A4;
    case 109u: goto L_089766B4;
    case 110u: goto L_089766D0;
    case 111u: goto L_089766DC;
    case 112u: goto L_089766EC;
    case 113u: goto L_089766F8;
    case 114u: goto L_08976700;
    case 115u: goto L_08976704;
    case 116u: goto L_08976714;
    case 117u: goto L_0897671C;
    case 118u: goto L_08976728;
    case 119u: goto L_08976748;
    case 120u: goto L_08976754;
    case 121u: goto L_08976760;
    case 122u: goto L_08976780;
    case 123u: goto L_0897678C;
    case 124u: goto L_089767A0;
    case 125u: goto L_089767A8;
    case 126u: goto L_089767B8;
    case 127u: goto L_089767D0;
    case 128u: goto L_089767E8;
    case 129u: goto L_08976808;
    case 130u: goto L_08976810;
    case 131u: goto L_08976820;
    case 132u: goto L_08976828;
    case 133u: goto L_08976838;
    case 134u: goto L_08976848;
    case 135u: goto L_08976854;
    case 136u: goto L_08976864;
    case 137u: goto L_0897686C;
    case 138u: goto L_08976878;
    case 139u: goto L_089768AC;
    case 140u: goto L_089768BC;
    case 141u: goto L_089768C4;
    case 142u: goto L_089768D0;
    case 143u: goto L_08976904;
    case 144u: goto L_08976924;
    case 145u: goto L_08976934;
    case 146u: goto L_08976948;
    case 147u: goto L_08976954;
    case 148u: goto L_0897695C;
    case 149u: goto L_08976960;
    case 150u: goto L_08976978;
    case 151u: goto L_08976990;
    case 152u: goto L_08976998;
    case 153u: goto L_089769A0;
    case 154u: goto L_089769A8;
    case 155u: goto L_089769B0;
    case 156u: goto L_089769B8;
    case 157u: goto L_089769C0;
    case 158u: goto L_089769C8;
    case 159u: goto L_089769D0;
    case 160u: goto L_089769D8;
    case 161u: goto L_089769E4;
    case 162u: goto L_08976A08;
    case 163u: goto L_08976A14;
    case 164u: goto L_08976A18;
    case 165u: goto L_08976A30;
    case 166u: goto L_08976A90;
    case 167u: goto L_08976AA8;
    case 168u: goto L_08976AB8;
    case 169u: goto L_08976AD0;
    case 170u: goto L_08976AEC;
    case 171u: goto L_08976AF4;
    case 172u: goto L_08976AFC;
    case 173u: goto L_08976B00;
    case 174u: goto L_08976B1C;
    case 175u: goto L_08976B30;
    case 176u: goto L_08976B54;
    case 177u: goto L_08976B5C;
    case 178u: goto L_08976B64;
    case 179u: goto L_08976B6C;
    case 180u: goto L_08976B88;
    case 181u: goto L_08976B94;
    case 182u: goto L_08976BA4;
    case 183u: goto L_08976BC0;
    case 184u: goto L_08976BD4;
    case 185u: goto L_08976BDC;
    case 186u: goto L_08976BE4;
    case 187u: goto L_08976BEC;
    case 188u: goto L_08976BF4;
    case 189u: goto L_08976C10;
    case 190u: goto L_08976C18;
    case 191u: goto L_08976C20;
    case 192u: goto L_08976C28;
    case 193u: goto L_08976C34;
    case 194u: goto L_08976C44;
    case 195u: goto L_08976C4C;
    case 196u: goto L_08976C58;
    case 197u: goto L_08976C60;
    case 198u: goto L_08976C74;
    case 199u: goto L_08976C7C;
    case 200u: goto L_08976C90;
    case 201u: goto L_08976C94;
    case 202u: goto L_08976CAC;
    case 203u: goto L_08976CB4;
    case 204u: goto L_08976CC0;
    case 205u: goto L_08976CC8;
    case 206u: goto L_08976CD4;
    case 207u: goto L_08976CE4;
    case 208u: goto L_08976CEC;
    case 209u: goto L_08976CF4;
    case 210u: goto L_08976D24;
    case 211u: goto L_08976D2C;
    case 212u: goto L_08976D38;
    case 213u: goto L_08976D44;
    case 214u: goto L_08976D4C;
    case 215u: goto L_08976D6C;
    case 216u: goto L_08976D78;
    case 217u: goto L_08976D88;
    case 218u: goto L_08976D94;
    case 219u: goto L_08976D9C;
    case 220u: goto L_08976DA4;
    case 221u: goto L_08976DB4;
    case 222u: goto L_08976DBC;
    case 223u: goto L_08976DCC;
    case 224u: goto L_08976DD4;
    case 225u: goto L_08976DDC;
    case 226u: goto L_08976DE4;
    case 227u: goto L_08976E0C;
    case 228u: goto L_08976E28;
    case 229u: goto L_08976E30;
    case 230u: goto L_08976E38;
    case 231u: goto L_08976E44;
    case 232u: goto L_08976E50;
    case 233u: goto L_08976E5C;
    case 234u: goto L_08976E68;
    case 235u: goto L_08976E8C;
    case 236u: goto L_08976E90;
    case 237u: goto L_08976EA0;
    case 238u: goto L_08976EA4;
    case 239u: goto L_08976EC4;
    case 240u: goto L_08976ED0;
    case 241u: goto L_08976ED8;
    case 242u: goto L_08976EE0;
    case 243u: goto L_08976EE8;
    case 244u: goto L_08976EF4;
    case 245u: goto L_08976EFC;
    case 246u: goto L_08976F08;
    case 247u: goto L_08976F14;
    case 248u: goto L_08976F24;
    case 249u: goto L_08976F2C;
    case 250u: goto L_08976F34;
    case 251u: goto L_08976F38;
    case 252u: goto L_08976F40;
    case 253u: goto L_08976F48;
    case 254u: goto L_08976F50;
    case 255u: goto L_08976F68;
    case 256u: goto L_08976F70;
    case 257u: goto L_08976F80;
    case 258u: goto L_08976F8C;
    case 259u: goto L_08976FA4;
    case 260u: goto L_08976FB0;
    case 261u: goto L_08976FC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08976004:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 265u, 0x08975FC0u>(ctx, &aot_mem); return;
      }
      goto L_08976014;
    }
L_08976014:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2456u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08976030u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976030u) goto L_08976030;
    return;
L_08976030:
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
L_0897604C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(272));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08976078u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976078u) goto L_08976078;
    return;
L_08976078:
    aot_gpr[4] = (0u | 514u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897608C;
      }
      goto L_08976084;
    }
L_08976084:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976094;
      }
      goto L_0897608C;
    }
L_0897608C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08976094;
      }
      goto L_08976094;
    }
L_08976094:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089760A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(288));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x089760C4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[10]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089760C4u) goto L_089760C4;
    return;
L_089760C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089760D0:
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089760E4;
      }
      goto L_089760DC;
    }
L_089760DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089760F4;
      }
      goto L_089760E4;
    }
L_089760E4:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(440), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(504), aot_gpr[4]);
    goto L_089760F4;
L_089760F4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089760FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    aot_gpr[31] = (0x08976140u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08976140u) goto L_08976140;
    return;
L_08976140:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897614Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 253u, 0x0897AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0897614Cu) goto L_0897614C;
    return;
L_0897614C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976240;
      }
      goto L_08976158;
    }
L_08976158:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21232)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(372), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(368), aot_gpr[18]);
    aot_gpr[31] = (0x08976178u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AE34u;
    return;
L_08976178:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976238;
      }
      goto L_08976180;
    }
L_08976180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(372), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(368), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_089761A0;
      }
      goto L_08976198;
    }
L_08976198:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08976230;
      }
      goto L_089761A0;
    }
L_089761A0:
    aot_gpr[1] = (aot_gpr[5] << 21u);
    aot_gpr[4] = (aot_gpr[4] >> 11u);
    aot_gpr[5] = (aot_gpr[5] >> 11u);
    aot_gpr[4] = (aot_gpr[1] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089761C8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5ADFCu;
    return;
L_089761C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976228;
      }
      goto L_089761D0;
    }
L_089761D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20924)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20928)));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(388), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20916)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-20920)));
    aot_gpr[8] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976248;
      }
      goto L_08976220;
    }
L_08976220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089762AC;
      }
      goto L_08976228;
    }
L_08976228:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 113u);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976230;
    }
L_08976230:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 113u);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976238;
    }
L_08976238:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 113u);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976240;
    }
L_08976240:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 73u);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976248;
    }
L_08976248:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08976258u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08976258u) goto L_08976258;
    return;
L_08976258:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(388)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(384)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08976270u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x08976270u) goto L_08976270;
    return;
L_08976270:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0897628Cu);
    aot_gpr[9] = (0u | 0u);
    goto L_0897604C;
L_0897628C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(388)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(384)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(100));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x089762A8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089760A4;
L_089762A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_089762AC;
L_089762AC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089762E4;
      }
      goto L_089762B4;
    }
L_089762B4:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(26000));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(7544));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[7]);
      if (branch_taken) {
          goto L_089762EC;
      }
      goto L_089762DC;
    }
L_089762DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089762F0;
      }
      goto L_089762E4;
    }
L_089762E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 113u);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_089762EC;
    }
L_089762EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089762F0;
L_089762F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08976310u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ADCCu;
    return;
L_08976310:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976344;
      }
      goto L_08976318;
    }
L_08976318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 113u);
      if (branch_taken) {
          goto L_08976334;
      }
      goto L_0897632C;
    }
L_0897632C:
    aot_gpr[31] = (0x08976334u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x08976334u) goto L_08976334;
    return;
L_08976334:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976344;
    }
L_08976344:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08976354u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ADB4u;
    return;
L_08976354:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976388;
      }
      goto L_0897635C;
    }
L_0897635C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 113u);
      if (branch_taken) {
          goto L_08976378;
      }
      goto L_08976370;
    }
L_08976370:
    aot_gpr[31] = (0x08976378u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x08976378u) goto L_08976378;
    return;
L_08976378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976388;
    }
L_08976388:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(412), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(408), aot_gpr[6]);
    aot_gpr[31] = (0x089763A4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5ADC4u;
    return;
L_089763A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089763D8;
      }
      goto L_089763AC;
    }
L_089763AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 113u);
      if (branch_taken) {
          goto L_089763C8;
      }
      goto L_089763C0;
    }
L_089763C0:
    aot_gpr[31] = (0x089763C8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x089763C8u) goto L_089763C8;
    return;
L_089763C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_089763D8;
    }
L_089763D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(420), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x089763F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(416), aot_gpr[6]);
    ctx.pc = 0x08A5ADDCu;
    return;
L_089763F0:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08976428;
      }
      goto L_089763FC;
    }
L_089763FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 113u);
      if (branch_taken) {
          goto L_08976418;
      }
      goto L_08976410;
    }
L_08976410:
    aot_gpr[31] = (0x08976418u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x08976418u) goto L_08976418;
    return;
L_08976418:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976428;
    }
L_08976428:
    aot_gpr[4] = (0u | 8u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (aot_gpr[5] | 0u);
        goto L_08976438;
    }
    goto L_08976438;
L_08976438:
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(472), aot_gpr[4]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (16879u << 16u);
      if (branch_taken) {
          goto L_089768AC;
      }
      goto L_0897644C;
    }
L_0897644C:
    aot_gpr[4] = (aot_gpr[4] | 49823u);
    aot_gpr[30] = (0u | 44100u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08976458;
L_08976458:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08976464u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = 0x08A5ADACu;
    return;
L_08976464:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976498;
      }
      goto L_0897646C;
    }
L_0897646C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 113u);
      if (branch_taken) {
          goto L_08976488;
      }
      goto L_08976480;
    }
L_08976480:
    aot_gpr[31] = (0x08976488u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x08976488u) goto L_08976488;
    return;
L_08976488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976498;
    }
L_08976498:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(72));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x089764A8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    ctx.pc = 0x08A5ADD4u;
    return;
L_089764A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089764DC;
      }
      goto L_089764B0;
    }
L_089764B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 113u);
      if (branch_taken) {
          goto L_089764CC;
      }
      goto L_089764C4;
    }
L_089764C4:
    aot_gpr[31] = (0x089764CCu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x089764CCu) goto L_089764CC;
    return;
L_089764CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_089764DC;
    }
L_089764DC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(104));
    aot_gpr[31] = (0x089764E8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    ctx.pc = 0x08A5ADB4u;
    return;
L_089764E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897651C;
      }
      goto L_089764F0;
    }
L_089764F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 113u);
      if (branch_taken) {
          goto L_0897650C;
      }
      goto L_08976504;
    }
L_08976504:
    aot_gpr[31] = (0x0897650Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x0897650Cu) goto L_0897650C;
    return;
L_0897650C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_0897651C;
    }
L_0897651C:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x08976528u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    ctx.pc = 0x08A5ADC4u;
    return;
L_08976528:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897655C;
      }
      goto L_08976530;
    }
L_08976530:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 113u);
      if (branch_taken) {
          goto L_0897654C;
      }
      goto L_08976544;
    }
L_08976544:
    aot_gpr[31] = (0x0897654Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x0897654Cu) goto L_0897654C;
    return;
L_0897654C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_0897655C;
    }
L_0897655C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08976568u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08976568u) goto L_08976568;
    return;
L_08976568:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[31] = (0x08976578u);
    aot_gpr[4] = (0u | 1576u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x08976578u) goto L_08976578;
    return;
L_08976578:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976590;
      }
      goto L_08976584;
    }
L_08976584:
    aot_gpr[31] = (0x0897658Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 29u, 0x089791BCu>(ctx, &aot_mem) && ctx.pc == 0x0897658Cu) goto L_0897658C;
    return;
L_0897658C:
    aot_gpr[21] = (aot_gpr[16] | 0u);
    goto L_08976590;
L_08976590:
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_089765B0;
      }
      goto L_089765A0;
    }
L_089765A0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089767E8;
      }
      goto L_089765A8;
    }
L_089765A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089765C4;
      }
      goto L_089765B0;
    }
L_089765B0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089766D0;
      }
      goto L_089765BC;
    }
L_089765BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089767E8;
      }
      goto L_089765C4;
    }
L_089765C4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089765D0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089765D0u) goto L_089765D0;
    return;
L_089765D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x089765E0u);
    aot_gpr[4] = (0u | 472u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x089765E0u) goto L_089765E0;
    return;
L_089765E0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089765F8;
      }
      goto L_089765EC;
    }
L_089765EC:
    aot_gpr[31] = (0x089765F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0375_entry, 375u, 222u, 0x0897BC60u>(ctx, &aot_mem) && ctx.pc == 0x089765F4u) goto L_089765F4;
    return;
L_089765F4:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_089765F8;
L_089765F8:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[31] = (0x08976608u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    ctx.pc = 0x08A5ADA4u;
    return;
L_08976608:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089766B4;
      }
      goto L_08976610;
    }
L_08976610:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[5]);
    aot_gpr[31] = (0x08976624u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08976624u) goto L_08976624;
    return;
L_08976624:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08976644u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976644u) goto L_08976644;
    return;
L_08976644:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08976650u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08976650u) goto L_08976650;
    return;
L_08976650:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897665Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897665Cu) goto L_0897665C;
    return;
L_0897665C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897667Cu);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897667Cu) goto L_0897667C;
    return;
L_0897667C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08976688u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08976688u) goto L_08976688;
    return;
L_08976688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[21] = (0u | 113u);
      if (branch_taken) {
          goto L_089766A4;
      }
      goto L_0897669C;
    }
L_0897669C:
    aot_gpr[31] = (0x089766A4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x089766A4u) goto L_089766A4;
    return;
L_089766A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_089766B4;
    }
L_089766B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(76), aot_gpr[4]);
      if (branch_taken) {
          goto L_08976820;
      }
      goto L_089766D0;
    }
L_089766D0:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089766DCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089766DCu) goto L_089766DC;
    return;
L_089766DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[31] = (0x089766ECu);
    aot_gpr[4] = (0u | 468u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x089766ECu) goto L_089766EC;
    return;
L_089766EC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976704;
      }
      goto L_089766F8;
    }
L_089766F8:
    aot_gpr[31] = (0x08976700u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0375_entry, 375u, 149u, 0x0897B818u>(ctx, &aot_mem) && ctx.pc == 0x08976700u) goto L_08976700;
    return;
L_08976700:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_08976704;
L_08976704:
    aot_gpr[16] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(88));
    aot_gpr[31] = (0x08976714u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    ctx.pc = 0x08A5ADBCu;
    return;
L_08976714:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089767B8;
      }
      goto L_0897671C;
    }
L_0897671C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08976728u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08976728u) goto L_08976728;
    return;
L_08976728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08976748u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976748u) goto L_08976748;
    return;
L_08976748:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08976754u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08976754u) goto L_08976754;
    return;
L_08976754:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08976760u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08976760u) goto L_08976760;
    return;
L_08976760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08976780u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976780u) goto L_08976780;
    return;
L_08976780:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897678Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x0897678Cu) goto L_0897678C;
    return;
L_0897678C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[21] = (0u | 113u);
      if (branch_taken) {
          goto L_089767A8;
      }
      goto L_089767A0;
    }
L_089767A0:
    aot_gpr[31] = (0x089767A8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x089767A8u) goto L_089767A8;
    return;
L_089767A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_089767B8;
    }
L_089767B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (0u | 10u);
    aot_gpr[17] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (0u | 1u);
    if (aot_gpr[5] == aot_gpr[6]) {
    aot_gpr[4] = (0u | 8u);
        goto L_089767D0;
    }
    goto L_089767D0;
L_089767D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(72), aot_gpr[4]);
      if (branch_taken) {
          goto L_08976820;
      }
      goto L_089767E8;
    }
L_089767E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[20] << 2u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (aot_gpr[23] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(440), 0u);
    aot_gpr[16] = (0u | 113u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
      if (branch_taken) {
          goto L_08976810;
      }
      goto L_08976808;
    }
L_08976808:
    aot_gpr[31] = (0x08976810u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x08976810u) goto L_08976810;
    return;
L_08976810:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768D0;
      }
      goto L_08976820;
    }
L_08976820:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976878;
      }
      goto L_08976828;
    }
L_08976828:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08976838u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 11u, 0x0897908Cu>(ctx, &aot_mem) && ctx.pc == 0x08976838u) goto L_08976838;
    return;
L_08976838:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08976848u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 13u, 0x089790A4u>(ctx, &aot_mem) && ctx.pc == 0x08976848u) goto L_08976848;
    return;
L_08976848:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08976854u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 285u, 0x08978F78u>(ctx, &aot_mem) && ctx.pc == 0x08976854u) goto L_08976854;
    return;
L_08976854:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08976864u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_089760D0;
L_08976864:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976878;
      }
      goto L_0897686C;
    }
L_0897686C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08976878u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 28u, 0x089791ACu>(ctx, &aot_mem) && ctx.pc == 0x08976878u) goto L_08976878;
    return;
L_08976878:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(372)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(368)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(472)));
    aot_gpr[1] = (aot_gpr[5] << 21u);
    aot_gpr[4] = (aot_gpr[4] >> 11u);
    aot_gpr[5] = (aot_gpr[5] >> 11u);
    aot_gpr[4] = (aot_gpr[1] | aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976458;
      }
      goto L_089768AC;
    }
L_089768AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_089768C4;
      }
      goto L_089768BC;
    }
L_089768BC:
    aot_gpr[31] = (0x089768C4u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x089768C4u) goto L_089768C4;
    return;
L_089768C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_089768D0;
L_089768D0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976904:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(432)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089769D0;
      }
      goto L_08976924;
    }
L_08976924:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08976934u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08976934u) goto L_08976934;
    return;
L_08976934:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08976948u);
    aot_gpr[4] = (0u | 372u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x08976948u) goto L_08976948;
    return;
L_08976948:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08976960;
      }
      goto L_08976954;
    }
L_08976954:
    aot_gpr[31] = (0x0897695Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 65u, 0x0897F39Cu>(ctx, &aot_mem) && ctx.pc == 0x0897695Cu) goto L_0897695C;
    return;
L_0897695C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08976960;
L_08976960:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089769C0;
      }
      goto L_08976978;
    }
L_08976978:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-20912)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089769C0;
      }
      goto L_08976998;
    }
L_08976998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089769C0;
      }
      goto L_089769A0;
    }
L_089769A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089769C0;
      }
      goto L_089769A8;
    }
L_089769A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089769C0;
      }
      goto L_089769B0;
    }
L_089769B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089769C0;
      }
      goto L_089769B8;
    }
L_089769B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089769C0;
      }
      goto L_089769C0;
    }
L_089769C0:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089769D8;
      }
      goto L_089769C8;
    }
L_089769C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(432)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(368), aot_gpr[16]);
    goto L_089769D0;
L_089769D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(432)));
      if (branch_taken) {
          goto L_08976A18;
      }
      goto L_089769D8;
    }
L_089769D8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089769E4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089769E4u) goto L_089769E4;
    return;
L_089769E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(432)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08976A08u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08976A08u) goto L_08976A08;
    return;
L_08976A08:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08976A14u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08976A14u) goto L_08976A14;
    return;
L_08976A14:
    aot_gpr[2] = (0u | 0u);
    goto L_08976A18;
L_08976A18:
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
L_08976A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[8] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-21232)));
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[8] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[21] | 0u);
    aot_gpr[18] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[8] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08976AD0;
      }
      goto L_08976A90;
    }
L_08976A90:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08976AA8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08976AA8u) goto L_08976AA8;
    return;
L_08976AA8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 16384u);
    aot_gpr[31] = (0x08976AB8u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x08976AB8u) goto L_08976AB8;
    return;
L_08976AB8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u | 1u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08976AF4;
      }
      goto L_08976AD0;
    }
L_08976AD0:
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[9] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(26000));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(7544));
      if (branch_taken) {
          goto L_08976AFC;
      }
      goto L_08976AEC;
    }
L_08976AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976B00;
      }
      goto L_08976AF4;
    }
L_08976AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976CF4;
      }
      goto L_08976AFC;
    }
L_08976AFC:
    aot_gpr[5] = (0u | 0u);
    goto L_08976B00;
L_08976B00:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    aot_gpr[8] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
      if (branch_taken) {
          goto L_08976B30;
      }
      goto L_08976B1C;
    }
L_08976B1C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21064));
      if (branch_taken) {
          goto L_08976C60;
      }
      goto L_08976B30;
    }
L_08976B30:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21180));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[30] = (2u << 16u);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21044)));
    aot_gpr[16] = (0u | 1024u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-31072));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21048)));
    goto L_08976B54;
L_08976B54:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08976C20;
      }
      goto L_08976B5C;
    }
L_08976B5C:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08976C20;
      }
      goto L_08976B64;
    }
L_08976B64:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976C20;
      }
      goto L_08976B6C;
    }
L_08976B6C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08976B88u);
    aot_gpr[9] = (0u | 1u);
    goto L_0897604C;
L_08976B88:
    aot_gpr[4] = (0u | 514u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08976BA4;
      }
      goto L_08976B94;
    }
L_08976B94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(392)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[4] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(392), aot_gpr[4]);
    goto L_08976BA4;
L_08976BA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21052)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21056)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08976BC0u);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    goto L_089760A4;
L_08976BC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[5] = (0u | 18u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08976BEC;
      }
      goto L_08976BD4;
    }
L_08976BD4:
    aot_gpr[31] = (0x08976BDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08976BDCu) goto L_08976BDC;
    return;
L_08976BDC:
    aot_gpr[31] = (0x08976BE4u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08976BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976C18;
      }
      goto L_08976BEC;
    }
L_08976BEC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[19] ^ aot_gpr[23]);
      if (branch_taken) {
          goto L_08976C18;
      }
      goto L_08976BF4;
    }
L_08976BF4:
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[18] < aot_gpr[22] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[23] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976C18;
      }
      goto L_08976C10;
    }
L_08976C10:
    aot_gpr[31] = (0x08976C18u);
    aot_gpr[4] = (0u | 4000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08976C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976B54;
      }
      goto L_08976C20;
    }
L_08976C20:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08976C58;
      }
      goto L_08976C28;
    }
L_08976C28:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08976C34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21136));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08976C34u) goto L_08976C34;
    return;
L_08976C34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08976C4C;
      }
      goto L_08976C44;
    }
L_08976C44:
    aot_gpr[31] = (0x08976C4Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x08976C4Cu) goto L_08976C4C;
    return;
L_08976C4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 112u);
      if (branch_taken) {
          goto L_08976CF4;
      }
      goto L_08976C58;
    }
L_08976C58:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-21064));
    goto L_08976C60;
L_08976C60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08976C74u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08976C74u) goto L_08976C74;
    return;
L_08976C74:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976C94;
      }
      goto L_08976C7C;
    }
L_08976C7C:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08976C90u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_089760FC;
L_08976C90:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08976C94;
L_08976C94:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08976CACu);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    goto L_08976904;
L_08976CAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08976CD4;
      }
      goto L_08976CB4;
    }
L_08976CB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08976CC8;
      }
      goto L_08976CC0;
    }
L_08976CC0:
    aot_gpr[31] = (0x08976CC8u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x08976CC8u) goto L_08976CC8;
    return;
L_08976CC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 56u);
      if (branch_taken) {
          goto L_08976CF4;
      }
      goto L_08976CD4;
    }
L_08976CD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
      if (branch_taken) {
          goto L_08976CEC;
      }
      goto L_08976CE4;
    }
L_08976CE4:
    aot_gpr[31] = (0x08976CECu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 48u, 0x0897A2DCu>(ctx, &aot_mem) && ctx.pc == 0x08976CECu) goto L_08976CEC;
    return;
L_08976CEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[22]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_08976CF4;
L_08976CF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976D24:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(400)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976D2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(400), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976D38:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(388)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976D44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976D4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08976D6Cu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08976D6Cu) goto L_08976D6C;
    return;
L_08976D6C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976DB4;
      }
      goto L_08976D78;
    }
L_08976D78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08976D88u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x08976D88u) goto L_08976D88;
    return;
L_08976D88:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976DA4;
      }
      goto L_08976D94;
    }
L_08976D94:
    aot_gpr[31] = (0x08976D9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 122u, 0x0897F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08976D9Cu) goto L_08976D9C;
    return;
L_08976D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976DBC;
      }
      goto L_08976DA4;
    }
L_08976DA4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21036)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21040)));
      if (branch_taken) {
          goto L_08976DBC;
      }
      goto L_08976DB4;
    }
L_08976DB4:
    aot_gpr[31] = (0x08976DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0379_entry, 379u, 122u, 0x0897F75Cu>(ctx, &aot_mem) && ctx.pc == 0x08976DBCu) goto L_08976DBC;
    return;
L_08976DBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976DCC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 33u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976DD4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 33u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976DDC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 33u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976DE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08976E30;
      }
      goto L_08976E0C;
    }
L_08976E0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08976E38;
      }
      goto L_08976E28;
    }
L_08976E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976EA0;
      }
      goto L_08976E30;
    }
L_08976E30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 49u);
      if (branch_taken) {
          goto L_08976EA4;
      }
      goto L_08976E38;
    }
L_08976E38:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976E90;
      }
      goto L_08976E44;
    }
L_08976E44:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08976E50u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 94u, 0x08979684u>(ctx, &aot_mem) && ctx.pc == 0x08976E50u) goto L_08976E50;
    return;
L_08976E50:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976E8C;
      }
      goto L_08976E5C;
    }
L_08976E5C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(368));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 17u);
    goto L_08976E68;
L_08976E68:
    aot_gpr[7] = (aot_gpr[20] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08976E68;
      }
      goto L_08976E8C;
    }
L_08976E8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(472)));
    goto L_08976E90;
L_08976E90:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08976E38;
      }
      goto L_08976EA0;
    }
L_08976EA0:
    aot_gpr[2] = (0u | 0u);
    goto L_08976EA4;
L_08976EA4:
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
L_08976EC4:
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976EE8;
      }
      goto L_08976ED0;
    }
L_08976ED0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08976EE0;
      }
      goto L_08976ED8;
    }
L_08976ED8:
    aot_gpr[4] = (0u | 44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08976EE0;
L_08976EE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08976EF4;
      }
      goto L_08976EE8;
    }
L_08976EE8:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(440)));
    goto L_08976EF4;
L_08976EF4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976EFC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(480)));
    goto L_08976F08;
L_08976F08:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08976F2C;
      }
      goto L_08976F14;
    }
L_08976F14:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08976F08;
      }
      goto L_08976F24;
    }
L_08976F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08976F34;
      }
      goto L_08976F2C;
    }
L_08976F2C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08976F38;
      }
      goto L_08976F34;
    }
L_08976F34:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08976F38;
L_08976F38:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976F40:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08976F50;
      }
      goto L_08976F48;
    }
L_08976F48:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 42u);
      if (branch_taken) {
          goto L_08976F68;
      }
      goto L_08976F50;
    }
L_08976F50:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(492));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (0u | 0u);
    goto L_08976F68;
L_08976F68:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976F70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08976F80u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 199u, 0x08975B80u>(ctx, &aot_mem) && ctx.pc == 0x08976F80u) goto L_08976F80;
    return;
L_08976F80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976F8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1072));
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08976FA4u);
    aot_gpr[5] = (256u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 163u, 0x08979AE0u>(ctx, &aot_mem) && ctx.pc == 0x08976FA4u) goto L_08976FA4;
    return;
L_08976FA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08976FB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08976FC4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 223u, 0x08979FCCu>(ctx, &aot_mem) && ctx.pc == 0x08976FC4u) goto L_08976FC4;
    return;
L_08976FC4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6480));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-21232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(372), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(368), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(388), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(396), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), 0u);
    ctx.pc = 0x08977000u; return;
}

void recomp_unit_0370(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0370_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_370(Runtime &runtime) {
    runtime.register_generated_unit(370u, 0x08976000u, 4096u, &recomp_unit_0370, &recomp_unit_0370_entry);
    runtime.register_function(0x08976004u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976014u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976030u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897604Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976078u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976084u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897608Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976094u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089760A4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089760C4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089760D0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089760DCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089760E4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089760F4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089760FCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976140u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897614Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976158u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976178u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976180u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976198u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089761A0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089761C8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089761D0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976220u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976228u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976230u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976238u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976240u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976248u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976258u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976270u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897628Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089762A8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089762ACu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089762B4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089762DCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089762E4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089762ECu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089762F0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976310u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976318u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897632Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976334u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976344u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976354u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897635Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976370u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976378u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976388u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089763A4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089763ACu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089763C0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089763C8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089763D8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089763F0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089763FCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976410u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976418u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976428u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976438u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897644Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976458u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976464u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897646Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976480u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976488u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976498u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089764A8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089764B0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089764C4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089764CCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089764DCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089764E8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089764F0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976504u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897650Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897651Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976528u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976530u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976544u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897654Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897655Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976568u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976578u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976584u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897658Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976590u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765A0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765A8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765B0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765BCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765C4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765D0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765E0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765ECu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765F4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089765F8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976608u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976610u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976624u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976644u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976650u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897665Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897667Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976688u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897669Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089766A4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089766B4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089766D0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089766DCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089766ECu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089766F8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976700u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976704u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976714u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897671Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976728u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976748u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976754u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976760u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976780u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897678Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089767A0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089767A8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089767B8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089767D0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089767E8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976808u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976810u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976820u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976828u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976838u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976848u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976854u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976864u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897686Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976878u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089768ACu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089768BCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089768C4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089768D0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976904u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976924u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976934u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976948u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976954u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x0897695Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976960u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976978u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976990u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976998u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769A0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769A8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769B0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769B8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769C0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769C8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769D0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769D8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x089769E4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976A08u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976A14u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976A18u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976A30u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976A90u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976AA8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976AB8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976AD0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976AECu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976AF4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976AFCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B00u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B1Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B30u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B54u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B5Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B64u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B6Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B88u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976B94u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976BA4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976BC0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976BD4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976BDCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976BE4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976BECu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976BF4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C10u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C18u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C20u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C28u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C34u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C44u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C4Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C58u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C60u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C74u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C7Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C90u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976C94u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976CACu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976CB4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976CC0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976CC8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976CD4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976CE4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976CECu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976CF4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D24u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D2Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D38u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D44u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D4Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D6Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D78u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D88u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D94u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976D9Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976DA4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976DB4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976DBCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976DCCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976DD4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976DDCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976DE4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E0Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E28u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E30u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E38u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E44u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E50u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E5Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E68u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E8Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976E90u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976EA0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976EA4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976EC4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976ED0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976ED8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976EE0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976EE8u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976EF4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976EFCu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F08u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F14u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F24u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F2Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F34u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F38u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F40u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F48u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F50u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F68u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F70u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F80u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976F8Cu, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976FA4u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976FB0u, &recomp_unit_0370, "recomp_unit_0370");
    runtime.register_function(0x08976FC4u, &recomp_unit_0370, "recomp_unit_0370");
}
} // namespace psprecomp
