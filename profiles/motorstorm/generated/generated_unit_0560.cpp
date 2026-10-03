#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0560[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7,
    8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 20, 21, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 34, 35, 0, 0, 0, 36, 0, 37,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 50, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0,
    0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78,
    0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0,
    85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 101, 0, 102,
    0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 126,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150,
    0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0,
    0, 159, 0, 0, 0, 160, 161, 0, 0, 162, 0, 0, 0, 163, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 180, 0,
    181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0,
    0, 0, 190, 0, 0, 0, 191, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 210,
    0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 227, 228, 0,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236,
};
void recomp_unit_0560_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A34000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0560[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A34000;
    case 2u: goto L_08A34020;
    case 3u: goto L_08A34060;
    case 4u: goto L_08A34090;
    case 5u: goto L_08A340C4;
    case 6u: goto L_08A340F4;
    case 7u: goto L_08A340FC;
    case 8u: goto L_08A34100;
    case 9u: goto L_08A34110;
    case 10u: goto L_08A3411C;
    case 11u: goto L_08A34130;
    case 12u: goto L_08A3413C;
    case 13u: goto L_08A34140;
    case 14u: goto L_08A34148;
    case 15u: goto L_08A34150;
    case 16u: goto L_08A34170;
    case 17u: goto L_08A34190;
    case 18u: goto L_08A34198;
    case 19u: goto L_08A341A0;
    case 20u: goto L_08A341AC;
    case 21u: goto L_08A341B0;
    case 22u: goto L_08A341B4;
    case 23u: goto L_08A341BC;
    case 24u: goto L_08A341C8;
    case 25u: goto L_08A341D0;
    case 26u: goto L_08A341D8;
    case 27u: goto L_08A341E8;
    case 28u: goto L_08A341F8;
    case 29u: goto L_08A3421C;
    case 30u: goto L_08A3422C;
    case 31u: goto L_08A3424C;
    case 32u: goto L_08A34254;
    case 33u: goto L_08A3425C;
    case 34u: goto L_08A34260;
    case 35u: goto L_08A34264;
    case 36u: goto L_08A34274;
    case 37u: goto L_08A3427C;
    case 38u: goto L_08A3428C;
    case 39u: goto L_08A34294;
    case 40u: goto L_08A342A4;
    case 41u: goto L_08A342B4;
    case 42u: goto L_08A342DC;
    case 43u: goto L_08A342EC;
    case 44u: goto L_08A34310;
    case 45u: goto L_08A3431C;
    case 46u: goto L_08A34324;
    case 47u: goto L_08A34334;
    case 48u: goto L_08A34344;
    case 49u: goto L_08A34350;
    case 50u: goto L_08A34354;
    case 51u: goto L_08A3435C;
    case 52u: goto L_08A34364;
    case 53u: goto L_08A34374;
    case 54u: goto L_08A34384;
    case 55u: goto L_08A343A8;
    case 56u: goto L_08A343B8;
    case 57u: goto L_08A343D8;
    case 58u: goto L_08A343E0;
    case 59u: goto L_08A343E8;
    case 60u: goto L_08A343F4;
    case 61u: goto L_08A34404;
    case 62u: goto L_08A34410;
    case 63u: goto L_08A3441C;
    case 64u: goto L_08A34428;
    case 65u: goto L_08A34438;
    case 66u: goto L_08A34448;
    case 67u: goto L_08A3446C;
    case 68u: goto L_08A3447C;
    case 69u: goto L_08A3449C;
    case 70u: goto L_08A344A8;
    case 71u: goto L_08A344B0;
    case 72u: goto L_08A344BC;
    case 73u: goto L_08A344CC;
    case 74u: goto L_08A344D4;
    case 75u: goto L_08A344E4;
    case 76u: goto L_08A344EC;
    case 77u: goto L_08A344F4;
    case 78u: goto L_08A344FC;
    case 79u: goto L_08A3450C;
    case 80u: goto L_08A3451C;
    case 81u: goto L_08A34540;
    case 82u: goto L_08A34550;
    case 83u: goto L_08A34570;
    case 84u: goto L_08A34578;
    case 85u: goto L_08A34580;
    case 86u: goto L_08A34588;
    case 87u: goto L_08A34598;
    case 88u: goto L_08A345A0;
    case 89u: goto L_08A345B0;
    case 90u: goto L_08A345B8;
    case 91u: goto L_08A345C8;
    case 92u: goto L_08A345D8;
    case 93u: goto L_08A345FC;
    case 94u: goto L_08A3460C;
    case 95u: goto L_08A3462C;
    case 96u: goto L_08A34634;
    case 97u: goto L_08A3463C;
    case 98u: goto L_08A34648;
    case 99u: goto L_08A34658;
    case 100u: goto L_08A34660;
    case 101u: goto L_08A34674;
    case 102u: goto L_08A3467C;
    case 103u: goto L_08A34684;
    case 104u: goto L_08A34694;
    case 105u: goto L_08A346A4;
    case 106u: goto L_08A346C8;
    case 107u: goto L_08A346D8;
    case 108u: goto L_08A346F8;
    case 109u: goto L_08A34700;
    case 110u: goto L_08A34708;
    case 111u: goto L_08A34710;
    case 112u: goto L_08A34720;
    case 113u: goto L_08A34728;
    case 114u: goto L_08A34738;
    case 115u: goto L_08A34740;
    case 116u: goto L_08A34750;
    case 117u: goto L_08A34760;
    case 118u: goto L_08A34788;
    case 119u: goto L_08A34798;
    case 120u: goto L_08A347BC;
    case 121u: goto L_08A347C4;
    case 122u: goto L_08A347CC;
    case 123u: goto L_08A347D8;
    case 124u: goto L_08A347E8;
    case 125u: goto L_08A347F4;
    case 126u: goto L_08A347FC;
    case 127u: goto L_08A3480C;
    case 128u: goto L_08A3481C;
    case 129u: goto L_08A3483C;
    case 130u: goto L_08A3484C;
    case 131u: goto L_08A34864;
    case 132u: goto L_08A3486C;
    case 133u: goto L_08A34874;
    case 134u: goto L_08A34880;
    case 135u: goto L_08A34890;
    case 136u: goto L_08A3489C;
    case 137u: goto L_08A348A8;
    case 138u: goto L_08A348C0;
    case 139u: goto L_08A348C8;
    case 140u: goto L_08A348D8;
    case 141u: goto L_08A348E8;
    case 142u: goto L_08A3490C;
    case 143u: goto L_08A3491C;
    case 144u: goto L_08A3493C;
    case 145u: goto L_08A34944;
    case 146u: goto L_08A3494C;
    case 147u: goto L_08A34954;
    case 148u: goto L_08A34964;
    case 149u: goto L_08A3496C;
    case 150u: goto L_08A3497C;
    case 151u: goto L_08A34984;
    case 152u: goto L_08A34994;
    case 153u: goto L_08A349A4;
    case 154u: goto L_08A349C0;
    case 155u: goto L_08A349D0;
    case 156u: goto L_08A349E8;
    case 157u: goto L_08A349F0;
    case 158u: goto L_08A349F8;
    case 159u: goto L_08A34A04;
    case 160u: goto L_08A34A14;
    case 161u: goto L_08A34A18;
    case 162u: goto L_08A34A24;
    case 163u: goto L_08A34A34;
    case 164u: goto L_08A34A38;
    case 165u: goto L_08A34A44;
    case 166u: goto L_08A34A58;
    case 167u: goto L_08A34A8C;
    case 168u: goto L_08A34AD8;
    case 169u: goto L_08A34AE0;
    case 170u: goto L_08A34AE8;
    case 171u: goto L_08A34B14;
    case 172u: goto L_08A34B38;
    case 173u: goto L_08A34B40;
    case 174u: goto L_08A34B48;
    case 175u: goto L_08A34B54;
    case 176u: goto L_08A34B5C;
    case 177u: goto L_08A34B64;
    case 178u: goto L_08A34B6C;
    case 179u: goto L_08A34B74;
    case 180u: goto L_08A34B78;
    case 181u: goto L_08A34B80;
    case 182u: goto L_08A34B90;
    case 183u: goto L_08A34B98;
    case 184u: goto L_08A34BA0;
    case 185u: goto L_08A34BC4;
    case 186u: goto L_08A34BD0;
    case 187u: goto L_08A34BE0;
    case 188u: goto L_08A34BF0;
    case 189u: goto L_08A34BF8;
    case 190u: goto L_08A34C08;
    case 191u: goto L_08A34C18;
    case 192u: goto L_08A34C1C;
    case 193u: goto L_08A34C30;
    case 194u: goto L_08A34C58;
    case 195u: goto L_08A34C90;
    case 196u: goto L_08A34CA0;
    case 197u: goto L_08A34CB0;
    case 198u: goto L_08A34CCC;
    case 199u: goto L_08A34D00;
    case 200u: goto L_08A34D04;
    case 201u: goto L_08A34D30;
    case 202u: goto L_08A34D40;
    case 203u: goto L_08A34D4C;
    case 204u: goto L_08A34D5C;
    case 205u: goto L_08A34D88;
    case 206u: goto L_08A34DB4;
    case 207u: goto L_08A34E40;
    case 208u: goto L_08A34E58;
    case 209u: goto L_08A34E70;
    case 210u: goto L_08A34E7C;
    case 211u: goto L_08A34E88;
    case 212u: goto L_08A34E94;
    case 213u: goto L_08A34EA0;
    case 214u: goto L_08A34EB0;
    case 215u: goto L_08A34EC0;
    case 216u: goto L_08A34ED0;
    case 217u: goto L_08A34EEC;
    case 218u: goto L_08A34EFC;
    case 219u: goto L_08A34F14;
    case 220u: goto L_08A34F1C;
    case 221u: goto L_08A34F24;
    case 222u: goto L_08A34F34;
    case 223u: goto L_08A34F44;
    case 224u: goto L_08A34F50;
    case 225u: goto L_08A34F58;
    case 226u: goto L_08A34F64;
    case 227u: goto L_08A34F74;
    case 228u: goto L_08A34F78;
    case 229u: goto L_08A34F94;
    case 230u: goto L_08A34FA4;
    case 231u: goto L_08A34FAC;
    case 232u: goto L_08A34FC4;
    case 233u: goto L_08A34FD0;
    case 234u: goto L_08A34FDC;
    case 235u: goto L_08A34FE8;
    case 236u: goto L_08A34FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A34000:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(440)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A34020u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 145u, 0x08A3EBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A34020u) goto L_08A34020;
    return;
