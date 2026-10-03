#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0575[1023] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 7, 0, 8, 9, 0, 0, 0, 0, 0,
    0, 10, 0, 11, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0,
    0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0,
    42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 50, 0, 0, 0, 0, 0,
    51, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0,
    62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0,
    0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 94, 95, 0,
    96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 105, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 0, 108, 0, 109, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 0,
    0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 132, 133, 0, 0, 134, 0, 0, 135, 0, 136,
    0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 143, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0,
    147, 0, 0, 148, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0,
    0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210,
    0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 220, 0,
    0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 233, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 235, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 247, 248, 0, 0, 0, 0, 0, 0, 249, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255,
};
void recomp_unit_0575_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A43004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0575[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A43004;
    case 2u: goto L_08A43018;
    case 3u: goto L_08A43020;
    case 4u: goto L_08A43048;
    case 5u: goto L_08A43050;
    case 6u: goto L_08A4305C;
    case 7u: goto L_08A43060;
    case 8u: goto L_08A43068;
    case 9u: goto L_08A4306C;
    case 10u: goto L_08A43088;
    case 11u: goto L_08A43090;
    case 12u: goto L_08A43094;
    case 13u: goto L_08A430B0;
    case 14u: goto L_08A430B8;
    case 15u: goto L_08A430C0;
    case 16u: goto L_08A430CC;
    case 17u: goto L_08A430D8;
    case 18u: goto L_08A430E4;
    case 19u: goto L_08A430EC;
    case 20u: goto L_08A430F4;
    case 21u: goto L_08A430FC;
    case 22u: goto L_08A4310C;
    case 23u: goto L_08A43114;
    case 24u: goto L_08A4311C;
    case 25u: goto L_08A4313C;
    case 26u: goto L_08A43144;
    case 27u: goto L_08A4314C;
    case 28u: goto L_08A43158;
    case 29u: goto L_08A4315C;
    case 30u: goto L_08A43164;
    case 31u: goto L_08A4316C;
    case 32u: goto L_08A43174;
    case 33u: goto L_08A4317C;
    case 34u: goto L_08A431A0;
    case 35u: goto L_08A431A8;
    case 36u: goto L_08A431AC;
    case 37u: goto L_08A431C4;
    case 38u: goto L_08A431CC;
    case 39u: goto L_08A431D4;
    case 40u: goto L_08A431E4;
    case 41u: goto L_08A431FC;
    case 42u: goto L_08A43204;
    case 43u: goto L_08A43218;
    case 44u: goto L_08A43224;
    case 45u: goto L_08A4322C;
    case 46u: goto L_08A43234;
    case 47u: goto L_08A4323C;
    case 48u: goto L_08A43260;
    case 49u: goto L_08A43268;
    case 50u: goto L_08A4326C;
    case 51u: goto L_08A43284;
    case 52u: goto L_08A4328C;
    case 53u: goto L_08A43294;
    case 54u: goto L_08A432A4;
    case 55u: goto L_08A432BC;
    case 56u: goto L_08A432C4;
    case 57u: goto L_08A432D8;
    case 58u: goto L_08A432E4;
    case 59u: goto L_08A432EC;
    case 60u: goto L_08A432F4;
    case 61u: goto L_08A432FC;
    case 62u: goto L_08A43304;
    case 63u: goto L_08A4330C;
    case 64u: goto L_08A4331C;
    case 65u: goto L_08A43338;
    case 66u: goto L_08A43348;
    case 67u: goto L_08A43350;
    case 68u: goto L_08A4335C;
    case 69u: goto L_08A43364;
    case 70u: goto L_08A43384;
    case 71u: goto L_08A4338C;
    case 72u: goto L_08A43394;
    case 73u: goto L_08A4339C;
    case 74u: goto L_08A433A8;
    case 75u: goto L_08A433B8;
    case 76u: goto L_08A433D0;
    case 77u: goto L_08A433E8;
    case 78u: goto L_08A43404;
    case 79u: goto L_08A43424;
    case 80u: goto L_08A4342C;
    case 81u: goto L_08A43434;
    case 82u: goto L_08A4343C;
    case 83u: goto L_08A43448;
    case 84u: goto L_08A43458;
    case 85u: goto L_08A43470;
    case 86u: goto L_08A43488;
    case 87u: goto L_08A434A4;
    case 88u: goto L_08A434AC;
    case 89u: goto L_08A434B4;
    case 90u: goto L_08A434C8;
    case 91u: goto L_08A434D4;
    case 92u: goto L_08A434DC;
    case 93u: goto L_08A434F0;
    case 94u: goto L_08A434F8;
    case 95u: goto L_08A434FC;
    case 96u: goto L_08A43504;
    case 97u: goto L_08A4351C;
    case 98u: goto L_08A4352C;
    case 99u: goto L_08A43534;
    case 100u: goto L_08A43538;
    case 101u: goto L_08A43540;
    case 102u: goto L_08A43554;
    case 103u: goto L_08A43564;
    case 104u: goto L_08A4356C;
    case 105u: goto L_08A43570;
    case 106u: goto L_08A43578;
    case 107u: goto L_08A4358C;
    case 108u: goto L_08A4359C;
    case 109u: goto L_08A435A4;
    case 110u: goto L_08A435A8;
    case 111u: goto L_08A435B0;
    case 112u: goto L_08A435C8;
    case 113u: goto L_08A435DC;
    case 114u: goto L_08A435EC;
    case 115u: goto L_08A435FC;
    case 116u: goto L_08A43614;
    case 117u: goto L_08A4361C;
    case 118u: goto L_08A43624;
    case 119u: goto L_08A4362C;
    case 120u: goto L_08A43634;
    case 121u: goto L_08A4364C;
    case 122u: goto L_08A4365C;
    case 123u: goto L_08A43668;
    case 124u: goto L_08A43674;
    case 125u: goto L_08A4367C;
    case 126u: goto L_08A43688;
    case 127u: goto L_08A43690;
    case 128u: goto L_08A43698;
    case 129u: goto L_08A436B8;
    case 130u: goto L_08A436C8;
    case 131u: goto L_08A436D0;
    case 132u: goto L_08A436DC;
    case 133u: goto L_08A436E0;
    case 134u: goto L_08A436EC;
    case 135u: goto L_08A436F8;
    case 136u: goto L_08A43700;
    case 137u: goto L_08A43718;
    case 138u: goto L_08A43724;
    case 139u: goto L_08A43730;
    case 140u: goto L_08A4373C;
    case 141u: goto L_08A43748;
    case 142u: goto L_08A43750;
    case 143u: goto L_08A43754;
    case 144u: goto L_08A43758;
    case 145u: goto L_08A43764;
    case 146u: goto L_08A43778;
    case 147u: goto L_08A43784;
    case 148u: goto L_08A43790;
    case 149u: goto L_08A43794;
    case 150u: goto L_08A437A0;
    case 151u: goto L_08A437A8;
    case 152u: goto L_08A437CC;
    case 153u: goto L_08A43800;
    case 154u: goto L_08A4380C;
    case 155u: goto L_08A43818;
    case 156u: goto L_08A43820;
    case 157u: goto L_08A4382C;
    case 158u: goto L_08A43840;
    case 159u: goto L_08A4384C;
    case 160u: goto L_08A43854;
    case 161u: goto L_08A43878;
    case 162u: goto L_08A43888;
    case 163u: goto L_08A43890;
    case 164u: goto L_08A4389C;
    case 165u: goto L_08A438AC;
    case 166u: goto L_08A438B4;
    case 167u: goto L_08A438C4;
    case 168u: goto L_08A438CC;
    case 169u: goto L_08A438E8;
    case 170u: goto L_08A438EC;
    case 171u: goto L_08A43918;
    case 172u: goto L_08A4391C;
    case 173u: goto L_08A43944;
    case 174u: goto L_08A4395C;
    case 175u: goto L_08A43960;
    case 176u: goto L_08A4398C;
    case 177u: goto L_08A43990;
    case 178u: goto L_08A439B8;
    case 179u: goto L_08A439C4;
    case 180u: goto L_08A439FC;
    case 181u: goto L_08A43A08;
    case 182u: goto L_08A43A14;
    case 183u: goto L_08A43A20;
    case 184u: goto L_08A43A28;
    case 185u: goto L_08A43A34;
    case 186u: goto L_08A43A54;
    case 187u: goto L_08A43A60;
    case 188u: goto L_08A43A68;
    case 189u: goto L_08A43AAC;
    case 190u: goto L_08A43ABC;
    case 191u: goto L_08A43AC8;
    case 192u: goto L_08A43AD0;
    case 193u: goto L_08A43ADC;
    case 194u: goto L_08A43AEC;
    case 195u: goto L_08A43AF4;
    case 196u: goto L_08A43B04;
    case 197u: goto L_08A43B2C;
    case 198u: goto L_08A43B3C;
    case 199u: goto L_08A43B40;
    case 200u: goto L_08A43B50;
    case 201u: goto L_08A43B80;
    case 202u: goto L_08A43B88;
    case 203u: goto L_08A43BAC;
    case 204u: goto L_08A43BB8;
    case 205u: goto L_08A43BC0;
    case 206u: goto L_08A43BC4;
    case 207u: goto L_08A43BC8;
    case 208u: goto L_08A43BEC;
    case 209u: goto L_08A43BF4;
    case 210u: goto L_08A43C00;
    case 211u: goto L_08A43C0C;
    case 212u: goto L_08A43C14;
    case 213u: goto L_08A43C1C;
    case 214u: goto L_08A43C24;
    case 215u: goto L_08A43C48;
    case 216u: goto L_08A43C4C;
    case 217u: goto L_08A43C5C;
    case 218u: goto L_08A43C6C;
    case 219u: goto L_08A43C78;
    case 220u: goto L_08A43C7C;
    case 221u: goto L_08A43C8C;
    case 222u: goto L_08A43C9C;
    case 223u: goto L_08A43CA4;
    case 224u: goto L_08A43CB8;
    case 225u: goto L_08A43CC0;
    case 226u: goto L_08A43D34;
    case 227u: goto L_08A43DC0;
    case 228u: goto L_08A43DE0;
    case 229u: goto L_08A43DE8;
    case 230u: goto L_08A43E00;
    case 231u: goto L_08A43E1C;
    case 232u: goto L_08A43E5C;
    case 233u: goto L_08A43E60;
    case 234u: goto L_08A43E70;
    case 235u: goto L_08A43E90;
    case 236u: goto L_08A43E94;
    case 237u: goto L_08A43ED4;
    case 238u: goto L_08A43EDC;
    case 239u: goto L_08A43EFC;
    case 240u: goto L_08A43F04;
    case 241u: goto L_08A43F0C;
    case 242u: goto L_08A43F14;
    case 243u: goto L_08A43F1C;
    case 244u: goto L_08A43F44;
    case 245u: goto L_08A43F4C;
    case 246u: goto L_08A43F6C;
    case 247u: goto L_08A43F88;
    case 248u: goto L_08A43F8C;
    case 249u: goto L_08A43FA8;
    case 250u: goto L_08A43FAC;
    case 251u: goto L_08A43FBC;
    case 252u: goto L_08A43FD0;
    case 253u: goto L_08A43FD4;
    case 254u: goto L_08A43FE8;
    case 255u: goto L_08A43FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A43004:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[17] - aot_gpr[4]);
    aot_gpr[31] = (0x08A43018u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A43018u) goto L_08A43018;
    return;
L_08A43018:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 269u, 0x08A42F54u>(ctx, &aot_mem); return;
L_08A43020:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A43090;
      }
      goto L_08A43048;
    }
L_08A43048:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43088;
      }
      goto L_08A43050;
    }
L_08A43050:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A43094;
      }
      goto L_08A4305C;
    }
L_08A4305C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A43060;
L_08A43060:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A430B0;
      }
      goto L_08A43068;
    }
L_08A43068:
    aot_gpr[3] = (0u + 0u);
    goto L_08A4306C;
L_08A4306C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43088:
    if (aot_gpr[6] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A43060;
    }
    goto L_08A43090;
L_08A43090:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A43094;
L_08A43094:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A430B0:
    aot_gpr[31] = (0x08A430B8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x08A430B8u) goto L_08A430B8;
    return;
L_08A430B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A4306C;
      }
      goto L_08A430C0;
    }
L_08A430C0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[6] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
        goto L_08A4311C;
    }
    goto L_08A430CC;
L_08A430CC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    if (aot_gpr[17] != aot_gpr[2]) {
    aot_gpr[3] = (0u + 0u);
        goto L_08A4306C;
    }
    goto L_08A430D8;
L_08A430D8:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x08A430E4u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 264u, 0x08A42F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A430E4u) goto L_08A430E4;
    return;