L_08A34020:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7124)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7120)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(444)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(440)));
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A34060u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 75u, 0x08A3E668u>(ctx, &aot_mem) && ctx.pc == 0x08A34060u) goto L_08A34060;
    return;
L_08A34060:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[19] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(444), aot_gpr[19]);
        (void)rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 236u, 0x08A33FE4u>(ctx, &aot_mem); return;
    }
    goto L_08A34090;
L_08A34090:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7124)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7120)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
      if (branch_taken) {
          goto L_08A340FC;
      }
      goto L_08A340C4;
    }
L_08A340C4:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (aot_gpr[12] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (aot_gpr[19] & aot_gpr[15]);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[1] = (aot_gpr[19] << 28u);
    aot_gpr[18] = (aot_gpr[18] >> 4u);
    aot_gpr[19] = (aot_gpr[19] >> 4u);
    aot_gpr[18] = (aot_gpr[1] | aot_gpr[18]);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[6];
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A340C4;
      }
      goto L_08A340F4;
    }
L_08A340F4:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[7];
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A340C4;
      }
      goto L_08A340FC;
    }
L_08A340FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    goto L_08A34100;
L_08A34100:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(356));
      if (branch_taken) {
          goto L_08A3413C;
      }
      goto L_08A34110;
    }
L_08A34110:
    aot_gpr[4] = (aot_gpr[21] & 512u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[5] - aot_gpr[23]);
      if (branch_taken) {
          goto L_08A34140;
      }
      goto L_08A3411C;
    }