L_08A430E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A4306C;
      }
      goto L_08A430EC;
    }
L_08A430EC:
    aot_gpr[31] = (0x08A430F4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 227u, 0x08A42CC8u>(ctx, &aot_mem) && ctx.pc == 0x08A430F4u) goto L_08A430F4;
    return;
L_08A430F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A4306C;
      }
      goto L_08A430FC;
    }
L_08A430FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A4310Cu);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 240u, 0x08A42D48u>(ctx, &aot_mem) && ctx.pc == 0x08A4310Cu) goto L_08A4310C;
    return;
L_08A4310C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A4306C;
      }
      goto L_08A43114;
    }
L_08A43114:
    aot_gpr[3] = (0u + 0u);
    goto L_08A4306C;
L_08A4311C:
    aot_gpr[2] = (aot_gpr[3] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4313C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43174;
      }
      goto L_08A43144;
    }
L_08A43144:
    if (aot_gpr[5] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08A43164;
    }
    goto L_08A4314C;
L_08A4314C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43174;
      }
      goto L_08A43158;
    }
L_08A43158:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A4315C;
L_08A4315C:
    // nop
    goto L_08A43020;
L_08A43164:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(201));
      if (branch_taken) {
          goto L_08A4315C;
      }
      goto L_08A4316C;
    }