L_08A3411C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A34130u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    goto L_08A34A8C;
L_08A34130:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A34170;
      }
      goto L_08A3413C;
    }
L_08A3413C:
    aot_gpr[9] = (aot_gpr[5] - aot_gpr[23]);
    goto L_08A34140;
L_08A34140:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[9]);
      if (branch_taken) {
          goto L_08A34170;
      }
      goto L_08A34148;
    }
L_08A34148:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A34A34;
      }
      goto L_08A34150;
    }
L_08A34150:
    aot_gpr[9] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[16]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[21] & 132u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[5]);
    goto L_08A34170;
L_08A34170:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[7] = (aot_gpr[9] | 0u);
        goto L_08A34190;
    }
    goto L_08A34190;
L_08A34190:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A341A0;
      }
      goto L_08A34198;
    }
L_08A34198:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A341B0;
      }
      goto L_08A341A0;
    }
L_08A341A0:
    aot_gpr[4] = (aot_gpr[21] & 2u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
        goto L_08A341B4;
    }
    goto L_08A341AC;
L_08A341AC:
    aot_gpr[19] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    goto L_08A341B0;
L_08A341B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    goto L_08A341B4;
L_08A341B4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A34354;
      }
      goto L_08A341BC;
    }
L_08A341BC:
    aot_gpr[18] = (aot_gpr[30] - aot_gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A34350;
      }
      goto L_08A341C8;
    }
L_08A341C8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3428C;
      }
      goto L_08A341D0;
    }
L_08A341D0:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A3424C;
    }
    goto L_08A341D8;
L_08A341D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3421C;
      }
      goto L_08A341E8;
    }
L_08A341E8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[31] = (0x08A341F8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A341F8u) goto L_08A341F8;
    return;
L_08A341F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A3427C;
      }
      goto L_08A3421C;
    }
L_08A3421C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3422Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3422Cu) goto L_08A3422C;
    return;
L_08A3422C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A3427C;
      }
      goto L_08A3424C;
    }
L_08A3424C:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34264;
    }
    goto L_08A34254;
L_08A34254:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A34260;
      }
      goto L_08A3425C;
    }
L_08A3425C:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08A34260;
L_08A34260:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08A34264;
L_08A34264:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A34274u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34274u) goto L_08A34274;
    return;
L_08A34274:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A3427C;
L_08A3427C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A341D0;
      }
      goto L_08A3428C;
    }
L_08A3428C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
      if (branch_taken) {
          goto L_08A34310;
      }
      goto L_08A34294;
    }
L_08A34294:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A342DC;
      }
      goto L_08A342A4;
    }
L_08A342A4:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08A342B4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A342B4u) goto L_08A342B4;
    return;
L_08A342B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A34350;
      }
      goto L_08A342DC;
    }
L_08A342DC:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A342ECu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A342ECu) goto L_08A342EC;
    return;
L_08A342EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A34350;
      }
      goto L_08A34310;
    }
L_08A34310:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34334;
      }
      goto L_08A3431C;
    }
L_08A3431C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34334;
      }
      goto L_08A34324;
    }
L_08A34324:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A34334;
L_08A34334:
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A34344u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34344u) goto L_08A34344;
    return;
L_08A34344:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A34350;
L_08A34350:
    aot_gpr[18] = (0u | 1u);
    goto L_08A34354;
L_08A34354:
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(356));
      if (branch_taken) {
          goto L_08A34410;
      }
      goto L_08A3435C;
    }
L_08A3435C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A343D8;
    }
    goto L_08A34364;
L_08A34364:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A343A8;
      }
      goto L_08A34374;
    }
L_08A34374:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A34384u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A34384u) goto L_08A34384;
    return;
L_08A34384:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A344D4;
      }
      goto L_08A343A8;
    }
L_08A343A8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A343B8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A343B8u) goto L_08A343B8;
    return;
L_08A343B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A344D4;
      }
      goto L_08A343D8;
    }
L_08A343D8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A343F4;
      }
      goto L_08A343E0;
    }
L_08A343E0:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A343F4;
      }
      goto L_08A343E8;
    }
L_08A343E8:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A343F4;
L_08A343F4:
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08A34404u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34404u) goto L_08A34404;
    return;
L_08A34404:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A344D4;
      }
      goto L_08A34410;
    }
L_08A34410:
    aot_gpr[4] = (aot_gpr[21] & 2u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08A344D4;
      }
      goto L_08A3441C;
    }
L_08A3441C:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(356), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(357), static_cast<std::uint8_t>(aot_gpr[16]));
      if (branch_taken) {
          goto L_08A3449C;
      }
      goto L_08A34428;
    }
L_08A34428:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3446C;
      }
      goto L_08A34438;
    }
L_08A34438:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08A34448u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A34448u) goto L_08A34448;
    return;
L_08A34448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A344D4;
      }
      goto L_08A3446C;
    }
L_08A3446C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3447Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3447Cu) goto L_08A3447C;
    return;
L_08A3447C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A344D4;
      }
      goto L_08A3449C;
    }
L_08A3449C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A344BC;
      }
      goto L_08A344A8;
    }
L_08A344A8:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A344BC;
      }
      goto L_08A344B0;
    }
L_08A344B0:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A344BC;
L_08A344BC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(356));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[31] = (0x08A344CCu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A344CCu) goto L_08A344CC;
    return;
L_08A344CC:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A344D4;
L_08A344D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[7] = (0u | 128u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    aot_gpr[16] = (aot_gpr[30] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A34660;
      }
      goto L_08A344E4;
    }
L_08A344E4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A34660;
      }
      goto L_08A344EC;
    }
L_08A344EC:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A345B0;
      }
      goto L_08A344F4;
    }