L_08A4316C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43174:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4317C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A431AC;
      }
      goto L_08A431A0;
    }
L_08A431A0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A431C4;
      }
      goto L_08A431A8;
    }
L_08A431A8:
    aot_gpr[3] = (0u + 0u);
    goto L_08A431AC;
L_08A431AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A431C4:
    aot_gpr[31] = (0x08A431CCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 235u, 0x08A42D14u>(ctx, &aot_mem) && ctx.pc == 0x08A431CCu) goto L_08A431CC;
    return;
L_08A431CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A431AC;
      }
      goto L_08A431D4;
    }
L_08A431D4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_08A431AC;
      }
      goto L_08A431E4;
    }
L_08A431E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[17] - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A43234;
      }
      goto L_08A431FC;
    }
L_08A431FC:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08A43204;
L_08A43204:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[2]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A431A8;
      }
      goto L_08A43218;
    }
L_08A43218:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A43224u);
    aot_gpr[5] = (0u + 0u);
    goto L_08A4313C;
L_08A43224:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A431AC;
      }
      goto L_08A4322C;
    }
L_08A4322C:
    aot_gpr[3] = (0u + 0u);
    goto L_08A431AC;
L_08A43234:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_08A43204;
L_08A4323C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A4326C;
      }
      goto L_08A43260;
    }
L_08A43260:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A43284;
      }
      goto L_08A43268;
    }
L_08A43268:
    aot_gpr[3] = (0u + 0u);
    goto L_08A4326C;
L_08A4326C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43284:
    aot_gpr[31] = (0x08A4328Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x08A4328Cu) goto L_08A4328C;
    return;
L_08A4328C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A4326C;
      }
      goto L_08A43294;
    }
L_08A43294:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_08A4326C;
      }
      goto L_08A432A4;
    }
L_08A432A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (aot_gpr[17] - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A432F4;
      }
      goto L_08A432BC;
    }
L_08A432BC:
    aot_gpr[2] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A432C4;
L_08A432C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[17]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A43268;
      }
      goto L_08A432D8;
    }
L_08A432D8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A432E4u);
    aot_gpr[5] = (0u + 0u);
    goto L_08A4313C;
L_08A432E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A4326C;
      }
      goto L_08A432EC;
    }
L_08A432EC:
    aot_gpr[3] = (0u + 0u);
    goto L_08A4326C;
L_08A432F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A432C4;
L_08A432FC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A4335C;
      }
      goto L_08A43304;
    }
L_08A43304:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4335C;
      }
      goto L_08A4330C;
    }
L_08A4330C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[6];
    aot_gpr[7] = (0u + 0u);
      if (branch_taken) {
          goto L_08A43350;
      }
      goto L_08A4331C;
    }
L_08A4331C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[7] + 0u);
        goto L_08A43348;
    }
    goto L_08A43338;