L_08A344F4:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34570;
    }
    goto L_08A344FC;
L_08A344FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A34540;
      }
      goto L_08A3450C;
    }
L_08A3450C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A3451Cu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3451Cu) goto L_08A3451C;
    return;
L_08A3451C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A345A0;
      }
      goto L_08A34540;
    }
L_08A34540:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A34550u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A34550u) goto L_08A34550;
    return;
L_08A34550:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A345A0;
      }
      goto L_08A34570;
    }
L_08A34570:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34588;
    }
    goto L_08A34578;
L_08A34578:
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34588;
    }
    goto L_08A34580;
L_08A34580:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08A34588;
L_08A34588:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A34598u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34598u) goto L_08A34598;
    return;
L_08A34598:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A345A0;
L_08A345A0:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A344F4;
      }
      goto L_08A345B0;
    }
L_08A345B0:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A3462C;
    }
    goto L_08A345B8;
L_08A345B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A345FC;
      }
      goto L_08A345C8;
    }
L_08A345C8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A345D8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A345D8u) goto L_08A345D8;
    return;
L_08A345D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A34660;
      }
      goto L_08A345FC;
    }
L_08A345FC:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3460Cu);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3460Cu) goto L_08A3460C;
    return;
L_08A3460C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A34660;
      }
      goto L_08A3462C;
    }
L_08A3462C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34648;
      }
      goto L_08A34634;
    }
L_08A34634:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34648;
      }
      goto L_08A3463C;
    }
L_08A3463C:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A34648;
L_08A34648:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A34658u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34658u) goto L_08A34658;
    return;
L_08A34658:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A34660;
L_08A34660:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A347F4;
      }
      goto L_08A34674;
    }
L_08A34674:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34738;
      }
      goto L_08A3467C;
    }
L_08A3467C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A346F8;
    }
    goto L_08A34684;
L_08A34684:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A346C8;
      }
      goto L_08A34694;
    }
L_08A34694:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A346A4u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A346A4u) goto L_08A346A4;
    return;
L_08A346A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A34728;
      }
      goto L_08A346C8;
    }
L_08A346C8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A346D8u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A346D8u) goto L_08A346D8;
    return;
L_08A346D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A34728;
      }
      goto L_08A346F8;
    }
L_08A346F8:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34710;
    }
    goto L_08A34700;
L_08A34700:
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34710;
    }
    goto L_08A34708;
L_08A34708:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08A34710;
L_08A34710:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A34720u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34720u) goto L_08A34720;
    return;
L_08A34720:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A34728;
L_08A34728:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3467C;
      }
      goto L_08A34738;
    }
L_08A34738:
    if (aot_gpr[5] == 0u) {
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A347BC;
    }
    goto L_08A34740;
L_08A34740:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A34788;
      }
      goto L_08A34750;
    }
L_08A34750:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A34760u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A34760u) goto L_08A34760;
    return;
L_08A34760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A347F4;
      }
      goto L_08A34788;
    }
L_08A34788:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A34798u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A34798u) goto L_08A34798;
    return;
L_08A34798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A347F4;
      }
      goto L_08A347BC;
    }
L_08A347BC:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A347D8;
      }
      goto L_08A347C4;
    }
L_08A347C4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A347D8;
      }
      goto L_08A347CC;
    }
L_08A347CC:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08A347D8;
L_08A347D8:
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A347E8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A347E8u) goto L_08A347E8;
    return;
L_08A347E8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A347F4;
L_08A347F4:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34864;
    }
    goto L_08A347FC;
L_08A347FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3483C;
      }
      goto L_08A3480C;
    }
L_08A3480C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A3481Cu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3481Cu) goto L_08A3481C;
    return;
L_08A3481C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A34890;
      }
      goto L_08A3483C;
    }
L_08A3483C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3484Cu);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3484Cu) goto L_08A3484C;
    return;
L_08A3484C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A34890;
      }
      goto L_08A34864;
    }
L_08A34864:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34880;
      }
      goto L_08A3486C;
    }
L_08A3486C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34880;
      }
      goto L_08A34874;
    }
L_08A34874:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A34880;
L_08A34880:
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A34890u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34890u) goto L_08A34890;
    return;
L_08A34890:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A34A18;
      }
      goto L_08A3489C;
    }
L_08A3489C:
    aot_gpr[16] = (aot_gpr[30] - aot_gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[5] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A34A18;
      }
      goto L_08A348A8;
    }
L_08A348A8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[6] & 512u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3497C;
      }
      goto L_08A348C0;
    }
L_08A348C0:
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A3493C;
    }
    goto L_08A348C8;
L_08A348C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3490C;
      }
      goto L_08A348D8;
    }
L_08A348D8:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A348E8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A348E8u) goto L_08A348E8;
    return;
L_08A348E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A3496C;
      }
      goto L_08A3490C;
    }
L_08A3490C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3491Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3491Cu) goto L_08A3491C;
    return;
L_08A3491C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] & 512u);
      if (branch_taken) {
          goto L_08A3496C;
      }
      goto L_08A3493C;
    }
L_08A3493C:
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34954;
    }
    goto L_08A34944;
L_08A34944:
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34954;
    }
    goto L_08A3494C;
L_08A3494C:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08A34954;
L_08A34954:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 16u);
    aot_gpr[31] = (0x08A34964u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34964u) goto L_08A34964;
    return;
L_08A34964:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[6] & 512u);
    goto L_08A3496C;
L_08A3496C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A348C0;
      }
      goto L_08A3497C;
    }
L_08A3497C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A349E8;
    }
    goto L_08A34984;
L_08A34984:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A349C0;
      }
      goto L_08A34994;
    }
L_08A34994:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A349A4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A349A4u) goto L_08A349A4;
    return;
L_08A349A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[16]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A34A14;
      }
      goto L_08A349C0;
    }
L_08A349C0:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A349D0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A349D0u) goto L_08A349D0;
    return;
L_08A349D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A34A14;
      }
      goto L_08A349E8;
    }
L_08A349E8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34A04;
      }
      goto L_08A349F0;
    }
L_08A349F0:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34A04;
      }
      goto L_08A349F8;
    }
L_08A349F8:
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[21]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A34A04;
L_08A34A04:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A34A14u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34A14u) goto L_08A34A14;
    return;
L_08A34A14:
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A34A18;
L_08A34A18:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[30]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (aot_gpr[30] | 0u);
        goto L_08A34A24;
    }
    goto L_08A34A24;
L_08A34A24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 62u, 0x08A334A4u>(ctx, &aot_mem); return;
      }
      goto L_08A34A34;
    }
L_08A34A34:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    goto L_08A34A38;
L_08A34A38:
    aot_gpr[4] = (aot_gpr[4] & 512u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34A58;
      }
      goto L_08A34A44;
    }
L_08A34A44:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A34A58u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0559_entry, 559u, 32u, 0x08A331C8u>(ctx, &aot_mem) && ctx.pc == 0x08A34A58u) goto L_08A34A58;
    return;
L_08A34A58:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(456)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(460)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(464)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(468)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(472)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(476)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(480)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(484)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(488)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(492)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(496));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A34A8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(15));
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] & aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[29]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A34B14;
      }
      goto L_08A34AD8;
    }
L_08A34AD8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34B14;
      }
      goto L_08A34AE0;
    }
L_08A34AE0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34B14;
      }
      goto L_08A34AE8;
    }
L_08A34AE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[13] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[11] = (0u | 2u);
    aot_gpr[2] = (0u | 101u);
    aot_gpr[3] = (0u | 69u);
    aot_gpr[12] = (0u | 46u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[14] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A34B38;
      }
      goto L_08A34B14;
    }
L_08A34B14:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[29] = (aot_gpr[30] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A34B38:
    if (aot_gpr[10] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[9]);
        goto L_08A34B80;
    }
    goto L_08A34B40;
L_08A34B40:
    if (aot_gpr[9] == aot_gpr[11]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(0), aot_gpr[9]);
        goto L_08A34B80;
    }
    goto L_08A34B48;
L_08A34B48:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[10] == aot_gpr[2]) {
    aot_gpr[9] = (aot_gpr[11] | 0u);
        goto L_08A34B74;
    }
    goto L_08A34B54;
L_08A34B54:
    if (aot_gpr[10] == aot_gpr[3]) {
    aot_gpr[9] = (aot_gpr[11] | 0u);
        goto L_08A34B74;
    }
    goto L_08A34B5C;
L_08A34B5C:
    if (aot_gpr[10] != aot_gpr[12]) {
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
        goto L_08A34B78;
    }
    goto L_08A34B64;
L_08A34B64:
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[14] = (aot_gpr[13] | 0u);
      if (branch_taken) {
          goto L_08A34B74;
      }
      goto L_08A34B6C;
    }
L_08A34B6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08A34B74;
      }
      goto L_08A34B74;
    }