L_08A43338:
    aot_gpr[7] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43348:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43350:
    aot_gpr[2] = (aot_gpr[7] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4335C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A433E8;
      }
      goto L_08A43384;
    }
L_08A43384:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A433E8;
      }
      goto L_08A4338C;
    }
L_08A4338C:
    aot_gpr[31] = (0x08A43394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 230u, 0x08A42CE8u>(ctx, &aot_mem) && ctx.pc == 0x08A43394u) goto L_08A43394;
    return;
L_08A43394:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A433B8;
      }
      goto L_08A4339C;
    }
L_08A4339C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A433D0;
      }
      goto L_08A433A8;
    }
L_08A433A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A433B8;
L_08A433B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A433D0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A433E8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43404:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A43488;
      }
      goto L_08A43424;
    }
L_08A43424:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_08A43488;
      }
      goto L_08A4342C;
    }
L_08A4342C:
    aot_gpr[31] = (0x08A43434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 235u, 0x08A42D14u>(ctx, &aot_mem) && ctx.pc == 0x08A43434u) goto L_08A43434;
    return;
L_08A43434:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A43458;
      }
      goto L_08A4343C;
    }
L_08A4343C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A43470;
      }
      goto L_08A43448;
    }
L_08A43448:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_08A43458;
L_08A43458:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43470:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(200));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43488:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A434A4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A434FC;
      }
      goto L_08A434AC;
    }
L_08A434AC:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_08A434F8;
      }
      goto L_08A434B4;
    }
L_08A434B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_08A434F0;
      }
      goto L_08A434C8;
    }
L_08A434C8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (aot_gpr[6] + 0u);
        goto L_08A434F0;
    }
    goto L_08A434D4;
L_08A434D4:
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (aot_gpr[6] + 0u);
        goto L_08A434F0;
    }
    goto L_08A434DC;
L_08A434DC:
    aot_gpr[6] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A434F0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A434F8:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(2));
    goto L_08A434FC;
L_08A434FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43504:
    aot_gpr[3] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A43534;
      }
      goto L_08A4351C;
    }
L_08A4351C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (0u + 0u);
        goto L_08A43538;
    }
    goto L_08A4352C;
L_08A4352C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43534:
    aot_gpr[4] = (0u + 0u);
    goto L_08A43538;
L_08A43538:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A4356C;
      }
      goto L_08A43554;
    }
L_08A43554:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_08A43570;
    }
    goto L_08A43564;
L_08A43564:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4356C:
    aot_gpr[3] = (0u + 0u);
    goto L_08A43570;
L_08A43570:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43578:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A435A4;
      }
      goto L_08A4358C;
    }
L_08A4358C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_08A435A8;
    }
    goto L_08A4359C;
L_08A4359C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A435A4:
    aot_gpr[3] = (0u + 0u);
    goto L_08A435A8;
L_08A435A8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A435B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A435C8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x08A435C8u) goto L_08A435C8;
    return;
L_08A435C8:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A435FC;
      }
      goto L_08A435DC;
    }
L_08A435DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A435FC;
      }
      goto L_08A435EC;
    }
L_08A435EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A435FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43614:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4362C;
      }
      goto L_08A4361C;
    }
L_08A4361C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (aot_gpr[6] < static_cast<std::uint32_t>(13) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A4362C;
      }
      goto L_08A43624;
    }
L_08A43624:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08A43634;
      }
      goto L_08A4362C;
    }
L_08A4362C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43634:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4364C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A436DC;
      }
      goto L_08A4365C;
    }
L_08A4365C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08A436E0;
    }
    goto L_08A43668;
L_08A43668:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08A436E0;
    }
    goto L_08A43674;
L_08A43674:
    if (aot_gpr[5] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_08A436E0;
    }
    goto L_08A4367C;
L_08A4367C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A436C8;
      }
      goto L_08A43688;
    }
L_08A43688:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A436EC;
      }
      goto L_08A43690;
    }
L_08A43690:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A43698;
L_08A43698:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-12));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A436B8u);
    aot_gpr[4] = (aot_gpr[7] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A436B8u) goto L_08A436B8;
    return;
L_08A436B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A436C8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A436F8;
      }
      goto L_08A436D0;
    }
L_08A436D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08A43698;
L_08A436DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A436E0;
L_08A436E0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A436EC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    goto L_08A43698;
L_08A436F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_08A43698;
L_08A43700:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A43750;
      }
      goto L_08A43718;
    }