L_08A34B74:
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08A34B78;
L_08A34B78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (aot_gpr[6] < aot_gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A34B38;
      }
      goto L_08A34B80;
    }
L_08A34B80:
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), aot_gpr[14]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == aot_gpr[11];
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A34BA0;
      }
      goto L_08A34B90;
    }
L_08A34B90:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A34BC4;
      }
      goto L_08A34B98;
    }
L_08A34B98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08A34C1C;
      }
      goto L_08A34BA0;
    }
L_08A34BA0:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[29] = (aot_gpr[30] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A34BC4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (0u | 3u);
    aot_gpr[2] = (0u | 44u);
    goto L_08A34BD0;
L_08A34BD0:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A34C08;
      }
      goto L_08A34BE0;
    }
L_08A34BE0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[9] = (ctx.hi);
    if (aot_gpr[9] != 0u) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08A34C08;
    }
    goto L_08A34BF0;
L_08A34BF0:
    if (aot_gpr[8] == 0u) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08A34C08;
    }
    goto L_08A34BF8;
L_08A34BF8:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A34C08;
L_08A34C08:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A34BD0;
      }
      goto L_08A34C18;
    }
L_08A34C18:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-10));
    goto L_08A34C1C;
L_08A34C1C:
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08A34C30u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A34C30u) goto L_08A34C30;
    return;
L_08A34C30:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[29] = (aot_gpr[30] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A34C58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A34CB0;
      }
      goto L_08A34C90;
    }
L_08A34C90:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2218u << 16u);
      if (branch_taken) {
          goto L_08A34D5C;
      }
      goto L_08A34CA0;
    }
L_08A34CA0:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-26628));
    aot_gpr[20] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A34D00;
      }
      goto L_08A34CB0;
    }
L_08A34CB0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-26628));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-17488)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A34CCCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 168u, 0x08911BB4u>(ctx, &aot_mem) && ctx.pc == 0x08A34CCCu) goto L_08A34CCC;
    return;
L_08A34CCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17488), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17484), aot_gpr[17]);
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
L_08A34D00:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    goto L_08A34D04;
L_08A34D04:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-17484)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-17484)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-17488)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-17484), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-17488), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A34D4C;
      }
      goto L_08A34D30;
    }
L_08A34D30:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A34D40u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 168u, 0x08911BB4u>(ctx, &aot_mem) && ctx.pc == 0x08A34D40u) goto L_08A34D40;
    return;
L_08A34D40:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-17484), aot_gpr[22]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-17488), 0u);
      if (branch_taken) {
          goto L_08A34D88;
      }
      goto L_08A34D4C;
    }
L_08A34D4C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
      if (branch_taken) {
          goto L_08A34D04;
      }
      goto L_08A34D5C;
    }
L_08A34D5C:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A34D88:
    aot_gpr[2] = (0u | 0u);
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
L_08A34DB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(7648));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7664));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7700));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7680));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(7708));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7728));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(164), aot_gpr[31]);
    goto L_08A34E40;
L_08A34E40:
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (0u | 37u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[30] = (2216u << 16u);
    goto L_08A34E58;
L_08A34E58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-17480)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A34E70u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 119u, 0x08A3963Cu>(ctx, &aot_mem) && ctx.pc == 0x08A34E70u) goto L_08A34E70;
    return;
L_08A34E70:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[16]) <= 0) {
    aot_gpr[18] = (aot_gpr[17] - aot_gpr[19]);
        goto L_08A34E94;
    }
    goto L_08A34E7C;
L_08A34E7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
      if (branch_taken) {
          goto L_08A34E58;
      }
      goto L_08A34E88;
    }
L_08A34E88:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[17] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A34E94;
      }
      goto L_08A34E94;
    }
L_08A34E94:
    aot_gpr[7] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34F50;
      }
      goto L_08A34EA0;
    }
L_08A34EA0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[6] & 512u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A34F14;
    }
    goto L_08A34EB0;
L_08A34EB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A34EEC;
      }
      goto L_08A34EC0;
    }
L_08A34EC0:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A34ED0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A34ED0u) goto L_08A34ED0;
    return;
L_08A34ED0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A34F44;
      }
      goto L_08A34EEC;
    }
L_08A34EEC:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A34EFCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A34EFCu) goto L_08A34EFC;
    return;
L_08A34EFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A34F44;
      }
      goto L_08A34F14;
    }
L_08A34F14:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34F34;
      }
      goto L_08A34F1C;
    }
L_08A34F1C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A34F34;
      }
      goto L_08A34F24;
    }