L_08A43718:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A43754;
      }
      goto L_08A43724;
    }
L_08A43724:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08A43758;
    }
    goto L_08A43730;
L_08A43730:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_08A43758;
    }
    goto L_08A4373C;
L_08A4373C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A43748u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_08A4364C;
L_08A43748:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A4373C;
      }
      goto L_08A43750;
    }
L_08A43750:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08A43754;
L_08A43754:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A43758;
L_08A43758:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43764:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
      if (branch_taken) {
          goto L_08A43790;
      }
      goto L_08A43778;
    }
L_08A43778:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A43794;
      }
      goto L_08A43784;
    }
L_08A43784:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A437A0;
      }
      goto L_08A43790;
    }
L_08A43790:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A43794;
L_08A43794:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A437A0:
    aot_gpr[31] = (0x08A437A8u);
    // nop
    goto L_08A43700;
L_08A437A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A437CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A4398C;
      }
      goto L_08A43800;
    }
L_08A43800:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A43990;
    }
    goto L_08A4380C;
L_08A4380C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A43990;
    }
    goto L_08A43818;
L_08A43818:
    if (aot_gpr[6] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A43990;
    }
    goto L_08A43820;
L_08A43820:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A4398C;
      }
      goto L_08A4382C;
    }
L_08A4382C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A4391C;
      }
      goto L_08A43840;
    }
L_08A43840:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A4384Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4384Cu) goto L_08A4384C;
    return;
L_08A4384C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A43918;
      }
      goto L_08A43854;
    }
L_08A43854:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[16] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A438C4;
      }
      goto L_08A43878;
    }
L_08A43878:
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[17] = (0u + 0u);
    goto L_08A43890;
L_08A43888:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[17];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A438C4;
      }
      goto L_08A43890;
    }
L_08A43890:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A43888;
      }
      goto L_08A4389C;
    }
L_08A4389C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A43888;
      }
      goto L_08A438AC;
    }
L_08A438AC:
    aot_gpr[31] = (0x08A438B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A438B4u) goto L_08A438B4;
    return;
L_08A438B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[17];
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
      if (branch_taken) {
          goto L_08A43890;
      }
      goto L_08A438C4;
    }
L_08A438C4:
    if (aot_gpr[22] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
        goto L_08A43944;
    }
    goto L_08A438CC;
L_08A438CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[19]);
        goto L_08A43960;
    }
    goto L_08A438E8;
L_08A438E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    goto L_08A438EC;
L_08A438EC:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43918:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A4391C;
L_08A4391C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43944:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[19]);
        goto L_08A438EC;
    }
    goto L_08A4395C;
L_08A4395C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    goto L_08A43960;
L_08A43960:
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4398C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A43990;
L_08A43990:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A439B8:
    aot_gpr[6] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    goto L_08A437CC;
L_08A439C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_08A43BC0;
      }
      goto L_08A439FC;
    }
L_08A439FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A43BC4;
    }
    goto L_08A43A08;
L_08A43A08:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[6] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A43BC4;
    }
    goto L_08A43A14;
L_08A43A14:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A43BC4;
      }
      goto L_08A43A20;
    }
L_08A43A20:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43BC4;
      }
      goto L_08A43A28;
    }
L_08A43A28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08A43BC8;
    }
    goto L_08A43A34;
L_08A43A34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[5] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] - aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(12));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08A43B88;
    }
    goto L_08A43A54;
L_08A43A54:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A43A60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43A60u) goto L_08A43A60;
    return;
L_08A43A60:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A43B80;
      }
      goto L_08A43A68;
    }
L_08A43A68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[19] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[7] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    aot_gpr[18] = (aot_gpr[7] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[3] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08A43AACu);
    if (aot_gpr[3] == 0u) aot_gpr[5] = (0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A43AACu) goto L_08A43AAC;
    return;
L_08A43AAC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[2] << 3u);
      if (branch_taken) {
          goto L_08A43B04;
      }
      goto L_08A43ABC;
    }
L_08A43ABC:
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[17] = (0u + 0u);
    goto L_08A43AD0;
L_08A43AC8:
    { const bool branch_taken = aot_gpr[20] == aot_gpr[17];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A43B04;
      }
      goto L_08A43AD0;
    }
L_08A43AD0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A43AC8;
      }
      goto L_08A43ADC;
    }
L_08A43ADC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_08A43AC8;
      }
      goto L_08A43AEC;
    }
L_08A43AEC:
    aot_gpr[31] = (0x08A43AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A43AF4u) goto L_08A43AF4;
    return;
L_08A43AF4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = aot_gpr[20] != aot_gpr[17];
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[3]);
      if (branch_taken) {
          goto L_08A43AD0;
      }
      goto L_08A43B04;
    }
L_08A43B04:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[19]);
        goto L_08A43BAC;
    }
    goto L_08A43B2C;
L_08A43B2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[19]);
        goto L_08A43B40;
    }
    goto L_08A43B3C;
L_08A43B3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    goto L_08A43B40;
L_08A43B40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08A43B50u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A43B50u) goto L_08A43B50;
    return;
L_08A43B50:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[2] = (0u + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43B80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A43B88;
L_08A43B88:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43BAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[19]);
        goto L_08A43B40;
    }
    goto L_08A43BB8;
L_08A43BB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    goto L_08A43B40;
L_08A43BC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A43BC4;
L_08A43BC4:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A43BC8;
L_08A43BC8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43BEC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C1C;
      }
      goto L_08A43BF4;
    }
L_08A43BF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A43C1C;
      }
      goto L_08A43C00;
    }
L_08A43C00:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] < static_cast<std::uint32_t>(13) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A43C1C;
      }
      goto L_08A43C0C;
    }
L_08A43C0C:
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08A43C1C;
      }
      goto L_08A43C14;
    }
L_08A43C14:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43C1C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43C24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[3] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A43CB8;
      }
      goto L_08A43C48;
    }
L_08A43C48:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08A43C4C;
L_08A43C4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A43C5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A43C5Cu) goto L_08A43C5C;
    return;
L_08A43C5C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A43C4C;
      }
      goto L_08A43C6C;
    }
L_08A43C6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A43C9C;
      }
      goto L_08A43C78;
    }
L_08A43C78:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08A43C7C;
L_08A43C7C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08A43C8Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A43C8Cu) goto L_08A43C8C;
    return;
L_08A43C8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A43C7C;
      }
      goto L_08A43C9C;
    }
L_08A43C9C:
    aot_gpr[31] = (0x08A43CA4u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A43CA4u) goto L_08A43CA4;
    return;
L_08A43CA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43CB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08A43C6C;
L_08A43CC0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[2] = (0u + 0u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[3] = (aot_gpr[7] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43D34:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    aot_gpr[3] = (aot_gpr[7] - aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(108), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(104), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(84), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(92), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43DC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x08A43DE0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x08A43DE0u) goto L_08A43DE0;
    return;
L_08A43DE0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A43F04;
      }
      goto L_08A43DE8;
    }
L_08A43DE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[3]);
      if (branch_taken) {
          goto L_08A43EDC;
      }
      goto L_08A43E00;
    }
L_08A43E00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A43E90;
      }
      goto L_08A43E1C;
    }
L_08A43E1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] & 3u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[2]);
      if (branch_taken) {
          goto L_08A43E70;
      }
      goto L_08A43E5C;
    }
L_08A43E5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A43E60;
L_08A43E60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43E70:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A43E90:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    goto L_08A43E94;
L_08A43E94:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[4] & 3u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A43E60;
      }
      goto L_08A43ED4;
    }
L_08A43ED4:
    aot_gpr[2] = (aot_gpr[4] - aot_gpr[2]);
    goto L_08A43E70;
L_08A43EDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A43E1C;
      }
      goto L_08A43EFC;
    }
L_08A43EFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    goto L_08A43E94;
L_08A43F04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08A43E5C;
      }
      goto L_08A43F0C;
    }
L_08A43F0C:
    aot_gpr[31] = (0x08A43F14u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08A43F14u) goto L_08A43F14;
    return;
L_08A43F14:
    aot_gpr[3] = (0u + 0u);
    goto L_08A43E5C;
L_08A43F1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A43F44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A43F44u) goto L_08A43F44;
    return;
L_08A43F44:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 2u, 0x08A440A8u>(ctx, &aot_mem); return;
      }
      goto L_08A43F4C;
    }