L_08A34F24:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A34F34;
L_08A34F34:
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A34F44u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A34C58;
L_08A34F44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    goto L_08A34F50;
L_08A34F50:
    if (static_cast<std::int32_t>(aot_gpr[16]) <= 0) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 41u, 0x08A36248u>(ctx, &aot_mem); return;
    }
    goto L_08A34F58;
L_08A34F58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A34F78;
      }
      goto L_08A34F64;
    }
L_08A34F64:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 41u, 0x08A36248u>(ctx, &aot_mem); return;
    }
    goto L_08A34F74;
L_08A34F74:
    aot_gpr[4] = (0u | 0u);
    goto L_08A34F78;
L_08A34F78:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[30] = (0u | 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A34F94;
L_08A34F94:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (aot_gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08A34FA4;
L_08A34FA4:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0561_entry, 561u, 128u, 0x08A35968u>(ctx, &aot_mem); return;
      }
      goto L_08A34FAC;
    }
L_08A34FAC:
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[7]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(7800)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A34FC4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A34F94;
      }
      goto L_08A34FD0;
    }
L_08A34FD0:
    aot_gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08A34F94;
      }
      goto L_08A34FDC;
    }
L_08A34FDC:
    aot_gpr[21] = (aot_gpr[21] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A34F94;
      }
      goto L_08A34FE8;
    }
L_08A34FE8:
    aot_gpr[21] = (aot_gpr[21] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A34F94;
      }
      goto L_08A34FF4;
    }
L_08A34FF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08A35000u; return;
}

void recomp_unit_0560(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0560_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_560(Runtime &runtime) {
    runtime.register_generated_unit(560u, 0x08A34000u, 4096u, &recomp_unit_0560, &recomp_unit_0560_entry);
    runtime.register_function(0x08A34000u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34020u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34060u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34090u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A340C4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A340F4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A340FCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34100u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34110u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3411Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34130u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3413Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34140u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34148u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34150u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34170u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34190u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34198u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341A0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341ACu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341B0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341B4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341BCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341C8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341D0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341D8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341E8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A341F8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3421Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3422Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3424Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34254u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3425Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34260u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34264u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34274u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3427Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3428Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34294u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A342A4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A342B4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A342DCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A342ECu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34310u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3431Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34324u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34334u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34344u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34350u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34354u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3435Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34364u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34374u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34384u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A343A8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A343B8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A343D8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A343E0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A343E8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A343F4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34404u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34410u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3441Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34428u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34438u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34448u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3446Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3447Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3449Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344A8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344B0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344BCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344CCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344D4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344E4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344ECu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344F4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A344FCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3450Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3451Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34540u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34550u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34570u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34578u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34580u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34588u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34598u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A345A0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A345B0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A345B8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A345C8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A345D8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A345FCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3460Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3462Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34634u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3463Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34648u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34658u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34660u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34674u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3467Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34684u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34694u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A346A4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A346C8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A346D8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A346F8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34700u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34708u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34710u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34720u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34728u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34738u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34740u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34750u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34760u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34788u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34798u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A347BCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A347C4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A347CCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A347D8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A347E8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A347F4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A347FCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3480Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3481Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3483Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3484Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34864u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3486Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34874u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34880u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34890u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3489Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A348A8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A348C0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A348C8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A348D8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A348E8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3490Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3491Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3493Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34944u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3494Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34954u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34964u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3496Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A3497Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34984u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34994u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A349A4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A349C0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A349D0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A349E8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A349F0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A349F8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A04u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A14u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A18u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A24u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A34u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A38u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A44u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A58u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34A8Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34AD8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34AE0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34AE8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B14u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B38u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B40u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B48u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B54u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B5Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B64u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B6Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B74u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B78u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B80u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B90u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34B98u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34BA0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34BC4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34BD0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34BE0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34BF0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34BF8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34C08u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34C18u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34C1Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34C30u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34C58u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34C90u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34CA0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34CB0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34CCCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34D00u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34D04u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34D30u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34D40u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34D4Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34D5Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34D88u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34DB4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34E40u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34E58u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34E70u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34E7Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34E88u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34E94u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34EA0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34EB0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34EC0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34ED0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34EECu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34EFCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F14u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F1Cu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F24u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F34u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F44u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F50u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F58u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F64u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F74u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F78u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34F94u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34FA4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34FACu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34FC4u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34FD0u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34FDCu, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34FE8u, &recomp_unit_0560, "recomp_unit_0560");
    runtime.register_function(0x08A34FF4u, &recomp_unit_0560, "recomp_unit_0560");
}
} // namespace psprecomp