L_08A43F4C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(44), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (aot_gpr[3] & 3u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 10u, 0x08A44140u>(ctx, &aot_mem); return;
      }
      goto L_08A43F6C;
    }
L_08A43F6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (aot_gpr[3] & 3u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 8u, 0x08A4410Cu>(ctx, &aot_mem); return;
      }
      goto L_08A43F88;
    }
L_08A43F88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    goto L_08A43F8C;
L_08A43F8C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[3] & 3u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 5u, 0x08A440D0u>(ctx, &aot_mem); return;
      }
      goto L_08A43FA8;
    }
L_08A43FA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A43FAC;
L_08A43FAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A43FBCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08A43DC0;
L_08A43FBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 3u, 0x08A440B0u>(ctx, &aot_mem); return;
      }
      goto L_08A43FD0;
    }
L_08A43FD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    goto L_08A43FD4;
L_08A43FD4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A43FE8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    goto L_08A43DC0;
L_08A43FE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2212u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0576_entry, 576u, 12u, 0x08A44170u>(ctx, &aot_mem); return;
      }
      goto L_08A43FFC;
    }
L_08A43FFC:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(15396));
    ctx.pc = 0x08A44000u; return;
}

void recomp_unit_0575(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0575_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_575(Runtime &runtime) {
    runtime.register_generated_unit(575u, 0x08A43000u, 4096u, &recomp_unit_0575, &recomp_unit_0575_entry);
    runtime.register_function(0x08A43004u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43018u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43020u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43048u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43050u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4305Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43060u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43068u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4306Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43088u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43090u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43094u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430B0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430B8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430C0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430CCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430D8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430E4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430ECu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430F4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A430FCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4310Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43114u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4311Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4313Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43144u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4314Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43158u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4315Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43164u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4316Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43174u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4317Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A431A0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A431A8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A431ACu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A431C4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A431CCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A431D4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A431E4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A431FCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43204u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43218u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43224u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4322Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43234u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4323Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43260u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43268u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4326Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43284u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4328Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43294u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A432A4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A432BCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A432C4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A432D8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A432E4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A432ECu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A432F4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A432FCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43304u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4330Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4331Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43338u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43348u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43350u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4335Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43364u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43384u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4338Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43394u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4339Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A433A8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A433B8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A433D0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A433E8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43404u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43424u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4342Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43434u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4343Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43448u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43458u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43470u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43488u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434A4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434ACu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434B4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434C8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434D4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434DCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434F0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434F8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A434FCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43504u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4351Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4352Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43534u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43538u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43540u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43554u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43564u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4356Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43570u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43578u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4358Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4359Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A435A4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A435A8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A435B0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A435C8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A435DCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A435ECu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A435FCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43614u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4361Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43624u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4362Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43634u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4364Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4365Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43668u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43674u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4367Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43688u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43690u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43698u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A436B8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A436C8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A436D0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A436DCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A436E0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A436ECu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A436F8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43700u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43718u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43724u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43730u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4373Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43748u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43750u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43754u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43758u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43764u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43778u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43784u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43790u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43794u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A437A0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A437A8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A437CCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43800u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4380Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43818u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43820u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4382Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43840u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4384Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43854u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43878u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43888u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43890u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4389Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A438ACu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A438B4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A438C4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A438CCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A438E8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A438ECu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43918u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4391Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43944u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4395Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43960u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A4398Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43990u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A439B8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A439C4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A439FCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43A08u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43A14u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43A20u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43A28u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43A34u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43A54u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43A60u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43A68u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43AACu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43ABCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43AC8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43AD0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43ADCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43AECu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43AF4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43B04u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43B2Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43B3Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43B40u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43B50u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43B80u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43B88u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43BACu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43BB8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43BC0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43BC4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43BC8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43BECu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43BF4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C00u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C0Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C14u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C1Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C24u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C48u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C4Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C5Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C6Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C78u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C7Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C8Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43C9Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43CA4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43CB8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43CC0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43D34u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43DC0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43DE0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43DE8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43E00u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43E1Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43E5Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43E60u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43E70u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43E90u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43E94u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43ED4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43EDCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43EFCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F04u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F0Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F14u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F1Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F44u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F4Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F6Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F88u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43F8Cu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43FA8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43FACu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43FBCu, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43FD0u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43FD4u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43FE8u, &recomp_unit_0575, "recomp_unit_0575");
    runtime.register_function(0x08A43FFCu, &recomp_unit_0575, "recomp_unit_0575");
}
} // namespace psprecomp
